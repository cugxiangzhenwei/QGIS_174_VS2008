/***************************************************************************
                          qgsmaplayer.cpp  -  description
                             -------------------
    begin                : Fri Jun 28 2002
    copyright            : (C) 2002 by Gary E.Sherman
    email                : sherman at mrcc.com
***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/* $Id$ */


#include <QDateTime>
#include <QDomNode>
#include <QFileInfo>
#include <QSettings> // TODO: get rid of it [MD]
#include <QDir>
#include <QFile>
#include <QDomDocument>
#include <QDomElement>
#include <QDomImplementation>
#include <QTextStream>
#include <QUrl>

#include <sqlite3.h>

#include "qgslogger.h"
#include "qgsrectangle.h"
#include "qgssymbol.h"
#include "qgsmaplayer.h"
#include "qgscoordinatereferencesystem.h"
#include "qgsapplication.h"
#include "qgsproject.h"
#include "qgsdatasourceuri.h"
#include "qgsvectorlayer.h"

QgsMapLayer::QgsMapLayer( QgsMapLayer::LayerType type,
                          QString lyrname,
                          QString source ) :
    mTransparencyLevel( 255 ), // 0 is completely transparent
    mValid( false ), // assume the layer is invalid
    mDataSource( source ),
    mID( "" ),
    mLayerType( type )

{
  QgsDebugMsg( "lyrname is '" + lyrname + "'" );

  mCRS = new QgsCoordinateReferenceSystem();

  // Set the display name = internal name
  mLayerName = capitaliseLayerName( lyrname );
  QgsDebugMsg( "layerName is '" + mLayerName + "'" );

  // Generate the unique ID of this layer
  QDateTime dt = QDateTime::currentDateTime();
  mID = lyrname + dt.toString( "yyyyMMddhhmmsszzz" );
  // Tidy the ID up to avoid characters that may cause problems
  // elsewhere (e.g in some parts of XML). Replaces every non-word
  // character (word characters are the alphabet, numbers and
  // underscore) with an underscore.
  // Note that the first backslashe in the regular expression is
  // there for the compiler, so the pattern is actually \W
  mID.replace( QRegExp( "[\\W]" ), "_" );

  //set some generous  defaults for scale based visibility
  mMinScale = 0;
  mMaxScale = 100000000;
  mScaleBasedVisibility = false;
  mpCacheImage = 0;

  //add by liminlu0314@163.com
  cachedImage = NULL;
  cachedImage2Swip = NULL;
  mIsSwiping = false;

  cachedViewWidth = 0;
  cachedViewHeight = 0;

  mRedraw = false;
  mReTransparent = false;
  mReBrightness = false;

  mBrightnessLevel = 0;
  mGammaLevel = 1;
  mContrastLevel= 100;
}

QgsMapLayer::~QgsMapLayer()
{
  delete mCRS;
  if ( mpCacheImage )
  {
    delete mpCacheImage;
  }

  //add by liminlu0314@163.com
  if ( cachedImage )
	  delete cachedImage;

  if ( cachedImage2Swip )
  {
	  delete cachedImage2Swip;
	  cachedImage2Swip = NULL;
  }
}

QgsMapLayer::LayerType QgsMapLayer::type() const
{
  return mLayerType;
}

/** Get this layer's unique ID */
QString QgsMapLayer::id() const
{
  return mID;
}

/** Write property of QString layerName. */
void QgsMapLayer::setLayerName( const QString & name )
{
  QgsDebugMsg( "new name is '" + name + "'" );
  mLayerName = capitaliseLayerName( name );
  emit layerNameChanged();
}

/** Read property of QString layerName. */
QString const & QgsMapLayer::name() const
{
  QgsDebugMsgLevel( "returning name '" + mLayerName + "'", 3 );
  return mLayerName;
}

QString QgsMapLayer::publicSource() const
{
  // Redo this every time we're asked for it, as we don't know if
  // dataSource has changed.
  QString safeName = QgsDataSourceURI::removePassword( mDataSource );
  return safeName;
}

