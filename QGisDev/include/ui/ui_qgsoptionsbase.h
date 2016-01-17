/********************************************************************************
** Form generated from reading ui file 'qgsoptionsbase.ui'
**
** Created: Tue Mar 13 10:23:52 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSOPTIONSBASE_H
#define UI_QGSOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOptionsBase
{
public:
    QGridLayout *gridLayout_3;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QGridLayout *gridLayout_7;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_12;
    QGroupBox *groupBox_11;
    QVBoxLayout *vboxLayout;
    QCheckBox *chbAskToSaveProjectChanges;
    QCheckBox *chbWarnOldProjectVersion;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout;
    QLabel *textLabel1_9;
    QgsColorButton *pbnSelectionColor;
    QLabel *label;
    QSpacerItem *spacerItem;
    QgsColorButton *pbnCanvasColor;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *textLabel1_4;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *cmbTheme;
    QHBoxLayout *horizontalLayout_7;
    QLabel *textLabel1_5;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *cmbSize;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *cmbLegendDoubleClickAction;
    QCheckBox *capitaliseCheckBox;
    QCheckBox *cbxLegendClassifiers;
    QCheckBox *cbxCreateRasterLegendIcons;
    QCheckBox *cbxHideSplash;
    QCheckBox *cbxShowTips;
    QCheckBox *cbxIdentifyResultsDocked;
    QCheckBox *cbxSnappingOptionsDocked;
    QCheckBox *cbxAttributeTableDocked;
    QCheckBox *cbxAddPostgisDC;
    QCheckBox *cbxAddNewLayersToCurrentGroup;
    QHBoxLayout *horizontalLayout_5;
    QLabel *textLabel1_7;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *cmbAttrTableBehaviour;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *leNullValue;
    QGroupBox *groupBox_4;
    QGridLayout *_2;
    QLabel *mSVGLabel_2;
    QSpacerItem *spacerItem2;
    QPushButton *mBtnAddPluginPath;
    QPushButton *mBtnRemovePluginPath;
    QListWidget *mListPluginPaths;
    QWidget *tabWidgetPage2;
    QGridLayout *gridLayout_9;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout1;
    QCheckBox *chkAddedVisibility;
    QLabel *textLabel1_6;
    QSpinBox *spinBoxUpdateThreshold;
    QLabel *textLabel3;
    QCheckBox *chkUseRenderCaching;
    QGroupBox *groupBox_8;
    QVBoxLayout *vboxLayout1;
    QCheckBox *chkAntiAliasing;
    QCheckBox *chkUseQPixmap;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkUseSymbologyNG;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLabel *mSVGLabel;
    QSpacerItem *spacerItem3;
    QPushButton *mBtnAddSVGPath;
    QPushButton *mBtnRemoveSVGPath;
    QListWidget *mListSVGPaths;
    QWidget *tabWidgetPage3;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout3;
    QLabel *textLabel2;
    QLabel *textLabel1_3;
    QDoubleSpinBox *spinBoxIdentifyValue;
    QComboBox *cmbIdentifyMode;
    QLabel *label_4;
    QCheckBox *cbxAutoFeatureForm;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_21;
    QLabel *textLabel1_8;
    QComboBox *cmbEllipsoid;
    QLabel *textLabel1_10;
    QgsColorButton *pbnMeasureColor;
    QSpacerItem *spacerItem4;
    QLabel *textLabel1_11;
    QRadioButton *radMeters;
    QRadioButton *radFeet;
    QLabel *mAngleUnitsLabel;
    QRadioButton *mDegreesRadioButton;
    QRadioButton *mRadiansRadioButton;
    QRadioButton *mGonRadioButton;
    QLabel *label_12;
    QSpinBox *mDecimalPlacesSpinBox;
    QLabel *label_13;
    QCheckBox *mKeepBaseUnitCheckBox;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout4;
    QComboBox *cmbWheelAction;
    QLabel *label_3;
    QLabel *label_2;
    QDoubleSpinBox *spinZoomFactor;
    QWidget *tabWidgetPage4;
    QGridLayout *gridLayout_11;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_10;
    QGroupBox *mPositionGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mAlgorithmLabel;
    QSpacerItem *spacerItem5;
    QComboBox *mOverlayAlgorithmComboBox;
    QSpacerItem *spacerItem6;
    QWidget *tabWidgetPage5;
    QGridLayout *gridLayout_14;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_6;
    QGridLayout *gridLayout_13;
    QGroupBox *mRubberBandGroupBox;
    QGridLayout *gridLayout5;
    QLabel *mLineWidthTextLabel;
    QSpinBox *mLineWidthSpinBox;
    QLabel *mLineColorTextLabel;
    QgsColorButton *mLineColorToolButton;
    QGroupBox *mSnappingGroupBox;
    QGridLayout *gridLayout6;
    QLabel *mDefaultSnapModeLabel;
    QComboBox *mDefaultSnapModeComboBox;
    QLabel *mDefaultSnappingToleranceTextLabel;
    QDoubleSpinBox *mDefaultSnappingToleranceSpinBox;
    QLabel *mVertexSearchRadiusVertexEditLabel;
    QDoubleSpinBox *mSearchRadiusVertexEditSpinBox;
    QComboBox *mDefaultSnappingToleranceComboBox;
    QComboBox *mSearchRadiusVertexEditComboBox;
    QSpacerItem *spacerItem7;
    QSpacerItem *spacerItem8;
    QSpacerItem *spacerItem9;
    QGroupBox *mVertexMarkerGroupBox;
    QGridLayout *gridLayout7;
    QCheckBox *mMarkersOnlyForSelectedCheckBox;
    QLabel *mMarkerStyleLabel;
    QSpacerItem *spacerItem10;
    QComboBox *mMarkerStyleComboBox;
    QSpinBox *mMarkerSizeSpinBox;
    QLabel *label_6;
    QSpacerItem *spacerItem11;
    QGroupBox *mEnterAttributeValuesGroupBox;
    QHBoxLayout *hboxLayout;
    QCheckBox *chkReuseLastValues;
    QCheckBox *chkDisableAttributeValuesDlg;
    QSpacerItem *spacerItem12;
    QWidget *tabWidgetPage6;
    QGridLayout *gridLayout_16;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_7;
    QGridLayout *gridLayout_15;
    QGroupBox *grpOtfTransform;
    QGridLayout *gridLayout_22;
    QLineEdit *leProjectGlobalCrs;
    QCheckBox *chkOtfTransform;
    QPushButton *pbnSelectOtfProjection;
    QSpacerItem *verticalSpacer;
    QLabel *label_16;
    QGroupBox *grpProjectionBehaviour;
    QGridLayout *gridLayout_23;
    QLabel *label_8;
    QRadioButton *radPromptForProjection;
    QRadioButton *radUseProjectProjection;
    QRadioButton *radUseGlobalProjection;
    QLineEdit *leLayerGlobalCrs;
    QPushButton *pbnSelectProjection;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabWidgetPage7;
    QGridLayout *gridLayout_18;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_8;
    QGridLayout *gridLayout_17;
    QGroupBox *grpLocale;
    QGridLayout *gridLayout8;
    QLabel *label_5;
    QComboBox *cboLocale;
    QLabel *label_7;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout9;
    QLabel *lblSystemLocale;
    QSpacerItem *spacerItem13;
    QWidget *tabWidgetPage8;
    QGridLayout *gridLayout_19;
    QScrollArea *scrollArea_8;
    QWidget *scrollAreaWidgetContents_9;
    QGridLayout *gridLayout_20;
    QGroupBox *grpProxy;
    QGridLayout *gridLayout_1;
    QLabel *lblProxyHost;
    QLineEdit *leProxyHost;
    QLabel *lblProxyPort;
    QLineEdit *leProxyPort;
    QLabel *lblUser;
    QLineEdit *leProxyUser;
    QLabel *lblPassword;
    QLineEdit *leProxyPassword;
    QLabel *mTypeLabel;
    QComboBox *mProxyTypeComboBox;
    QSpacerItem *spacerItem14;
    QGroupBox *grpUrlExclude;
    QGridLayout *gridLayout_5;
    QPushButton *mRemoveUrlPushButton;
    QPushButton *mAddUrlPushButton;
    QListWidget *mExcludeUrlListWidget;
    QSpacerItem *horizontalSpacer;
    QGroupBox *grpCache;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLineEdit *mCacheDirectory;
    QPushButton *mBrowseCacheDirectory;
    QLabel *label_11;
    QSpinBox *mCacheSize;
    QPushButton *mClearCache;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *leWmsSearch;
    QHBoxLayout *horizontalLayout;
    QLabel *mNetworkTimeoutLabel;
    QSpinBox *mNetworkTimeoutSpinBox;

    void setupUi(QDialog *QgsOptionsBase)
    {
        if (QgsOptionsBase->objectName().isEmpty())
            QgsOptionsBase->setObjectName(QString::fromUtf8("QgsOptionsBase"));
        QgsOptionsBase->resize(825, 503);
        QgsOptionsBase->setSizeGripEnabled(true);
        QgsOptionsBase->setModal(true);
        gridLayout_3 = new QGridLayout(QgsOptionsBase);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        buttonBox = new QDialogButtonBox(QgsOptionsBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 3, 0, 1, 1);

        tabWidget = new QTabWidget(QgsOptionsBase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setIconSize(QSize(22, 22));
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QString::fromUtf8("tabWidgetPage1"));
        gridLayout_7 = new QGridLayout(tabWidgetPage1);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setMargin(11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        scrollArea_2 = new QScrollArea(tabWidgetPage1);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 780, 755));
        gridLayout_12 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setMargin(11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        groupBox_11 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        vboxLayout = new QVBoxLayout(groupBox_11);
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        chbAskToSaveProjectChanges = new QCheckBox(groupBox_11);
        chbAskToSaveProjectChanges->setObjectName(QString::fromUtf8("chbAskToSaveProjectChanges"));

        vboxLayout->addWidget(chbAskToSaveProjectChanges);

        chbWarnOldProjectVersion = new QCheckBox(groupBox_11);
        chbWarnOldProjectVersion->setObjectName(QString::fromUtf8("chbWarnOldProjectVersion"));

        vboxLayout->addWidget(chbWarnOldProjectVersion);


        gridLayout_12->addWidget(groupBox_11, 0, 0, 1, 1);

        groupBox_9 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout = new QGridLayout(groupBox_9);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1_9 = new QLabel(groupBox_9);
        textLabel1_9->setObjectName(QString::fromUtf8("textLabel1_9"));

        gridLayout->addWidget(textLabel1_9, 0, 0, 1, 1);

        pbnSelectionColor = new QgsColorButton(groupBox_9);
        pbnSelectionColor->setObjectName(QString::fromUtf8("pbnSelectionColor"));
        pbnSelectionColor->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(pbnSelectionColor, 0, 3, 1, 1);

        label = new QLabel(groupBox_9);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        pbnCanvasColor = new QgsColorButton(groupBox_9);
        pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
        pbnCanvasColor->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(pbnCanvasColor, 1, 3, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 2, 1, 1);


        gridLayout_12->addWidget(groupBox_9, 1, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setMargin(11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textLabel1_4 = new QLabel(groupBox);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1_4->sizePolicy().hasHeightForWidth());
        textLabel1_4->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(textLabel1_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cmbTheme = new QComboBox(groupBox);
        cmbTheme->setObjectName(QString::fromUtf8("cmbTheme"));
        cmbTheme->setDuplicatesEnabled(false);

        horizontalLayout_3->addWidget(cmbTheme);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        textLabel1_5 = new QLabel(groupBox);
        textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
        sizePolicy.setHeightForWidth(textLabel1_5->sizePolicy().hasHeightForWidth());
        textLabel1_5->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(textLabel1_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        cmbSize = new QComboBox(groupBox);
        cmbSize->setObjectName(QString::fromUtf8("cmbSize"));
        cmbSize->setDuplicatesEnabled(false);

        horizontalLayout_7->addWidget(cmbSize);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        cmbLegendDoubleClickAction = new QComboBox(groupBox);
        cmbLegendDoubleClickAction->setObjectName(QString::fromUtf8("cmbLegendDoubleClickAction"));

        horizontalLayout_8->addWidget(cmbLegendDoubleClickAction);


        verticalLayout_2->addLayout(horizontalLayout_8);

        capitaliseCheckBox = new QCheckBox(groupBox);
        capitaliseCheckBox->setObjectName(QString::fromUtf8("capitaliseCheckBox"));

        verticalLayout_2->addWidget(capitaliseCheckBox);

        cbxLegendClassifiers = new QCheckBox(groupBox);
        cbxLegendClassifiers->setObjectName(QString::fromUtf8("cbxLegendClassifiers"));

        verticalLayout_2->addWidget(cbxLegendClassifiers);

        cbxCreateRasterLegendIcons = new QCheckBox(groupBox);
        cbxCreateRasterLegendIcons->setObjectName(QString::fromUtf8("cbxCreateRasterLegendIcons"));

        verticalLayout_2->addWidget(cbxCreateRasterLegendIcons);

        cbxHideSplash = new QCheckBox(groupBox);
        cbxHideSplash->setObjectName(QString::fromUtf8("cbxHideSplash"));

        verticalLayout_2->addWidget(cbxHideSplash);

        cbxShowTips = new QCheckBox(groupBox);
        cbxShowTips->setObjectName(QString::fromUtf8("cbxShowTips"));

        verticalLayout_2->addWidget(cbxShowTips);

        cbxIdentifyResultsDocked = new QCheckBox(groupBox);
        cbxIdentifyResultsDocked->setObjectName(QString::fromUtf8("cbxIdentifyResultsDocked"));

        verticalLayout_2->addWidget(cbxIdentifyResultsDocked);

        cbxSnappingOptionsDocked = new QCheckBox(groupBox);
        cbxSnappingOptionsDocked->setObjectName(QString::fromUtf8("cbxSnappingOptionsDocked"));

        verticalLayout_2->addWidget(cbxSnappingOptionsDocked);

        cbxAttributeTableDocked = new QCheckBox(groupBox);
        cbxAttributeTableDocked->setObjectName(QString::fromUtf8("cbxAttributeTableDocked"));

        verticalLayout_2->addWidget(cbxAttributeTableDocked);

        cbxAddPostgisDC = new QCheckBox(groupBox);
        cbxAddPostgisDC->setObjectName(QString::fromUtf8("cbxAddPostgisDC"));

        verticalLayout_2->addWidget(cbxAddPostgisDC);

        cbxAddNewLayersToCurrentGroup = new QCheckBox(groupBox);
        cbxAddNewLayersToCurrentGroup->setObjectName(QString::fromUtf8("cbxAddNewLayersToCurrentGroup"));

        verticalLayout_2->addWidget(cbxAddNewLayersToCurrentGroup);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        textLabel1_7 = new QLabel(groupBox);
        textLabel1_7->setObjectName(QString::fromUtf8("textLabel1_7"));
        sizePolicy.setHeightForWidth(textLabel1_7->sizePolicy().hasHeightForWidth());
        textLabel1_7->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(textLabel1_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        cmbAttrTableBehaviour = new QComboBox(groupBox);
        cmbAttrTableBehaviour->setObjectName(QString::fromUtf8("cmbAttrTableBehaviour"));
        cmbAttrTableBehaviour->setDuplicatesEnabled(false);

        horizontalLayout_5->addWidget(cmbAttrTableBehaviour);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_6->addWidget(label_14);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        leNullValue = new QLineEdit(groupBox);
        leNullValue->setObjectName(QString::fromUtf8("leNullValue"));

        horizontalLayout_6->addWidget(leNullValue);


        verticalLayout_2->addLayout(horizontalLayout_6);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        _2 = new QGridLayout(groupBox_4);
        _2->setSpacing(6);
        _2->setMargin(11);
        _2->setObjectName(QString::fromUtf8("_2"));
        mSVGLabel_2 = new QLabel(groupBox_4);
        mSVGLabel_2->setObjectName(QString::fromUtf8("mSVGLabel_2"));

        _2->addWidget(mSVGLabel_2, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem2, 0, 1, 1, 1);

        mBtnAddPluginPath = new QPushButton(groupBox_4);
        mBtnAddPluginPath->setObjectName(QString::fromUtf8("mBtnAddPluginPath"));

        _2->addWidget(mBtnAddPluginPath, 0, 2, 1, 1);

        mBtnRemovePluginPath = new QPushButton(groupBox_4);
        mBtnRemovePluginPath->setObjectName(QString::fromUtf8("mBtnRemovePluginPath"));

        _2->addWidget(mBtnRemovePluginPath, 0, 3, 1, 1);

        mListPluginPaths = new QListWidget(groupBox_4);
        mListPluginPaths->setObjectName(QString::fromUtf8("mListPluginPaths"));

        _2->addWidget(mListPluginPaths, 1, 0, 1, 4);


        verticalLayout_2->addWidget(groupBox_4);


        gridLayout_12->addWidget(groupBox, 2, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        gridLayout_7->addWidget(scrollArea_2, 0, 0, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage1, icon, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QString::fromUtf8("tabWidgetPage2"));
        gridLayout_9 = new QGridLayout(tabWidgetPage2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setMargin(11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        scrollArea_3 = new QScrollArea(tabWidgetPage2);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 780, 433));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setMargin(11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_5 = new QGroupBox(scrollAreaWidgetContents_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout1 = new QGridLayout(groupBox_5);
        gridLayout1->setSpacing(6);
        gridLayout1->setMargin(11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        chkAddedVisibility = new QCheckBox(groupBox_5);
        chkAddedVisibility->setObjectName(QString::fromUtf8("chkAddedVisibility"));

        gridLayout1->addWidget(chkAddedVisibility, 0, 0, 1, 1);

        textLabel1_6 = new QLabel(groupBox_5);
        textLabel1_6->setObjectName(QString::fromUtf8("textLabel1_6"));

        gridLayout1->addWidget(textLabel1_6, 1, 0, 1, 1);

        spinBoxUpdateThreshold = new QSpinBox(groupBox_5);
        spinBoxUpdateThreshold->setObjectName(QString::fromUtf8("spinBoxUpdateThreshold"));
        spinBoxUpdateThreshold->setMaximum(1000000);
        spinBoxUpdateThreshold->setValue(1000);

        gridLayout1->addWidget(spinBoxUpdateThreshold, 1, 1, 1, 1);

        textLabel3 = new QLabel(groupBox_5);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout1->addWidget(textLabel3, 2, 0, 1, 2);

        chkUseRenderCaching = new QCheckBox(groupBox_5);
        chkUseRenderCaching->setObjectName(QString::fromUtf8("chkUseRenderCaching"));

        gridLayout1->addWidget(chkUseRenderCaching, 3, 0, 1, 2);


        gridLayout_8->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_8 = new QGroupBox(scrollAreaWidgetContents_4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        vboxLayout1 = new QVBoxLayout(groupBox_8);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setMargin(11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        chkAntiAliasing = new QCheckBox(groupBox_8);
        chkAntiAliasing->setObjectName(QString::fromUtf8("chkAntiAliasing"));

        vboxLayout1->addWidget(chkAntiAliasing);

        chkUseQPixmap = new QCheckBox(groupBox_8);
        chkUseQPixmap->setObjectName(QString::fromUtf8("chkUseQPixmap"));

        vboxLayout1->addWidget(chkUseQPixmap);


        gridLayout_8->addWidget(groupBox_8, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chkUseSymbologyNG = new QCheckBox(groupBox_3);
        chkUseSymbologyNG->setObjectName(QString::fromUtf8("chkUseSymbologyNG"));

        verticalLayout->addWidget(chkUseSymbologyNG);


        gridLayout_8->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setMargin(11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        mSVGLabel = new QLabel(groupBox_2);
        mSVGLabel->setObjectName(QString::fromUtf8("mSVGLabel"));

        gridLayout2->addWidget(mSVGLabel, 0, 0, 1, 1);

        spacerItem3 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem3, 0, 1, 1, 1);

        mBtnAddSVGPath = new QPushButton(groupBox_2);
        mBtnAddSVGPath->setObjectName(QString::fromUtf8("mBtnAddSVGPath"));

        gridLayout2->addWidget(mBtnAddSVGPath, 0, 2, 1, 1);

        mBtnRemoveSVGPath = new QPushButton(groupBox_2);
        mBtnRemoveSVGPath->setObjectName(QString::fromUtf8("mBtnRemoveSVGPath"));

        gridLayout2->addWidget(mBtnRemoveSVGPath, 0, 3, 1, 1);

        mListSVGPaths = new QListWidget(groupBox_2);
        mListSVGPaths->setObjectName(QString::fromUtf8("mListSVGPaths"));

        gridLayout2->addWidget(mListSVGPaths, 1, 0, 1, 4);


        gridLayout_8->addWidget(groupBox_2, 3, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_4);

        gridLayout_9->addWidget(scrollArea_3, 0, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/rendering.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage2, icon1, QString());
        tabWidgetPage3 = new QWidget();
        tabWidgetPage3->setObjectName(QString::fromUtf8("tabWidgetPage3"));
        gridLayout_6 = new QGridLayout(tabWidgetPage3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        scrollArea = new QScrollArea(tabWidgetPage3);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 456));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout3 = new QGridLayout(groupBox_7);
        gridLayout3->setSpacing(6);
        gridLayout3->setMargin(11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        textLabel2 = new QLabel(groupBox_7);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(true);

        gridLayout3->addWidget(textLabel2, 3, 0, 1, 2);

        textLabel1_3 = new QLabel(groupBox_7);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        gridLayout3->addWidget(textLabel1_3, 2, 0, 1, 1);

        spinBoxIdentifyValue = new QDoubleSpinBox(groupBox_7);
        spinBoxIdentifyValue->setObjectName(QString::fromUtf8("spinBoxIdentifyValue"));
        spinBoxIdentifyValue->setMaximum(100);
        spinBoxIdentifyValue->setSingleStep(0.01);
        spinBoxIdentifyValue->setValue(5);

        gridLayout3->addWidget(spinBoxIdentifyValue, 2, 1, 1, 1);

        cmbIdentifyMode = new QComboBox(groupBox_7);
        cmbIdentifyMode->setObjectName(QString::fromUtf8("cmbIdentifyMode"));

        gridLayout3->addWidget(cmbIdentifyMode, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout3->addWidget(label_4, 0, 0, 1, 1);

        cbxAutoFeatureForm = new QCheckBox(groupBox_7);
        cbxAutoFeatureForm->setObjectName(QString::fromUtf8("cbxAutoFeatureForm"));

        gridLayout3->addWidget(cbxAutoFeatureForm, 1, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_7, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_21 = new QGridLayout(groupBox_6);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setMargin(11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        textLabel1_8 = new QLabel(groupBox_6);
        textLabel1_8->setObjectName(QString::fromUtf8("textLabel1_8"));

        gridLayout_21->addWidget(textLabel1_8, 1, 0, 1, 1);

        cmbEllipsoid = new QComboBox(groupBox_6);
        cmbEllipsoid->setObjectName(QString::fromUtf8("cmbEllipsoid"));

        gridLayout_21->addWidget(cmbEllipsoid, 1, 1, 1, 1);

        textLabel1_10 = new QLabel(groupBox_6);
        textLabel1_10->setObjectName(QString::fromUtf8("textLabel1_10"));

        gridLayout_21->addWidget(textLabel1_10, 2, 0, 1, 1);

        pbnMeasureColor = new QgsColorButton(groupBox_6);
        pbnMeasureColor->setObjectName(QString::fromUtf8("pbnMeasureColor"));
        pbnMeasureColor->setMinimumSize(QSize(100, 0));

        gridLayout_21->addWidget(pbnMeasureColor, 2, 1, 1, 1);

        spacerItem4 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(spacerItem4, 2, 2, 1, 2);

        textLabel1_11 = new QLabel(groupBox_6);
        textLabel1_11->setObjectName(QString::fromUtf8("textLabel1_11"));

        gridLayout_21->addWidget(textLabel1_11, 5, 0, 1, 1);

        radMeters = new QRadioButton(groupBox_6);
        radMeters->setObjectName(QString::fromUtf8("radMeters"));

        gridLayout_21->addWidget(radMeters, 5, 1, 1, 1);

        radFeet = new QRadioButton(groupBox_6);
        radFeet->setObjectName(QString::fromUtf8("radFeet"));

        gridLayout_21->addWidget(radFeet, 5, 2, 1, 1);

        mAngleUnitsLabel = new QLabel(groupBox_6);
        mAngleUnitsLabel->setObjectName(QString::fromUtf8("mAngleUnitsLabel"));

        gridLayout_21->addWidget(mAngleUnitsLabel, 6, 0, 1, 1);

        mDegreesRadioButton = new QRadioButton(groupBox_6);
        mDegreesRadioButton->setObjectName(QString::fromUtf8("mDegreesRadioButton"));

        gridLayout_21->addWidget(mDegreesRadioButton, 6, 1, 1, 1);

        mRadiansRadioButton = new QRadioButton(groupBox_6);
        mRadiansRadioButton->setObjectName(QString::fromUtf8("mRadiansRadioButton"));

        gridLayout_21->addWidget(mRadiansRadioButton, 6, 2, 1, 1);

        mGonRadioButton = new QRadioButton(groupBox_6);
        mGonRadioButton->setObjectName(QString::fromUtf8("mGonRadioButton"));

        gridLayout_21->addWidget(mGonRadioButton, 6, 3, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_21->addWidget(label_12, 3, 0, 1, 1);

        mDecimalPlacesSpinBox = new QSpinBox(groupBox_6);
        mDecimalPlacesSpinBox->setObjectName(QString::fromUtf8("mDecimalPlacesSpinBox"));

        gridLayout_21->addWidget(mDecimalPlacesSpinBox, 3, 1, 1, 1);

        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_21->addWidget(label_13, 4, 0, 1, 1);

        mKeepBaseUnitCheckBox = new QCheckBox(groupBox_6);
        mKeepBaseUnitCheckBox->setObjectName(QString::fromUtf8("mKeepBaseUnitCheckBox"));

        gridLayout_21->addWidget(mKeepBaseUnitCheckBox, 4, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_6, 1, 0, 1, 1);

        groupBox_10 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout4 = new QGridLayout(groupBox_10);
        gridLayout4->setSpacing(6);
        gridLayout4->setMargin(11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        cmbWheelAction = new QComboBox(groupBox_10);
        cmbWheelAction->setObjectName(QString::fromUtf8("cmbWheelAction"));

        gridLayout4->addWidget(cmbWheelAction, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_10);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout4->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_10);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout4->addWidget(label_2, 0, 0, 1, 1);

        spinZoomFactor = new QDoubleSpinBox(groupBox_10);
        spinZoomFactor->setObjectName(QString::fromUtf8("spinZoomFactor"));
        spinZoomFactor->setDecimals(1);
        spinZoomFactor->setMinimum(1.1);
        spinZoomFactor->setValue(2);

        gridLayout4->addWidget(spinZoomFactor, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_10, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_6->addWidget(scrollArea, 0, 0, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/map_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage3, icon2, QString());
        tabWidgetPage4 = new QWidget();
        tabWidgetPage4->setObjectName(QString::fromUtf8("tabWidgetPage4"));
        gridLayout_11 = new QGridLayout(tabWidgetPage4);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setMargin(11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        scrollArea_4 = new QScrollArea(tabWidgetPage4);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 795, 415));
        gridLayout_10 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setMargin(11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        mPositionGroupBox = new QGroupBox(scrollAreaWidgetContents_5);
        mPositionGroupBox->setObjectName(QString::fromUtf8("mPositionGroupBox"));
        horizontalLayout_4 = new QHBoxLayout(mPositionGroupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setMargin(11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mAlgorithmLabel = new QLabel(mPositionGroupBox);
        mAlgorithmLabel->setObjectName(QString::fromUtf8("mAlgorithmLabel"));

        horizontalLayout_4->addWidget(mAlgorithmLabel);

        spacerItem5 = new QSpacerItem(221, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(spacerItem5);

        mOverlayAlgorithmComboBox = new QComboBox(mPositionGroupBox);
        mOverlayAlgorithmComboBox->setObjectName(QString::fromUtf8("mOverlayAlgorithmComboBox"));

        horizontalLayout_4->addWidget(mOverlayAlgorithmComboBox);


        gridLayout_10->addWidget(mPositionGroupBox, 0, 0, 1, 1);

        spacerItem6 = new QSpacerItem(20, 461, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(spacerItem6, 1, 0, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_5);

        gridLayout_11->addWidget(scrollArea_4, 0, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/overlay.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage4, icon3, QString());
        tabWidgetPage5 = new QWidget();
        tabWidgetPage5->setObjectName(QString::fromUtf8("tabWidgetPage5"));
        gridLayout_14 = new QGridLayout(tabWidgetPage5);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setMargin(11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        scrollArea_5 = new QScrollArea(tabWidgetPage5);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 795, 415));
        gridLayout_13 = new QGridLayout(scrollAreaWidgetContents_6);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setMargin(11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        mRubberBandGroupBox = new QGroupBox(scrollAreaWidgetContents_6);
        mRubberBandGroupBox->setObjectName(QString::fromUtf8("mRubberBandGroupBox"));
        gridLayout5 = new QGridLayout(mRubberBandGroupBox);
        gridLayout5->setSpacing(6);
        gridLayout5->setMargin(11);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        mLineWidthTextLabel = new QLabel(mRubberBandGroupBox);
        mLineWidthTextLabel->setObjectName(QString::fromUtf8("mLineWidthTextLabel"));

        gridLayout5->addWidget(mLineWidthTextLabel, 0, 0, 1, 1);

        mLineWidthSpinBox = new QSpinBox(mRubberBandGroupBox);
        mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
        mLineWidthSpinBox->setMinimum(1);

        gridLayout5->addWidget(mLineWidthSpinBox, 0, 1, 1, 1);

        mLineColorTextLabel = new QLabel(mRubberBandGroupBox);
        mLineColorTextLabel->setObjectName(QString::fromUtf8("mLineColorTextLabel"));

        gridLayout5->addWidget(mLineColorTextLabel, 1, 0, 1, 1);

        mLineColorToolButton = new QgsColorButton(mRubberBandGroupBox);
        mLineColorToolButton->setObjectName(QString::fromUtf8("mLineColorToolButton"));
        mLineColorToolButton->setMinimumSize(QSize(100, 0));

        gridLayout5->addWidget(mLineColorToolButton, 1, 1, 1, 1);


        gridLayout_13->addWidget(mRubberBandGroupBox, 0, 0, 1, 1);

        mSnappingGroupBox = new QGroupBox(scrollAreaWidgetContents_6);
        mSnappingGroupBox->setObjectName(QString::fromUtf8("mSnappingGroupBox"));
        gridLayout6 = new QGridLayout(mSnappingGroupBox);
        gridLayout6->setSpacing(6);
        gridLayout6->setMargin(11);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        mDefaultSnapModeLabel = new QLabel(mSnappingGroupBox);
        mDefaultSnapModeLabel->setObjectName(QString::fromUtf8("mDefaultSnapModeLabel"));

        gridLayout6->addWidget(mDefaultSnapModeLabel, 0, 0, 1, 1);

        mDefaultSnapModeComboBox = new QComboBox(mSnappingGroupBox);
        mDefaultSnapModeComboBox->setObjectName(QString::fromUtf8("mDefaultSnapModeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDefaultSnapModeComboBox->sizePolicy().hasHeightForWidth());
        mDefaultSnapModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout6->addWidget(mDefaultSnapModeComboBox, 0, 4, 1, 2);

        mDefaultSnappingToleranceTextLabel = new QLabel(mSnappingGroupBox);
        mDefaultSnappingToleranceTextLabel->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceTextLabel"));

        gridLayout6->addWidget(mDefaultSnappingToleranceTextLabel, 1, 0, 1, 2);

        mDefaultSnappingToleranceSpinBox = new QDoubleSpinBox(mSnappingGroupBox);
        mDefaultSnappingToleranceSpinBox->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceSpinBox"));
        mDefaultSnappingToleranceSpinBox->setDecimals(5);
        mDefaultSnappingToleranceSpinBox->setMaximum(1e+08);

        gridLayout6->addWidget(mDefaultSnappingToleranceSpinBox, 1, 4, 1, 1);

        mVertexSearchRadiusVertexEditLabel = new QLabel(mSnappingGroupBox);
        mVertexSearchRadiusVertexEditLabel->setObjectName(QString::fromUtf8("mVertexSearchRadiusVertexEditLabel"));

        gridLayout6->addWidget(mVertexSearchRadiusVertexEditLabel, 2, 0, 1, 3);

        mSearchRadiusVertexEditSpinBox = new QDoubleSpinBox(mSnappingGroupBox);
        mSearchRadiusVertexEditSpinBox->setObjectName(QString::fromUtf8("mSearchRadiusVertexEditSpinBox"));
        mSearchRadiusVertexEditSpinBox->setDecimals(5);
        mSearchRadiusVertexEditSpinBox->setMaximum(1e+08);

        gridLayout6->addWidget(mSearchRadiusVertexEditSpinBox, 2, 4, 1, 1);

        mDefaultSnappingToleranceComboBox = new QComboBox(mSnappingGroupBox);
        mDefaultSnappingToleranceComboBox->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceComboBox"));
        sizePolicy1.setHeightForWidth(mDefaultSnappingToleranceComboBox->sizePolicy().hasHeightForWidth());
        mDefaultSnappingToleranceComboBox->setSizePolicy(sizePolicy1);

        gridLayout6->addWidget(mDefaultSnappingToleranceComboBox, 1, 5, 1, 1);

        mSearchRadiusVertexEditComboBox = new QComboBox(mSnappingGroupBox);
        mSearchRadiusVertexEditComboBox->setObjectName(QString::fromUtf8("mSearchRadiusVertexEditComboBox"));

        gridLayout6->addWidget(mSearchRadiusVertexEditComboBox, 2, 5, 1, 1);

        spacerItem7 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout6->addItem(spacerItem7, 2, 3, 1, 1);

        spacerItem8 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout6->addItem(spacerItem8, 1, 2, 1, 2);

        spacerItem9 = new QSpacerItem(311, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout6->addItem(spacerItem9, 0, 1, 1, 3);


        gridLayout_13->addWidget(mSnappingGroupBox, 1, 0, 1, 1);

        mVertexMarkerGroupBox = new QGroupBox(scrollAreaWidgetContents_6);
        mVertexMarkerGroupBox->setObjectName(QString::fromUtf8("mVertexMarkerGroupBox"));
        gridLayout7 = new QGridLayout(mVertexMarkerGroupBox);
        gridLayout7->setSpacing(6);
        gridLayout7->setMargin(11);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        mMarkersOnlyForSelectedCheckBox = new QCheckBox(mVertexMarkerGroupBox);
        mMarkersOnlyForSelectedCheckBox->setObjectName(QString::fromUtf8("mMarkersOnlyForSelectedCheckBox"));

        gridLayout7->addWidget(mMarkersOnlyForSelectedCheckBox, 0, 0, 1, 2);

        mMarkerStyleLabel = new QLabel(mVertexMarkerGroupBox);
        mMarkerStyleLabel->setObjectName(QString::fromUtf8("mMarkerStyleLabel"));

        gridLayout7->addWidget(mMarkerStyleLabel, 1, 0, 1, 1);

        spacerItem10 = new QSpacerItem(281, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout7->addItem(spacerItem10, 1, 1, 1, 1);

        mMarkerStyleComboBox = new QComboBox(mVertexMarkerGroupBox);
        mMarkerStyleComboBox->setObjectName(QString::fromUtf8("mMarkerStyleComboBox"));
        sizePolicy1.setHeightForWidth(mMarkerStyleComboBox->sizePolicy().hasHeightForWidth());
        mMarkerStyleComboBox->setSizePolicy(sizePolicy1);

        gridLayout7->addWidget(mMarkerStyleComboBox, 1, 2, 1, 1);

        mMarkerSizeSpinBox = new QSpinBox(mVertexMarkerGroupBox);
        mMarkerSizeSpinBox->setObjectName(QString::fromUtf8("mMarkerSizeSpinBox"));
        mMarkerSizeSpinBox->setLayoutDirection(Qt::LeftToRight);
        mMarkerSizeSpinBox->setMinimum(3);
        mMarkerSizeSpinBox->setSingleStep(2);

        gridLayout7->addWidget(mMarkerSizeSpinBox, 2, 2, 1, 1);

        label_6 = new QLabel(mVertexMarkerGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout7->addWidget(label_6, 2, 0, 1, 1);

        spacerItem11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout7->addItem(spacerItem11, 2, 1, 1, 1);


        gridLayout_13->addWidget(mVertexMarkerGroupBox, 2, 0, 1, 1);

        mEnterAttributeValuesGroupBox = new QGroupBox(scrollAreaWidgetContents_6);
        mEnterAttributeValuesGroupBox->setObjectName(QString::fromUtf8("mEnterAttributeValuesGroupBox"));
        hboxLayout = new QHBoxLayout(mEnterAttributeValuesGroupBox);
        hboxLayout->setSpacing(6);
        hboxLayout->setMargin(11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        chkReuseLastValues = new QCheckBox(mEnterAttributeValuesGroupBox);
        chkReuseLastValues->setObjectName(QString::fromUtf8("chkReuseLastValues"));
        chkReuseLastValues->setTristate(false);

        hboxLayout->addWidget(chkReuseLastValues);

        chkDisableAttributeValuesDlg = new QCheckBox(mEnterAttributeValuesGroupBox);
        chkDisableAttributeValuesDlg->setObjectName(QString::fromUtf8("chkDisableAttributeValuesDlg"));
        chkDisableAttributeValuesDlg->setTristate(false);

        hboxLayout->addWidget(chkDisableAttributeValuesDlg);


        gridLayout_13->addWidget(mEnterAttributeValuesGroupBox, 3, 0, 1, 1);

        spacerItem12 = new QSpacerItem(547, 102, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(spacerItem12, 4, 0, 1, 1);

        scrollArea_5->setWidget(scrollAreaWidgetContents_6);

        gridLayout_14->addWidget(scrollArea_5, 0, 0, 1, 1);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/digitising.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage5, icon4, QString());
        tabWidgetPage6 = new QWidget();
        tabWidgetPage6->setObjectName(QString::fromUtf8("tabWidgetPage6"));
        gridLayout_16 = new QGridLayout(tabWidgetPage6);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setMargin(11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        scrollArea_6 = new QScrollArea(tabWidgetPage6);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 795, 415));
        gridLayout_15 = new QGridLayout(scrollAreaWidgetContents_7);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setMargin(11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        grpOtfTransform = new QGroupBox(scrollAreaWidgetContents_7);
        grpOtfTransform->setObjectName(QString::fromUtf8("grpOtfTransform"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(grpOtfTransform->sizePolicy().hasHeightForWidth());
        grpOtfTransform->setSizePolicy(sizePolicy2);
        grpOtfTransform->setCheckable(false);
        gridLayout_22 = new QGridLayout(grpOtfTransform);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setMargin(11);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        leProjectGlobalCrs = new QLineEdit(grpOtfTransform);
        leProjectGlobalCrs->setObjectName(QString::fromUtf8("leProjectGlobalCrs"));
        leProjectGlobalCrs->setReadOnly(true);

        gridLayout_22->addWidget(leProjectGlobalCrs, 1, 0, 1, 1);

        chkOtfTransform = new QCheckBox(grpOtfTransform);
        chkOtfTransform->setObjectName(QString::fromUtf8("chkOtfTransform"));

        gridLayout_22->addWidget(chkOtfTransform, 3, 0, 1, 1);

        pbnSelectOtfProjection = new QPushButton(grpOtfTransform);
        pbnSelectOtfProjection->setObjectName(QString::fromUtf8("pbnSelectOtfProjection"));

        gridLayout_22->addWidget(pbnSelectOtfProjection, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_22->addItem(verticalSpacer, 4, 0, 1, 2);

        label_16 = new QLabel(grpOtfTransform);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_22->addWidget(label_16, 0, 0, 1, 1);


        gridLayout_15->addWidget(grpOtfTransform, 0, 0, 1, 1);

        grpProjectionBehaviour = new QGroupBox(scrollAreaWidgetContents_7);
        grpProjectionBehaviour->setObjectName(QString::fromUtf8("grpProjectionBehaviour"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(grpProjectionBehaviour->sizePolicy().hasHeightForWidth());
        grpProjectionBehaviour->setSizePolicy(sizePolicy3);
        gridLayout_23 = new QGridLayout(grpProjectionBehaviour);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setMargin(11);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        label_8 = new QLabel(grpProjectionBehaviour);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        gridLayout_23->addWidget(label_8, 0, 0, 1, 3);

        radPromptForProjection = new QRadioButton(grpProjectionBehaviour);
        radPromptForProjection->setObjectName(QString::fromUtf8("radPromptForProjection"));

        gridLayout_23->addWidget(radPromptForProjection, 1, 0, 1, 1);

        radUseProjectProjection = new QRadioButton(grpProjectionBehaviour);
        radUseProjectProjection->setObjectName(QString::fromUtf8("radUseProjectProjection"));

        gridLayout_23->addWidget(radUseProjectProjection, 2, 0, 1, 1);

        radUseGlobalProjection = new QRadioButton(grpProjectionBehaviour);
        radUseGlobalProjection->setObjectName(QString::fromUtf8("radUseGlobalProjection"));

        gridLayout_23->addWidget(radUseGlobalProjection, 3, 0, 1, 1);

        leLayerGlobalCrs = new QLineEdit(grpProjectionBehaviour);
        leLayerGlobalCrs->setObjectName(QString::fromUtf8("leLayerGlobalCrs"));
        leLayerGlobalCrs->setReadOnly(true);

        gridLayout_23->addWidget(leLayerGlobalCrs, 4, 0, 1, 1);

        pbnSelectProjection = new QPushButton(grpProjectionBehaviour);
        pbnSelectProjection->setObjectName(QString::fromUtf8("pbnSelectProjection"));

        gridLayout_23->addWidget(pbnSelectProjection, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_23->addItem(verticalSpacer_2, 5, 1, 1, 1);


        gridLayout_15->addWidget(grpProjectionBehaviour, 1, 0, 1, 1);

        scrollArea_6->setWidget(scrollAreaWidgetContents_7);

        gridLayout_16->addWidget(scrollArea_6, 0, 0, 1, 1);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/CRS.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage6, icon5, QString());
        tabWidgetPage7 = new QWidget();
        tabWidgetPage7->setObjectName(QString::fromUtf8("tabWidgetPage7"));
        gridLayout_18 = new QGridLayout(tabWidgetPage7);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setMargin(11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        scrollArea_7 = new QScrollArea(tabWidgetPage7);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 780, 527));
        gridLayout_17 = new QGridLayout(scrollAreaWidgetContents_8);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setMargin(11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        grpLocale = new QGroupBox(scrollAreaWidgetContents_8);
        grpLocale->setObjectName(QString::fromUtf8("grpLocale"));
        grpLocale->setCheckable(true);
        gridLayout8 = new QGridLayout(grpLocale);
        gridLayout8->setSpacing(6);
        gridLayout8->setMargin(11);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        label_5 = new QLabel(grpLocale);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout8->addWidget(label_5, 0, 0, 1, 1);

        cboLocale = new QComboBox(grpLocale);
        cboLocale->setObjectName(QString::fromUtf8("cboLocale"));

        gridLayout8->addWidget(cboLocale, 0, 1, 1, 1);

        label_7 = new QLabel(grpLocale);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout8->addWidget(label_7, 1, 0, 1, 2);


        gridLayout_17->addWidget(grpLocale, 0, 0, 1, 1);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents_8);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        gridLayout9 = new QGridLayout(groupBox_12);
        gridLayout9->setSpacing(6);
        gridLayout9->setMargin(11);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        lblSystemLocale = new QLabel(groupBox_12);
        lblSystemLocale->setObjectName(QString::fromUtf8("lblSystemLocale"));

        gridLayout9->addWidget(lblSystemLocale, 0, 0, 1, 1);


        gridLayout_17->addWidget(groupBox_12, 1, 0, 1, 1);

        spacerItem13 = new QSpacerItem(501, 379, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_17->addItem(spacerItem13, 2, 0, 1, 1);

        scrollArea_7->setWidget(scrollAreaWidgetContents_8);

        gridLayout_18->addWidget(scrollArea_7, 0, 0, 1, 1);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/locale.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage7, icon6, QString());
        tabWidgetPage8 = new QWidget();
        tabWidgetPage8->setObjectName(QString::fromUtf8("tabWidgetPage8"));
        gridLayout_19 = new QGridLayout(tabWidgetPage8);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setMargin(11);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        scrollArea_8 = new QScrollArea(tabWidgetPage8);
        scrollArea_8->setObjectName(QString::fromUtf8("scrollArea_8"));
        scrollArea_8->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 780, 461));
        gridLayout_20 = new QGridLayout(scrollAreaWidgetContents_9);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setMargin(11);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        grpProxy = new QGroupBox(scrollAreaWidgetContents_9);
        grpProxy->setObjectName(QString::fromUtf8("grpProxy"));
        grpProxy->setFlat(false);
        grpProxy->setCheckable(true);
        gridLayout_1 = new QGridLayout(grpProxy);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setMargin(11);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        lblProxyHost = new QLabel(grpProxy);
        lblProxyHost->setObjectName(QString::fromUtf8("lblProxyHost"));

        gridLayout_1->addWidget(lblProxyHost, 0, 0, 1, 1);

        leProxyHost = new QLineEdit(grpProxy);
        leProxyHost->setObjectName(QString::fromUtf8("leProxyHost"));

        gridLayout_1->addWidget(leProxyHost, 0, 1, 1, 4);

        lblProxyPort = new QLabel(grpProxy);
        lblProxyPort->setObjectName(QString::fromUtf8("lblProxyPort"));

        gridLayout_1->addWidget(lblProxyPort, 1, 0, 1, 1);

        leProxyPort = new QLineEdit(grpProxy);
        leProxyPort->setObjectName(QString::fromUtf8("leProxyPort"));

        gridLayout_1->addWidget(leProxyPort, 1, 1, 1, 4);

        lblUser = new QLabel(grpProxy);
        lblUser->setObjectName(QString::fromUtf8("lblUser"));

        gridLayout_1->addWidget(lblUser, 2, 0, 1, 1);

        leProxyUser = new QLineEdit(grpProxy);
        leProxyUser->setObjectName(QString::fromUtf8("leProxyUser"));

        gridLayout_1->addWidget(leProxyUser, 2, 1, 1, 4);

        lblPassword = new QLabel(grpProxy);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));

        gridLayout_1->addWidget(lblPassword, 3, 0, 1, 1);

        leProxyPassword = new QLineEdit(grpProxy);
        leProxyPassword->setObjectName(QString::fromUtf8("leProxyPassword"));
        leProxyPassword->setEchoMode(QLineEdit::Password);

        gridLayout_1->addWidget(leProxyPassword, 3, 1, 1, 4);

        mTypeLabel = new QLabel(grpProxy);
        mTypeLabel->setObjectName(QString::fromUtf8("mTypeLabel"));

        gridLayout_1->addWidget(mTypeLabel, 4, 0, 1, 1);

        mProxyTypeComboBox = new QComboBox(grpProxy);
        mProxyTypeComboBox->setObjectName(QString::fromUtf8("mProxyTypeComboBox"));

        gridLayout_1->addWidget(mProxyTypeComboBox, 4, 1, 1, 2);

        spacerItem14 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_1->addItem(spacerItem14, 4, 3, 1, 2);

        grpUrlExclude = new QGroupBox(grpProxy);
        grpUrlExclude->setObjectName(QString::fromUtf8("grpUrlExclude"));
        grpUrlExclude->setFlat(true);
        gridLayout_5 = new QGridLayout(grpUrlExclude);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mRemoveUrlPushButton = new QPushButton(grpUrlExclude);
        mRemoveUrlPushButton->setObjectName(QString::fromUtf8("mRemoveUrlPushButton"));

        gridLayout_5->addWidget(mRemoveUrlPushButton, 2, 2, 1, 1);

        mAddUrlPushButton = new QPushButton(grpUrlExclude);
        mAddUrlPushButton->setObjectName(QString::fromUtf8("mAddUrlPushButton"));

        gridLayout_5->addWidget(mAddUrlPushButton, 2, 0, 1, 1);

        mExcludeUrlListWidget = new QListWidget(grpUrlExclude);
        mExcludeUrlListWidget->setObjectName(QString::fromUtf8("mExcludeUrlListWidget"));

        gridLayout_5->addWidget(mExcludeUrlListWidget, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 2, 1, 1, 1);


        gridLayout_1->addWidget(grpUrlExclude, 5, 0, 2, 5);


        gridLayout_20->addWidget(grpProxy, 0, 0, 1, 1);

        grpCache = new QGroupBox(scrollAreaWidgetContents_9);
        grpCache->setObjectName(QString::fromUtf8("grpCache"));
        gridLayout_2 = new QGridLayout(grpCache);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_10 = new QLabel(grpCache);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        mCacheDirectory = new QLineEdit(grpCache);
        mCacheDirectory->setObjectName(QString::fromUtf8("mCacheDirectory"));

        gridLayout_2->addWidget(mCacheDirectory, 0, 1, 1, 1);

        mBrowseCacheDirectory = new QPushButton(grpCache);
        mBrowseCacheDirectory->setObjectName(QString::fromUtf8("mBrowseCacheDirectory"));

        gridLayout_2->addWidget(mBrowseCacheDirectory, 0, 2, 1, 1);

        label_11 = new QLabel(grpCache);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        mCacheSize = new QSpinBox(grpCache);
        mCacheSize->setObjectName(QString::fromUtf8("mCacheSize"));

        gridLayout_2->addWidget(mCacheSize, 2, 1, 1, 1);

        mClearCache = new QPushButton(grpCache);
        mClearCache->setObjectName(QString::fromUtf8("mClearCache"));

        gridLayout_2->addWidget(mClearCache, 2, 2, 1, 1);


        gridLayout_20->addWidget(grpCache, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(scrollAreaWidgetContents_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        leWmsSearch = new QLineEdit(scrollAreaWidgetContents_9);
        leWmsSearch->setObjectName(QString::fromUtf8("leWmsSearch"));

        horizontalLayout_2->addWidget(leWmsSearch);


        gridLayout_20->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mNetworkTimeoutLabel = new QLabel(scrollAreaWidgetContents_9);
        mNetworkTimeoutLabel->setObjectName(QString::fromUtf8("mNetworkTimeoutLabel"));

        horizontalLayout->addWidget(mNetworkTimeoutLabel);

        mNetworkTimeoutSpinBox = new QSpinBox(scrollAreaWidgetContents_9);
        mNetworkTimeoutSpinBox->setObjectName(QString::fromUtf8("mNetworkTimeoutSpinBox"));
        mNetworkTimeoutSpinBox->setMaximum(100000000);

        horizontalLayout->addWidget(mNetworkTimeoutSpinBox);


        gridLayout_20->addLayout(horizontalLayout, 3, 0, 1, 1);

        scrollArea_8->setWidget(scrollAreaWidgetContents_9);

        gridLayout_19->addWidget(scrollArea_8, 0, 0, 1, 1);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/network_and_proxy.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage8, icon7, QString());

        gridLayout_3->addWidget(tabWidget, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_16->setBuddy(leProjectGlobalCrs);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, chbAskToSaveProjectChanges);
        QWidget::setTabOrder(chbAskToSaveProjectChanges, chbWarnOldProjectVersion);
        QWidget::setTabOrder(chbWarnOldProjectVersion, pbnSelectionColor);
        QWidget::setTabOrder(pbnSelectionColor, pbnCanvasColor);
        QWidget::setTabOrder(pbnCanvasColor, cmbTheme);
        QWidget::setTabOrder(cmbTheme, cmbSize);
        QWidget::setTabOrder(cmbSize, cmbLegendDoubleClickAction);
        QWidget::setTabOrder(cmbLegendDoubleClickAction, capitaliseCheckBox);
        QWidget::setTabOrder(capitaliseCheckBox, cbxLegendClassifiers);
        QWidget::setTabOrder(cbxLegendClassifiers, cbxCreateRasterLegendIcons);
        QWidget::setTabOrder(cbxCreateRasterLegendIcons, cbxHideSplash);
        QWidget::setTabOrder(cbxHideSplash, cbxShowTips);
        QWidget::setTabOrder(cbxShowTips, cbxIdentifyResultsDocked);
        QWidget::setTabOrder(cbxIdentifyResultsDocked, cbxSnappingOptionsDocked);
        QWidget::setTabOrder(cbxSnappingOptionsDocked, cbxAttributeTableDocked);
        QWidget::setTabOrder(cbxAttributeTableDocked, cbxAddPostgisDC);
        QWidget::setTabOrder(cbxAddPostgisDC, cbxAddNewLayersToCurrentGroup);
        QWidget::setTabOrder(cbxAddNewLayersToCurrentGroup, cmbAttrTableBehaviour);
        QWidget::setTabOrder(cmbAttrTableBehaviour, leNullValue);
        QWidget::setTabOrder(leNullValue, mListPluginPaths);
        QWidget::setTabOrder(mListPluginPaths, mBtnAddPluginPath);
        QWidget::setTabOrder(mBtnAddPluginPath, mBtnRemovePluginPath);
        QWidget::setTabOrder(mBtnRemovePluginPath, buttonBox);
        QWidget::setTabOrder(buttonBox, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, chkAddedVisibility);
        QWidget::setTabOrder(chkAddedVisibility, spinBoxUpdateThreshold);
        QWidget::setTabOrder(spinBoxUpdateThreshold, chkUseRenderCaching);
        QWidget::setTabOrder(chkUseRenderCaching, chkAntiAliasing);
        QWidget::setTabOrder(chkAntiAliasing, chkUseQPixmap);
        QWidget::setTabOrder(chkUseQPixmap, chkUseSymbologyNG);
        QWidget::setTabOrder(chkUseSymbologyNG, mListSVGPaths);
        QWidget::setTabOrder(mListSVGPaths, mBtnAddSVGPath);
        QWidget::setTabOrder(mBtnAddSVGPath, mBtnRemoveSVGPath);
        QWidget::setTabOrder(mBtnRemoveSVGPath, scrollArea);
        QWidget::setTabOrder(scrollArea, cmbIdentifyMode);
        QWidget::setTabOrder(cmbIdentifyMode, cbxAutoFeatureForm);
        QWidget::setTabOrder(cbxAutoFeatureForm, spinBoxIdentifyValue);
        QWidget::setTabOrder(spinBoxIdentifyValue, cmbEllipsoid);
        QWidget::setTabOrder(cmbEllipsoid, pbnMeasureColor);
        QWidget::setTabOrder(pbnMeasureColor, mDecimalPlacesSpinBox);
        QWidget::setTabOrder(mDecimalPlacesSpinBox, mKeepBaseUnitCheckBox);
        QWidget::setTabOrder(mKeepBaseUnitCheckBox, radMeters);
        QWidget::setTabOrder(radMeters, radFeet);
        QWidget::setTabOrder(radFeet, mDegreesRadioButton);
        QWidget::setTabOrder(mDegreesRadioButton, mRadiansRadioButton);
        QWidget::setTabOrder(mRadiansRadioButton, mGonRadioButton);
        QWidget::setTabOrder(mGonRadioButton, cmbWheelAction);
        QWidget::setTabOrder(cmbWheelAction, spinZoomFactor);
        QWidget::setTabOrder(spinZoomFactor, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mOverlayAlgorithmComboBox);
        QWidget::setTabOrder(mOverlayAlgorithmComboBox, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, mLineWidthSpinBox);
        QWidget::setTabOrder(mLineWidthSpinBox, mLineColorToolButton);
        QWidget::setTabOrder(mLineColorToolButton, mDefaultSnapModeComboBox);
        QWidget::setTabOrder(mDefaultSnapModeComboBox, mDefaultSnappingToleranceSpinBox);
        QWidget::setTabOrder(mDefaultSnappingToleranceSpinBox, mDefaultSnappingToleranceComboBox);
        QWidget::setTabOrder(mDefaultSnappingToleranceComboBox, mSearchRadiusVertexEditSpinBox);
        QWidget::setTabOrder(mSearchRadiusVertexEditSpinBox, mSearchRadiusVertexEditComboBox);
        QWidget::setTabOrder(mSearchRadiusVertexEditComboBox, mMarkerStyleComboBox);
        QWidget::setTabOrder(mMarkerStyleComboBox, mMarkerSizeSpinBox);
        QWidget::setTabOrder(mMarkerSizeSpinBox, chkReuseLastValues);
        QWidget::setTabOrder(chkReuseLastValues, chkDisableAttributeValuesDlg);
        QWidget::setTabOrder(chkDisableAttributeValuesDlg, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, pbnSelectOtfProjection);
        QWidget::setTabOrder(pbnSelectOtfProjection, leProjectGlobalCrs);
        QWidget::setTabOrder(leProjectGlobalCrs, chkOtfTransform);
        QWidget::setTabOrder(chkOtfTransform, radPromptForProjection);
        QWidget::setTabOrder(radPromptForProjection, radUseProjectProjection);
        QWidget::setTabOrder(radUseProjectProjection, radUseGlobalProjection);
        QWidget::setTabOrder(radUseGlobalProjection, leLayerGlobalCrs);
        QWidget::setTabOrder(leLayerGlobalCrs, pbnSelectProjection);
        QWidget::setTabOrder(pbnSelectProjection, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, grpLocale);
        QWidget::setTabOrder(grpLocale, cboLocale);
        QWidget::setTabOrder(cboLocale, leProxyHost);
        QWidget::setTabOrder(leProxyHost, leProxyPort);
        QWidget::setTabOrder(leProxyPort, leProxyUser);
        QWidget::setTabOrder(leProxyUser, leProxyPassword);
        QWidget::setTabOrder(leProxyPassword, mProxyTypeComboBox);
        QWidget::setTabOrder(mProxyTypeComboBox, mExcludeUrlListWidget);
        QWidget::setTabOrder(mExcludeUrlListWidget, mAddUrlPushButton);
        QWidget::setTabOrder(mAddUrlPushButton, mRemoveUrlPushButton);
        QWidget::setTabOrder(mRemoveUrlPushButton, mCacheDirectory);
        QWidget::setTabOrder(mCacheDirectory, mBrowseCacheDirectory);
        QWidget::setTabOrder(mBrowseCacheDirectory, mCacheSize);
        QWidget::setTabOrder(mCacheSize, mClearCache);
        QWidget::setTabOrder(mClearCache, leWmsSearch);
        QWidget::setTabOrder(leWmsSearch, mNetworkTimeoutSpinBox);
        QWidget::setTabOrder(mNetworkTimeoutSpinBox, mMarkersOnlyForSelectedCheckBox);
        QWidget::setTabOrder(mMarkersOnlyForSelectedCheckBox, grpProxy);
        QWidget::setTabOrder(grpProxy, scrollArea_8);

        retranslateUi(QgsOptionsBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOptionsBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsOptionsBase, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsOptionsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOptionsBase)
    {
        QgsOptionsBase->setWindowTitle(QApplication::translate("QgsOptionsBase", "Options", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("QgsOptionsBase", "Project files", 0, QApplication::UnicodeUTF8));
        chbAskToSaveProjectChanges->setText(QApplication::translate("QgsOptionsBase", "Prompt to save project changes when required", 0, QApplication::UnicodeUTF8));
        chbWarnOldProjectVersion->setText(QApplication::translate("QgsOptionsBase", "Warn when opening a project file saved with an older version of QGIS", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("QgsOptionsBase", "Default Map Appearance (overridden by project properties)", 0, QApplication::UnicodeUTF8));
        textLabel1_9->setText(QApplication::translate("QgsOptionsBase", "Selection color", 0, QApplication::UnicodeUTF8));
        pbnSelectionColor->setText(QString());
        label->setText(QApplication::translate("QgsOptionsBase", "Background color", 0, QApplication::UnicodeUTF8));
        pbnCanvasColor->setText(QString());
        groupBox->setTitle(QApplication::translate("QgsOptionsBase", "Application", 0, QApplication::UnicodeUTF8));
        textLabel1_4->setText(QApplication::translate("QgsOptionsBase", "Icon theme", 0, QApplication::UnicodeUTF8));
        cmbTheme->clear();
        cmbTheme->insertItems(0, QStringList()
         << QString()
        );
        textLabel1_5->setText(QApplication::translate("QgsOptionsBase", "Icon size", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("QgsOptionsBase", "Double click action in legend", 0, QApplication::UnicodeUTF8));
        cmbLegendDoubleClickAction->clear();
        cmbLegendDoubleClickAction->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "Open layer properties", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Open attribute table", 0, QApplication::UnicodeUTF8)
        );
        capitaliseCheckBox->setText(QApplication::translate("QgsOptionsBase", "Capitalise layer names in legend", 0, QApplication::UnicodeUTF8));
        cbxLegendClassifiers->setText(QApplication::translate("QgsOptionsBase", "Display classification attribute names in legend", 0, QApplication::UnicodeUTF8));
        cbxCreateRasterLegendIcons->setText(QApplication::translate("QgsOptionsBase", "Create raster icons in legend", 0, QApplication::UnicodeUTF8));
        cbxHideSplash->setText(QApplication::translate("QgsOptionsBase", "Hide splash screen at startup", 0, QApplication::UnicodeUTF8));
        cbxShowTips->setText(QApplication::translate("QgsOptionsBase", "Show tips at start up", 0, QApplication::UnicodeUTF8));
        cbxIdentifyResultsDocked->setText(QApplication::translate("QgsOptionsBase", "Open identify results in a dock window (QGIS restart required)", 0, QApplication::UnicodeUTF8));
        cbxSnappingOptionsDocked->setText(QApplication::translate("QgsOptionsBase", "Open snapping options  in a dock window (QGIS restart required)", 0, QApplication::UnicodeUTF8));
        cbxAttributeTableDocked->setText(QApplication::translate("QgsOptionsBase", "Open attribute table in a dock window (QGIS restart required)", 0, QApplication::UnicodeUTF8));
        cbxAddPostgisDC->setText(QApplication::translate("QgsOptionsBase", "Add PostGIS layers with double click and select in extended mode", 0, QApplication::UnicodeUTF8));
        cbxAddNewLayersToCurrentGroup->setText(QApplication::translate("QgsOptionsBase", "Add new layers to selected group", 0, QApplication::UnicodeUTF8));
        textLabel1_7->setText(QApplication::translate("QgsOptionsBase", "Attribute table behaviour", 0, QApplication::UnicodeUTF8));
        cmbAttrTableBehaviour->clear();
        cmbAttrTableBehaviour->insertItems(0, QStringList()
         << QString()
        );
        label_14->setText(QApplication::translate("QgsOptionsBase", "Representation for NULL values", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("QgsOptionsBase", "Plugin paths", 0, QApplication::UnicodeUTF8));
        mSVGLabel_2->setText(QApplication::translate("QgsOptionsBase", "Path(s) to search for additional C++ plugins libraries", 0, QApplication::UnicodeUTF8));
        mBtnAddPluginPath->setText(QApplication::translate("QgsOptionsBase", "Add", 0, QApplication::UnicodeUTF8));
        mBtnRemovePluginPath->setText(QApplication::translate("QgsOptionsBase", "Remove", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QApplication::translate("QgsOptionsBase", "General", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("QgsOptionsBase", "Rendering behavior", 0, QApplication::UnicodeUTF8));
        chkAddedVisibility->setText(QApplication::translate("QgsOptionsBase", "By default new la&yers added to the map should be displayed", 0, QApplication::UnicodeUTF8));
        textLabel1_6->setText(QApplication::translate("QgsOptionsBase", "Number of features to draw before updating the display", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBoxUpdateThreshold->setToolTip(QApplication::translate("QgsOptionsBase", "Map display will be updated (drawn) after this many features have been read from the data source", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textLabel3->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Use zero to prevent display updates until all features have been rendered", 0, QApplication::UnicodeUTF8));
        chkUseRenderCaching->setText(QApplication::translate("QgsOptionsBase", "Use render caching where possible to speed up redraws", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("QgsOptionsBase", "Rendering quality", 0, QApplication::UnicodeUTF8));
        chkAntiAliasing->setText(QApplication::translate("QgsOptionsBase", "Make lines appear less jagged at the expense of some drawing performance", 0, QApplication::UnicodeUTF8));
        chkUseQPixmap->setText(QApplication::translate("QgsOptionsBase", "Fix problems with incorrectly filled polygons", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QgsOptionsBase", "Compatibility", 0, QApplication::UnicodeUTF8));
        chkUseSymbologyNG->setText(QApplication::translate("QgsOptionsBase", "Use new generation symbology for rendering", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsOptionsBase", "SVG paths", 0, QApplication::UnicodeUTF8));
        mSVGLabel->setText(QApplication::translate("QgsOptionsBase", "Path(s) to search for Scalable Vector Graphic (SVG) symbols", 0, QApplication::UnicodeUTF8));
        mBtnAddSVGPath->setText(QApplication::translate("QgsOptionsBase", "Add", 0, QApplication::UnicodeUTF8));
        mBtnRemoveSVGPath->setText(QApplication::translate("QgsOptionsBase", "Remove", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QApplication::translate("QgsOptionsBase", "Rendering", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("QgsOptionsBase", "Identify", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Specify the search radius as a percentage of the map width", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("QgsOptionsBase", "Search radius for identifying features and displaying map tips", 0, QApplication::UnicodeUTF8));
        spinBoxIdentifyValue->setSuffix(QApplication::translate("QgsOptionsBase", "%", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsOptionsBase", "Mode", 0, QApplication::UnicodeUTF8));
        cbxAutoFeatureForm->setText(QApplication::translate("QgsOptionsBase", "Open feature form, if a single feature is identified", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("QgsOptionsBase", "Measure tool", 0, QApplication::UnicodeUTF8));
        textLabel1_8->setText(QApplication::translate("QgsOptionsBase", "Ellipsoid for distance calculations", 0, QApplication::UnicodeUTF8));
        textLabel1_10->setText(QApplication::translate("QgsOptionsBase", "Rubberband color", 0, QApplication::UnicodeUTF8));
        pbnMeasureColor->setText(QString());
        textLabel1_11->setText(QApplication::translate("QgsOptionsBase", "Preferred measurements units", 0, QApplication::UnicodeUTF8));
        radMeters->setText(QApplication::translate("QgsOptionsBase", "Meters", 0, QApplication::UnicodeUTF8));
        radFeet->setText(QApplication::translate("QgsOptionsBase", "Feet", 0, QApplication::UnicodeUTF8));
        mAngleUnitsLabel->setText(QApplication::translate("QgsOptionsBase", "Preferred angle units", 0, QApplication::UnicodeUTF8));
        mDegreesRadioButton->setText(QApplication::translate("QgsOptionsBase", "Degrees", 0, QApplication::UnicodeUTF8));
        mRadiansRadioButton->setText(QApplication::translate("QgsOptionsBase", "Radians", 0, QApplication::UnicodeUTF8));
        mGonRadioButton->setText(QApplication::translate("QgsOptionsBase", "Gon", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QgsOptionsBase", "Decimal places", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QgsOptionsBase", "Keep base unit", 0, QApplication::UnicodeUTF8));
        mKeepBaseUnitCheckBox->setText(QString());
        groupBox_10->setTitle(QApplication::translate("QgsOptionsBase", "Panning and zooming", 0, QApplication::UnicodeUTF8));
        cmbWheelAction->clear();
        cmbWheelAction->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "Zoom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Zoom and recenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Zoom to mouse cursor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Nothing", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("QgsOptionsBase", "Zoom factor", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsOptionsBase", "Mouse wheel action", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage3), QApplication::translate("QgsOptionsBase", "Map tools", 0, QApplication::UnicodeUTF8));
        mPositionGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Position", 0, QApplication::UnicodeUTF8));
        mAlgorithmLabel->setText(QApplication::translate("QgsOptionsBase", "Placement algorithm", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage4), QApplication::translate("QgsOptionsBase", "Overlays", 0, QApplication::UnicodeUTF8));
        mRubberBandGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Rubberband", 0, QApplication::UnicodeUTF8));
        mLineWidthTextLabel->setText(QApplication::translate("QgsOptionsBase", "Line width", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLineWidthSpinBox->setToolTip(QApplication::translate("QgsOptionsBase", "Line width in pixels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLineColorTextLabel->setText(QApplication::translate("QgsOptionsBase", "Line color", 0, QApplication::UnicodeUTF8));
        mLineColorToolButton->setText(QString());
        mSnappingGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Snapping", 0, QApplication::UnicodeUTF8));
        mDefaultSnapModeLabel->setText(QApplication::translate("QgsOptionsBase", "Default snap mode", 0, QApplication::UnicodeUTF8));
        mDefaultSnappingToleranceTextLabel->setText(QApplication::translate("QgsOptionsBase", "Default snapping tolerance", 0, QApplication::UnicodeUTF8));
        mVertexSearchRadiusVertexEditLabel->setText(QApplication::translate("QgsOptionsBase", "Search radius for vertex edits", 0, QApplication::UnicodeUTF8));
        mDefaultSnappingToleranceComboBox->clear();
        mDefaultSnappingToleranceComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "map units", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "pixels", 0, QApplication::UnicodeUTF8)
        );
        mSearchRadiusVertexEditComboBox->clear();
        mSearchRadiusVertexEditComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "map units", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "pixels", 0, QApplication::UnicodeUTF8)
        );
        mVertexMarkerGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Vertex markers", 0, QApplication::UnicodeUTF8));
        mMarkersOnlyForSelectedCheckBox->setText(QApplication::translate("QgsOptionsBase", "Show markers only for selected features", 0, QApplication::UnicodeUTF8));
        mMarkerStyleLabel->setText(QApplication::translate("QgsOptionsBase", "Marker style", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsOptionsBase", "Marker size", 0, QApplication::UnicodeUTF8));
        mEnterAttributeValuesGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Enter attribute values", 0, QApplication::UnicodeUTF8));
        chkReuseLastValues->setText(QApplication::translate("QgsOptionsBase", "Reuse last entered attribute values", 0, QApplication::UnicodeUTF8));
        chkDisableAttributeValuesDlg->setText(QApplication::translate("QgsOptionsBase", "Suppress attributes pop-up windows after each created feature", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage5), QApplication::translate("QgsOptionsBase", "Digitizing", 0, QApplication::UnicodeUTF8));
        grpOtfTransform->setTitle(QApplication::translate("QgsOptionsBase", "Default Coordinate Reference System for new projects", 0, QApplication::UnicodeUTF8));
        chkOtfTransform->setText(QApplication::translate("QgsOptionsBase", "Enable 'on the &fly' reprojection by default", 0, QApplication::UnicodeUTF8));
        pbnSelectOtfProjection->setText(QApplication::translate("QgsOptionsBase", "Select...", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("QgsOptionsBase", "Always start new projects with this CRS", 0, QApplication::UnicodeUTF8));
        grpProjectionBehaviour->setTitle(QApplication::translate("QgsOptionsBase", "Coordinate Reference System for new layers", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsOptionsBase", "When a new layer is created, or when a layer is loaded that has no Coordinate Reference System (CRS)", 0, QApplication::UnicodeUTF8));
        radPromptForProjection->setText(QApplication::translate("QgsOptionsBase", "Prompt for &CRS", 0, QApplication::UnicodeUTF8));
        radUseProjectProjection->setText(QApplication::translate("QgsOptionsBase", "Use &project CRS", 0, QApplication::UnicodeUTF8));
        radUseGlobalProjection->setText(QApplication::translate("QgsOptionsBase", "Use default CRS displa&yed below", 0, QApplication::UnicodeUTF8));
        pbnSelectProjection->setText(QApplication::translate("QgsOptionsBase", "Select...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage6), QApplication::translate("QgsOptionsBase", "CRS", 0, QApplication::UnicodeUTF8));
        grpLocale->setTitle(QApplication::translate("QgsOptionsBase", "Override system locale", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsOptionsBase", "Locale to use instead", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Enabling / changing overide on local requires an application restart", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("QgsOptionsBase", "Additional Info", 0, QApplication::UnicodeUTF8));
        lblSystemLocale->setText(QApplication::translate("QgsOptionsBase", "Detected active locale on your system:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage7), QApplication::translate("QgsOptionsBase", "Locale", 0, QApplication::UnicodeUTF8));
        grpProxy->setTitle(QApplication::translate("QgsOptionsBase", "Use proxy for web access", 0, QApplication::UnicodeUTF8));
        lblProxyHost->setText(QApplication::translate("QgsOptionsBase", "Host", 0, QApplication::UnicodeUTF8));
        lblProxyPort->setText(QApplication::translate("QgsOptionsBase", "Port", 0, QApplication::UnicodeUTF8));
        lblUser->setText(QApplication::translate("QgsOptionsBase", "User", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leProxyUser->setToolTip(QApplication::translate("QgsOptionsBase", "Leave this blank if no proxy username / password are required", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblPassword->setText(QApplication::translate("QgsOptionsBase", "Password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leProxyPassword->setToolTip(QApplication::translate("QgsOptionsBase", "Leave this blank if no proxy username / password are required", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mTypeLabel->setText(QApplication::translate("QgsOptionsBase", "Proxy type", 0, QApplication::UnicodeUTF8));
        grpUrlExclude->setTitle(QApplication::translate("QgsOptionsBase", "Exclude URLs (starting with)", 0, QApplication::UnicodeUTF8));
        mRemoveUrlPushButton->setText(QApplication::translate("QgsOptionsBase", "Remove", 0, QApplication::UnicodeUTF8));
        mAddUrlPushButton->setText(QApplication::translate("QgsOptionsBase", "Add", 0, QApplication::UnicodeUTF8));
        grpCache->setTitle(QApplication::translate("QgsOptionsBase", "Cache settings", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QgsOptionsBase", "Directory", 0, QApplication::UnicodeUTF8));
        mBrowseCacheDirectory->setText(QApplication::translate("QgsOptionsBase", "...", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QgsOptionsBase", "Size", 0, QApplication::UnicodeUTF8));
        mClearCache->setText(QApplication::translate("QgsOptionsBase", "Clear", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsOptionsBase", "WMS search address", 0, QApplication::UnicodeUTF8));
        mNetworkTimeoutLabel->setText(QApplication::translate("QgsOptionsBase", "Timeout for network requests (ms)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage8), QApplication::translate("QgsOptionsBase", "Network", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsOptionsBase);
    } // retranslateUi

};

namespace Ui {
    class QgsOptionsBase: public Ui_QgsOptionsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOPTIONSBASE_H
