# Install script for directory: E:/QGIS/qgis-1.7.4/src/core

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/qgis1.7.4")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/QGIS/Build174/src/core/Debug/qgis_core.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/QGIS/Build174/src/core/Release/qgis_core.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/QGIS/Build174/src/core/MinSizeRel/qgis_core.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/QGIS/Build174/src/core/RelWithDebInfo/qgis_core.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/QGIS/Build174/src/core/Debug/qgis_core.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/QGIS/Build174/src/core/Release/qgis_core.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/QGIS/Build174/src/core/MinSizeRel/qgis_core.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/QGIS/Build174/src/core/RelWithDebInfo/qgis_core.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  MESSAGE("Installing CORE headers...")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "E:/QGIS/qgis-1.7.4/src/core/qgis.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsapplication.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsattributeaction.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgscentralpointpositionmanager.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsclipper.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgscontexthelp.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgscoordinatetransform.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsdatasourceuri.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsdistancearea.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgscsexception.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsexception.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsfeature.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsfield.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsgeometry.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgshttptransaction.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgslabel.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgslabelattributes.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgslogger.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsmaplayer.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsmaplayerregistry.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsmaprenderer.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsmaptopixel.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsmessageoutput.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgscredentials.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsoverlayobjectpositionmanager.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgspallabeling.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgspalobjectpositionmanager.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgspluginlayer.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgspluginlayerregistry.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgspoint.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsproject.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsprojectfiletransform.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsprojectproperty.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsprojectversion.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsprovidercountcalcevent.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsproviderextentcalcevent.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsprovidermetadata.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsproviderregistry.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsrasterprojector.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsrasterdataprovider.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsrectangle.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsrendercontext.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsrunprocess.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsscalecalculator.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgssearchstring.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgssearchtreenode.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgssnapper.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgscoordinatereferencesystem.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsvectordataprovider.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsvectorfilewriter.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsvectorlayer.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsvectoroverlay.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgstolerance.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgslegendmodel.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgscomposerlegenditem.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgscliptominmaxenhancement.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgscolorrampshader.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgscolorrampshader.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgscontrastenhancement.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgscontrastenhancementfunction.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgsfreakoutshader.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgslinearminmaxenhancement.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgslinearminmaxenhancementwithclip.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgspseudocolorshader.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgsrasterpyramid.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgsrasterbandstats.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgsrasterlayer.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgsrastertransparency.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgsrastershader.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgsrastershaderfunction.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgsrasterviewport.h"
    "E:/QGIS/qgis-1.7.4/src/core/renderer/qgscontinuouscolorrenderer.h"
    "E:/QGIS/qgis-1.7.4/src/core/renderer/qgsgraduatedsymbolrenderer.h"
    "E:/QGIS/qgis-1.7.4/src/core/renderer/qgsrenderer.h"
    "E:/QGIS/qgis-1.7.4/src/core/renderer/qgssinglesymbolrenderer.h"
    "E:/QGIS/qgis-1.7.4/src/core/renderer/qgsuniquevaluerenderer.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology/qgsmarkercatalogue.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology/qgssymbol.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology/qgssymbologyutils.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgscategorizedsymbolrendererv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgscolorbrewerpalette.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgsfillsymbollayerv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgsgraduatedsymbolrendererv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgslinesymbollayerv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgsmarkersymbollayerv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgsrendererv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgsrendererv2registry.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgssinglesymbolrendererv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgsstylev2.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgssymbollayerv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgssymbollayerv2registry.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgssymbollayerv2utils.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgssymbologyv2conversion.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgssymbolv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology-ng/qgsvectorcolorrampv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsdiagramrendererv2.h"
    "E:/QGIS/qgis-1.7.4/src/core/spatialindex/qgsspatialindex.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsapplication.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgscontexthelp.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgscoordinatetransform.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsdataprovider.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgshttptransaction.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsmaplayer.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsmaplayerregistry.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsmaprenderer.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsmessageoutput.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgscredentials.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgspluginlayer.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsproject.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsrunprocess.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsvectorlayer.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsrasterdataprovider.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsnetworkaccessmanager.h"
    "E:/QGIS/qgis-1.7.4/src/core/qgsvectordataprovider.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgsaddremoveitemcommand.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgscomposerlegend.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgscomposermap.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgscomposerpicture.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgscomposerscalebar.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgscomposeritem.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgscomposeritemgroup.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgscomposershape.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgscomposerattributetable.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgscomposition.h"
    "E:/QGIS/qgis-1.7.4/src/core/composer/qgslegendmodel.h"
    "E:/QGIS/qgis-1.7.4/src/core/symbology/qgsmarkercatalogue.h"
    "E:/QGIS/qgis-1.7.4/src/core/raster/qgsrasterlayer.h"
    "E:/QGIS/qgis-1.7.4/src/core/gps/qgsgpsconnection.h"
    "E:/QGIS/qgis-1.7.4/src/core/gps/qgsgpsdetector.h"
    "E:/QGIS/qgis-1.7.4/src/core/gps/qgsnmeaconnection.h"
    "E:/QGIS/qgis-1.7.4/src/core/gps/qgsgpsdconnection.h"
    "E:/QGIS/qgis-1.7.4/src/core/gps/qextserialport/qextserialport.h"
    "E:/QGIS/qgis-1.7.4/src/core/gps/qextserialport/qextserialenumerator.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