QString const & QgsMapLayer::source() const
{
  return mDataSource;
}

QgsRectangle QgsMapLayer::extent() const
{
  return mLayerExtent;
}

bool QgsMapLayer::draw( QgsRenderContext& rendererContext )
{
  return false;
}

void QgsMapLayer::drawLabels( QgsRenderContext& rendererContext )
{
  // QgsDebugMsg("entered.");
}

bool QgsMapLayer::readXML( QDomNode & layer_node )
{
  QgsCoordinateReferenceSystem savedCRS;
  CUSTOM_CRS_VALIDATION savedValidation;
  bool layerError;

  QDomElement element = layer_node.toElement();

  QDomNode mnl;
  QDomElement mne;

  // read provider
  QString provider;
  mnl = layer_node.namedItem( "provider" );
  mne = mnl.toElement();
  provider = mne.text();

  // set data source
  mnl = layer_node.namedItem( "datasource" );
  mne = mnl.toElement();
  mDataSource = mne.text();

  if ( provider == "spatialite" )
  {
    QgsDataSourceURI uri( mDataSource );
    uri.setDatabase( QgsProject::instance()->readPath( uri.database() ) );
    mDataSource = uri.uri();
  }
  else if ( provider == "ogr" )
  {
    QStringList theURIParts = mDataSource.split( "|" );
    theURIParts[0] = QgsProject::instance()->readPath( theURIParts[0] );
    mDataSource = theURIParts.join( "|" );
  }
  else if ( provider == "delimitedtext" )
  {
    QUrl urlSource = QUrl::fromEncoded( mDataSource.toAscii() );

    if ( !mDataSource.startsWith( "file:" ) )
    {
      QUrl file = QUrl::fromLocalFile( mDataSource.left( mDataSource.indexOf( "?" ) ) );
      urlSource.setScheme( "file" );
      urlSource.setPath( file.path() );
    }

    QUrl urlDest = QUrl::fromLocalFile( QgsProject::instance()->readPath( urlSource.toLocalFile() ) );
    urlDest.setQueryItems( urlSource.queryItems() );
    mDataSource = QString::fromAscii( urlDest.toEncoded() );
  }
  else
  {
    mDataSource = QgsProject::instance()->readPath( mDataSource );
  }

  // Set the CRS from project file, asking the user if necessary.
  // Make it the saved CRS to have WMS layer projected correctly.
  // We will still overwrite whatever GDAL etc picks up anyway
  // further down this function.
  mnl = layer_node.namedItem( "layername" );
  mne = mnl.toElement();

  QDomNode srsNode = layer_node.namedItem( "srs" );
  mCRS->readXML( srsNode );
  mCRS->setValidationHint( tr( "Specify CRS for layer %1" ).arg( mne.text() ) );
  mCRS->validate();
  savedCRS = *mCRS;

  // Do not validate any projections in children, they will be overwritten anyway.
  // No need to ask the user for a projections when it is overwritten, is there?
  savedValidation = QgsCoordinateReferenceSystem::customSrsValidation();
  QgsCoordinateReferenceSystem::setCustomSrsValidation( NULL );

  // now let the children grab what they need from the Dom node.
  layerError = !readXml( layer_node );

  // overwrite CRS with what we read from project file before the raster/vector
  // file readnig functions changed it. They will if projections is specfied in the file.
  // FIXME: is this necessary?
  QgsCoordinateReferenceSystem::setCustomSrsValidation( savedValidation );
  *mCRS = savedCRS;

  // Abort if any error in layer, such as not found.
  if ( layerError )
  {
    return false;
  }

  // the internal name is just the data source basename
  //QFileInfo dataSourceFileInfo( mDataSource );
  //internalName = dataSourceFileInfo.baseName();

  // set ID
  mnl = layer_node.namedItem( "id" );
  if ( ! mnl.isNull() )
  {
    mne = mnl.toElement();
    if ( ! mne.isNull() && mne.text().length() > 10 ) // should be at least 17 (yyyyMMddhhmmsszzz)
    {
      mID = mne.text();
    }
  }

  // use scale dependent visibility flag
  toggleScaleBasedVisibility( element.attribute( "hasScaleBasedVisibilityFlag" ).toInt() == 1 );
  setMinimumScale( element.attribute( "minimumScale" ).toFloat() );
  setMaximumScale( element.attribute( "maximumScale" ).toFloat() );

  // set name
  mnl = layer_node.namedItem( "layername" );
  mne = mnl.toElement();
  setLayerName( mne.text() );

  //read transparency level
  QDomNode transparencyNode = layer_node.namedItem( "transparencyLevelInt" );
  if ( ! transparencyNode.isNull() )
  {
    // set transparency level only if it's in project
    // (otherwise it sets the layer transparent)
    QDomElement myElement = transparencyNode.toElement();
    setTransparency( myElement.text().toInt() );
  }

  readCustomProperties( layer_node );

  return true;
} // void QgsMapLayer::readXML


