/********************************************************************************
** Form generated from reading ui file 'qgsrasterlayerpropertiesbase.ui'
**
** Created: Tue Mar 13 10:23:49 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSRASTERLAYERPROPERTIESBASE_H
#define UI_QGSRASTERLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterLayerPropertiesBase
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabBar;
    QWidget *tabPageSymbology;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox_3;
    QHBoxLayout *hboxLayout;
    QRadioButton *rbtnSingleBand;
    QSpacerItem *spacerItem;
    QRadioButton *rbtnThreeBand;
    QSpacerItem *spacerItem1;
    QCheckBox *cboxInvertColorMap;
    QStackedWidget *stackedWidget;
    QWidget *rgb;
    QGridLayout *gridLayout2;
    QGroupBox *grpRgbBands;
    QGridLayout *gridLayout_3;
    QLabel *lblRed;
    QComboBox *cboRed;
    QLabel *lblGreen;
    QComboBox *cboGreen;
    QLabel *lblBlue;
    QComboBox *cboBlue;
    QHBoxLayout *hboxLayout1;
    QToolButton *pbtnMakeBandCombinationDefault;
    QLabel *labelDefaultBandCombination;
    QRadioButton *rbtnThreeBandMinMax;
    QLabel *lblRedMin;
    QLineEdit *leRedMin;
    QSpacerItem *spacerItem2;
    QLabel *lblRedMax;
    QLineEdit *leRedMax;
    QLabel *lblGreenMin;
    QLineEdit *leGreenMin;
    QLabel *lblGreenMax;
    QLineEdit *leGreenMax;
    QLabel *lblBlueMin;
    QLineEdit *leBlueMin;
    QLabel *lblBlueMax;
    QLineEdit *leBlueMax;
    QRadioButton *rbtnThreeBandStdDev;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *sboxThreeBandStdDev;
    QToolButton *pbtnMakeStandardDeviationDefault;
    QWidget *gray;
    QGridLayout *gridLayout3;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout4;
    QLabel *label;
    QComboBox *cboGray;
    QLabel *label_5;
    QComboBox *cboxColorMap;
    QRadioButton *rbtnSingleBandMinMax;
    QLabel *lblGrayMin;
    QLineEdit *leGrayMin;
    QLabel *lblGrayMax;
    QLineEdit *leGrayMax;
    QRadioButton *rbtnSingleBandStdDev;
    QDoubleSpinBox *sboxSingleBandStdDev;
    QSpacerItem *spacerItem3;
    QLabel *lblMinMaxEstimateWarning;
    QFrame *line;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout5;
    QRadioButton *rbtnEstimateMinMax;
    QSpacerItem *spacerItem4;
    QRadioButton *rbtnActualMinMax;
    QSpacerItem *spacerItem5;
    QRadioButton *rbtnExtentMinMax;
    QPushButton *pbtnLoadMinMax;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout6;
    QLabel *labelContrastEnhancement;
    QComboBox *cboxContrastEnhancementAlgorithm;
    QPushButton *pbtnMakeContrastEnhancementAlgorithmDefault;
    QLabel *label_4;
    QLabel *labelDefaultContrastEnhancementAlgorithm;
    QWidget *tabBarPage2;
    QGridLayout *gridLayout7;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout8;
    QSlider *sliderTransparency;
    QLabel *textLabel3;
    QSpacerItem *spacerItem6;
    QLabel *lblTransparencyPercent;
    QSpacerItem *spacerItem7;
    QLabel *textLabel4;
    QGroupBox *gboxCustomTransparency;
    QGridLayout *gridLayout9;
    QLabel *lblTransarent;
    QComboBox *cboxTransparencyBand;
    QLabel *label_2;
    QTableWidget *tableTransparency;
    QVBoxLayout *vboxLayout;
    QToolButton *pbnAddValuesManually;
    QToolButton *pbnAddValuesFromDisplay;
    QToolButton *pbnRemoveSelectedRow;
    QToolButton *pbnDefaultValues;
    QSpacerItem *spacerItem8;
    QToolButton *pbnImportTransparentPixelValues;
    QToolButton *pbnExportTransparentPixelValues;
    QGroupBox *gboxNoDataValue;
    QGridLayout *gridLayout_5;
    QLineEdit *leNoDataValue;
    QToolButton *btnResetNull;
    QWidget *tabPageColormap;
    QGridLayout *gridLayout10;
    QGroupBox *grpGenerateColorMap;
    QGridLayout *gridLayout11;
    QLabel *mNumberOfEntriesLabel;
    QSpinBox *sboxNumberOfEntries;
    QLabel *mClassificationModeLabel;
    QComboBox *cboxClassificationMode;
    QPushButton *mClassifyButton;
    QGroupBox *grpColorMap;
    QGridLayout *gridLayout_2;
    QLabel *mColorInterpolationLabel;
    QComboBox *cboxColorInterpolation;
    QSpacerItem *spacerItem9;
    QPushButton *pbtnAddColorMapEntry;
    QPushButton *mDeleteEntryButton;
    QPushButton *pbtnSortColorMap;
    QSpacerItem *spacerItem10;
    QComboBox *cboxColorMapBand;
    QToolButton *pbtnLoadColorMapFromBand;
    QSpacerItem *spacerItem11;
    QToolButton *pbtnLoadColorMapFromFile;
    QToolButton *pbtnExportColorMapToFile;
    QTreeWidget *mColormapTreeWidget;
    QWidget *tabBarPage4;
    QGridLayout *gridLayout12;
    QLabel *lblDisplayName;
    QLineEdit *leDisplayName;
    QLabel *lblLayerSource;
    QLineEdit *leLayerSource;
    QGridLayout *gridLayout13;
    QLabel *lblColumns;
    QLabel *lblRows;
    QLabel *lblNoData;
    QGroupBox *chkUseScaleDependentRendering;
    QGridLayout *gridLayout14;
    QLabel *textLabel1_2_2_2;
    QLabel *textLabel1_3;
    QLineEdit *leMaximumScale;
    QLineEdit *leMinimumScale;
    QGroupBox *grpSRS;
    QGridLayout *gridLayout15;
    QPushButton *pbnChangeSpatialRefSys;
    QLineEdit *leSpatialRefSys;
    QSpacerItem *spacerItem12;
    QGroupBox *groupBox10;
    QGridLayout *gridLayout16;
    QLabel *pixmapThumbnail;
    QGroupBox *groupBox9;
    QGridLayout *gridLayout17;
    QLabel *pixmapLegend;
    QGroupBox *groupBox8;
    QGridLayout *gridLayout18;
    QLabel *pixmapPalette;
    QSpacerItem *spacerItem13;
    QWidget *tabPageMetadata;
    QGridLayout *gridLayout19;
    QTextBrowser *txtbMetadata;
    QWidget *tabPagePyramids;
    QGridLayout *gridLayout20;
    QLabel *label_3;
    QLabel *textLabel5;
    QTextEdit *tePyramidDescription;
    QListWidget *lbxPyramidResolutions;
    QCheckBox *cbxInternalPyramids;
    QLabel *textLabel4_2;
    QComboBox *cboResamplingMethod;
    QProgressBar *mPyramidProgress;
    QPushButton *buttonBuildPyramids;
    QWidget *tabPageHistogram;
    QGridLayout *gridLayout_4;
    QwtPlot *mpPlot;
    QProgressBar *mHistogramProgress;
    QToolButton *mSaveAsImageButton;
    QPushButton *pbnLoadDefaultStyle;
    QPushButton *pbnSaveDefaultStyle;
    QPushButton *pbnLoadStyle;
    QPushButton *pbnSaveStyleAs;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRasterLayerPropertiesBase)
    {
        if (QgsRasterLayerPropertiesBase->objectName().isEmpty())
            QgsRasterLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsRasterLayerPropertiesBase"));
        QgsRasterLayerPropertiesBase->resize(755, 667);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsRasterLayerPropertiesBase->setWindowIcon(icon);
        QgsRasterLayerPropertiesBase->setSizeGripEnabled(true);
        QgsRasterLayerPropertiesBase->setModal(true);
        gridLayout = new QGridLayout(QgsRasterLayerPropertiesBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabBar = new QTabWidget(QgsRasterLayerPropertiesBase);
        tabBar->setObjectName(QString::fromUtf8("tabBar"));
        tabBar->setIconSize(QSize(22, 22));
        tabPageSymbology = new QWidget();
        tabPageSymbology->setObjectName(QString::fromUtf8("tabPageSymbology"));
        gridLayout1 = new QGridLayout(tabPageSymbology);
        gridLayout1->setSpacing(6);
        gridLayout1->setMargin(0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupBox_3 = new QGroupBox(tabPageSymbology);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        hboxLayout = new QHBoxLayout(groupBox_3);
        hboxLayout->setSpacing(6);
        hboxLayout->setMargin(11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        rbtnSingleBand = new QRadioButton(groupBox_3);
        rbtnSingleBand->setObjectName(QString::fromUtf8("rbtnSingleBand"));

        hboxLayout->addWidget(rbtnSingleBand);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        rbtnThreeBand = new QRadioButton(groupBox_3);
        rbtnThreeBand->setObjectName(QString::fromUtf8("rbtnThreeBand"));

        hboxLayout->addWidget(rbtnThreeBand);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        cboxInvertColorMap = new QCheckBox(groupBox_3);
        cboxInvertColorMap->setObjectName(QString::fromUtf8("cboxInvertColorMap"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboxInvertColorMap->sizePolicy().hasHeightForWidth());
        cboxInvertColorMap->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(cboxInvertColorMap);


        gridLayout1->addWidget(groupBox_3, 0, 0, 1, 2);

        stackedWidget = new QStackedWidget(tabPageSymbology);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        rgb = new QWidget();
        rgb->setObjectName(QString::fromUtf8("rgb"));
        gridLayout2 = new QGridLayout(rgb);
        gridLayout2->setSpacing(6);
        gridLayout2->setMargin(0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        grpRgbBands = new QGroupBox(rgb);
        grpRgbBands->setObjectName(QString::fromUtf8("grpRgbBands"));
        gridLayout_3 = new QGridLayout(grpRgbBands);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lblRed = new QLabel(grpRgbBands);
        lblRed->setObjectName(QString::fromUtf8("lblRed"));

        gridLayout_3->addWidget(lblRed, 0, 0, 1, 1);

        cboRed = new QComboBox(grpRgbBands);
        cboRed->setObjectName(QString::fromUtf8("cboRed"));
        sizePolicy.setHeightForWidth(cboRed->sizePolicy().hasHeightForWidth());
        cboRed->setSizePolicy(sizePolicy);
        cboRed->setMinimumSize(QSize(150, 0));
        cboRed->setBaseSize(QSize(100, 0));

        gridLayout_3->addWidget(cboRed, 0, 1, 1, 4);

        lblGreen = new QLabel(grpRgbBands);
        lblGreen->setObjectName(QString::fromUtf8("lblGreen"));

        gridLayout_3->addWidget(lblGreen, 1, 0, 1, 1);

        cboGreen = new QComboBox(grpRgbBands);
        cboGreen->setObjectName(QString::fromUtf8("cboGreen"));
        sizePolicy.setHeightForWidth(cboGreen->sizePolicy().hasHeightForWidth());
        cboGreen->setSizePolicy(sizePolicy);
        cboGreen->setMinimumSize(QSize(150, 0));
        cboGreen->setBaseSize(QSize(0, 0));

        gridLayout_3->addWidget(cboGreen, 1, 1, 1, 4);

        lblBlue = new QLabel(grpRgbBands);
        lblBlue->setObjectName(QString::fromUtf8("lblBlue"));

        gridLayout_3->addWidget(lblBlue, 2, 0, 1, 1);

        cboBlue = new QComboBox(grpRgbBands);
        cboBlue->setObjectName(QString::fromUtf8("cboBlue"));
        sizePolicy.setHeightForWidth(cboBlue->sizePolicy().hasHeightForWidth());
        cboBlue->setSizePolicy(sizePolicy);
        cboBlue->setMinimumSize(QSize(150, 0));
        cboBlue->setBaseSize(QSize(100, 0));

        gridLayout_3->addWidget(cboBlue, 2, 1, 1, 4);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        pbtnMakeBandCombinationDefault = new QToolButton(grpRgbBands);
        pbtnMakeBandCombinationDefault->setObjectName(QString::fromUtf8("pbtnMakeBandCombinationDefault"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../images/themes/default/mActionFileSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbtnMakeBandCombinationDefault->setIcon(icon1);

        hboxLayout1->addWidget(pbtnMakeBandCombinationDefault);

        labelDefaultBandCombination = new QLabel(grpRgbBands);
        labelDefaultBandCombination->setObjectName(QString::fromUtf8("labelDefaultBandCombination"));

        hboxLayout1->addWidget(labelDefaultBandCombination);


        gridLayout_3->addLayout(hboxLayout1, 3, 3, 1, 2);

        rbtnThreeBandMinMax = new QRadioButton(grpRgbBands);
        rbtnThreeBandMinMax->setObjectName(QString::fromUtf8("rbtnThreeBandMinMax"));

        gridLayout_3->addWidget(rbtnThreeBandMinMax, 4, 0, 1, 2);

        lblRedMin = new QLabel(grpRgbBands);
        lblRedMin->setObjectName(QString::fromUtf8("lblRedMin"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblRedMin->sizePolicy().hasHeightForWidth());
        lblRedMin->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(lblRedMin, 5, 0, 1, 1);

        leRedMin = new QLineEdit(grpRgbBands);
        leRedMin->setObjectName(QString::fromUtf8("leRedMin"));
        sizePolicy.setHeightForWidth(leRedMin->sizePolicy().hasHeightForWidth());
        leRedMin->setSizePolicy(sizePolicy);
        leRedMin->setMaximumSize(QSize(75, 16777215));
        leRedMin->setBaseSize(QSize(0, 0));
        leRedMin->setMaxLength(16);

        gridLayout_3->addWidget(leRedMin, 5, 1, 1, 1);

        spacerItem2 = new QSpacerItem(119, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(spacerItem2, 5, 2, 1, 1);

        lblRedMax = new QLabel(grpRgbBands);
        lblRedMax->setObjectName(QString::fromUtf8("lblRedMax"));
        sizePolicy2.setHeightForWidth(lblRedMax->sizePolicy().hasHeightForWidth());
        lblRedMax->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(lblRedMax, 5, 3, 1, 1);

        leRedMax = new QLineEdit(grpRgbBands);
        leRedMax->setObjectName(QString::fromUtf8("leRedMax"));
        sizePolicy.setHeightForWidth(leRedMax->sizePolicy().hasHeightForWidth());
        leRedMax->setSizePolicy(sizePolicy);
        leRedMax->setMaximumSize(QSize(75, 16777215));
        leRedMax->setBaseSize(QSize(0, 0));
        leRedMax->setMaxLength(16);

        gridLayout_3->addWidget(leRedMax, 5, 4, 1, 1);

        lblGreenMin = new QLabel(grpRgbBands);
        lblGreenMin->setObjectName(QString::fromUtf8("lblGreenMin"));
        sizePolicy2.setHeightForWidth(lblGreenMin->sizePolicy().hasHeightForWidth());
        lblGreenMin->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(lblGreenMin, 6, 0, 1, 1);

        leGreenMin = new QLineEdit(grpRgbBands);
        leGreenMin->setObjectName(QString::fromUtf8("leGreenMin"));
        sizePolicy.setHeightForWidth(leGreenMin->sizePolicy().hasHeightForWidth());
        leGreenMin->setSizePolicy(sizePolicy);
        leGreenMin->setMaximumSize(QSize(75, 16777215));
        leGreenMin->setBaseSize(QSize(0, 0));
        leGreenMin->setMaxLength(16);

        gridLayout_3->addWidget(leGreenMin, 6, 1, 1, 1);

        lblGreenMax = new QLabel(grpRgbBands);
        lblGreenMax->setObjectName(QString::fromUtf8("lblGreenMax"));
        sizePolicy2.setHeightForWidth(lblGreenMax->sizePolicy().hasHeightForWidth());
        lblGreenMax->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(lblGreenMax, 6, 3, 1, 1);

        leGreenMax = new QLineEdit(grpRgbBands);
        leGreenMax->setObjectName(QString::fromUtf8("leGreenMax"));
        sizePolicy.setHeightForWidth(leGreenMax->sizePolicy().hasHeightForWidth());
        leGreenMax->setSizePolicy(sizePolicy);
        leGreenMax->setMaximumSize(QSize(75, 16777215));
        leGreenMax->setBaseSize(QSize(0, 0));
        leGreenMax->setMaxLength(16);

        gridLayout_3->addWidget(leGreenMax, 6, 4, 1, 1);

        lblBlueMin = new QLabel(grpRgbBands);
        lblBlueMin->setObjectName(QString::fromUtf8("lblBlueMin"));
        sizePolicy2.setHeightForWidth(lblBlueMin->sizePolicy().hasHeightForWidth());
        lblBlueMin->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(lblBlueMin, 7, 0, 1, 1);

        leBlueMin = new QLineEdit(grpRgbBands);
        leBlueMin->setObjectName(QString::fromUtf8("leBlueMin"));
        sizePolicy.setHeightForWidth(leBlueMin->sizePolicy().hasHeightForWidth());
        leBlueMin->setSizePolicy(sizePolicy);
        leBlueMin->setMaximumSize(QSize(75, 16777215));
        leBlueMin->setBaseSize(QSize(0, 0));
        leBlueMin->setMaxLength(16);

        gridLayout_3->addWidget(leBlueMin, 7, 1, 1, 1);

        lblBlueMax = new QLabel(grpRgbBands);
        lblBlueMax->setObjectName(QString::fromUtf8("lblBlueMax"));
        sizePolicy2.setHeightForWidth(lblBlueMax->sizePolicy().hasHeightForWidth());
        lblBlueMax->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(lblBlueMax, 7, 3, 1, 1);

        leBlueMax = new QLineEdit(grpRgbBands);
        leBlueMax->setObjectName(QString::fromUtf8("leBlueMax"));
        sizePolicy.setHeightForWidth(leBlueMax->sizePolicy().hasHeightForWidth());
        leBlueMax->setSizePolicy(sizePolicy);
        leBlueMax->setMaximumSize(QSize(75, 16777215));
        leBlueMax->setBaseSize(QSize(0, 0));
        leBlueMax->setMaxLength(16);

        gridLayout_3->addWidget(leBlueMax, 7, 4, 1, 1);

        rbtnThreeBandStdDev = new QRadioButton(grpRgbBands);
        rbtnThreeBandStdDev->setObjectName(QString::fromUtf8("rbtnThreeBandStdDev"));

        gridLayout_3->addWidget(rbtnThreeBandStdDev, 8, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sboxThreeBandStdDev = new QDoubleSpinBox(grpRgbBands);
        sboxThreeBandStdDev->setObjectName(QString::fromUtf8("sboxThreeBandStdDev"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sboxThreeBandStdDev->sizePolicy().hasHeightForWidth());
        sboxThreeBandStdDev->setSizePolicy(sizePolicy3);
        sboxThreeBandStdDev->setMaximumSize(QSize(75, 16777215));
        sboxThreeBandStdDev->setMaximum(10);
        sboxThreeBandStdDev->setSingleStep(0.1);
        sboxThreeBandStdDev->setValue(0);

        horizontalLayout->addWidget(sboxThreeBandStdDev);

        pbtnMakeStandardDeviationDefault = new QToolButton(grpRgbBands);
        pbtnMakeStandardDeviationDefault->setObjectName(QString::fromUtf8("pbtnMakeStandardDeviationDefault"));
        pbtnMakeStandardDeviationDefault->setIcon(icon1);

        horizontalLayout->addWidget(pbtnMakeStandardDeviationDefault);


        gridLayout_3->addLayout(horizontalLayout, 8, 4, 1, 1);


        gridLayout2->addWidget(grpRgbBands, 0, 0, 1, 1);

        stackedWidget->addWidget(rgb);
        gray = new QWidget();
        gray->setObjectName(QString::fromUtf8("gray"));
        gridLayout3 = new QGridLayout(gray);
        gridLayout3->setSpacing(6);
        gridLayout3->setMargin(0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        groupBox_5 = new QGroupBox(gray);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout4 = new QGridLayout(groupBox_5);
        gridLayout4->setSpacing(6);
        gridLayout4->setMargin(11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);

        gridLayout4->addWidget(label, 0, 0, 1, 1);

        cboGray = new QComboBox(groupBox_5);
        cboGray->setObjectName(QString::fromUtf8("cboGray"));
        sizePolicy.setHeightForWidth(cboGray->sizePolicy().hasHeightForWidth());
        cboGray->setSizePolicy(sizePolicy);
        cboGray->setMinimumSize(QSize(150, 0));

        gridLayout4->addWidget(cboGray, 0, 1, 1, 5);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout4->addWidget(label_5, 1, 0, 1, 1);

        cboxColorMap = new QComboBox(groupBox_5);
        cboxColorMap->setObjectName(QString::fromUtf8("cboxColorMap"));
        sizePolicy.setHeightForWidth(cboxColorMap->sizePolicy().hasHeightForWidth());
        cboxColorMap->setSizePolicy(sizePolicy);
        cboxColorMap->setMinimumSize(QSize(150, 0));

        gridLayout4->addWidget(cboxColorMap, 1, 1, 1, 5);

        rbtnSingleBandMinMax = new QRadioButton(groupBox_5);
        rbtnSingleBandMinMax->setObjectName(QString::fromUtf8("rbtnSingleBandMinMax"));

        gridLayout4->addWidget(rbtnSingleBandMinMax, 4, 0, 1, 2);

        lblGrayMin = new QLabel(groupBox_5);
        lblGrayMin->setObjectName(QString::fromUtf8("lblGrayMin"));
        sizePolicy4.setHeightForWidth(lblGrayMin->sizePolicy().hasHeightForWidth());
        lblGrayMin->setSizePolicy(sizePolicy4);

        gridLayout4->addWidget(lblGrayMin, 4, 2, 1, 1);

        leGrayMin = new QLineEdit(groupBox_5);
        leGrayMin->setObjectName(QString::fromUtf8("leGrayMin"));
        sizePolicy4.setHeightForWidth(leGrayMin->sizePolicy().hasHeightForWidth());
        leGrayMin->setSizePolicy(sizePolicy4);
        leGrayMin->setMaximumSize(QSize(75, 16777215));
        leGrayMin->setBaseSize(QSize(0, 0));
        leGrayMin->setMaxLength(16);

        gridLayout4->addWidget(leGrayMin, 4, 3, 1, 1);

        lblGrayMax = new QLabel(groupBox_5);
        lblGrayMax->setObjectName(QString::fromUtf8("lblGrayMax"));
        sizePolicy4.setHeightForWidth(lblGrayMax->sizePolicy().hasHeightForWidth());
        lblGrayMax->setSizePolicy(sizePolicy4);

        gridLayout4->addWidget(lblGrayMax, 4, 4, 1, 1);

        leGrayMax = new QLineEdit(groupBox_5);
        leGrayMax->setObjectName(QString::fromUtf8("leGrayMax"));
        sizePolicy4.setHeightForWidth(leGrayMax->sizePolicy().hasHeightForWidth());
        leGrayMax->setSizePolicy(sizePolicy4);
        leGrayMax->setMaximumSize(QSize(75, 16777215));
        leGrayMax->setBaseSize(QSize(0, 0));
        leGrayMax->setMaxLength(16);

        gridLayout4->addWidget(leGrayMax, 4, 5, 1, 1);

        rbtnSingleBandStdDev = new QRadioButton(groupBox_5);
        rbtnSingleBandStdDev->setObjectName(QString::fromUtf8("rbtnSingleBandStdDev"));

        gridLayout4->addWidget(rbtnSingleBandStdDev, 5, 0, 1, 2);

        sboxSingleBandStdDev = new QDoubleSpinBox(groupBox_5);
        sboxSingleBandStdDev->setObjectName(QString::fromUtf8("sboxSingleBandStdDev"));
        sboxSingleBandStdDev->setMaximum(10);
        sboxSingleBandStdDev->setSingleStep(0.1);
        sboxSingleBandStdDev->setValue(0);

        gridLayout4->addWidget(sboxSingleBandStdDev, 5, 3, 1, 1);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem3, 2, 1, 1, 1);


        gridLayout3->addWidget(groupBox_5, 0, 0, 1, 1);

        stackedWidget->addWidget(gray);

        gridLayout1->addWidget(stackedWidget, 1, 0, 1, 2);

        lblMinMaxEstimateWarning = new QLabel(tabPageSymbology);
        lblMinMaxEstimateWarning->setObjectName(QString::fromUtf8("lblMinMaxEstimateWarning"));

        gridLayout1->addWidget(lblMinMaxEstimateWarning, 2, 0, 1, 2);

        line = new QFrame(tabPageSymbology);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(line, 4, 0, 1, 2);

        groupBox_2 = new QGroupBox(tabPageSymbology);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout5 = new QGridLayout(groupBox_2);
        gridLayout5->setSpacing(6);
        gridLayout5->setMargin(11);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        gridLayout5->setHorizontalSpacing(6);
        gridLayout5->setVerticalSpacing(1);
        gridLayout5->setContentsMargins(-1, 4, -1, 1);
        rbtnEstimateMinMax = new QRadioButton(groupBox_2);
        rbtnEstimateMinMax->setObjectName(QString::fromUtf8("rbtnEstimateMinMax"));

        gridLayout5->addWidget(rbtnEstimateMinMax, 0, 0, 1, 1);

        spacerItem4 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem4, 0, 1, 1, 3);

        rbtnActualMinMax = new QRadioButton(groupBox_2);
        rbtnActualMinMax->setObjectName(QString::fromUtf8("rbtnActualMinMax"));

        gridLayout5->addWidget(rbtnActualMinMax, 1, 0, 1, 1);

        spacerItem5 = new QSpacerItem(111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem5, 1, 1, 1, 2);

        rbtnExtentMinMax = new QRadioButton(groupBox_2);
        rbtnExtentMinMax->setObjectName(QString::fromUtf8("rbtnExtentMinMax"));

        gridLayout5->addWidget(rbtnExtentMinMax, 2, 0, 1, 1);

        pbtnLoadMinMax = new QPushButton(groupBox_2);
        pbtnLoadMinMax->setObjectName(QString::fromUtf8("pbtnLoadMinMax"));

        gridLayout5->addWidget(pbtnLoadMinMax, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(horizontalSpacer, 2, 1, 1, 1);


        gridLayout1->addWidget(groupBox_2, 5, 0, 1, 1);

        groupBox_8 = new QGroupBox(tabPageSymbology);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout6 = new QGridLayout(groupBox_8);
        gridLayout6->setSpacing(6);
        gridLayout6->setMargin(11);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        gridLayout6->setContentsMargins(-1, 4, -1, -1);
        labelContrastEnhancement = new QLabel(groupBox_8);
        labelContrastEnhancement->setObjectName(QString::fromUtf8("labelContrastEnhancement"));
        sizePolicy4.setHeightForWidth(labelContrastEnhancement->sizePolicy().hasHeightForWidth());
        labelContrastEnhancement->setSizePolicy(sizePolicy4);
        labelContrastEnhancement->setLayoutDirection(Qt::LeftToRight);

        gridLayout6->addWidget(labelContrastEnhancement, 0, 0, 1, 1);

        cboxContrastEnhancementAlgorithm = new QComboBox(groupBox_8);
        cboxContrastEnhancementAlgorithm->setObjectName(QString::fromUtf8("cboxContrastEnhancementAlgorithm"));
        sizePolicy4.setHeightForWidth(cboxContrastEnhancementAlgorithm->sizePolicy().hasHeightForWidth());
        cboxContrastEnhancementAlgorithm->setSizePolicy(sizePolicy4);

        gridLayout6->addWidget(cboxContrastEnhancementAlgorithm, 0, 1, 1, 1);

        pbtnMakeContrastEnhancementAlgorithmDefault = new QPushButton(groupBox_8);
        pbtnMakeContrastEnhancementAlgorithmDefault->setObjectName(QString::fromUtf8("pbtnMakeContrastEnhancementAlgorithmDefault"));
        sizePolicy4.setHeightForWidth(pbtnMakeContrastEnhancementAlgorithmDefault->sizePolicy().hasHeightForWidth());
        pbtnMakeContrastEnhancementAlgorithmDefault->setSizePolicy(sizePolicy4);
        pbtnMakeContrastEnhancementAlgorithmDefault->setIcon(icon1);

        gridLayout6->addWidget(pbtnMakeContrastEnhancementAlgorithmDefault, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout6->addWidget(label_4, 1, 0, 1, 1);

        labelDefaultContrastEnhancementAlgorithm = new QLabel(groupBox_8);
        labelDefaultContrastEnhancementAlgorithm->setObjectName(QString::fromUtf8("labelDefaultContrastEnhancementAlgorithm"));

        gridLayout6->addWidget(labelDefaultContrastEnhancementAlgorithm, 1, 1, 1, 2);


        gridLayout1->addWidget(groupBox_8, 5, 1, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabBar->addTab(tabPageSymbology, icon2, QString());
        tabBarPage2 = new QWidget();
        tabBarPage2->setObjectName(QString::fromUtf8("tabBarPage2"));
        gridLayout7 = new QGridLayout(tabBarPage2);
        gridLayout7->setSpacing(6);
        gridLayout7->setMargin(0);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        groupBox_4 = new QGroupBox(tabBarPage2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout8 = new QGridLayout(groupBox_4);
        gridLayout8->setSpacing(6);
        gridLayout8->setMargin(11);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        sliderTransparency = new QSlider(groupBox_4);
        sliderTransparency->setObjectName(QString::fromUtf8("sliderTransparency"));
        sizePolicy.setHeightForWidth(sliderTransparency->sizePolicy().hasHeightForWidth());
        sliderTransparency->setSizePolicy(sizePolicy);
        sliderTransparency->setMaximum(255);
        sliderTransparency->setOrientation(Qt::Horizontal);
        sliderTransparency->setTickInterval(25);

        gridLayout8->addWidget(sliderTransparency, 0, 0, 1, 5);

        textLabel3 = new QLabel(groupBox_4);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout8->addWidget(textLabel3, 1, 0, 1, 1);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout8->addItem(spacerItem6, 1, 1, 1, 1);

        lblTransparencyPercent = new QLabel(groupBox_4);
        lblTransparencyPercent->setObjectName(QString::fromUtf8("lblTransparencyPercent"));
        sizePolicy4.setHeightForWidth(lblTransparencyPercent->sizePolicy().hasHeightForWidth());
        lblTransparencyPercent->setSizePolicy(sizePolicy4);

        gridLayout8->addWidget(lblTransparencyPercent, 1, 2, 1, 1);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout8->addItem(spacerItem7, 1, 3, 1, 1);

        textLabel4 = new QLabel(groupBox_4);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout8->addWidget(textLabel4, 1, 4, 1, 1);


        gridLayout7->addWidget(groupBox_4, 0, 0, 1, 1);

        gboxCustomTransparency = new QGroupBox(tabBarPage2);
        gboxCustomTransparency->setObjectName(QString::fromUtf8("gboxCustomTransparency"));
        gridLayout9 = new QGridLayout(gboxCustomTransparency);
        gridLayout9->setSpacing(6);
        gridLayout9->setMargin(11);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        lblTransarent = new QLabel(gboxCustomTransparency);
        lblTransarent->setObjectName(QString::fromUtf8("lblTransarent"));

        gridLayout9->addWidget(lblTransarent, 0, 0, 1, 1);

        cboxTransparencyBand = new QComboBox(gboxCustomTransparency);
        cboxTransparencyBand->setObjectName(QString::fromUtf8("cboxTransparencyBand"));
        cboxTransparencyBand->setEnabled(false);
        sizePolicy.setHeightForWidth(cboxTransparencyBand->sizePolicy().hasHeightForWidth());
        cboxTransparencyBand->setSizePolicy(sizePolicy);
        cboxTransparencyBand->setMinimumSize(QSize(150, 0));

        gridLayout9->addWidget(cboxTransparencyBand, 0, 1, 1, 2);

        label_2 = new QLabel(gboxCustomTransparency);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout9->addWidget(label_2, 1, 0, 1, 2);

        tableTransparency = new QTableWidget(gboxCustomTransparency);
        tableTransparency->setObjectName(QString::fromUtf8("tableTransparency"));
        tableTransparency->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableTransparency->setAlternatingRowColors(true);
        tableTransparency->setSelectionMode(QAbstractItemView::SingleSelection);
        tableTransparency->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableTransparency->setShowGrid(false);
        tableTransparency->setRowCount(0);
        tableTransparency->setColumnCount(0);

        gridLayout9->addWidget(tableTransparency, 2, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        pbnAddValuesManually = new QToolButton(gboxCustomTransparency);
        pbnAddValuesManually->setObjectName(QString::fromUtf8("pbnAddValuesManually"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../images/themes/default/mActionNewAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesManually->setIcon(icon3);

        vboxLayout->addWidget(pbnAddValuesManually);

        pbnAddValuesFromDisplay = new QToolButton(gboxCustomTransparency);
        pbnAddValuesFromDisplay->setObjectName(QString::fromUtf8("pbnAddValuesFromDisplay"));
        pbnAddValuesFromDisplay->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../images/themes/default/mActionContextHelp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesFromDisplay->setIcon(icon4);

        vboxLayout->addWidget(pbnAddValuesFromDisplay);

        pbnRemoveSelectedRow = new QToolButton(gboxCustomTransparency);
        pbnRemoveSelectedRow->setObjectName(QString::fromUtf8("pbnRemoveSelectedRow"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../images/themes/default/mActionDeleteAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveSelectedRow->setIcon(icon5);

        vboxLayout->addWidget(pbnRemoveSelectedRow);

        pbnDefaultValues = new QToolButton(gboxCustomTransparency);
        pbnDefaultValues->setObjectName(QString::fromUtf8("pbnDefaultValues"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../images/themes/default/mActionCopySelected.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnDefaultValues->setIcon(icon6);

        vboxLayout->addWidget(pbnDefaultValues);

        spacerItem8 = new QSpacerItem(20, 181, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem8);

        pbnImportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnImportTransparentPixelValues->setObjectName(QString::fromUtf8("pbnImportTransparentPixelValues"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../images/themes/default/mActionFolder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnImportTransparentPixelValues->setIcon(icon7);

        vboxLayout->addWidget(pbnImportTransparentPixelValues);

        pbnExportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnExportTransparentPixelValues->setObjectName(QString::fromUtf8("pbnExportTransparentPixelValues"));
        pbnExportTransparentPixelValues->setIcon(icon1);

        vboxLayout->addWidget(pbnExportTransparentPixelValues);


        gridLayout9->addLayout(vboxLayout, 2, 2, 1, 1);


        gridLayout7->addWidget(gboxCustomTransparency, 1, 0, 1, 2);

        gboxNoDataValue = new QGroupBox(tabBarPage2);
        gboxNoDataValue->setObjectName(QString::fromUtf8("gboxNoDataValue"));
        gridLayout_5 = new QGridLayout(gboxNoDataValue);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        leNoDataValue = new QLineEdit(gboxNoDataValue);
        leNoDataValue->setObjectName(QString::fromUtf8("leNoDataValue"));

        gridLayout_5->addWidget(leNoDataValue, 0, 0, 1, 1);

        btnResetNull = new QToolButton(gboxNoDataValue);
        btnResetNull->setObjectName(QString::fromUtf8("btnResetNull"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionDraw.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnResetNull->setIcon(icon8);

        gridLayout_5->addWidget(btnResetNull, 0, 1, 1, 1);


        gridLayout7->addWidget(gboxNoDataValue, 0, 1, 1, 1);

        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/transparency.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabBar->addTab(tabBarPage2, icon9, QString());
        tabPageColormap = new QWidget();
        tabPageColormap->setObjectName(QString::fromUtf8("tabPageColormap"));
        gridLayout10 = new QGridLayout(tabPageColormap);
        gridLayout10->setSpacing(6);
        gridLayout10->setMargin(0);
        gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
        grpGenerateColorMap = new QGroupBox(tabPageColormap);
        grpGenerateColorMap->setObjectName(QString::fromUtf8("grpGenerateColorMap"));
        gridLayout11 = new QGridLayout(grpGenerateColorMap);
        gridLayout11->setSpacing(6);
        gridLayout11->setMargin(11);
        gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
        mNumberOfEntriesLabel = new QLabel(grpGenerateColorMap);
        mNumberOfEntriesLabel->setObjectName(QString::fromUtf8("mNumberOfEntriesLabel"));

        gridLayout11->addWidget(mNumberOfEntriesLabel, 0, 0, 1, 1);

        sboxNumberOfEntries = new QSpinBox(grpGenerateColorMap);
        sboxNumberOfEntries->setObjectName(QString::fromUtf8("sboxNumberOfEntries"));
        sizePolicy4.setHeightForWidth(sboxNumberOfEntries->sizePolicy().hasHeightForWidth());
        sboxNumberOfEntries->setSizePolicy(sizePolicy4);
        sboxNumberOfEntries->setMaximum(255);

        gridLayout11->addWidget(sboxNumberOfEntries, 0, 1, 1, 1);

        mClassificationModeLabel = new QLabel(grpGenerateColorMap);
        mClassificationModeLabel->setObjectName(QString::fromUtf8("mClassificationModeLabel"));

        gridLayout11->addWidget(mClassificationModeLabel, 0, 2, 1, 1);

        cboxClassificationMode = new QComboBox(grpGenerateColorMap);
        cboxClassificationMode->setObjectName(QString::fromUtf8("cboxClassificationMode"));

        gridLayout11->addWidget(cboxClassificationMode, 0, 3, 1, 1);

        mClassifyButton = new QPushButton(grpGenerateColorMap);
        mClassifyButton->setObjectName(QString::fromUtf8("mClassifyButton"));

        gridLayout11->addWidget(mClassifyButton, 0, 4, 1, 1);


        gridLayout10->addWidget(grpGenerateColorMap, 1, 0, 1, 2);

        grpColorMap = new QGroupBox(tabPageColormap);
        grpColorMap->setObjectName(QString::fromUtf8("grpColorMap"));
        gridLayout_2 = new QGridLayout(grpColorMap);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mColorInterpolationLabel = new QLabel(grpColorMap);
        mColorInterpolationLabel->setObjectName(QString::fromUtf8("mColorInterpolationLabel"));

        gridLayout_2->addWidget(mColorInterpolationLabel, 0, 0, 1, 2);

        cboxColorInterpolation = new QComboBox(grpColorMap);
        cboxColorInterpolation->setObjectName(QString::fromUtf8("cboxColorInterpolation"));

        gridLayout_2->addWidget(cboxColorInterpolation, 0, 2, 1, 2);

        spacerItem9 = new QSpacerItem(321, 45, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem9, 0, 4, 1, 7);

        pbtnAddColorMapEntry = new QPushButton(grpColorMap);
        pbtnAddColorMapEntry->setObjectName(QString::fromUtf8("pbtnAddColorMapEntry"));

        gridLayout_2->addWidget(pbtnAddColorMapEntry, 1, 0, 1, 1);

        mDeleteEntryButton = new QPushButton(grpColorMap);
        mDeleteEntryButton->setObjectName(QString::fromUtf8("mDeleteEntryButton"));

        gridLayout_2->addWidget(mDeleteEntryButton, 1, 1, 1, 2);

        pbtnSortColorMap = new QPushButton(grpColorMap);
        pbtnSortColorMap->setObjectName(QString::fromUtf8("pbtnSortColorMap"));

        gridLayout_2->addWidget(pbtnSortColorMap, 1, 3, 1, 2);

        spacerItem10 = new QSpacerItem(41, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem10, 1, 5, 1, 1);

        cboxColorMapBand = new QComboBox(grpColorMap);
        cboxColorMapBand->setObjectName(QString::fromUtf8("cboxColorMapBand"));

        gridLayout_2->addWidget(cboxColorMapBand, 1, 6, 1, 1);

        pbtnLoadColorMapFromBand = new QToolButton(grpColorMap);
        pbtnLoadColorMapFromBand->setObjectName(QString::fromUtf8("pbtnLoadColorMapFromBand"));
        pbtnLoadColorMapFromBand->setIcon(icon3);

        gridLayout_2->addWidget(pbtnLoadColorMapFromBand, 1, 7, 1, 1);

        spacerItem11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem11, 1, 8, 1, 1);

        pbtnLoadColorMapFromFile = new QToolButton(grpColorMap);
        pbtnLoadColorMapFromFile->setObjectName(QString::fromUtf8("pbtnLoadColorMapFromFile"));
        pbtnLoadColorMapFromFile->setIcon(icon7);

        gridLayout_2->addWidget(pbtnLoadColorMapFromFile, 1, 9, 1, 1);

        pbtnExportColorMapToFile = new QToolButton(grpColorMap);
        pbtnExportColorMapToFile->setObjectName(QString::fromUtf8("pbtnExportColorMapToFile"));
        pbtnExportColorMapToFile->setIcon(icon1);

        gridLayout_2->addWidget(pbtnExportColorMapToFile, 1, 10, 1, 1);

        mColormapTreeWidget = new QTreeWidget(grpColorMap);
        mColormapTreeWidget->setObjectName(QString::fromUtf8("mColormapTreeWidget"));
        mColormapTreeWidget->setColumnCount(3);

        gridLayout_2->addWidget(mColormapTreeWidget, 2, 0, 1, 11);


        gridLayout10->addWidget(grpColorMap, 0, 0, 1, 1);

        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/colormap.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabBar->addTab(tabPageColormap, icon10, QString());
        tabBarPage4 = new QWidget();
        tabBarPage4->setObjectName(QString::fromUtf8("tabBarPage4"));
        gridLayout12 = new QGridLayout(tabBarPage4);
        gridLayout12->setSpacing(6);
        gridLayout12->setMargin(0);
        gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
        lblDisplayName = new QLabel(tabBarPage4);
        lblDisplayName->setObjectName(QString::fromUtf8("lblDisplayName"));

        gridLayout12->addWidget(lblDisplayName, 0, 0, 1, 2);

        leDisplayName = new QLineEdit(tabBarPage4);
        leDisplayName->setObjectName(QString::fromUtf8("leDisplayName"));

        gridLayout12->addWidget(leDisplayName, 0, 2, 1, 4);

        lblLayerSource = new QLabel(tabBarPage4);
        lblLayerSource->setObjectName(QString::fromUtf8("lblLayerSource"));

        gridLayout12->addWidget(lblLayerSource, 1, 0, 1, 2);

        leLayerSource = new QLineEdit(tabBarPage4);
        leLayerSource->setObjectName(QString::fromUtf8("leLayerSource"));
        leLayerSource->setEnabled(false);

        gridLayout12->addWidget(leLayerSource, 1, 2, 1, 4);

        gridLayout13 = new QGridLayout();
        gridLayout13->setSpacing(6);
        gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
        lblColumns = new QLabel(tabBarPage4);
        lblColumns->setObjectName(QString::fromUtf8("lblColumns"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lblColumns->sizePolicy().hasHeightForWidth());
        lblColumns->setSizePolicy(sizePolicy5);

        gridLayout13->addWidget(lblColumns, 0, 0, 1, 1);

        lblRows = new QLabel(tabBarPage4);
        lblRows->setObjectName(QString::fromUtf8("lblRows"));
        sizePolicy5.setHeightForWidth(lblRows->sizePolicy().hasHeightForWidth());
        lblRows->setSizePolicy(sizePolicy5);

        gridLayout13->addWidget(lblRows, 0, 1, 1, 1);

        lblNoData = new QLabel(tabBarPage4);
        lblNoData->setObjectName(QString::fromUtf8("lblNoData"));
        sizePolicy5.setHeightForWidth(lblNoData->sizePolicy().hasHeightForWidth());
        lblNoData->setSizePolicy(sizePolicy5);

        gridLayout13->addWidget(lblNoData, 0, 2, 1, 1);


        gridLayout12->addLayout(gridLayout13, 2, 2, 1, 4);

        chkUseScaleDependentRendering = new QGroupBox(tabBarPage4);
        chkUseScaleDependentRendering->setObjectName(QString::fromUtf8("chkUseScaleDependentRendering"));
        chkUseScaleDependentRendering->setCheckable(true);
        gridLayout14 = new QGridLayout(chkUseScaleDependentRendering);
        gridLayout14->setSpacing(6);
        gridLayout14->setMargin(11);
        gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
        textLabel1_2_2_2 = new QLabel(chkUseScaleDependentRendering);
        textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
        textLabel1_2_2_2->setLayoutDirection(Qt::RightToLeft);

        gridLayout14->addWidget(textLabel1_2_2_2, 0, 2, 1, 1);

        textLabel1_3 = new QLabel(chkUseScaleDependentRendering);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setLayoutDirection(Qt::RightToLeft);

        gridLayout14->addWidget(textLabel1_3, 0, 0, 1, 1);

        leMaximumScale = new QLineEdit(chkUseScaleDependentRendering);
        leMaximumScale->setObjectName(QString::fromUtf8("leMaximumScale"));

        gridLayout14->addWidget(leMaximumScale, 0, 3, 1, 1);

        leMinimumScale = new QLineEdit(chkUseScaleDependentRendering);
        leMinimumScale->setObjectName(QString::fromUtf8("leMinimumScale"));

        gridLayout14->addWidget(leMinimumScale, 0, 1, 1, 1);


        gridLayout12->addWidget(chkUseScaleDependentRendering, 3, 0, 1, 6);

        grpSRS = new QGroupBox(tabBarPage4);
        grpSRS->setObjectName(QString::fromUtf8("grpSRS"));
        gridLayout15 = new QGridLayout(grpSRS);
        gridLayout15->setSpacing(6);
        gridLayout15->setMargin(11);
        gridLayout15->setObjectName(QString::fromUtf8("gridLayout15"));
        pbnChangeSpatialRefSys = new QPushButton(grpSRS);
        pbnChangeSpatialRefSys->setObjectName(QString::fromUtf8("pbnChangeSpatialRefSys"));

        gridLayout15->addWidget(pbnChangeSpatialRefSys, 0, 1, 1, 1);

        leSpatialRefSys = new QLineEdit(grpSRS);
        leSpatialRefSys->setObjectName(QString::fromUtf8("leSpatialRefSys"));
        leSpatialRefSys->setReadOnly(true);

        gridLayout15->addWidget(leSpatialRefSys, 0, 0, 1, 1);


        gridLayout12->addWidget(grpSRS, 4, 0, 1, 6);

        spacerItem12 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout12->addItem(spacerItem12, 5, 0, 1, 1);

        groupBox10 = new QGroupBox(tabBarPage4);
        groupBox10->setObjectName(QString::fromUtf8("groupBox10"));
        groupBox10->setMaximumSize(QSize(140, 16777215));
        gridLayout16 = new QGridLayout(groupBox10);
        gridLayout16->setSpacing(6);
        gridLayout16->setMargin(11);
        gridLayout16->setObjectName(QString::fromUtf8("gridLayout16"));
        pixmapThumbnail = new QLabel(groupBox10);
        pixmapThumbnail->setObjectName(QString::fromUtf8("pixmapThumbnail"));
        pixmapThumbnail->setMinimumSize(QSize(120, 120));
        pixmapThumbnail->setMaximumSize(QSize(120, 120));
        pixmapThumbnail->setFrameShape(QFrame::StyledPanel);
        pixmapThumbnail->setScaledContents(true);

        gridLayout16->addWidget(pixmapThumbnail, 0, 0, 1, 1);


        gridLayout12->addWidget(groupBox10, 5, 1, 1, 2);

        groupBox9 = new QGroupBox(tabBarPage4);
        groupBox9->setObjectName(QString::fromUtf8("groupBox9"));
        groupBox9->setMaximumSize(QSize(140, 16777215));
        gridLayout17 = new QGridLayout(groupBox9);
        gridLayout17->setSpacing(6);
        gridLayout17->setMargin(11);
        gridLayout17->setObjectName(QString::fromUtf8("gridLayout17"));
        pixmapLegend = new QLabel(groupBox9);
        pixmapLegend->setObjectName(QString::fromUtf8("pixmapLegend"));
        pixmapLegend->setMinimumSize(QSize(120, 120));
        pixmapLegend->setMaximumSize(QSize(120, 120));
        pixmapLegend->setFrameShape(QFrame::Box);
        pixmapLegend->setScaledContents(true);

        gridLayout17->addWidget(pixmapLegend, 0, 0, 1, 1);


        gridLayout12->addWidget(groupBox9, 5, 3, 1, 1);

        groupBox8 = new QGroupBox(tabBarPage4);
        groupBox8->setObjectName(QString::fromUtf8("groupBox8"));
        groupBox8->setMaximumSize(QSize(140, 16777215));
        gridLayout18 = new QGridLayout(groupBox8);
        gridLayout18->setSpacing(6);
        gridLayout18->setMargin(11);
        gridLayout18->setObjectName(QString::fromUtf8("gridLayout18"));
        pixmapPalette = new QLabel(groupBox8);
        pixmapPalette->setObjectName(QString::fromUtf8("pixmapPalette"));
        pixmapPalette->setMinimumSize(QSize(120, 120));
        pixmapPalette->setMaximumSize(QSize(120, 120));
        pixmapPalette->setFrameShape(QFrame::Box);
        pixmapPalette->setScaledContents(true);

        gridLayout18->addWidget(pixmapPalette, 0, 0, 1, 1);


        gridLayout12->addWidget(groupBox8, 5, 4, 1, 1);

        spacerItem13 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout12->addItem(spacerItem13, 5, 5, 1, 1);

        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabBar->addTab(tabBarPage4, icon11, QString());
        tabPageMetadata = new QWidget();
        tabPageMetadata->setObjectName(QString::fromUtf8("tabPageMetadata"));
        gridLayout19 = new QGridLayout(tabPageMetadata);
        gridLayout19->setSpacing(6);
        gridLayout19->setMargin(0);
        gridLayout19->setObjectName(QString::fromUtf8("gridLayout19"));
        txtbMetadata = new QTextBrowser(tabPageMetadata);
        txtbMetadata->setObjectName(QString::fromUtf8("txtbMetadata"));

        gridLayout19->addWidget(txtbMetadata, 0, 0, 1, 1);

        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabBar->addTab(tabPageMetadata, icon12, QString());
        tabPagePyramids = new QWidget();
        tabPagePyramids->setObjectName(QString::fromUtf8("tabPagePyramids"));
        gridLayout20 = new QGridLayout(tabPagePyramids);
        gridLayout20->setSpacing(6);
        gridLayout20->setMargin(0);
        gridLayout20->setObjectName(QString::fromUtf8("gridLayout20"));
        label_3 = new QLabel(tabPagePyramids);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout20->addWidget(label_3, 0, 0, 1, 1);

        textLabel5 = new QLabel(tabPagePyramids);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout20->addWidget(textLabel5, 0, 3, 1, 2);

        tePyramidDescription = new QTextEdit(tabPagePyramids);
        tePyramidDescription->setObjectName(QString::fromUtf8("tePyramidDescription"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(5);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(tePyramidDescription->sizePolicy().hasHeightForWidth());
        tePyramidDescription->setSizePolicy(sizePolicy6);

        gridLayout20->addWidget(tePyramidDescription, 1, 0, 1, 3);

        lbxPyramidResolutions = new QListWidget(tabPagePyramids);
        lbxPyramidResolutions->setObjectName(QString::fromUtf8("lbxPyramidResolutions"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lbxPyramidResolutions->sizePolicy().hasHeightForWidth());
        lbxPyramidResolutions->setSizePolicy(sizePolicy7);
        lbxPyramidResolutions->setMaximumSize(QSize(150, 32767));
        lbxPyramidResolutions->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout20->addWidget(lbxPyramidResolutions, 1, 3, 1, 2);

        cbxInternalPyramids = new QCheckBox(tabPagePyramids);
        cbxInternalPyramids->setObjectName(QString::fromUtf8("cbxInternalPyramids"));

        gridLayout20->addWidget(cbxInternalPyramids, 2, 0, 1, 5);

        textLabel4_2 = new QLabel(tabPagePyramids);
        textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));

        gridLayout20->addWidget(textLabel4_2, 3, 0, 1, 1);

        cboResamplingMethod = new QComboBox(tabPagePyramids);
        cboResamplingMethod->setObjectName(QString::fromUtf8("cboResamplingMethod"));

        gridLayout20->addWidget(cboResamplingMethod, 3, 1, 1, 1);

        mPyramidProgress = new QProgressBar(tabPagePyramids);
        mPyramidProgress->setObjectName(QString::fromUtf8("mPyramidProgress"));
        mPyramidProgress->setValue(0);

        gridLayout20->addWidget(mPyramidProgress, 3, 2, 1, 2);

        buttonBuildPyramids = new QPushButton(tabPagePyramids);
        buttonBuildPyramids->setObjectName(QString::fromUtf8("buttonBuildPyramids"));
        buttonBuildPyramids->setEnabled(false);

        gridLayout20->addWidget(buttonBuildPyramids, 3, 4, 1, 1);

        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/pyramids.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabBar->addTab(tabPagePyramids, icon13, QString());
        tabPageHistogram = new QWidget();
        tabPageHistogram->setObjectName(QString::fromUtf8("tabPageHistogram"));
        gridLayout_4 = new QGridLayout(tabPageHistogram);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mpPlot = new QwtPlot(tabPageHistogram);
        mpPlot->setObjectName(QString::fromUtf8("mpPlot"));

        gridLayout_4->addWidget(mpPlot, 0, 0, 1, 2);

        mHistogramProgress = new QProgressBar(tabPageHistogram);
        mHistogramProgress->setObjectName(QString::fromUtf8("mHistogramProgress"));
        mHistogramProgress->setValue(0);

        gridLayout_4->addWidget(mHistogramProgress, 1, 0, 1, 1);

        mSaveAsImageButton = new QToolButton(tabPageHistogram);
        mSaveAsImageButton->setObjectName(QString::fromUtf8("mSaveAsImageButton"));
        mSaveAsImageButton->setIcon(icon1);

        gridLayout_4->addWidget(mSaveAsImageButton, 1, 1, 1, 1);

        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/histogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabBar->addTab(tabPageHistogram, icon14, QString());

        gridLayout->addWidget(tabBar, 0, 0, 1, 4);

        pbnLoadDefaultStyle = new QPushButton(QgsRasterLayerPropertiesBase);
        pbnLoadDefaultStyle->setObjectName(QString::fromUtf8("pbnLoadDefaultStyle"));

        gridLayout->addWidget(pbnLoadDefaultStyle, 1, 0, 1, 1);

        pbnSaveDefaultStyle = new QPushButton(QgsRasterLayerPropertiesBase);
        pbnSaveDefaultStyle->setObjectName(QString::fromUtf8("pbnSaveDefaultStyle"));

        gridLayout->addWidget(pbnSaveDefaultStyle, 1, 1, 1, 1);

        pbnLoadStyle = new QPushButton(QgsRasterLayerPropertiesBase);
        pbnLoadStyle->setObjectName(QString::fromUtf8("pbnLoadStyle"));

        gridLayout->addWidget(pbnLoadStyle, 1, 2, 1, 1);

        pbnSaveStyleAs = new QPushButton(QgsRasterLayerPropertiesBase);
        pbnSaveStyleAs->setObjectName(QString::fromUtf8("pbnSaveStyleAs"));

        gridLayout->addWidget(pbnSaveStyleAs, 1, 3, 1, 1);

        buttonBox = new QDialogButtonBox(QgsRasterLayerPropertiesBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 4);

        QWidget::setTabOrder(tabBar, cboRed);
        QWidget::setTabOrder(cboRed, cboGreen);
        QWidget::setTabOrder(cboGreen, cboBlue);
        QWidget::setTabOrder(cboBlue, leRedMin);
        QWidget::setTabOrder(leRedMin, leRedMax);
        QWidget::setTabOrder(leRedMax, leGreenMin);
        QWidget::setTabOrder(leGreenMin, leGreenMax);
        QWidget::setTabOrder(leGreenMax, leBlueMin);
        QWidget::setTabOrder(leBlueMin, leBlueMax);
        QWidget::setTabOrder(leBlueMax, sboxThreeBandStdDev);
        QWidget::setTabOrder(sboxThreeBandStdDev, buttonBox);
        QWidget::setTabOrder(buttonBox, leNoDataValue);
        QWidget::setTabOrder(leNoDataValue, tableTransparency);
        QWidget::setTabOrder(tableTransparency, leDisplayName);
        QWidget::setTabOrder(leDisplayName, leLayerSource);
        QWidget::setTabOrder(leLayerSource, leMinimumScale);
        QWidget::setTabOrder(leMinimumScale, leMaximumScale);
        QWidget::setTabOrder(leMaximumScale, leSpatialRefSys);
        QWidget::setTabOrder(leSpatialRefSys, pbnChangeSpatialRefSys);
        QWidget::setTabOrder(pbnChangeSpatialRefSys, tePyramidDescription);
        QWidget::setTabOrder(tePyramidDescription, cboResamplingMethod);
        QWidget::setTabOrder(cboResamplingMethod, buttonBuildPyramids);
        QWidget::setTabOrder(buttonBuildPyramids, leGrayMin);
        QWidget::setTabOrder(leGrayMin, cboGray);
        QWidget::setTabOrder(cboGray, lbxPyramidResolutions);
        QWidget::setTabOrder(lbxPyramidResolutions, leGrayMax);
        QWidget::setTabOrder(leGrayMax, cboxColorMap);
        QWidget::setTabOrder(cboxColorMap, sboxSingleBandStdDev);

        retranslateUi(QgsRasterLayerPropertiesBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsRasterLayerPropertiesBase, SLOT(reject()));

        tabBar->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRasterLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterLayerPropertiesBase)
    {
        QgsRasterLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Raster Layer Properties", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Render as", 0, QApplication::UnicodeUTF8));
        rbtnSingleBand->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Single band gray", 0, QApplication::UnicodeUTF8));
        rbtnThreeBand->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Three band color", 0, QApplication::UnicodeUTF8));
        cboxInvertColorMap->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Invert color map", 0, QApplication::UnicodeUTF8));
        grpRgbBands->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "RGB mode band selection and scaling", 0, QApplication::UnicodeUTF8));
        lblRed->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Red band", 0, QApplication::UnicodeUTF8));
        lblGreen->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Green band", 0, QApplication::UnicodeUTF8));
        lblBlue->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Blue band", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbtnMakeBandCombinationDefault->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Save current RGB composition as default. This setting will be persistent between QGIS sessions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnMakeBandCombinationDefault->setWhatsThis(QApplication::translate("QgsRasterLayerPropertiesBase", "Save current RGB composition as default. This setting will be persistent between QGIS sessions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pbtnMakeBandCombinationDefault->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        labelDefaultBandCombination->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Default R:1 G:2 B:3", 0, QApplication::UnicodeUTF8));
        rbtnThreeBandMinMax->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Custom min / max values", 0, QApplication::UnicodeUTF8));
        lblRedMin->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Red min", 0, QApplication::UnicodeUTF8));
        lblRedMax->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Red max", 0, QApplication::UnicodeUTF8));
        lblGreenMin->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Green min", 0, QApplication::UnicodeUTF8));
        lblGreenMax->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Green max", 0, QApplication::UnicodeUTF8));
        lblBlueMin->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Blue min", 0, QApplication::UnicodeUTF8));
        lblBlueMax->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Blue max", 0, QApplication::UnicodeUTF8));
        rbtnThreeBandStdDev->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Use standard deviation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbtnMakeStandardDeviationDefault->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Save current standard deviation value as default. This setting will be persistent between QGIS sessions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnMakeStandardDeviationDefault->setWhatsThis(QApplication::translate("QgsRasterLayerPropertiesBase", "Save current standard deviation value as default. This setting will be persistent between QGIS sessions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pbtnMakeStandardDeviationDefault->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Single band properties", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Gray band", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Color map", 0, QApplication::UnicodeUTF8));
        rbtnSingleBandMinMax->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Custom min / max values", 0, QApplication::UnicodeUTF8));
        lblGrayMin->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Min", 0, QApplication::UnicodeUTF8));
        lblGrayMax->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Max", 0, QApplication::UnicodeUTF8));
        rbtnSingleBandStdDev->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Use standard deviation", 0, QApplication::UnicodeUTF8));
        lblMinMaxEstimateWarning->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Note", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Load min / max values from band", 0, QApplication::UnicodeUTF8));
        rbtnEstimateMinMax->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Estimate (faster)", 0, QApplication::UnicodeUTF8));
        rbtnActualMinMax->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Actual (slower)", 0, QApplication::UnicodeUTF8));
        rbtnExtentMinMax->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Current extent", 0, QApplication::UnicodeUTF8));
        pbtnLoadMinMax->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Load", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Contrast enhancement", 0, QApplication::UnicodeUTF8));
        labelContrastEnhancement->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Current", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbtnMakeContrastEnhancementAlgorithmDefault->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Save current contrast enhancement algorithm as default. This setting will be persistent between QGIS sessions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnMakeContrastEnhancementAlgorithmDefault->setWhatsThis(QApplication::translate("QgsRasterLayerPropertiesBase", "Saves current contrast enhancement algorithm as a default. This setting will be persistent between QGIS sessions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pbtnMakeContrastEnhancementAlgorithmDefault->setText(QString());
        label_4->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Default", 0, QApplication::UnicodeUTF8));
        labelDefaultContrastEnhancementAlgorithm->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabBar->setTabText(tabBar->indexOf(tabPageSymbology), QApplication::translate("QgsRasterLayerPropertiesBase", "Style", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Global transparency", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "None", 0, QApplication::UnicodeUTF8));
        lblTransparencyPercent->setText(QApplication::translate("QgsRasterLayerPropertiesBase", " 00%", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<p align=\"right\">Full</p>", 0, QApplication::UnicodeUTF8));
        gboxCustomTransparency->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Custom transparency options", 0, QApplication::UnicodeUTF8));
        lblTransarent->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparency band", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparent pixel list", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnAddValuesManually->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Add values manually", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnAddValuesManually->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnAddValuesFromDisplay->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Add Values from display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnAddValuesFromDisplay->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnRemoveSelectedRow->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Remove selected row", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnRemoveSelectedRow->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnDefaultValues->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Default values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnDefaultValues->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnImportTransparentPixelValues->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Import from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnImportTransparentPixelValues->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnExportTransparentPixelValues->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Export to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnExportTransparentPixelValues->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        gboxNoDataValue->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "No data value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnResetNull->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Reset to file defined null", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnResetNull->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        tabBar->setTabText(tabBar->indexOf(tabBarPage2), QApplication::translate("QgsRasterLayerPropertiesBase", "Transparency", 0, QApplication::UnicodeUTF8));
        grpGenerateColorMap->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Generate new color map", 0, QApplication::UnicodeUTF8));
        mNumberOfEntriesLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Number of entries", 0, QApplication::UnicodeUTF8));
        mClassificationModeLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Classification mode", 0, QApplication::UnicodeUTF8));
        mClassifyButton->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Classify", 0, QApplication::UnicodeUTF8));
        grpColorMap->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Color map", 0, QApplication::UnicodeUTF8));
        mColorInterpolationLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Color interpolation", 0, QApplication::UnicodeUTF8));
        pbtnAddColorMapEntry->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Add entry", 0, QApplication::UnicodeUTF8));
        mDeleteEntryButton->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Delete entry", 0, QApplication::UnicodeUTF8));
        pbtnSortColorMap->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Sort", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbtnLoadColorMapFromBand->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Load color map from band", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbtnLoadColorMapFromBand->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbtnLoadColorMapFromFile->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Load color map from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbtnLoadColorMapFromFile->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbtnExportColorMapToFile->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Export color map to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbtnExportColorMapToFile->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mColormapTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsRasterLayerPropertiesBase", "2", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsRasterLayerPropertiesBase", "1", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsRasterLayerPropertiesBase", "1", 0, QApplication::UnicodeUTF8));
        tabBar->setTabText(tabBar->indexOf(tabPageColormap), QApplication::translate("QgsRasterLayerPropertiesBase", "Colormap", 0, QApplication::UnicodeUTF8));
        lblDisplayName->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Display name", 0, QApplication::UnicodeUTF8));
        lblLayerSource->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Layer source", 0, QApplication::UnicodeUTF8));
        lblColumns->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Columns", 0, QApplication::UnicodeUTF8));
        lblRows->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Rows", 0, QApplication::UnicodeUTF8));
        lblNoData->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "No Data", 0, QApplication::UnicodeUTF8));
        chkUseScaleDependentRendering->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Scale dependent visibility", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Maximum", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Minimum", 0, QApplication::UnicodeUTF8));
        grpSRS->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Coordinate reference system", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnChangeSpatialRefSys->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Specify the coordinate reference system of the layer's geometry.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbnChangeSpatialRefSys->setWhatsThis(QApplication::translate("QgsRasterLayerPropertiesBase", "Specify the coordinate reference system of the layer's geometry.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pbnChangeSpatialRefSys->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Specify...", 0, QApplication::UnicodeUTF8));
        groupBox10->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Thumbnail", 0, QApplication::UnicodeUTF8));
        groupBox9->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Legend", 0, QApplication::UnicodeUTF8));
        groupBox8->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Palette", 0, QApplication::UnicodeUTF8));
        tabBar->setTabText(tabBar->indexOf(tabBarPage4), QApplication::translate("QgsRasterLayerPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
        tabBar->setTabText(tabBar->indexOf(tabPageMetadata), QApplication::translate("QgsRasterLayerPropertiesBase", "Metadata", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Notes", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Pyramid resolutions", 0, QApplication::UnicodeUTF8));
        tePyramidDescription->setHtml(QApplication::translate("QgsRasterLayerPropertiesBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans';\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans';\"></p>\n"
"<"
                        "p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans';\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans';\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans';\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans';\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans';\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-fa"
                        "mily:'Sans';\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans';\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans';\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        cbxInternalPyramids->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Build pyramids internally if possible", 0, QApplication::UnicodeUTF8));
        textLabel4_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Resampling method", 0, QApplication::UnicodeUTF8));
        cboResamplingMethod->clear();
        cboResamplingMethod->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterLayerPropertiesBase", "Average", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "Nearest Neighbour", 0, QApplication::UnicodeUTF8)
        );
        buttonBuildPyramids->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Build pyramids", 0, QApplication::UnicodeUTF8));
        tabBar->setTabText(tabBar->indexOf(tabPagePyramids), QApplication::translate("QgsRasterLayerPropertiesBase", "Pyramids", 0, QApplication::UnicodeUTF8));
        mSaveAsImageButton->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Save as image...", 0, QApplication::UnicodeUTF8));
        tabBar->setTabText(tabBar->indexOf(tabPageHistogram), QApplication::translate("QgsRasterLayerPropertiesBase", "Histogram", 0, QApplication::UnicodeUTF8));
        pbnLoadDefaultStyle->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Restore Default Style", 0, QApplication::UnicodeUTF8));
        pbnSaveDefaultStyle->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Save As Default", 0, QApplication::UnicodeUTF8));
        pbnLoadStyle->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Load Style ...", 0, QApplication::UnicodeUTF8));
        pbnSaveStyleAs->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Save Style ...", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsRasterLayerPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLayerPropertiesBase: public Ui_QgsRasterLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERLAYERPROPERTIESBASE_H
