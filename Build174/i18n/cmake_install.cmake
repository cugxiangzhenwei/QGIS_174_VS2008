# Install script for directory: E:/QGIS/qgis-1.7.4/i18n

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./i18n" TYPE FILE FILES
    "E:/QGIS/Build174/i18n/qgis_af.qm"
    "E:/QGIS/Build174/i18n/qgis_ar.qm"
    "E:/QGIS/Build174/i18n/qgis_bg.qm"
    "E:/QGIS/Build174/i18n/qgis_ca_ES.qm"
    "E:/QGIS/Build174/i18n/qgis_cs_CZ.qm"
    "E:/QGIS/Build174/i18n/qgis_de.qm"
    "E:/QGIS/Build174/i18n/qgis_el_GR.qm"
    "E:/QGIS/Build174/i18n/qgis_es.qm"
    "E:/QGIS/Build174/i18n/qgis_et.qm"
    "E:/QGIS/Build174/i18n/qgis_fa.qm"
    "E:/QGIS/Build174/i18n/qgis_fi.qm"
    "E:/QGIS/Build174/i18n/qgis_fr.qm"
    "E:/QGIS/Build174/i18n/qgis_gl_ES.qm"
    "E:/QGIS/Build174/i18n/qgis_he.qm"
    "E:/QGIS/Build174/i18n/qgis_hr_HR.qm"
    "E:/QGIS/Build174/i18n/qgis_hu.qm"
    "E:/QGIS/Build174/i18n/qgis_id.qm"
    "E:/QGIS/Build174/i18n/qgis_is.qm"
    "E:/QGIS/Build174/i18n/qgis_it.qm"
    "E:/QGIS/Build174/i18n/qgis_ja.qm"
    "E:/QGIS/Build174/i18n/qgis_ka_GE.qm"
    "E:/QGIS/Build174/i18n/qgis_ko_KR.qm"
    "E:/QGIS/Build174/i18n/qgis_lo.qm"
    "E:/QGIS/Build174/i18n/qgis_lt.qm"
    "E:/QGIS/Build174/i18n/qgis_lv.qm"
    "E:/QGIS/Build174/i18n/qgis_mn.qm"
    "E:/QGIS/Build174/i18n/qgis_nl.qm"
    "E:/QGIS/Build174/i18n/qgis_pl_PL.qm"
    "E:/QGIS/Build174/i18n/qgis_pt_BR.qm"
    "E:/QGIS/Build174/i18n/qgis_pt_PT.qm"
    "E:/QGIS/Build174/i18n/qgis_ro.qm"
    "E:/QGIS/Build174/i18n/qgis_ru.qm"
    "E:/QGIS/Build174/i18n/qgis_sk.qm"
    "E:/QGIS/Build174/i18n/qgis_sl_SI.qm"
    "E:/QGIS/Build174/i18n/qgis_sq_AL.qm"
    "E:/QGIS/Build174/i18n/qgis_sr_CS-Latn.qm"
    "E:/QGIS/Build174/i18n/qgis_sv.qm"
    "E:/QGIS/Build174/i18n/qgis_ta.qm"
    "E:/QGIS/Build174/i18n/qgis_th.qm"
    "E:/QGIS/Build174/i18n/qgis_tr.qm"
    "E:/QGIS/Build174/i18n/qgis_uk.qm"
    "E:/QGIS/Build174/i18n/qgis_vi.qm"
    "E:/QGIS/Build174/i18n/qgis_xh.qm"
    "E:/QGIS/Build174/i18n/qgis_zh_CN.qm"
    "E:/QGIS/Build174/i18n/qgis_zh_TW.qm"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

