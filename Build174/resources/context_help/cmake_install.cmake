# Install script for directory: E:/QGIS/qgis-1.7.4/resources/context_help

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./resources/context_help" TYPE FILE FILES
    "E:/QGIS/qgis-1.7.4/resources/context_help/eVisDatabaseConnectionGui-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/eVisDatabaseConnectionGui-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/eVisDatabaseConnectionGui-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/eVisDatabaseConnectionGui-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/eVisDatabaseConnectionGui-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/eVisDatabaseConnectionGui-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/MapServerExport-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/MapServerExport-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/MapServerExport-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/MapServerExport-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/MapServerExport-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/MapServerExport-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/MapServerExport-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/MapServerExport-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsAttributeTableDialog-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsAttributeTableDialog-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsAttributeTableDialog-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsAttributeTableDialog-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsAttributeTableDialog-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsAttributeTableDialog-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsAttributeTableDialog-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsAttributeTableDialog-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsAttributeTableDialog-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsAttributeTableDialog-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsBookmarks-sv_SE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsComposer-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsComposer-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsComposer-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsComposer-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsComposer-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsComposer-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsComposer-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsComposer-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsComposer-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsComposer-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCopyrightLabelPluginGui-sv_SE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCustomProjectionDialog-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCustomProjectionDialog-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCustomProjectionDialog-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCustomProjectionDialog-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCustomProjectionDialog-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCustomProjectionDialog-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsCustomProjectionDialog-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsDelimitedTextPluginGui-sv_SE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsFieldCalculator-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsFieldCalculator-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsFieldCalculator-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsGPSPluginGui-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsGPSPluginGui-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsGPSPluginGui-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsGPSPluginGui-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsGPSPluginGui-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsGPSPluginGui-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsGPSPluginGui-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsIdentifyResults-sv_SE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsMeasureDialog-sv_SE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewConnection-sv_SE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewOgrConnection-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewOgrConnection-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewOgrConnection-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewOgrConnection-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewOgrConnection-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewOgrConnection-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewOgrConnection-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewSpatialiteLayerDialog-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewSpatialiteLayerDialog-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewSpatialiteLayerDialog-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewSpatialiteLayerDialog-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewSpatialiteLayerDialog-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewSpatialiteLayerDialog-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewVectorLayerDialog-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewVectorLayerDialog-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewVectorLayerDialog-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewVectorLayerDialog-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewVectorLayerDialog-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewVectorLayerDialog-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewVectorLayerDialog-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNewVectorLayerDialog-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNorthArrowPluginGui-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNorthArrowPluginGui-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNorthArrowPluginGui-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNorthArrowPluginGui-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNorthArrowPluginGui-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsNorthArrowPluginGui-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOpenVectorLayerDialog-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOpenVectorLayerDialog-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOpenVectorLayerDialog-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOpenVectorLayerDialog-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOpenVectorLayerDialog-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOpenVectorLayerDialog-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOpenVectorLayerDialog-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOptions-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOptions-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOptions-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOptions-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOptions-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsOptions-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPgSourceSelect-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPgSourceSelect-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPgSourceSelect-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPgSourceSelect-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPgSourceSelect-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPgSourceSelect-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPgSourceSelect-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPgSourceSelect-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPgSourceSelect-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPgSourceSelect-sv_SE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPluginInstallerDialog-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPluginInstallerDialog-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPluginInstallerDialog-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPluginInstallerDialog-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPluginInstallerDialog-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPluginInstallerDialog-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsPluginInstallerDialog-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsProjectProperties-sv_SE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsScaleBarPluginGui-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsScaleBarPluginGui-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsScaleBarPluginGui-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsScaleBarPluginGui-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsScaleBarPluginGui-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsScaleBarPluginGui-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsScaleBarPluginGui-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsScaleBarPluginGui-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsSpatiaLiteSourceSelect-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsSpatiaLiteSourceSelect-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsSpatiaLiteSourceSelect-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsSpatiaLiteSourceSelect-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsSpatiaLiteSourceSelect-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsSpatiaLiteSourceSelect-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsSpatiaLiteSourceSelect-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsStyleV2ManagerDialog-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsStyleV2ManagerDialog-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsStyleV2ManagerDialog-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsStyleV2ManagerDialog-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsStyleV2ManagerDialog-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerProperties-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerProperties-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerProperties-es_ES"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerProperties-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerProperties-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerProperties-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerProperties-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerProperties-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerProperties-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerProperties-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerSaveAsDialog-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsVectorLayerSaveAsDialog-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsWMSSourceSelect-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsWMSSourceSelect-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsWMSSourceSelect-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsWMSSourceSelect-it_IT"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsWMSSourceSelect-ja_JP"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsWMSSourceSelect-pl_PL"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsWMSSourceSelect-pt_BR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsWMSSourceSelect-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsWMSSourceSelect-sk_SK"
    "E:/QGIS/qgis-1.7.4/resources/context_help/QgsWMSSourceSelect-sv_SE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/RgSettingsDlg-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/RgSettingsDlg-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/RgSettingsDlg-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/RgSettingsDlg-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/RgShortestPathWidget-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/RgShortestPathWidget-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/RgShortestPathWidget-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/RgShortestPathWidget-ru_RU"
    "E:/QGIS/qgis-1.7.4/resources/context_help/SaNewConnection-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/SaNewConnection-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/SaNewConnection-fr_FR"
    "E:/QGIS/qgis-1.7.4/resources/context_help/SaSourceSelect-de_DE"
    "E:/QGIS/qgis-1.7.4/resources/context_help/SaSourceSelect-en_US"
    "E:/QGIS/qgis-1.7.4/resources/context_help/SaSourceSelect-fr_FR"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
