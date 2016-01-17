# Install script for directory: E:/QGIS/qgis-1.7.4/src/plugins

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "E:/QGIS/qgis-1.7.4/src/plugins/qgisplugin.h"
    "E:/QGIS/qgis-1.7.4/src/plugins/qgsrendererplugin.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("E:/QGIS/Build174/src/plugins/copyright_label/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/delimited_text/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/diagram_overlay/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/interpolation/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/north_arrow/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/scale_bar/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/oracle_raster/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/raster_terrain_analysis/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/coordinate_capture/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/dxf2shp_converter/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/evis/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/point_displacement_renderer/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/spatialquery/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/sqlanywhere/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/roadgraph/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/gps_importer/cmake_install.cmake")
  INCLUDE("E:/QGIS/Build174/src/plugins/wfs/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