bool QgsMapLayer::readXml( QDomNode & layer_node )
{
  // NOP by default; children will over-ride with behavior specific to them

  return true;
} // void QgsMapLayer::readXml



bool QgsMapLayer::writeXML( QDomNode & layer_node, QDomDocument & document )
{
  // general layer metadata
  QDomElement maplayer = document.createElement( "maplayer" );

  // use scale dependent visibility flag
  maplayer.setAttribute( "hasScaleBasedVisibilityFlag", hasScaleBasedVisibility() ? 1 : 0 );
  maplayer.setAttribute( "minimumScale", minimumScale() );
  maplayer.setAttribute( "maximumScale", maximumScale() );

  // ID
  QDomElement layerId = document.createElement( "id" );
  QDomText layerIdText = document.createTextNode( id() );
  layerId.appendChild( layerIdText );

  maplayer.appendChild( layerId );

  // data source
  QDomElement dataSource = document.createElement( "datasource" );

  QString src = source();

  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( this );
  if ( vlayer && vlayer->providerType() == "spatialite" )
  {
    QgsDataSourceURI uri( src );
    QString database = QgsProject::instance()->writePath( uri.database() );
    uri.setConnection( uri.host(), uri.port(), database, uri.username(), uri.password() );
    src = uri.uri();
  }
  else if ( vlayer && vlayer->providerType() == "ogr" )
  {
    QStringList theURIParts = src.split( "|" );
    theURIParts[0] = QgsProject::instance()->writePath( theURIParts[0] );
    src = theURIParts.join( "|" );
  }
  else if ( vlayer && vlayer->providerType() == "delimitedtext" )
  {
    QUrl urlSource = QUrl::fromEncoded( src.toAscii() );
    QUrl urlDest = QUrl::fromLocalFile( QgsProject::instance()->writePath( urlSource.toLocalFile() ) );
    urlDest.setQueryItems( urlSource.queryItems() );
    src = QString::fromAscii( urlDest.toEncoded() );
  }
  else
  {
    src = QgsProject::instance()->writePath( src );
  }

  QDomText dataSourceText = document.createTextNode( src );
  dataSource.appendChild( dataSourceText );

  maplayer.appendChild( dataSource );


  // layer name
  QDomElement layerName = document.createElement( "layername" );
  QDomText layerNameText = document.createTextNode( name() );
  layerName.appendChild( layerNameText );

  maplayer.appendChild( layerName );

  // timestamp if supported
  if ( timestamp() > QDateTime() )
  {
    QDomElement stamp = document.createElement( "timestamp" );
    QDomText stampText = document.createTextNode( timestamp().toString( Qt::ISODate ) );
    stamp.appendChild( stampText );
    maplayer.appendChild( stamp );
  }

  maplayer.appendChild( layerName );

  // zorder
  // This is no longer stored in the project file. It is superfluous since the layers
  // are written and read in the proper order.

  // spatial reference system id
  QDomElement mySrsElement = document.createElement( "srs" );
  mCRS->writeXML( mySrsElement, document );
  maplayer.appendChild( mySrsElement );

  // <transparencyLevelInt>
  QDomElement transparencyLevelIntElement = document.createElement( "transparencyLevelInt" );
  QDomText    transparencyLevelIntText    = document.createTextNode( QString::number( getTransparency() ) );
  transparencyLevelIntElement.appendChild( transparencyLevelIntText );
  maplayer.appendChild( transparencyLevelIntElement );
  // now append layer node to map layer node

  layer_node.appendChild( maplayer );

  writeCustomProperties( maplayer, document );

  return writeXml( maplayer, document );

} // bool QgsMapLayer::writeXML



