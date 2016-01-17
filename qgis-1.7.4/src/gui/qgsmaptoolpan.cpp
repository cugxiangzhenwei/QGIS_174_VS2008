/***************************************************************************
    qgsmaptoolpan.h  -  map tool for panning in map canvas
    ---------------------
    begin                : January 2006
    copyright            : (C) 2006 by Martin Dobias
    email                : wonder.sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/* $Id$ */

#include "qgsmaptoolpan.h"
#include "qgsmapcanvas.h"
#include "qgscursors.h"
#include "qgsmaptopixel.h"
#include <QBitmap>
#include <QCursor>
#include <QMouseEvent>


QgsMapToolPan::QgsMapToolPan( QgsMapCanvas* canvas )
    : QgsMapTool( canvas ), mDragging( false )
{
  // set cursor
  QBitmap panBmp = QBitmap::fromData( QSize( 16, 16 ), pan_bits );
  QBitmap panBmpMask = QBitmap::fromData( QSize( 16, 16 ), pan_mask_bits );
  mCursor = QCursor( panBmp, panBmpMask, 5, 5 );
}


void QgsMapToolPan::canvasMoveEvent( QMouseEvent * e )
{
  if (( e->buttons() & Qt::LeftButton ) )
  {
    mDragging = true;
    // move map and other canvas items
    mCanvas->panAction( e );
  }
}

void QgsMapToolPan::canvasReleaseEvent( QMouseEvent * e )
{
  if ( e->button() == Qt::LeftButton )
  {
    if ( mDragging )
    {
      mCanvas->panActionEnd( e->pos() );
      mDragging = false;
    }
    else // add pan to mouse cursor
    {
      // transform the mouse pos to map coordinates
      QgsPoint center = mCanvas->getCoordinateTransform()->toMapPoint( e->x(), e->y() );
      mCanvas->setExtent( QgsRectangle( center, center ) );
      mCanvas->refresh();
    }
  }
}

//add by liminlu0314@163.com
//////////////////////////////////swipe////////////////////////////////////////

QgsMapToolSwipe::QgsMapToolSwipe( QgsMapCanvas* canvas )
: QgsMapTool( canvas )
,mSwipeMode( QgsMapCanvas::SwipeMode::SwipeNone)
, mSwiping( false )
{
	// set cursor
	QPixmap swipBmp = QPixmap(( const char ** )( zoom_swipel ) );
	mCursor = QCursor( swipBmp,  7, 7 );
}


void QgsMapToolSwipe::canvasMoveEvent( QMouseEvent * e )
{
	//鼠标没有按键时，动态更改状态
	if (( e->buttons() == Qt::MouseButton::NoButton ) )
	{
		int iWidth = mCanvas->width();
		int iHeight = mCanvas->height();

		QPoint curPoint = e->pos();

		if (curPoint.x() < iWidth/4)
		{
			QPixmap swipBmp = QPixmap(( const char ** )( zoom_swipel ) );
			mCursor = QCursor( swipBmp,  7, 7 );
			mSwipeMode = QgsMapCanvas::SwipeMode::SwipeLeft;
		}
		else if (curPoint.x() > iWidth/4*3)
		{
			QPixmap swipBmp = QPixmap(( const char ** )( zoom_swiper ) );
			mCursor = QCursor( swipBmp,  7, 7 );
			mSwipeMode = QgsMapCanvas::SwipeMode::SwipeRight;

		}
		else if (curPoint.y() < iHeight/4)
		{
			QPixmap swipBmp = QPixmap(( const char ** )( zoom_swipet ) );
			mCursor = QCursor( swipBmp,  7, 7 );
			mSwipeMode = QgsMapCanvas::SwipeMode::SwipeTop;
		}
		else if (curPoint.y() > iHeight/4*3)
		{
			QPixmap swipBmp = QPixmap(( const char ** )( zoom_swipeb ) );
			mCursor = QCursor( swipBmp,  7, 7 );
			mSwipeMode = QgsMapCanvas::SwipeMode::SwipeBottom;
		}

		mCanvas->setCursor(mCursor);
	}


	if (( e->buttons() & Qt::LeftButton ) )
	{
		mSwiping = true;
		mCanvas->setSwipeMode(mSwipeMode);
		// move map and other canvas items
		mCanvas->swipeAction( e );
		mCanvas->refresh();

	}
}

void QgsMapToolSwipe::canvasReleaseEvent( QMouseEvent * e )
{
	if ( e->button() == Qt::LeftButton )
	{
		if ( mSwiping )
		{
			mCanvas->swipeActionEnd( );
			mSwiping = false;
		}		
	}
}


QgsMapToolNone::QgsMapToolNone( QgsMapCanvas* canvas )
: QgsMapTool( canvas )
{
	// set cursor
	mCursor = QCursor(Qt::ArrowCursor);
}


void QgsMapToolNone::canvasMoveEvent( QMouseEvent * e )
{
}

void QgsMapToolNone::canvasReleaseEvent( QMouseEvent * e )
{
}
