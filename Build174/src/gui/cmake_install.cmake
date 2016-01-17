# Install script for directory: E:/QGIS/qgis-1.7.4/src/gui

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/QGIS/Build174/src/gui/Debug/qgis_gui.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/QGIS/Build174/src/gui/Release/qgis_gui.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/QGIS/Build174/src/gui/MinSizeRel/qgis_gui.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/QGIS/Build174/src/gui/RelWithDebInfo/qgis_gui.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/QGIS/Build174/src/gui/Debug/qgis_gui.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/QGIS/Build174/src/gui/Release/qgis_gui.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/QGIS/Build174/src/gui/MinSizeRel/qgis_gui.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/QGIS/Build174/src/gui/RelWithDebInfo/qgis_gui.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  MESSAGE("Installing GUI headers...")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "E:/QGIS/qgis-1.7.4/src/gui/qgisgui.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgisinterface.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgscolorbutton.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgscursors.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsencodingfiledialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsfiledropedit.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsgenericprojectionselector.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmapcanvas.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmapcanvasitem.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmapcanvasmap.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmapcanvassnapper.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmapoverviewcanvas.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmaptool.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmaptoolemitpoint.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmaptoolpan.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmaptoolzoom.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmessageviewer.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgscredentialdialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsprojectionselector.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsrubberband.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsvertexmarker.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmaptip.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgssearchquerybuilder.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsattributeeditor.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsfieldvalidator.h"
    "E:/QGIS/Build174/src/gui/../ui/ui_qgsdetaileditemwidgetbase.h"
    "E:/QGIS/Build174/src/gui/../ui/ui_qgsgenericprojectionselectorbase.h"
    "E:/QGIS/Build174/src/gui/../ui/ui_qgsmessageviewer.h"
    "E:/QGIS/Build174/src/gui/../ui/ui_qgscredentialdialog.h"
    "E:/QGIS/Build174/src/gui/../ui/ui_qgsprojectionselectorbase.h"
    "E:/QGIS/Build174/src/gui/../ui/ui_qgsquerybuilderbase.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsdashspacedialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgssymbollayerv2widget.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgssymbolv2propertiesdialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgssinglesymbolrendererv2widget.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgscategorizedsymbolrendererv2widget.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsgraduatedsymbolrendererv2widget.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsrulebasedrendererv2widget.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsrendererv2widget.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsrendererv2propertiesdialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsstylev2managerdialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgssymbollevelsv2dialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgssymbolv2selectordialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsvectorgradientcolorrampv2dialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsvectorrandomcolorrampv2dialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsvectorcolorbrewercolorrampv2dialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgscolorrampcombobox.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/characterwidget.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgspenstylecombobox.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsbrushstylecombobox.h"
    "E:/QGIS/qgis-1.7.4/src/gui/symbology-ng/qgsstylev2exportimportdialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsattributeeditor.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgscomposerview.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsdetaileditemdelegate.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsdetaileditemwidget.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgslegendinterface.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgisinterface.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsencodingfiledialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsfieldvalidator.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsformannotationitem.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsgenericprojectionselector.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmapcanvas.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmapoverviewcanvas.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmaptoolemitpoint.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsmessageviewer.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgscredentialdialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsprojectionselector.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsquickprint.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsludialog.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgsprojectbadlayerguihandler.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgslonglongvalidator.h"
    "E:/QGIS/qgis-1.7.4/src/gui/qgssearchquerybuilder.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