bool QgsMapLayer::writeXml( QDomNode & layer_node, QDomDocument & document )
{
  // NOP by default; children will over-ride with behavior specific to them

  return true;
} // void QgsMapLayer::writeXml




bool QgsMapLayer::isValid()
{
  return mValid;
}


void QgsMapLayer::invalidTransformInput()
{
  QgsDebugMsg( "called" );
  // TODO: emit a signal - it will be used to update legend
}


QString QgsMapLayer::lastErrorTitle()
{
  return QString();
}

QString QgsMapLayer::lastError()
{
  return QString();
}

void QgsMapLayer::connectNotify( const char * signal )
{
  QgsDebugMsgLevel( "QgsMapLayer connected to " + QString( signal ), 3 );
} //  QgsMapLayer::connectNotify



void QgsMapLayer::toggleScaleBasedVisibility( bool theVisibilityFlag )
{
  mScaleBasedVisibility = theVisibilityFlag;
}

bool QgsMapLayer::hasScaleBasedVisibility()
{
  return mScaleBasedVisibility;
}

void QgsMapLayer::setMinimumScale( float theMinScale )
{
  mMinScale = theMinScale;
  mRedraw = true;
}

float QgsMapLayer::minimumScale()
{
  return mMinScale;
}


void QgsMapLayer::setMaximumScale( float theMaxScale )
{
  mMaxScale = theMaxScale;
  mRedraw = true;
}

float QgsMapLayer::maximumScale()
{
  return mMaxScale;
}


QStringList QgsMapLayer::subLayers()
{
  return QStringList();  // Empty
}

void QgsMapLayer::setLayerOrder( QStringList layers )
{
  // NOOP
}

void QgsMapLayer::setSubLayerVisibility( QString name, bool vis )
{
  // NOOP
}

const QgsCoordinateReferenceSystem& QgsMapLayer::crs()
{
  return *mCRS;
}

const QgsCoordinateReferenceSystem& QgsMapLayer::srs()
{
  // This will be dropped in QGIS 2.0 due to conflicting name
  // Please use crs() in the future
  return *mCRS;
}

void QgsMapLayer::setCrs( const QgsCoordinateReferenceSystem& srs, bool emitSignal )
{
  mRedraw = true;

  *mCRS = srs;
  if ( emitSignal )
    emit layerCrsChanged();
}

unsigned int QgsMapLayer::getTransparency()
{
  return mTransparencyLevel;
}

void QgsMapLayer::setTransparency( unsigned int theInt )
{
  mTransparencyLevel = theInt;

  mRedraw = true;
  mReTransparent = true;
}

QString QgsMapLayer::capitaliseLayerName( const QString name )
{
  // Capitalise the first letter of the layer name if requested
  QSettings settings;
  bool capitaliseLayerName =
    settings.value( "qgis/capitaliseLayerName", QVariant( false ) ).toBool();

  QString layerName( name );

  if ( capitaliseLayerName )
    layerName = layerName.left( 1 ).toUpper() + layerName.mid( 1 );

  return layerName;
}

QString QgsMapLayer::loadDefaultStyle( bool & theResultFlag )
{
  QString myURI = publicSource();
  QFileInfo myFileInfo( myURI );
  QString key;
  if ( myFileInfo.exists() )
  {
    // get the file name for our .qml style file
    key = myFileInfo.path() + QDir::separator() + myFileInfo.completeBaseName() + ".qml";
  }
  else
  {
    key = myURI;
  }
  return loadNamedStyle( key, theResultFlag );
}

