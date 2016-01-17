/********************************************************************************
** Form generated from reading ui file 'qgsvectorlayerpropertiesbase.ui'
**
** Created: Tue Mar 13 10:23:41 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERPROPERTIESBASE_H
#define UI_QGSVECTORLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerPropertiesBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbnLoadDefaultStyle;
    QPushButton *pbnSaveDefaultStyle;
    QPushButton *pbnLoadStyle;
    QPushButton *pbnSaveStyleAs;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QGridLayout *gridLayout_4;
    QLabel *legendtypelabel;
    QComboBox *legendtypecombobox;
    QLabel *lblTransparencyPercent;
    QSlider *sliderTransparency;
    QStackedWidget *widgetStackRenderers;
    QWidget *page;
    QWidget *page_2;
    QPushButton *btnUseNewSymbology;
    QWidget *tabWidgetPage2;
    QGridLayout *gridLayout_5;
    QCheckBox *labelCheckBox;
    QFrame *labelOptionsFrame;
    QWidget *tabWidgetPage3;
    QGridLayout *gridLayout_6;
    QToolButton *mAddAttributeButton;
    QToolButton *mDeleteAttributeButton;
    QToolButton *mToggleEditingButton;
    QToolButton *mCalculateFieldButton;
    QSpacerItem *spacerItem;
    QTableWidget *tblAttributes;
    QWidget *tabWidgetPage4;
    QGridLayout *gridLayout_7;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_3;
    QGroupBox *indexGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *textLabel3;
    QLineEdit *txtDisplayName;
    QLabel *textLabel2;
    QComboBox *displayFieldComboBox;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leEditForm;
    QToolButton *pbnSelectEditForm;
    QPushButton *pbnIndex;
    QLineEdit *leSpatialRefSys;
    QLineEdit *leEditFormInit;
    QLabel *label_3;
    QPushButton *pbnChangeSpatialRefSys;
    QGroupBox *chkUseScaleDependentRendering;
    QGridLayout *gridLayout1;
    QLabel *textLabel1_2_2;
    QLabel *textLabel1;
    QLineEdit *leMinimumScale;
    QLineEdit *leMaximumScale;
    QGroupBox *grpSubset;
    QGridLayout *gridLayout2;
    QTextEdit *txtSubsetSQL;
    QSpacerItem *spacerItem1;
    QPushButton *pbnQueryBuilder;
    QGroupBox *grpProviderOptions;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *cboProviderEncoding;
    QWidget *tabWidgetPage5;
    QGridLayout *gridLayout_8;
    QTextEdit *teMetadata;
    QWidget *tabWidgetPage6;
    QGridLayout *gridLayout_9;
    QFrame *actionOptionsFrame;
    QWidget *mJoinPage;
    QGridLayout *gridLayout_10;
    QPushButton *mButtonAddJoin;
    QPushButton *mButtonRemoveJoin;
    QSpacerItem *horizontalSpacer;
    QTreeWidget *mJoinTreeWidget;
    QWidget *mDiagramPage;
    QGridLayout *gridLayout_14;
    QCheckBox *mDisplayDiagramsCheckBox;
    QHBoxLayout *_2;
    QLabel *mTypeLabel;
    QComboBox *mDiagramTypeComboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mPriorityLabel;
    QLabel *mPriorityLowLabel;
    QSlider *mPrioritySlider;
    QLabel *mPriorityHighLabel;
    QGroupBox *mAppearanceGroupBox;
    QGridLayout *gridLayout_13;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *mBackgroundColorLabel;
    QgsColorButton *mBackgroundColorButton;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mPenColorLabel;
    QgsColorButton *mDiagramPenColorButton;
    QHBoxLayout *horizontalLayout_16;
    QLabel *mPenWidthLabel;
    QDoubleSpinBox *mPenWidthSpinBox;
    QPushButton *mDiagramFontButton;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *mScaleDependentDiagramVisibilityCheckBox;
    QLabel *mMinimumDiagramScaleLabel;
    QLineEdit *mMinimumDiagramScaleLineEdit;
    QLabel *mMaximumDiagramScaleLabel;
    QLineEdit *mMaximumDiagramScaleLineEdit;
    QGroupBox *mSizeGroupBox;
    QGridLayout *gridLayout_12;
    QCheckBox *mFixedSizeCheckBox;
    QDoubleSpinBox *mDiagramSizeSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mLinearlyScalingLabel;
    QHBoxLayout *mLinearlyScalingLayout;
    QLabel *mSizeAttributeLabel;
    QComboBox *mSizeAttributeComboBox;
    QPushButton *mFindMaximumValueButton;
    QLineEdit *mValueLineEdit;
    QLabel *mSizeLabel;
    QSpinBox *mSizeSpinBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *mDiagramUnitsLabel;
    QComboBox *mDiagramUnitComboBox;
    QGroupBox *mPlacementGroupBox;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *mPlacementLabel;
    QComboBox *mPlacementComboBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mLineOptionsLabel;
    QComboBox *mLineOptionsComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mDiagramDistanceLabel;
    QDoubleSpinBox *mDiagramDistanceSpinBox;
    QLabel *mDataDefinedPositionLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mXPosColLabel;
    QComboBox *mDataDefinedXComboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mYPosColLabel;
    QComboBox *mDataDefinedYComboBox;
    QLabel *mAttributesLabel;
    QComboBox *mDiagramAttributesComboBox;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mRemoveCategoryPushButton;
    QPushButton *mAddCategoryPushButton;
    QTreeWidget *mDiagramAttributesTreeWidget;

    void setupUi(QDialog *QgsVectorLayerPropertiesBase)
    {
        if (QgsVectorLayerPropertiesBase->objectName().isEmpty())
            QgsVectorLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsVectorLayerPropertiesBase"));
        QgsVectorLayerPropertiesBase->resize(777, 672);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/qgis-icon-16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QgsVectorLayerPropertiesBase->setWindowIcon(icon);
        QgsVectorLayerPropertiesBase->setModal(true);
        gridLayout = new QGridLayout(QgsVectorLayerPropertiesBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbnLoadDefaultStyle = new QPushButton(QgsVectorLayerPropertiesBase);
        pbnLoadDefaultStyle->setObjectName(QString::fromUtf8("pbnLoadDefaultStyle"));

        horizontalLayout->addWidget(pbnLoadDefaultStyle);

        pbnSaveDefaultStyle = new QPushButton(QgsVectorLayerPropertiesBase);
        pbnSaveDefaultStyle->setObjectName(QString::fromUtf8("pbnSaveDefaultStyle"));

        horizontalLayout->addWidget(pbnSaveDefaultStyle);

        pbnLoadStyle = new QPushButton(QgsVectorLayerPropertiesBase);
        pbnLoadStyle->setObjectName(QString::fromUtf8("pbnLoadStyle"));

        horizontalLayout->addWidget(pbnLoadStyle);

        pbnSaveStyleAs = new QPushButton(QgsVectorLayerPropertiesBase);
        pbnSaveStyleAs->setObjectName(QString::fromUtf8("pbnSaveStyleAs"));

        horizontalLayout->addWidget(pbnSaveStyleAs);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsVectorLayerPropertiesBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        tabWidget = new QTabWidget(QgsVectorLayerPropertiesBase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setIconSize(QSize(22, 22));
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QString::fromUtf8("tabWidgetPage1"));
        gridLayout_4 = new QGridLayout(tabWidgetPage1);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        legendtypelabel = new QLabel(tabWidgetPage1);
        legendtypelabel->setObjectName(QString::fromUtf8("legendtypelabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(legendtypelabel->sizePolicy().hasHeightForWidth());
        legendtypelabel->setSizePolicy(sizePolicy);
        legendtypelabel->setMaximumSize(QSize(32767, 22));

        gridLayout_4->addWidget(legendtypelabel, 0, 0, 1, 1);

        legendtypecombobox = new QComboBox(tabWidgetPage1);
        legendtypecombobox->setObjectName(QString::fromUtf8("legendtypecombobox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(legendtypecombobox->sizePolicy().hasHeightForWidth());
        legendtypecombobox->setSizePolicy(sizePolicy1);
        legendtypecombobox->setMinimumSize(QSize(0, 26));
        legendtypecombobox->setMaximumSize(QSize(32767, 22));

        gridLayout_4->addWidget(legendtypecombobox, 0, 1, 1, 1);

        lblTransparencyPercent = new QLabel(tabWidgetPage1);
        lblTransparencyPercent->setObjectName(QString::fromUtf8("lblTransparencyPercent"));
        sizePolicy.setHeightForWidth(lblTransparencyPercent->sizePolicy().hasHeightForWidth());
        lblTransparencyPercent->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(lblTransparencyPercent, 0, 2, 1, 1);

        sliderTransparency = new QSlider(tabWidgetPage1);
        sliderTransparency->setObjectName(QString::fromUtf8("sliderTransparency"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sliderTransparency->sizePolicy().hasHeightForWidth());
        sliderTransparency->setSizePolicy(sizePolicy2);
        sliderTransparency->setMaximum(255);
        sliderTransparency->setValue(0);
        sliderTransparency->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(sliderTransparency, 0, 3, 1, 1);

        widgetStackRenderers = new QStackedWidget(tabWidgetPage1);
        widgetStackRenderers->setObjectName(QString::fromUtf8("widgetStackRenderers"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widgetStackRenderers->sizePolicy().hasHeightForWidth());
        widgetStackRenderers->setSizePolicy(sizePolicy3);
        widgetStackRenderers->setFrameShape(QFrame::NoFrame);
        widgetStackRenderers->setFrameShadow(QFrame::Sunken);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        widgetStackRenderers->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        widgetStackRenderers->addWidget(page_2);

        gridLayout_4->addWidget(widgetStackRenderers, 1, 0, 1, 5);

        btnUseNewSymbology = new QPushButton(tabWidgetPage1);
        btnUseNewSymbology->setObjectName(QString::fromUtf8("btnUseNewSymbology"));

        gridLayout_4->addWidget(btnUseNewSymbology, 0, 4, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage1, icon1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QString::fromUtf8("tabWidgetPage2"));
        gridLayout_5 = new QGridLayout(tabWidgetPage2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        labelCheckBox = new QCheckBox(tabWidgetPage2);
        labelCheckBox->setObjectName(QString::fromUtf8("labelCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelCheckBox->sizePolicy().hasHeightForWidth());
        labelCheckBox->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(labelCheckBox, 0, 0, 1, 1);

        labelOptionsFrame = new QFrame(tabWidgetPage2);
        labelOptionsFrame->setObjectName(QString::fromUtf8("labelOptionsFrame"));
        labelOptionsFrame->setEnabled(false);
        sizePolicy3.setHeightForWidth(labelOptionsFrame->sizePolicy().hasHeightForWidth());
        labelOptionsFrame->setSizePolicy(sizePolicy3);
        labelOptionsFrame->setFrameShape(QFrame::NoFrame);
        labelOptionsFrame->setFrameShadow(QFrame::Plain);

        gridLayout_5->addWidget(labelOptionsFrame, 1, 0, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labels.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage2, icon2, QString());
        tabWidgetPage3 = new QWidget();
        tabWidgetPage3->setObjectName(QString::fromUtf8("tabWidgetPage3"));
        gridLayout_6 = new QGridLayout(tabWidgetPage3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mAddAttributeButton = new QToolButton(tabWidgetPage3);
        mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy5);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../../.designer/xpm/new_attribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeButton->setIcon(icon3);

        gridLayout_6->addWidget(mAddAttributeButton, 0, 0, 1, 1);

        mDeleteAttributeButton = new QToolButton(tabWidgetPage3);
        mDeleteAttributeButton->setObjectName(QString::fromUtf8("mDeleteAttributeButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../../../.designer/xpm/delete_attribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteAttributeButton->setIcon(icon4);

        gridLayout_6->addWidget(mDeleteAttributeButton, 0, 1, 1, 1);

        mToggleEditingButton = new QToolButton(tabWidgetPage3);
        mToggleEditingButton->setObjectName(QString::fromUtf8("mToggleEditingButton"));
        mToggleEditingButton->setCheckable(true);

        gridLayout_6->addWidget(mToggleEditingButton, 0, 2, 1, 1);

        mCalculateFieldButton = new QToolButton(tabWidgetPage3);
        mCalculateFieldButton->setObjectName(QString::fromUtf8("mCalculateFieldButton"));
        mCalculateFieldButton->setCheckable(false);

        gridLayout_6->addWidget(mCalculateFieldButton, 0, 3, 1, 1);

        spacerItem = new QSpacerItem(658, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(spacerItem, 0, 4, 1, 1);

        tblAttributes = new QTableWidget(tabWidgetPage3);
        tblAttributes->setObjectName(QString::fromUtf8("tblAttributes"));
        sizePolicy3.setHeightForWidth(tblAttributes->sizePolicy().hasHeightForWidth());
        tblAttributes->setSizePolicy(sizePolicy3);
        tblAttributes->setMinimumSize(QSize(256, 0));
        tblAttributes->setSortingEnabled(false);

        gridLayout_6->addWidget(tblAttributes, 1, 0, 1, 5);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/attributes.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage3, icon5, QString());
        tabWidgetPage4 = new QWidget();
        tabWidgetPage4->setObjectName(QString::fromUtf8("tabWidgetPage4"));
        gridLayout_7 = new QGridLayout(tabWidgetPage4);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setMargin(0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        scrollArea_2 = new QScrollArea(tabWidgetPage4);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setFrameShadow(QFrame::Plain);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 755, 542));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        indexGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        indexGroupBox->setObjectName(QString::fromUtf8("indexGroupBox"));
        gridLayout_2 = new QGridLayout(indexGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textLabel3 = new QLabel(indexGroupBox);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout_2->addWidget(textLabel3, 0, 0, 1, 1);

        txtDisplayName = new QLineEdit(indexGroupBox);
        txtDisplayName->setObjectName(QString::fromUtf8("txtDisplayName"));

        gridLayout_2->addWidget(txtDisplayName, 0, 1, 1, 1);

        textLabel2 = new QLabel(indexGroupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout_2->addWidget(textLabel2, 0, 2, 1, 1);

        displayFieldComboBox = new QComboBox(indexGroupBox);
        displayFieldComboBox->setObjectName(QString::fromUtf8("displayFieldComboBox"));

        gridLayout_2->addWidget(displayFieldComboBox, 0, 3, 1, 1);

        label = new QLabel(indexGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leEditForm = new QLineEdit(indexGroupBox);
        leEditForm->setObjectName(QString::fromUtf8("leEditForm"));

        horizontalLayout_2->addWidget(leEditForm);

        pbnSelectEditForm = new QToolButton(indexGroupBox);
        pbnSelectEditForm->setObjectName(QString::fromUtf8("pbnSelectEditForm"));

        horizontalLayout_2->addWidget(pbnSelectEditForm);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 2);

        pbnIndex = new QPushButton(indexGroupBox);
        pbnIndex->setObjectName(QString::fromUtf8("pbnIndex"));

        gridLayout_2->addWidget(pbnIndex, 1, 3, 1, 1);

        leSpatialRefSys = new QLineEdit(indexGroupBox);
        leSpatialRefSys->setObjectName(QString::fromUtf8("leSpatialRefSys"));
        leSpatialRefSys->setReadOnly(true);

        gridLayout_2->addWidget(leSpatialRefSys, 3, 0, 1, 3);

        leEditFormInit = new QLineEdit(indexGroupBox);
        leEditFormInit->setObjectName(QString::fromUtf8("leEditFormInit"));

        gridLayout_2->addWidget(leEditFormInit, 2, 1, 1, 3);

        label_3 = new QLabel(indexGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        pbnChangeSpatialRefSys = new QPushButton(indexGroupBox);
        pbnChangeSpatialRefSys->setObjectName(QString::fromUtf8("pbnChangeSpatialRefSys"));

        gridLayout_2->addWidget(pbnChangeSpatialRefSys, 3, 3, 1, 1);


        gridLayout_3->addWidget(indexGroupBox, 0, 0, 1, 1);

        chkUseScaleDependentRendering = new QGroupBox(scrollAreaWidgetContents_2);
        chkUseScaleDependentRendering->setObjectName(QString::fromUtf8("chkUseScaleDependentRendering"));
        chkUseScaleDependentRendering->setCheckable(true);
        gridLayout1 = new QGridLayout(chkUseScaleDependentRendering);
        gridLayout1->setSpacing(6);
        gridLayout1->setMargin(11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel1_2_2 = new QLabel(chkUseScaleDependentRendering);
        textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));

        gridLayout1->addWidget(textLabel1_2_2, 0, 2, 1, 1);

        textLabel1 = new QLabel(chkUseScaleDependentRendering);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

        leMinimumScale = new QLineEdit(chkUseScaleDependentRendering);
        leMinimumScale->setObjectName(QString::fromUtf8("leMinimumScale"));

        gridLayout1->addWidget(leMinimumScale, 0, 1, 1, 1);

        leMaximumScale = new QLineEdit(chkUseScaleDependentRendering);
        leMaximumScale->setObjectName(QString::fromUtf8("leMaximumScale"));

        gridLayout1->addWidget(leMaximumScale, 0, 3, 1, 1);


        gridLayout_3->addWidget(chkUseScaleDependentRendering, 1, 0, 1, 1);

        grpSubset = new QGroupBox(scrollAreaWidgetContents_2);
        grpSubset->setObjectName(QString::fromUtf8("grpSubset"));
        gridLayout2 = new QGridLayout(grpSubset);
        gridLayout2->setSpacing(6);
        gridLayout2->setMargin(11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        txtSubsetSQL = new QTextEdit(grpSubset);
        txtSubsetSQL->setObjectName(QString::fromUtf8("txtSubsetSQL"));
        txtSubsetSQL->setEnabled(false);
        txtSubsetSQL->setAcceptDrops(false);
        txtSubsetSQL->setAcceptRichText(false);

        gridLayout2->addWidget(txtSubsetSQL, 0, 0, 1, 2);

        spacerItem1 = new QSpacerItem(480, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 1, 0, 1, 1);

        pbnQueryBuilder = new QPushButton(grpSubset);
        pbnQueryBuilder->setObjectName(QString::fromUtf8("pbnQueryBuilder"));

        gridLayout2->addWidget(pbnQueryBuilder, 1, 1, 1, 1);


        gridLayout_3->addWidget(grpSubset, 3, 0, 1, 1);

        grpProviderOptions = new QGroupBox(scrollAreaWidgetContents_2);
        grpProviderOptions->setObjectName(QString::fromUtf8("grpProviderOptions"));
        formLayout = new QFormLayout(grpProviderOptions);
        formLayout->setSpacing(6);
        formLayout->setMargin(11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(grpProviderOptions);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        cboProviderEncoding = new QComboBox(grpProviderOptions);
        cboProviderEncoding->setObjectName(QString::fromUtf8("cboProviderEncoding"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cboProviderEncoding);


        gridLayout_3->addWidget(grpProviderOptions, 2, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_7->addWidget(scrollArea_2, 0, 0, 1, 1);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage4, icon6, QString());
        tabWidgetPage5 = new QWidget();
        tabWidgetPage5->setObjectName(QString::fromUtf8("tabWidgetPage5"));
        gridLayout_8 = new QGridLayout(tabWidgetPage5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setMargin(11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        teMetadata = new QTextEdit(tabWidgetPage5);
        teMetadata->setObjectName(QString::fromUtf8("teMetadata"));
        teMetadata->setLineWidth(2);
        teMetadata->setReadOnly(true);

        gridLayout_8->addWidget(teMetadata, 0, 0, 1, 1);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage5, icon7, QString());
        tabWidgetPage6 = new QWidget();
        tabWidgetPage6->setObjectName(QString::fromUtf8("tabWidgetPage6"));
        gridLayout_9 = new QGridLayout(tabWidgetPage6);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setMargin(11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        actionOptionsFrame = new QFrame(tabWidgetPage6);
        actionOptionsFrame->setObjectName(QString::fromUtf8("actionOptionsFrame"));
        sizePolicy3.setHeightForWidth(actionOptionsFrame->sizePolicy().hasHeightForWidth());
        actionOptionsFrame->setSizePolicy(sizePolicy3);
        actionOptionsFrame->setFrameShape(QFrame::NoFrame);
        actionOptionsFrame->setFrameShadow(QFrame::Raised);

        gridLayout_9->addWidget(actionOptionsFrame, 0, 0, 1, 1);

        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/action.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWidgetPage6, icon8, QString());
        mJoinPage = new QWidget();
        mJoinPage->setObjectName(QString::fromUtf8("mJoinPage"));
        gridLayout_10 = new QGridLayout(mJoinPage);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setMargin(11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        mButtonAddJoin = new QPushButton(mJoinPage);
        mButtonAddJoin->setObjectName(QString::fromUtf8("mButtonAddJoin"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddJoin->setIcon(icon9);

        gridLayout_10->addWidget(mButtonAddJoin, 0, 0, 1, 1);

        mButtonRemoveJoin = new QPushButton(mJoinPage);
        mButtonRemoveJoin->setObjectName(QString::fromUtf8("mButtonRemoveJoin"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveJoin->setIcon(icon10);

        gridLayout_10->addWidget(mButtonRemoveJoin, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(354, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 2, 1, 1);

        mJoinTreeWidget = new QTreeWidget(mJoinPage);
        mJoinTreeWidget->setObjectName(QString::fromUtf8("mJoinTreeWidget"));
        mJoinTreeWidget->setColumnCount(3);

        gridLayout_10->addWidget(mJoinTreeWidget, 1, 0, 1, 3);

        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/join.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(mJoinPage, icon11, QString());
        mDiagramPage = new QWidget();
        mDiagramPage->setObjectName(QString::fromUtf8("mDiagramPage"));
        gridLayout_14 = new QGridLayout(mDiagramPage);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setMargin(11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        mDisplayDiagramsCheckBox = new QCheckBox(mDiagramPage);
        mDisplayDiagramsCheckBox->setObjectName(QString::fromUtf8("mDisplayDiagramsCheckBox"));

        gridLayout_14->addWidget(mDisplayDiagramsCheckBox, 0, 0, 1, 2);

        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setMargin(0);
        _2->setObjectName(QString::fromUtf8("_2"));
        mTypeLabel = new QLabel(mDiagramPage);
        mTypeLabel->setObjectName(QString::fromUtf8("mTypeLabel"));

        _2->addWidget(mTypeLabel);

        mDiagramTypeComboBox = new QComboBox(mDiagramPage);
        mDiagramTypeComboBox->setObjectName(QString::fromUtf8("mDiagramTypeComboBox"));

        _2->addWidget(mDiagramTypeComboBox);


        gridLayout_14->addLayout(_2, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mPriorityLabel = new QLabel(mDiagramPage);
        mPriorityLabel->setObjectName(QString::fromUtf8("mPriorityLabel"));

        horizontalLayout_4->addWidget(mPriorityLabel);

        mPriorityLowLabel = new QLabel(mDiagramPage);
        mPriorityLowLabel->setObjectName(QString::fromUtf8("mPriorityLowLabel"));

        horizontalLayout_4->addWidget(mPriorityLowLabel);

        mPrioritySlider = new QSlider(mDiagramPage);
        mPrioritySlider->setObjectName(QString::fromUtf8("mPrioritySlider"));
        mPrioritySlider->setMaximum(10);
        mPrioritySlider->setOrientation(Qt::Horizontal);
        mPrioritySlider->setInvertedAppearance(false);
        mPrioritySlider->setInvertedControls(false);
        mPrioritySlider->setTickPosition(QSlider::TicksBelow);
        mPrioritySlider->setTickInterval(1);

        horizontalLayout_4->addWidget(mPrioritySlider);

        mPriorityHighLabel = new QLabel(mDiagramPage);
        mPriorityHighLabel->setObjectName(QString::fromUtf8("mPriorityHighLabel"));

        horizontalLayout_4->addWidget(mPriorityHighLabel);


        gridLayout_14->addLayout(horizontalLayout_4, 0, 3, 1, 3);

        mAppearanceGroupBox = new QGroupBox(mDiagramPage);
        mAppearanceGroupBox->setObjectName(QString::fromUtf8("mAppearanceGroupBox"));
        gridLayout_13 = new QGridLayout(mAppearanceGroupBox);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setMargin(11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mBackgroundColorLabel = new QLabel(mAppearanceGroupBox);
        mBackgroundColorLabel->setObjectName(QString::fromUtf8("mBackgroundColorLabel"));

        horizontalLayout_10->addWidget(mBackgroundColorLabel);

        mBackgroundColorButton = new QgsColorButton(mAppearanceGroupBox);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mBackgroundColorButton->sizePolicy().hasHeightForWidth());
        mBackgroundColorButton->setSizePolicy(sizePolicy6);
        mBackgroundColorButton->setMinimumSize(QSize(25, 0));

        horizontalLayout_10->addWidget(mBackgroundColorButton);


        horizontalLayout_8->addLayout(horizontalLayout_10);


        gridLayout_13->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        mPenColorLabel = new QLabel(mAppearanceGroupBox);
        mPenColorLabel->setObjectName(QString::fromUtf8("mPenColorLabel"));

        horizontalLayout_11->addWidget(mPenColorLabel);

        mDiagramPenColorButton = new QgsColorButton(mAppearanceGroupBox);
        mDiagramPenColorButton->setObjectName(QString::fromUtf8("mDiagramPenColorButton"));
        sizePolicy6.setHeightForWidth(mDiagramPenColorButton->sizePolicy().hasHeightForWidth());
        mDiagramPenColorButton->setSizePolicy(sizePolicy6);
        mDiagramPenColorButton->setMinimumSize(QSize(25, 0));

        horizontalLayout_11->addWidget(mDiagramPenColorButton);


        gridLayout_13->addLayout(horizontalLayout_11, 1, 1, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        mPenWidthLabel = new QLabel(mAppearanceGroupBox);
        mPenWidthLabel->setObjectName(QString::fromUtf8("mPenWidthLabel"));

        horizontalLayout_16->addWidget(mPenWidthLabel);

        mPenWidthSpinBox = new QDoubleSpinBox(mAppearanceGroupBox);
        mPenWidthSpinBox->setObjectName(QString::fromUtf8("mPenWidthSpinBox"));
        mPenWidthSpinBox->setDecimals(5);
        mPenWidthSpinBox->setMaximum(100000);

        horizontalLayout_16->addWidget(mPenWidthSpinBox);


        gridLayout_13->addLayout(horizontalLayout_16, 1, 2, 1, 1);

        mDiagramFontButton = new QPushButton(mAppearanceGroupBox);
        mDiagramFontButton->setObjectName(QString::fromUtf8("mDiagramFontButton"));
        sizePolicy5.setHeightForWidth(mDiagramFontButton->sizePolicy().hasHeightForWidth());
        mDiagramFontButton->setSizePolicy(sizePolicy5);

        gridLayout_13->addWidget(mDiagramFontButton, 1, 3, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mScaleDependentDiagramVisibilityCheckBox = new QCheckBox(mAppearanceGroupBox);
        mScaleDependentDiagramVisibilityCheckBox->setObjectName(QString::fromUtf8("mScaleDependentDiagramVisibilityCheckBox"));

        horizontalLayout_13->addWidget(mScaleDependentDiagramVisibilityCheckBox);

        mMinimumDiagramScaleLabel = new QLabel(mAppearanceGroupBox);
        mMinimumDiagramScaleLabel->setObjectName(QString::fromUtf8("mMinimumDiagramScaleLabel"));

        horizontalLayout_13->addWidget(mMinimumDiagramScaleLabel);

        mMinimumDiagramScaleLineEdit = new QLineEdit(mAppearanceGroupBox);
        mMinimumDiagramScaleLineEdit->setObjectName(QString::fromUtf8("mMinimumDiagramScaleLineEdit"));

        horizontalLayout_13->addWidget(mMinimumDiagramScaleLineEdit);

        mMaximumDiagramScaleLabel = new QLabel(mAppearanceGroupBox);
        mMaximumDiagramScaleLabel->setObjectName(QString::fromUtf8("mMaximumDiagramScaleLabel"));

        horizontalLayout_13->addWidget(mMaximumDiagramScaleLabel);

        mMaximumDiagramScaleLineEdit = new QLineEdit(mAppearanceGroupBox);
        mMaximumDiagramScaleLineEdit->setObjectName(QString::fromUtf8("mMaximumDiagramScaleLineEdit"));

        horizontalLayout_13->addWidget(mMaximumDiagramScaleLineEdit);


        gridLayout_13->addLayout(horizontalLayout_13, 0, 0, 1, 4);

        mDiagramFontButton->raise();

        gridLayout_14->addWidget(mAppearanceGroupBox, 1, 0, 1, 6);

        mSizeGroupBox = new QGroupBox(mDiagramPage);
        mSizeGroupBox->setObjectName(QString::fromUtf8("mSizeGroupBox"));
        gridLayout_12 = new QGridLayout(mSizeGroupBox);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setMargin(11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        mFixedSizeCheckBox = new QCheckBox(mSizeGroupBox);
        mFixedSizeCheckBox->setObjectName(QString::fromUtf8("mFixedSizeCheckBox"));

        gridLayout_12->addWidget(mFixedSizeCheckBox, 0, 0, 1, 1);

        mDiagramSizeSpinBox = new QDoubleSpinBox(mSizeGroupBox);
        mDiagramSizeSpinBox->setObjectName(QString::fromUtf8("mDiagramSizeSpinBox"));
        mDiagramSizeSpinBox->setMaximum(1e+07);

        gridLayout_12->addWidget(mDiagramSizeSpinBox, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(335, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        mLinearlyScalingLabel = new QLabel(mSizeGroupBox);
        mLinearlyScalingLabel->setObjectName(QString::fromUtf8("mLinearlyScalingLabel"));
        mLinearlyScalingLabel->setWordWrap(true);

        gridLayout_12->addWidget(mLinearlyScalingLabel, 1, 0, 1, 4);

        mLinearlyScalingLayout = new QHBoxLayout();
        mLinearlyScalingLayout->setSpacing(6);
        mLinearlyScalingLayout->setObjectName(QString::fromUtf8("mLinearlyScalingLayout"));
        mSizeAttributeLabel = new QLabel(mSizeGroupBox);
        mSizeAttributeLabel->setObjectName(QString::fromUtf8("mSizeAttributeLabel"));

        mLinearlyScalingLayout->addWidget(mSizeAttributeLabel);

        mSizeAttributeComboBox = new QComboBox(mSizeGroupBox);
        mSizeAttributeComboBox->setObjectName(QString::fromUtf8("mSizeAttributeComboBox"));

        mLinearlyScalingLayout->addWidget(mSizeAttributeComboBox);

        mFindMaximumValueButton = new QPushButton(mSizeGroupBox);
        mFindMaximumValueButton->setObjectName(QString::fromUtf8("mFindMaximumValueButton"));

        mLinearlyScalingLayout->addWidget(mFindMaximumValueButton);

        mValueLineEdit = new QLineEdit(mSizeGroupBox);
        mValueLineEdit->setObjectName(QString::fromUtf8("mValueLineEdit"));

        mLinearlyScalingLayout->addWidget(mValueLineEdit);

        mSizeLabel = new QLabel(mSizeGroupBox);
        mSizeLabel->setObjectName(QString::fromUtf8("mSizeLabel"));

        mLinearlyScalingLayout->addWidget(mSizeLabel);

        mSizeSpinBox = new QSpinBox(mSizeGroupBox);
        mSizeSpinBox->setObjectName(QString::fromUtf8("mSizeSpinBox"));
        mSizeSpinBox->setMaximum(10000000);

        mLinearlyScalingLayout->addWidget(mSizeSpinBox);


        gridLayout_12->addLayout(mLinearlyScalingLayout, 2, 0, 1, 4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        mDiagramUnitsLabel = new QLabel(mSizeGroupBox);
        mDiagramUnitsLabel->setObjectName(QString::fromUtf8("mDiagramUnitsLabel"));

        horizontalLayout_12->addWidget(mDiagramUnitsLabel);

        mDiagramUnitComboBox = new QComboBox(mSizeGroupBox);
        mDiagramUnitComboBox->setObjectName(QString::fromUtf8("mDiagramUnitComboBox"));

        horizontalLayout_12->addWidget(mDiagramUnitComboBox);


        gridLayout_12->addLayout(horizontalLayout_12, 0, 2, 1, 1);


        gridLayout_14->addWidget(mSizeGroupBox, 2, 0, 1, 6);

        mPlacementGroupBox = new QGroupBox(mDiagramPage);
        mPlacementGroupBox->setObjectName(QString::fromUtf8("mPlacementGroupBox"));
        gridLayout_11 = new QGridLayout(mPlacementGroupBox);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setMargin(11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mPlacementLabel = new QLabel(mPlacementGroupBox);
        mPlacementLabel->setObjectName(QString::fromUtf8("mPlacementLabel"));

        horizontalLayout_7->addWidget(mPlacementLabel);

        mPlacementComboBox = new QComboBox(mPlacementGroupBox);
        mPlacementComboBox->setObjectName(QString::fromUtf8("mPlacementComboBox"));

        horizontalLayout_7->addWidget(mPlacementComboBox);


        gridLayout_11->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mLineOptionsLabel = new QLabel(mPlacementGroupBox);
        mLineOptionsLabel->setObjectName(QString::fromUtf8("mLineOptionsLabel"));

        horizontalLayout_9->addWidget(mLineOptionsLabel);

        mLineOptionsComboBox = new QComboBox(mPlacementGroupBox);
        mLineOptionsComboBox->setObjectName(QString::fromUtf8("mLineOptionsComboBox"));

        horizontalLayout_9->addWidget(mLineOptionsComboBox);


        gridLayout_11->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mDiagramDistanceLabel = new QLabel(mPlacementGroupBox);
        mDiagramDistanceLabel->setObjectName(QString::fromUtf8("mDiagramDistanceLabel"));

        horizontalLayout_3->addWidget(mDiagramDistanceLabel);

        mDiagramDistanceSpinBox = new QDoubleSpinBox(mPlacementGroupBox);
        mDiagramDistanceSpinBox->setObjectName(QString::fromUtf8("mDiagramDistanceSpinBox"));

        horizontalLayout_3->addWidget(mDiagramDistanceSpinBox);


        gridLayout_11->addLayout(horizontalLayout_3, 0, 2, 1, 1);

        mDataDefinedPositionLabel = new QLabel(mPlacementGroupBox);
        mDataDefinedPositionLabel->setObjectName(QString::fromUtf8("mDataDefinedPositionLabel"));

        gridLayout_11->addWidget(mDataDefinedPositionLabel, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mXPosColLabel = new QLabel(mPlacementGroupBox);
        mXPosColLabel->setObjectName(QString::fromUtf8("mXPosColLabel"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mXPosColLabel->sizePolicy().hasHeightForWidth());
        mXPosColLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_5->addWidget(mXPosColLabel);

        mDataDefinedXComboBox = new QComboBox(mPlacementGroupBox);
        mDataDefinedXComboBox->setObjectName(QString::fromUtf8("mDataDefinedXComboBox"));

        horizontalLayout_5->addWidget(mDataDefinedXComboBox);


        gridLayout_11->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mYPosColLabel = new QLabel(mPlacementGroupBox);
        mYPosColLabel->setObjectName(QString::fromUtf8("mYPosColLabel"));
        sizePolicy7.setHeightForWidth(mYPosColLabel->sizePolicy().hasHeightForWidth());
        mYPosColLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_6->addWidget(mYPosColLabel);

        mDataDefinedYComboBox = new QComboBox(mPlacementGroupBox);
        mDataDefinedYComboBox->setObjectName(QString::fromUtf8("mDataDefinedYComboBox"));

        horizontalLayout_6->addWidget(mDataDefinedYComboBox);


        gridLayout_11->addLayout(horizontalLayout_6, 1, 2, 1, 1);


        gridLayout_14->addWidget(mPlacementGroupBox, 3, 0, 1, 6);

        mAttributesLabel = new QLabel(mDiagramPage);
        mAttributesLabel->setObjectName(QString::fromUtf8("mAttributesLabel"));

        gridLayout_14->addWidget(mAttributesLabel, 4, 0, 1, 1);

        mDiagramAttributesComboBox = new QComboBox(mDiagramPage);
        mDiagramAttributesComboBox->setObjectName(QString::fromUtf8("mDiagramAttributesComboBox"));
        sizePolicy4.setHeightForWidth(mDiagramAttributesComboBox->sizePolicy().hasHeightForWidth());
        mDiagramAttributesComboBox->setSizePolicy(sizePolicy4);

        gridLayout_14->addWidget(mDiagramAttributesComboBox, 4, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(241, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_3, 4, 3, 1, 1);

        mRemoveCategoryPushButton = new QPushButton(mDiagramPage);
        mRemoveCategoryPushButton->setObjectName(QString::fromUtf8("mRemoveCategoryPushButton"));
        sizePolicy5.setHeightForWidth(mRemoveCategoryPushButton->sizePolicy().hasHeightForWidth());
        mRemoveCategoryPushButton->setSizePolicy(sizePolicy5);
        mRemoveCategoryPushButton->setIcon(icon10);

        gridLayout_14->addWidget(mRemoveCategoryPushButton, 4, 4, 1, 1);

        mAddCategoryPushButton = new QPushButton(mDiagramPage);
        mAddCategoryPushButton->setObjectName(QString::fromUtf8("mAddCategoryPushButton"));
        sizePolicy5.setHeightForWidth(mAddCategoryPushButton->sizePolicy().hasHeightForWidth());
        mAddCategoryPushButton->setSizePolicy(sizePolicy5);
        mAddCategoryPushButton->setIcon(icon9);

        gridLayout_14->addWidget(mAddCategoryPushButton, 4, 5, 1, 1);

        mDiagramAttributesTreeWidget = new QTreeWidget(mDiagramPage);
        mDiagramAttributesTreeWidget->setObjectName(QString::fromUtf8("mDiagramAttributesTreeWidget"));
        mDiagramAttributesTreeWidget->setColumnCount(2);

        gridLayout_14->addWidget(mDiagramAttributesTreeWidget, 5, 0, 1, 6);

        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/diagram.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(mDiagramPage, icon12, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(txtDisplayName, displayFieldComboBox);
        QWidget::setTabOrder(displayFieldComboBox, leSpatialRefSys);
        QWidget::setTabOrder(leSpatialRefSys, pbnIndex);
        QWidget::setTabOrder(pbnIndex, leMinimumScale);
        QWidget::setTabOrder(leMinimumScale, leMaximumScale);
        QWidget::setTabOrder(leMaximumScale, txtSubsetSQL);
        QWidget::setTabOrder(txtSubsetSQL, pbnQueryBuilder);
        QWidget::setTabOrder(pbnQueryBuilder, buttonBox);

        retranslateUi(QgsVectorLayerPropertiesBase);

        tabWidget->setCurrentIndex(0);
        widgetStackRenderers->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsVectorLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerPropertiesBase)
    {
        QgsVectorLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Layer Properties", 0, QApplication::UnicodeUTF8));
        pbnLoadDefaultStyle->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Restore Default Style", 0, QApplication::UnicodeUTF8));
        pbnSaveDefaultStyle->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Save As Default", 0, QApplication::UnicodeUTF8));
        pbnLoadStyle->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Load Style ...", 0, QApplication::UnicodeUTF8));
        pbnSaveStyleAs->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Save Style ...", 0, QApplication::UnicodeUTF8));
        legendtypelabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Legend type", 0, QApplication::UnicodeUTF8));
        lblTransparencyPercent->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Transparency", 0, QApplication::UnicodeUTF8));
        btnUseNewSymbology->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "New symbology", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QApplication::translate("QgsVectorLayerPropertiesBase", "Style", 0, QApplication::UnicodeUTF8));
        labelCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display labels", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QApplication::translate("QgsVectorLayerPropertiesBase", "Labels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddAttributeButton->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "New column", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddAttributeButton->setText(QString());
        mAddAttributeButton->setShortcut(QApplication::translate("QgsVectorLayerPropertiesBase", "Ctrl+N", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mDeleteAttributeButton->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Delete column", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mDeleteAttributeButton->setText(QString());
        mDeleteAttributeButton->setShortcut(QApplication::translate("QgsVectorLayerPropertiesBase", "Ctrl+X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mToggleEditingButton->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Toggle editing mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mToggleEditingButton->setWhatsThis(QApplication::translate("QgsVectorLayerPropertiesBase", "Click to toggle table editing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mToggleEditingButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mCalculateFieldButton->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Field calculator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mCalculateFieldButton->setWhatsThis(QApplication::translate("QgsVectorLayerPropertiesBase", "Click to toggle table editing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCalculateFieldButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage3), QApplication::translate("QgsVectorLayerPropertiesBase", "Fields", 0, QApplication::UnicodeUTF8));
        indexGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Options", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textLabel2->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Display field for the Identify Results dialog box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        textLabel2->setWhatsThis(QApplication::translate("QgsVectorLayerPropertiesBase", "This sets the display field for the Identify Results dialog box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        textLabel2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display field", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        displayFieldComboBox->setWhatsThis(QApplication::translate("QgsVectorLayerPropertiesBase", "Use this control to set which field is placed at the top level of the Identify Results dialog box.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Edit UI", 0, QApplication::UnicodeUTF8));
        pbnSelectEditForm->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        pbnIndex->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Create Spatial Index", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Init function", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnChangeSpatialRefSys->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Specify the coordinate reference system of the layer's geometry.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbnChangeSpatialRefSys->setWhatsThis(QApplication::translate("QgsVectorLayerPropertiesBase", "Specify the coordinate reference system of the layer's geometry.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pbnChangeSpatialRefSys->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Specify CRS", 0, QApplication::UnicodeUTF8));
        chkUseScaleDependentRendering->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Use scale dependent rendering", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Maximum", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Minimum", 0, QApplication::UnicodeUTF8));
        grpSubset->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Subset", 0, QApplication::UnicodeUTF8));
        pbnQueryBuilder->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Query Builder", 0, QApplication::UnicodeUTF8));
        grpProviderOptions->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Provider-specific options", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Encoding", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage4), QApplication::translate("QgsVectorLayerPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage5), QApplication::translate("QgsVectorLayerPropertiesBase", "Metadata", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage6), QApplication::translate("QgsVectorLayerPropertiesBase", "Actions", 0, QApplication::UnicodeUTF8));
        mButtonAddJoin->setText(QString());
        mButtonRemoveJoin->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = mJoinTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsVectorLayerPropertiesBase", "Target field", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsVectorLayerPropertiesBase", "Join field", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsVectorLayerPropertiesBase", "Join layer", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(mJoinPage), QApplication::translate("QgsVectorLayerPropertiesBase", "Joins", 0, QApplication::UnicodeUTF8));
        mDisplayDiagramsCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display diagrams", 0, QApplication::UnicodeUTF8));
        mTypeLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Diagram type", 0, QApplication::UnicodeUTF8));
        mPriorityLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Priority:", 0, QApplication::UnicodeUTF8));
        mPriorityLowLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Low", 0, QApplication::UnicodeUTF8));
        mPriorityHighLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "High", 0, QApplication::UnicodeUTF8));
        mAppearanceGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Appearance", 0, QApplication::UnicodeUTF8));
        mBackgroundColorLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Background color", 0, QApplication::UnicodeUTF8));
        mBackgroundColorButton->setText(QString());
        mPenColorLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Pen color", 0, QApplication::UnicodeUTF8));
        mDiagramPenColorButton->setText(QString());
        mPenWidthLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Pen width", 0, QApplication::UnicodeUTF8));
        mDiagramFontButton->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Font...", 0, QApplication::UnicodeUTF8));
        mScaleDependentDiagramVisibilityCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Scale dependent visibility", 0, QApplication::UnicodeUTF8));
        mMinimumDiagramScaleLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Minimum", 0, QApplication::UnicodeUTF8));
        mMaximumDiagramScaleLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Maximum", 0, QApplication::UnicodeUTF8));
        mSizeGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Size", 0, QApplication::UnicodeUTF8));
        mFixedSizeCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Fixed size", 0, QApplication::UnicodeUTF8));
        mLinearlyScalingLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Scale linearly between 0 and the following attribute value / diagram size:", 0, QApplication::UnicodeUTF8));
        mSizeAttributeLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribute", 0, QApplication::UnicodeUTF8));
        mFindMaximumValueButton->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Find maximum value", 0, QApplication::UnicodeUTF8));
        mSizeLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Size", 0, QApplication::UnicodeUTF8));
        mDiagramUnitsLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Size units", 0, QApplication::UnicodeUTF8));
        mPlacementGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Position", 0, QApplication::UnicodeUTF8));
        mPlacementLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Placement", 0, QApplication::UnicodeUTF8));
        mLineOptionsLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Line Options", 0, QApplication::UnicodeUTF8));
        mDiagramDistanceLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Distance", 0, QApplication::UnicodeUTF8));
        mDataDefinedPositionLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Data defined position", 0, QApplication::UnicodeUTF8));
        mXPosColLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "x", 0, QApplication::UnicodeUTF8));
        mYPosColLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "y", 0, QApplication::UnicodeUTF8));
        mAttributesLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Attributes", 0, QApplication::UnicodeUTF8));
        mRemoveCategoryPushButton->setText(QString());
        mAddCategoryPushButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem1 = mDiagramAttributesTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsVectorLayerPropertiesBase", "Color", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsVectorLayerPropertiesBase", "Attribute", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(mDiagramPage), QApplication::translate("QgsVectorLayerPropertiesBase", "Diagrams", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsVectorLayerPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerPropertiesBase: public Ui_QgsVectorLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERPROPERTIESBASE_H