bool QgsMapLayer::loadNamedStyleFromDb( const QString db, const QString theURI, QString &qml )
{
  bool theResultFlag = false;

  // read from database
  sqlite3 *myDatabase;
  sqlite3_stmt *myPreparedStatement;
  const char *myTail;
  int myResult;

  QgsDebugMsg( QString( "Trying to load style for \"%1\" from \"%2\"" ).arg( theURI ).arg( db ) );

  if ( !QFile( db ).exists() )
    return false;

  myResult = sqlite3_open( db.toUtf8().data(), &myDatabase );
  if ( myResult != SQLITE_OK )
  {
    return false;
  }

  QString mySql = "select qml from tbl_styles where style=?";
  myResult = sqlite3_prepare( myDatabase, mySql.toUtf8().data(), mySql.toUtf8().length(), &myPreparedStatement, &myTail );
  if ( myResult == SQLITE_OK )
  {
    QByteArray param = theURI.toUtf8();

    if ( sqlite3_bind_text( myPreparedStatement, 1, param.data(), param.length(), SQLITE_STATIC ) == SQLITE_OK &&
         sqlite3_step( myPreparedStatement ) == SQLITE_ROW )
    {
      qml = QString::fromUtf8(( char * )sqlite3_column_text( myPreparedStatement, 0 ) );
      theResultFlag = true;
    }

    sqlite3_finalize( myPreparedStatement );
  }

  sqlite3_close( myDatabase );

  return theResultFlag;
}

QString QgsMapLayer::loadNamedStyle( const QString theURI, bool &theResultFlag )
{
  theResultFlag = false;

  QDomDocument myDocument( "qgis" );

  // location of problem associated with errorMsg
  int line, column;
  QString myErrorMessage;

  QFile myFile( theURI );
  if ( myFile.open( QFile::ReadOnly ) )
  {
    // read file
    theResultFlag = myDocument.setContent( &myFile, &myErrorMessage, &line, &column );
    if ( !theResultFlag )
      myErrorMessage = tr( "%1 at line %2 column %3" ).arg( myErrorMessage ).arg( line ).arg( column );
    myFile.close();
  }
  else
  {
    QFileInfo project( QgsProject::instance()->fileName() );
    QgsDebugMsg( QString( "project fileName: %1" ).arg( project.absoluteFilePath() ) );

    QString qml;
    if ( loadNamedStyleFromDb( QDir( QgsApplication::qgisSettingsDirPath() ).absoluteFilePath( "qgis.qmldb" ), theURI, qml ) ||
         ( project.exists() && loadNamedStyleFromDb( project.absoluteDir().absoluteFilePath( project.baseName() + ".qmldb" ), theURI, qml ) ) ||
         loadNamedStyleFromDb( QDir( QgsApplication::pkgDataPath() ).absoluteFilePath( "resources/qgis.qmldb" ), theURI, qml ) )
    {
      theResultFlag = myDocument.setContent( qml, &myErrorMessage, &line, &column );
      if ( !theResultFlag )
      {
        myErrorMessage = tr( "%1 at line %2 column %3" ).arg( myErrorMessage ).arg( line ).arg( column );
      }
    }
    else
    {
      myErrorMessage = tr( "style not found in database" );
    }
  }

  if ( !theResultFlag )
  {
    return myErrorMessage;
  }

  // now get the layer node out and pass it over to the layer
  // to deserialise...
  QDomElement myRoot = myDocument.firstChildElement( "qgis" );
  if ( myRoot.isNull() )
  {
    myErrorMessage = tr( "Error: qgis element could not be found in %1" ).arg( theURI );
    theResultFlag = false;
    return myErrorMessage;
  }

  // use scale dependent visibility flag
  toggleScaleBasedVisibility( myRoot.attribute( "hasScaleBasedVisibilityFlag" ).toInt() == 1 );
  setMinimumScale( myRoot.attribute( "minimumScale" ).toFloat() );
  setMaximumScale( myRoot.attribute( "maximumScale" ).toFloat() );

  //read transparency level
  QDomNode transparencyNode = myRoot.namedItem( "transparencyLevelInt" );
  if ( ! transparencyNode.isNull() )
  {
    // set transparency level only if it's in project
    // (otherwise it sets the layer transparent)
    QDomElement myElement = transparencyNode.toElement();
    setTransparency( myElement.text().toInt() );
  }

  QString errorMsg;
  theResultFlag = readSymbology( myRoot, errorMsg );
  if ( !theResultFlag )
  {
    myErrorMessage = tr( "Loading style file %1 failed because:\n%2" ).arg( theURI ).arg( errorMsg );
    return myErrorMessage;
  }

  return "";
}

QString QgsMapLayer::saveDefaultStyle( bool & theResultFlag )
{
  return saveNamedStyle( publicSource(), theResultFlag );
}

QString QgsMapLayer::saveNamedStyle( const QString theURI, bool & theResultFlag )
{
  QString myErrorMessage;

  QDomImplementation DomImplementation;
  QDomDocumentType documentType =
    DomImplementation.createDocumentType(
      "qgis", "http://mrcc.com/qgis.dtd", "SYSTEM" );
  QDomDocument myDocument( documentType );
  QDomElement myRootNode = myDocument.createElement( "qgis" );
  myRootNode.setAttribute( "version", QString( "%1" ).arg( QGis::QGIS_VERSION ) );
  myDocument.appendChild( myRootNode );

  // use scale dependent visibility flag
  myRootNode.setAttribute( "hasScaleBasedVisibilityFlag", hasScaleBasedVisibility() ? 1 : 0 );
  myRootNode.setAttribute( "minimumScale", minimumScale() );
  myRootNode.setAttribute( "maximumScale", maximumScale() );

  // <transparencyLevelInt>
  QDomElement transparencyLevelIntElement = myDocument.createElement( "transparencyLevelInt" );
  QDomText    transparencyLevelIntText    = myDocument.createTextNode( QString::number( getTransparency() ) );
  transparencyLevelIntElement.appendChild( transparencyLevelIntText );
  myRootNode.appendChild( transparencyLevelIntElement );
  // now append layer node to map layer node

  QString errorMsg;
  if ( !writeSymbology( myRootNode, myDocument, errorMsg ) )
  {
    return tr( "Could not save symbology because:\n%1" ).arg( errorMsg );
  }

  // check if the uri is a file or ends with .qml,
  // which indicates that it should become one
  // everything else goes to the database
  QString filename;

  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( this );
  if ( vlayer && vlayer->providerType() == "ogr" )
  {
    QStringList theURIParts = theURI.split( "|" );
    filename = theURIParts[0];
  }
  else if ( vlayer && vlayer->providerType() == "delimitedtext" )
  {
    filename = QUrl::fromEncoded( theURI.toAscii() ).toLocalFile();
  }
  else
  {
    filename = theURI;
  }

  QFileInfo myFileInfo( filename );
  if ( myFileInfo.exists() || filename.endsWith( ".qml", Qt::CaseInsensitive ) )
  {
    QFileInfo myDirInfo( myFileInfo.path() );  //excludes file name
    if ( !myDirInfo.isWritable() )
    {
      return tr( "The directory containing your dataset needs to be writeable!" );
    }

    // now construct the file name for our .qml style file
    QString myFileName = myFileInfo.path() + QDir::separator() + myFileInfo.completeBaseName() + ".qml";

    QFile myFile( myFileName );
    if ( myFile.open( QFile::WriteOnly | QFile::Truncate ) )
    {
      QTextStream myFileStream( &myFile );
      // save as utf-8 with 2 spaces for indents
      myDocument.save( myFileStream, 2 );
      myFile.close();
      theResultFlag = true;
      return tr( "Created default style file as %1" ).arg( myFileName );
    }
    else
    {
      theResultFlag = false;
      return tr( "ERROR: Failed to created default style file as %1. Check file permissions and retry." ).arg( myFileName );
    }
  }
  else
  {
    QString qml = myDocument.toString();

    // read from database
    sqlite3 *myDatabase;
    sqlite3_stmt *myPreparedStatement;
    const char *myTail;
    int myResult;

    myResult = sqlite3_open( QDir( QgsApplication::qgisSettingsDirPath() ).absoluteFilePath( "qgis.qmldb" ).toUtf8().data(), &myDatabase );
    if ( myResult != SQLITE_OK )
    {
      return tr( "User database could not be opened." );
    }

    QByteArray param0 = theURI.toUtf8();
    QByteArray param1 = qml.toUtf8();

    QString mySql = "create table if not exists tbl_styles(style varchar primary key,qml varchar)";
    myResult = sqlite3_prepare( myDatabase, mySql.toUtf8().data(), mySql.toUtf8().length(), &myPreparedStatement, &myTail );
    if ( myResult == SQLITE_OK )
    {
      if ( sqlite3_step( myPreparedStatement ) != SQLITE_DONE )
      {
        sqlite3_finalize( myPreparedStatement );
        sqlite3_close( myDatabase );
        theResultFlag = false;
        return tr( "The style table could not be created." );
      }
    }

    sqlite3_finalize( myPreparedStatement );

    mySql = "insert into tbl_styles(style,qml) values (?,?)";
    myResult = sqlite3_prepare( myDatabase, mySql.toUtf8().data(), mySql.toUtf8().length(), &myPreparedStatement, &myTail );
    if ( myResult == SQLITE_OK )
    {
      if ( sqlite3_bind_text( myPreparedStatement, 1, param0.data(), param0.length(), SQLITE_STATIC ) == SQLITE_OK &&
           sqlite3_bind_text( myPreparedStatement, 2, param1.data(), param1.length(), SQLITE_STATIC ) == SQLITE_OK &&
           sqlite3_step( myPreparedStatement ) == SQLITE_DONE )
      {
        theResultFlag = true;
        myErrorMessage = tr( "The style %1 was saved to database" ).arg( theURI );
      }
    }

    sqlite3_finalize( myPreparedStatement );

    if ( !theResultFlag )
    {
      QString mySql = "update tbl_styles set qml=? where style=?";
      myResult = sqlite3_prepare( myDatabase, mySql.toUtf8().data(), mySql.toUtf8().length(), &myPreparedStatement, &myTail );
      if ( myResult == SQLITE_OK )
      {
        if ( sqlite3_bind_text( myPreparedStatement, 2, param0.data(), param0.length(), SQLITE_STATIC ) == SQLITE_OK &&
             sqlite3_bind_text( myPreparedStatement, 1, param1.data(), param1.length(), SQLITE_STATIC ) == SQLITE_OK &&
             sqlite3_step( myPreparedStatement ) == SQLITE_DONE )
        {
          theResultFlag = true;
          myErrorMessage = tr( "The style %1 was updated in the database." ).arg( theURI );
        }
        else
        {
          theResultFlag = false;
          myErrorMessage = tr( "The style %1 could not be updated in the database." ).arg( theURI );
        }
      }
      else
      {
        theResultFlag = false;
        myErrorMessage = tr( "The style %1 could not be inserted into database." ).arg( theURI );
      }

      sqlite3_finalize( myPreparedStatement );
    }

    sqlite3_close( myDatabase );
  }

  return myErrorMessage;
}




QUndoStack* QgsMapLayer::undoStack()
{
  return &mUndoStack;
}


void QgsMapLayer::setCustomProperty( const QString& key, const QVariant& value )
{
  mCustomProperties[key] = value;
}

QVariant QgsMapLayer::customProperty( const QString& value, const QVariant& defaultValue ) const
{
  return mCustomProperties.value( value, defaultValue );
}

void QgsMapLayer::removeCustomProperty( const QString& key )
{
  mCustomProperties.remove( key );
}

void QgsMapLayer::readCustomProperties( const QDomNode& layerNode, const QString& keyStartsWith )
{
  QDomNode propsNode = layerNode.namedItem( "customproperties" );
  if ( propsNode.isNull() ) // no properties stored...
    return;

  if ( !keyStartsWith.isEmpty() )
  {
    //remove old keys
    QStringList keysToRemove;
    QMap<QString, QVariant>::const_iterator pIt = mCustomProperties.constBegin();
    for ( ; pIt != mCustomProperties.constEnd(); ++pIt )
    {
      if ( pIt.key().startsWith( keyStartsWith ) )
      {
        keysToRemove.push_back( pIt.key() );
      }
    }

    QStringList::const_iterator sIt = keysToRemove.constBegin();
    for ( ; sIt != keysToRemove.constEnd(); ++sIt )
    {
      mCustomProperties.remove( *sIt );
    }
  }
  else
  {
    mCustomProperties.clear();
  }

  QDomNodeList nodes = propsNode.childNodes();

  for ( int i = 0; i < nodes.size(); i++ )
  {
    QDomNode propNode = nodes.at( i );
    if ( propNode.isNull() || propNode.nodeName() != "property" )
      continue;
    QDomElement propElement = propNode.toElement();

    QString key = propElement.attribute( "key" );
    if ( key.isEmpty() || key.startsWith( keyStartsWith ) )
    {
      QString value = propElement.attribute( "value" );
      mCustomProperties[key] = QVariant( value );
    }
  }

}

void QgsMapLayer::writeCustomProperties( QDomNode & layerNode, QDomDocument & doc ) const
{
  //remove already existing <customproperties> tags
  QDomNodeList propertyList = layerNode.toElement().elementsByTagName( "customproperties" );
  for ( int i = 0; i < propertyList.size(); ++i )
  {
    layerNode.removeChild( propertyList.at( i ) );
  }

  QDomElement propsElement = doc.createElement( "customproperties" );

  for ( QMap<QString, QVariant>::const_iterator it = mCustomProperties.constBegin(); it != mCustomProperties.constEnd(); ++it )
  {
    QDomElement propElement = doc.createElement( "property" );
    propElement.setAttribute( "key", it.key() );
    propElement.setAttribute( "value", it.value().toString() );
    propsElement.appendChild( propElement );
  }

  layerNode.appendChild( propsElement );
}

void QgsMapLayer::setCacheImage( QImage * thepImage )
{
  QgsDebugMsg( "cache Image set!" );
  if ( mpCacheImage == thepImage )
    return;

  if ( mpCacheImage )
  {
    delete mpCacheImage;
  }
  mpCacheImage = thepImage;
}

bool QgsMapLayer::isEditable() const
{
  return false;
}

void QgsMapLayer::setValid( bool valid )
{
  mValid = valid;
}

void QgsMapLayer::clearCacheImage()
{
  setCacheImage( 0 );
}

//add by liminlu0314@163.com
unsigned int QgsMapLayer::getBrightness()
{
	return mBrightnessLevel;
}

void QgsMapLayer::setBrightness( unsigned int theInt )
{
	mBrightnessLevel = theInt; 

	if(mBrightnessLevel > 100) 
		mBrightnessLevel = 100;

	if(mBrightnessLevel < -100) 
		mBrightnessLevel = -100;

	mReBrightness = true;
}

unsigned int QgsMapLayer::getContrast()
{
	return mContrastLevel;
}

void QgsMapLayer::setContrast( unsigned int theInt )
{
	mContrastLevel = theInt; 

	if(mContrastLevel > 200)
		mContrastLevel = 200;

	if(mContrastLevel < 0)
		mContrastLevel = 0;
}

unsigned int QgsMapLayer::getGamma()
{
	return mGammaLevel;
}

void QgsMapLayer::setGamma( unsigned int theInt )
{
	mGammaLevel = theInt; 

	if(mGammaLevel > 100) 
		mGammaLevel = 100;

	if(mGammaLevel < 0)
		mGammaLevel = 0;
}

//���þ���״̬
void QgsMapLayer::setIsSwipe(bool isSwipe)
{
	mIsSwiping = isSwipe;

	if ( cachedImage2Swip != NULL )
	{
		delete cachedImage2Swip;
		cachedImage2Swip = NULL;
	}
}

//���þ�����ʾ����
void QgsMapLayer::setSwipeShowArea(QRect rectshow)
{
	mShowSwipeRect = rectshow;
}