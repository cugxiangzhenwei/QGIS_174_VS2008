/********************************************************************************
** Form generated from reading ui file 'qgslabelingguibase.ui'
**
** Created: Tue Mar 13 10:23:57 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSLABELINGGUIBASE_H
#define UI_QGSLABELINGGUIBASE_H

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
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"
#include "qgslabelpreview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingGuiBase
{
public:
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chkEnableLabeling;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_20;
    QComboBox *cboFieldName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_33;
    QgsLabelPreview *lblFontPreview;
    QTabWidget *mTabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout_14;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_9;
    QLabel *label_28;
    QLabel *lblFontName;
    QToolButton *btnChangeFont;
    QLabel *label_29;
    QgsColorButton *btnTextColor;
    QLabel *mFontSizeLabel;
    QDoubleSpinBox *mFontSizeSpinBox;
    QComboBox *mFontSizeUnitComboBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *chkBuffer;
    QGridLayout *gridLayout_5;
    QLabel *label_31;
    QDoubleSpinBox *spinBufferSize;
    QLabel *label_32;
    QgsColorButton *btnBufferColor;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *chkScaleBasedVisibility;
    QGridLayout *gridLayout_10;
    QSpinBox *spinScaleMin;
    QSpinBox *spinScaleMax;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_34;
    QSlider *sliderPriority;
    QLabel *label_35;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_12;
    QCheckBox *chkLabelPerFeaturePart;
    QCheckBox *chkMergeLines;
    QCheckBox *chkMultiLine;
    QCheckBox *chkAddDirectionSymbol;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_19;
    QDoubleSpinBox *mMinSizeSpinBox;
    QHBoxLayout *horizontalLayout_20;
    QCheckBox *chkNoObstacle;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btnEngineSettings;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_12;
    QStackedWidget *stackedPlacement;
    QWidget *pagePoint;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radAroundPoint;
    QRadioButton *radOverPoint;
    QWidget *pageLine;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *radLineParallel;
    QRadioButton *radLineCurved;
    QRadioButton *radLineHorizontal;
    QWidget *pagePolygon;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *radOverCentroid;
    QRadioButton *radAroundCentroid;
    QRadioButton *radPolygonHorizontal;
    QRadioButton *radPolygonFree;
    QRadioButton *radPolygonPerimeter;
    QFrame *line_3;
    QStackedWidget *stackedOptions;
    QWidget *pageOptionsPoint;
    QGridLayout *gridLayout_7;
    QLabel *label_21;
    QDoubleSpinBox *spinDistPoint;
    QLabel *label_23;
    QSpinBox *spinAngle;
    QLabel *label_24;
    QComboBox *mPointDistanceUnitComboBox;
    QWidget *pageOptionsLine;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *chkLineAbove;
    QCheckBox *chkLineOn;
    QCheckBox *chkLineBelow;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_25;
    QRadioButton *radOrientationMap;
    QRadioButton *radOrientationLine;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_26;
    QDoubleSpinBox *spinDistLine;
    QComboBox *mLineDistanceUnitComboBox;
    QWidget *pageOptionsEmpty;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_11;
    QGroupBox *mFontAttributePropertiesGroupBox;
    QGridLayout *gridLayout;
    QLabel *mSizeLabel;
    QComboBox *mSizeAttributeComboBox;
    QLabel *mColorLabel;
    QComboBox *mColorAttributeComboBox;
    QLabel *mBoldLabel;
    QComboBox *mBoldAttributeComboBox;
    QLabel *mItalicLabel;
    QComboBox *mItalicAttributeComboBox;
    QLabel *mUnderlineLabel;
    QComboBox *mUnderlineAttributeComboBox;
    QLabel *mStrikeoutLabel;
    QComboBox *mStrikeoutAttributeComboBox;
    QLabel *mFontFamilyLabel;
    QComboBox *mFontFamilyAttributeComboBox;
    QGroupBox *mBufferAttributesPropertiesGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *mBufferSizeLabel;
    QComboBox *mBufferSizeAttributeComboBox;
    QLabel *mBufferColorLabel;
    QComboBox *mBufferColorAttributeComboBox;
    QGroupBox *mPositionAttributeGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *mXCoordinateLabel;
    QComboBox *mXCoordinateComboBox;
    QLabel *mYCoordinateLabel;
    QComboBox *mYCoordinateComboBox;
    QLabel *mHorizontalAlignmentLabel;
    QComboBox *mHorizontalAlignmentComboBox;
    QLabel *mVerticalAlignmentLabel;
    QComboBox *mVerticalAlignmentComboBox;
    QComboBox *mRotationComboBox;
    QLabel *mRotationLabel;
    QComboBox *mLabelDistanceComboBox;
    QLabel *mLabelDistanceLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLabelingGuiBase)
    {
        if (QgsLabelingGuiBase->objectName().isEmpty())
            QgsLabelingGuiBase->setObjectName(QString::fromUtf8("QgsLabelingGuiBase"));
        QgsLabelingGuiBase->resize(703, 469);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        QgsLabelingGuiBase->setWindowIcon(icon);
        gridLayout_8 = new QGridLayout(QgsLabelingGuiBase);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setMargin(11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        chkEnableLabeling = new QCheckBox(QgsLabelingGuiBase);
        chkEnableLabeling->setObjectName(QString::fromUtf8("chkEnableLabeling"));

        horizontalLayout_3->addWidget(chkEnableLabeling);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_20 = new QLabel(QgsLabelingGuiBase);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_20);

        cboFieldName = new QComboBox(QgsLabelingGuiBase);
        cboFieldName->setObjectName(QString::fromUtf8("cboFieldName"));

        horizontalLayout_3->addWidget(cboFieldName);


        gridLayout_8->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_33 = new QLabel(QgsLabelingGuiBase);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy);
        label_33->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_33);

        lblFontPreview = new QgsLabelPreview(QgsLabelingGuiBase);
        lblFontPreview->setObjectName(QString::fromUtf8("lblFontPreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblFontPreview->sizePolicy().hasHeightForWidth());
        lblFontPreview->setSizePolicy(sizePolicy1);
        lblFontPreview->setMinimumSize(QSize(30, 30));
        lblFontPreview->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lblFontPreview);


        gridLayout_8->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        mTabWidget = new QTabWidget(QgsLabelingGuiBase);
        mTabWidget->setObjectName(QString::fromUtf8("mTabWidget"));
        mTabWidget->setIconSize(QSize(22, 22));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_14 = new QGridLayout(tab_3);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setMargin(11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_9 = new QGridLayout(groupBox_6);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setMargin(11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_28 = new QLabel(groupBox_6);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        sizePolicy.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy);
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_28, 0, 0, 1, 1);

        lblFontName = new QLabel(groupBox_6);
        lblFontName->setObjectName(QString::fromUtf8("lblFontName"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblFontName->sizePolicy().hasHeightForWidth());
        lblFontName->setSizePolicy(sizePolicy2);
        lblFontName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(lblFontName, 0, 1, 1, 1);

        btnChangeFont = new QToolButton(groupBox_6);
        btnChangeFont->setObjectName(QString::fromUtf8("btnChangeFont"));

        gridLayout_9->addWidget(btnChangeFont, 0, 2, 1, 1);

        label_29 = new QLabel(groupBox_6);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        sizePolicy.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy);
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_29, 0, 3, 1, 1);

        btnTextColor = new QgsColorButton(groupBox_6);
        btnTextColor->setObjectName(QString::fromUtf8("btnTextColor"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnTextColor->sizePolicy().hasHeightForWidth());
        btnTextColor->setSizePolicy(sizePolicy3);
        btnTextColor->setMinimumSize(QSize(32, 0));

        gridLayout_9->addWidget(btnTextColor, 0, 4, 1, 1);

        mFontSizeLabel = new QLabel(groupBox_6);
        mFontSizeLabel->setObjectName(QString::fromUtf8("mFontSizeLabel"));

        gridLayout_9->addWidget(mFontSizeLabel, 0, 5, 1, 1);

        mFontSizeSpinBox = new QDoubleSpinBox(groupBox_6);
        mFontSizeSpinBox->setObjectName(QString::fromUtf8("mFontSizeSpinBox"));
        mFontSizeSpinBox->setDecimals(4);
        mFontSizeSpinBox->setMaximum(1e+09);

        gridLayout_9->addWidget(mFontSizeSpinBox, 0, 6, 1, 1);

        mFontSizeUnitComboBox = new QComboBox(groupBox_6);
        mFontSizeUnitComboBox->setObjectName(QString::fromUtf8("mFontSizeUnitComboBox"));

        gridLayout_9->addWidget(mFontSizeUnitComboBox, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 0, 8, 1, 1);


        gridLayout_14->addWidget(groupBox_6, 0, 0, 1, 1);

        chkBuffer = new QGroupBox(tab_3);
        chkBuffer->setObjectName(QString::fromUtf8("chkBuffer"));
        chkBuffer->setCheckable(true);
        gridLayout_5 = new QGridLayout(chkBuffer);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_31 = new QLabel(chkBuffer);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_31, 0, 0, 1, 1);

        spinBufferSize = new QDoubleSpinBox(chkBuffer);
        spinBufferSize->setObjectName(QString::fromUtf8("spinBufferSize"));
        spinBufferSize->setMinimumSize(QSize(93, 0));

        gridLayout_5->addWidget(spinBufferSize, 0, 1, 1, 1);

        label_32 = new QLabel(chkBuffer);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_32, 0, 2, 1, 1);

        btnBufferColor = new QgsColorButton(chkBuffer);
        btnBufferColor->setObjectName(QString::fromUtf8("btnBufferColor"));
        sizePolicy3.setHeightForWidth(btnBufferColor->sizePolicy().hasHeightForWidth());
        btnBufferColor->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(btnBufferColor, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(428, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        gridLayout_14->addWidget(chkBuffer, 1, 0, 1, 1);

        chkScaleBasedVisibility = new QGroupBox(tab_3);
        chkScaleBasedVisibility->setObjectName(QString::fromUtf8("chkScaleBasedVisibility"));
        chkScaleBasedVisibility->setCheckable(true);
        gridLayout_10 = new QGridLayout(chkScaleBasedVisibility);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setMargin(11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        spinScaleMin = new QSpinBox(chkScaleBasedVisibility);
        spinScaleMin->setObjectName(QString::fromUtf8("spinScaleMin"));
        spinScaleMin->setMinimum(1);
        spinScaleMin->setMaximum(999999999);

        gridLayout_10->addWidget(spinScaleMin, 0, 0, 1, 1);

        spinScaleMax = new QSpinBox(chkScaleBasedVisibility);
        spinScaleMax->setObjectName(QString::fromUtf8("spinScaleMax"));
        spinScaleMax->setMinimum(1);
        spinScaleMax->setMaximum(999999999);
        spinScaleMax->setValue(10000000);

        gridLayout_10->addWidget(spinScaleMax, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(307, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout_14->addWidget(chkScaleBasedVisibility, 2, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labels.png"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(tab_3, icon1, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        scrollArea_2 = new QScrollArea(tab);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 658, 451));
        gridLayout_13 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setMargin(11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        groupBox_7 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_18 = new QHBoxLayout(groupBox_7);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setMargin(11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_34 = new QLabel(groupBox_7);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_18->addWidget(label_34);

        sliderPriority = new QSlider(groupBox_7);
        sliderPriority->setObjectName(QString::fromUtf8("sliderPriority"));
        sliderPriority->setMaximum(10);
        sliderPriority->setValue(5);
        sliderPriority->setOrientation(Qt::Horizontal);
        sliderPriority->setTickPosition(QSlider::TicksBelow);
        sliderPriority->setTickInterval(1);

        horizontalLayout_18->addWidget(sliderPriority);

        label_35 = new QLabel(groupBox_7);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        horizontalLayout_18->addWidget(label_35);


        gridLayout_13->addWidget(groupBox_7, 1, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_12 = new QGridLayout(groupBox);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setMargin(11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        chkLabelPerFeaturePart = new QCheckBox(groupBox);
        chkLabelPerFeaturePart->setObjectName(QString::fromUtf8("chkLabelPerFeaturePart"));

        gridLayout_12->addWidget(chkLabelPerFeaturePart, 0, 0, 1, 1);

        chkMergeLines = new QCheckBox(groupBox);
        chkMergeLines->setObjectName(QString::fromUtf8("chkMergeLines"));

        gridLayout_12->addWidget(chkMergeLines, 1, 0, 1, 1);

        chkMultiLine = new QCheckBox(groupBox);
        chkMultiLine->setObjectName(QString::fromUtf8("chkMultiLine"));

        gridLayout_12->addWidget(chkMultiLine, 2, 0, 1, 1);

        chkAddDirectionSymbol = new QCheckBox(groupBox);
        chkAddDirectionSymbol->setObjectName(QString::fromUtf8("chkAddDirectionSymbol"));

        gridLayout_12->addWidget(chkAddDirectionSymbol, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_2->addWidget(label_19);

        mMinSizeSpinBox = new QDoubleSpinBox(groupBox);
        mMinSizeSpinBox->setObjectName(QString::fromUtf8("mMinSizeSpinBox"));

        horizontalLayout_2->addWidget(mMinSizeSpinBox);


        gridLayout_12->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        chkNoObstacle = new QCheckBox(groupBox);
        chkNoObstacle->setObjectName(QString::fromUtf8("chkNoObstacle"));
        chkNoObstacle->setEnabled(true);

        horizontalLayout_20->addWidget(chkNoObstacle);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_8);

        btnEngineSettings = new QPushButton(groupBox);
        btnEngineSettings->setObjectName(QString::fromUtf8("btnEngineSettings"));
        btnEngineSettings->setEnabled(true);

        horizontalLayout_20->addWidget(btnEngineSettings);


        gridLayout_12->addLayout(horizontalLayout_20, 5, 0, 1, 1);


        gridLayout_13->addWidget(groupBox, 2, 0, 1, 1);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_12 = new QHBoxLayout(groupBox_5);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setMargin(11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 4);
        stackedPlacement = new QStackedWidget(groupBox_5);
        stackedPlacement->setObjectName(QString::fromUtf8("stackedPlacement"));
        pagePoint = new QWidget();
        pagePoint->setObjectName(QString::fromUtf8("pagePoint"));
        verticalLayout_6 = new QVBoxLayout(pagePoint);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setMargin(11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        radAroundPoint = new QRadioButton(pagePoint);
        radAroundPoint->setObjectName(QString::fromUtf8("radAroundPoint"));
        radAroundPoint->setChecked(true);

        verticalLayout_6->addWidget(radAroundPoint);

        radOverPoint = new QRadioButton(pagePoint);
        radOverPoint->setObjectName(QString::fromUtf8("radOverPoint"));

        verticalLayout_6->addWidget(radOverPoint);

        stackedPlacement->addWidget(pagePoint);
        pageLine = new QWidget();
        pageLine->setObjectName(QString::fromUtf8("pageLine"));
        verticalLayout_7 = new QVBoxLayout(pageLine);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setMargin(11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        radLineParallel = new QRadioButton(pageLine);
        radLineParallel->setObjectName(QString::fromUtf8("radLineParallel"));
        radLineParallel->setChecked(true);

        verticalLayout_7->addWidget(radLineParallel);

        radLineCurved = new QRadioButton(pageLine);
        radLineCurved->setObjectName(QString::fromUtf8("radLineCurved"));

        verticalLayout_7->addWidget(radLineCurved);

        radLineHorizontal = new QRadioButton(pageLine);
        radLineHorizontal->setObjectName(QString::fromUtf8("radLineHorizontal"));

        verticalLayout_7->addWidget(radLineHorizontal);

        stackedPlacement->addWidget(pageLine);
        pagePolygon = new QWidget();
        pagePolygon->setObjectName(QString::fromUtf8("pagePolygon"));
        verticalLayout_8 = new QVBoxLayout(pagePolygon);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setMargin(11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        radOverCentroid = new QRadioButton(pagePolygon);
        radOverCentroid->setObjectName(QString::fromUtf8("radOverCentroid"));
        radOverCentroid->setChecked(true);

        verticalLayout_8->addWidget(radOverCentroid);

        radAroundCentroid = new QRadioButton(pagePolygon);
        radAroundCentroid->setObjectName(QString::fromUtf8("radAroundCentroid"));

        verticalLayout_8->addWidget(radAroundCentroid);

        radPolygonHorizontal = new QRadioButton(pagePolygon);
        radPolygonHorizontal->setObjectName(QString::fromUtf8("radPolygonHorizontal"));

        verticalLayout_8->addWidget(radPolygonHorizontal);

        radPolygonFree = new QRadioButton(pagePolygon);
        radPolygonFree->setObjectName(QString::fromUtf8("radPolygonFree"));

        verticalLayout_8->addWidget(radPolygonFree);

        radPolygonPerimeter = new QRadioButton(pagePolygon);
        radPolygonPerimeter->setObjectName(QString::fromUtf8("radPolygonPerimeter"));

        verticalLayout_8->addWidget(radPolygonPerimeter);

        stackedPlacement->addWidget(pagePolygon);

        horizontalLayout_12->addWidget(stackedPlacement);

        line_3 = new QFrame(groupBox_5);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_12->addWidget(line_3);

        stackedOptions = new QStackedWidget(groupBox_5);
        stackedOptions->setObjectName(QString::fromUtf8("stackedOptions"));
        pageOptionsPoint = new QWidget();
        pageOptionsPoint->setObjectName(QString::fromUtf8("pageOptionsPoint"));
        gridLayout_7 = new QGridLayout(pageOptionsPoint);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setMargin(11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_21 = new QLabel(pageOptionsPoint);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_21, 0, 0, 1, 1);

        spinDistPoint = new QDoubleSpinBox(pageOptionsPoint);
        spinDistPoint->setObjectName(QString::fromUtf8("spinDistPoint"));
        spinDistPoint->setDecimals(4);
        spinDistPoint->setMaximum(1e+09);

        gridLayout_7->addWidget(spinDistPoint, 0, 1, 1, 1);

        label_23 = new QLabel(pageOptionsPoint);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_23, 1, 0, 1, 1);

        spinAngle = new QSpinBox(pageOptionsPoint);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setEnabled(false);

        gridLayout_7->addWidget(spinAngle, 1, 1, 1, 1);

        label_24 = new QLabel(pageOptionsPoint);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_7->addWidget(label_24, 1, 2, 1, 1);

        mPointDistanceUnitComboBox = new QComboBox(pageOptionsPoint);
        mPointDistanceUnitComboBox->setObjectName(QString::fromUtf8("mPointDistanceUnitComboBox"));

        gridLayout_7->addWidget(mPointDistanceUnitComboBox, 0, 2, 1, 1);

        stackedOptions->addWidget(pageOptionsPoint);
        pageOptionsLine = new QWidget();
        pageOptionsLine->setObjectName(QString::fromUtf8("pageOptionsLine"));
        verticalLayout_9 = new QVBoxLayout(pageOptionsLine);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setMargin(11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        chkLineAbove = new QCheckBox(pageOptionsLine);
        chkLineAbove->setObjectName(QString::fromUtf8("chkLineAbove"));
        chkLineAbove->setChecked(true);

        verticalLayout_9->addWidget(chkLineAbove);

        chkLineOn = new QCheckBox(pageOptionsLine);
        chkLineOn->setObjectName(QString::fromUtf8("chkLineOn"));

        verticalLayout_9->addWidget(chkLineOn);

        chkLineBelow = new QCheckBox(pageOptionsLine);
        chkLineBelow->setObjectName(QString::fromUtf8("chkLineBelow"));

        verticalLayout_9->addWidget(chkLineBelow);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_25 = new QLabel(pageOptionsLine);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_13->addWidget(label_25);

        radOrientationMap = new QRadioButton(pageOptionsLine);
        radOrientationMap->setObjectName(QString::fromUtf8("radOrientationMap"));
        radOrientationMap->setChecked(true);

        horizontalLayout_13->addWidget(radOrientationMap);

        radOrientationLine = new QRadioButton(pageOptionsLine);
        radOrientationLine->setObjectName(QString::fromUtf8("radOrientationLine"));

        horizontalLayout_13->addWidget(radOrientationLine);


        verticalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_26 = new QLabel(pageOptionsLine);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(label_26);

        spinDistLine = new QDoubleSpinBox(pageOptionsLine);
        spinDistLine->setObjectName(QString::fromUtf8("spinDistLine"));
        spinDistLine->setDecimals(4);
        spinDistLine->setMaximum(1e+09);

        horizontalLayout_14->addWidget(spinDistLine);

        mLineDistanceUnitComboBox = new QComboBox(pageOptionsLine);
        mLineDistanceUnitComboBox->setObjectName(QString::fromUtf8("mLineDistanceUnitComboBox"));

        horizontalLayout_14->addWidget(mLineDistanceUnitComboBox);


        verticalLayout_9->addLayout(horizontalLayout_14);

        stackedOptions->addWidget(pageOptionsLine);
        pageOptionsEmpty = new QWidget();
        pageOptionsEmpty->setObjectName(QString::fromUtf8("pageOptionsEmpty"));
        stackedOptions->addWidget(pageOptionsEmpty);

        horizontalLayout_12->addWidget(stackedOptions);


        gridLayout_13->addWidget(groupBox_5, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_6->addWidget(scrollArea_2, 0, 0, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.png"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(tab, icon2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea = new QScrollArea(tab_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 658, 567));
        gridLayout_11 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setMargin(11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        mFontAttributePropertiesGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mFontAttributePropertiesGroupBox->setObjectName(QString::fromUtf8("mFontAttributePropertiesGroupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mFontAttributePropertiesGroupBox->sizePolicy().hasHeightForWidth());
        mFontAttributePropertiesGroupBox->setSizePolicy(sizePolicy4);
        gridLayout = new QGridLayout(mFontAttributePropertiesGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSizeLabel = new QLabel(mFontAttributePropertiesGroupBox);
        mSizeLabel->setObjectName(QString::fromUtf8("mSizeLabel"));

        gridLayout->addWidget(mSizeLabel, 0, 0, 1, 1);

        mSizeAttributeComboBox = new QComboBox(mFontAttributePropertiesGroupBox);
        mSizeAttributeComboBox->setObjectName(QString::fromUtf8("mSizeAttributeComboBox"));

        gridLayout->addWidget(mSizeAttributeComboBox, 0, 1, 1, 1);

        mColorLabel = new QLabel(mFontAttributePropertiesGroupBox);
        mColorLabel->setObjectName(QString::fromUtf8("mColorLabel"));

        gridLayout->addWidget(mColorLabel, 1, 0, 1, 1);

        mColorAttributeComboBox = new QComboBox(mFontAttributePropertiesGroupBox);
        mColorAttributeComboBox->setObjectName(QString::fromUtf8("mColorAttributeComboBox"));

        gridLayout->addWidget(mColorAttributeComboBox, 1, 1, 1, 1);

        mBoldLabel = new QLabel(mFontAttributePropertiesGroupBox);
        mBoldLabel->setObjectName(QString::fromUtf8("mBoldLabel"));

        gridLayout->addWidget(mBoldLabel, 2, 0, 1, 1);

        mBoldAttributeComboBox = new QComboBox(mFontAttributePropertiesGroupBox);
        mBoldAttributeComboBox->setObjectName(QString::fromUtf8("mBoldAttributeComboBox"));

        gridLayout->addWidget(mBoldAttributeComboBox, 2, 1, 1, 1);

        mItalicLabel = new QLabel(mFontAttributePropertiesGroupBox);
        mItalicLabel->setObjectName(QString::fromUtf8("mItalicLabel"));

        gridLayout->addWidget(mItalicLabel, 3, 0, 1, 1);

        mItalicAttributeComboBox = new QComboBox(mFontAttributePropertiesGroupBox);
        mItalicAttributeComboBox->setObjectName(QString::fromUtf8("mItalicAttributeComboBox"));

        gridLayout->addWidget(mItalicAttributeComboBox, 3, 1, 1, 1);

        mUnderlineLabel = new QLabel(mFontAttributePropertiesGroupBox);
        mUnderlineLabel->setObjectName(QString::fromUtf8("mUnderlineLabel"));

        gridLayout->addWidget(mUnderlineLabel, 4, 0, 1, 1);

        mUnderlineAttributeComboBox = new QComboBox(mFontAttributePropertiesGroupBox);
        mUnderlineAttributeComboBox->setObjectName(QString::fromUtf8("mUnderlineAttributeComboBox"));

        gridLayout->addWidget(mUnderlineAttributeComboBox, 4, 1, 1, 1);

        mStrikeoutLabel = new QLabel(mFontAttributePropertiesGroupBox);
        mStrikeoutLabel->setObjectName(QString::fromUtf8("mStrikeoutLabel"));

        gridLayout->addWidget(mStrikeoutLabel, 5, 0, 1, 1);

        mStrikeoutAttributeComboBox = new QComboBox(mFontAttributePropertiesGroupBox);
        mStrikeoutAttributeComboBox->setObjectName(QString::fromUtf8("mStrikeoutAttributeComboBox"));

        gridLayout->addWidget(mStrikeoutAttributeComboBox, 5, 1, 1, 1);

        mFontFamilyLabel = new QLabel(mFontAttributePropertiesGroupBox);
        mFontFamilyLabel->setObjectName(QString::fromUtf8("mFontFamilyLabel"));

        gridLayout->addWidget(mFontFamilyLabel, 6, 0, 1, 1);

        mFontFamilyAttributeComboBox = new QComboBox(mFontAttributePropertiesGroupBox);
        mFontFamilyAttributeComboBox->setObjectName(QString::fromUtf8("mFontFamilyAttributeComboBox"));

        gridLayout->addWidget(mFontFamilyAttributeComboBox, 6, 1, 1, 1);


        gridLayout_11->addWidget(mFontAttributePropertiesGroupBox, 0, 0, 1, 1);

        mBufferAttributesPropertiesGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mBufferAttributesPropertiesGroupBox->setObjectName(QString::fromUtf8("mBufferAttributesPropertiesGroupBox"));
        gridLayout_2 = new QGridLayout(mBufferAttributesPropertiesGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mBufferSizeLabel = new QLabel(mBufferAttributesPropertiesGroupBox);
        mBufferSizeLabel->setObjectName(QString::fromUtf8("mBufferSizeLabel"));

        gridLayout_2->addWidget(mBufferSizeLabel, 0, 0, 1, 1);

        mBufferSizeAttributeComboBox = new QComboBox(mBufferAttributesPropertiesGroupBox);
        mBufferSizeAttributeComboBox->setObjectName(QString::fromUtf8("mBufferSizeAttributeComboBox"));

        gridLayout_2->addWidget(mBufferSizeAttributeComboBox, 0, 1, 1, 1);

        mBufferColorLabel = new QLabel(mBufferAttributesPropertiesGroupBox);
        mBufferColorLabel->setObjectName(QString::fromUtf8("mBufferColorLabel"));

        gridLayout_2->addWidget(mBufferColorLabel, 1, 0, 1, 1);

        mBufferColorAttributeComboBox = new QComboBox(mBufferAttributesPropertiesGroupBox);
        mBufferColorAttributeComboBox->setObjectName(QString::fromUtf8("mBufferColorAttributeComboBox"));

        gridLayout_2->addWidget(mBufferColorAttributeComboBox, 1, 1, 1, 1);


        gridLayout_11->addWidget(mBufferAttributesPropertiesGroupBox, 1, 0, 1, 1);

        mPositionAttributeGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mPositionAttributeGroupBox->setObjectName(QString::fromUtf8("mPositionAttributeGroupBox"));
        gridLayout_4 = new QGridLayout(mPositionAttributeGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mXCoordinateLabel = new QLabel(mPositionAttributeGroupBox);
        mXCoordinateLabel->setObjectName(QString::fromUtf8("mXCoordinateLabel"));

        gridLayout_4->addWidget(mXCoordinateLabel, 1, 0, 1, 1);

        mXCoordinateComboBox = new QComboBox(mPositionAttributeGroupBox);
        mXCoordinateComboBox->setObjectName(QString::fromUtf8("mXCoordinateComboBox"));

        gridLayout_4->addWidget(mXCoordinateComboBox, 1, 1, 1, 1);

        mYCoordinateLabel = new QLabel(mPositionAttributeGroupBox);
        mYCoordinateLabel->setObjectName(QString::fromUtf8("mYCoordinateLabel"));

        gridLayout_4->addWidget(mYCoordinateLabel, 2, 0, 1, 1);

        mYCoordinateComboBox = new QComboBox(mPositionAttributeGroupBox);
        mYCoordinateComboBox->setObjectName(QString::fromUtf8("mYCoordinateComboBox"));

        gridLayout_4->addWidget(mYCoordinateComboBox, 2, 1, 1, 1);

        mHorizontalAlignmentLabel = new QLabel(mPositionAttributeGroupBox);
        mHorizontalAlignmentLabel->setObjectName(QString::fromUtf8("mHorizontalAlignmentLabel"));

        gridLayout_4->addWidget(mHorizontalAlignmentLabel, 3, 0, 1, 1);

        mHorizontalAlignmentComboBox = new QComboBox(mPositionAttributeGroupBox);
        mHorizontalAlignmentComboBox->setObjectName(QString::fromUtf8("mHorizontalAlignmentComboBox"));

        gridLayout_4->addWidget(mHorizontalAlignmentComboBox, 3, 1, 1, 1);

        mVerticalAlignmentLabel = new QLabel(mPositionAttributeGroupBox);
        mVerticalAlignmentLabel->setObjectName(QString::fromUtf8("mVerticalAlignmentLabel"));

        gridLayout_4->addWidget(mVerticalAlignmentLabel, 4, 0, 1, 1);

        mVerticalAlignmentComboBox = new QComboBox(mPositionAttributeGroupBox);
        mVerticalAlignmentComboBox->setObjectName(QString::fromUtf8("mVerticalAlignmentComboBox"));

        gridLayout_4->addWidget(mVerticalAlignmentComboBox, 4, 1, 1, 1);

        mRotationComboBox = new QComboBox(mPositionAttributeGroupBox);
        mRotationComboBox->setObjectName(QString::fromUtf8("mRotationComboBox"));

        gridLayout_4->addWidget(mRotationComboBox, 5, 1, 1, 1);

        mRotationLabel = new QLabel(mPositionAttributeGroupBox);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        gridLayout_4->addWidget(mRotationLabel, 5, 0, 1, 1);

        mLabelDistanceComboBox = new QComboBox(mPositionAttributeGroupBox);
        mLabelDistanceComboBox->setObjectName(QString::fromUtf8("mLabelDistanceComboBox"));

        gridLayout_4->addWidget(mLabelDistanceComboBox, 0, 1, 1, 1);

        mLabelDistanceLabel = new QLabel(mPositionAttributeGroupBox);
        mLabelDistanceLabel->setObjectName(QString::fromUtf8("mLabelDistanceLabel"));

        gridLayout_4->addWidget(mLabelDistanceLabel, 0, 0, 1, 1);


        gridLayout_11->addWidget(mPositionAttributeGroupBox, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 3, 1, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/gis/mActionOpenTable.png"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(tab_4, icon3, QString());

        gridLayout_8->addWidget(mTabWidget, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsLabelingGuiBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_8->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(QgsLabelingGuiBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLabelingGuiBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLabelingGuiBase, SLOT(reject()));

        mTabWidget->setCurrentIndex(0);
        stackedPlacement->setCurrentIndex(2);
        stackedOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsLabelingGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLabelingGuiBase)
    {
        QgsLabelingGuiBase->setWindowTitle(QApplication::translate("QgsLabelingGuiBase", "Layer labeling settings", 0, QApplication::UnicodeUTF8));
        chkEnableLabeling->setText(QApplication::translate("QgsLabelingGuiBase", "Label this layer", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("QgsLabelingGuiBase", "Field with labels", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("QgsLabelingGuiBase", "Sample", 0, QApplication::UnicodeUTF8));
        lblFontPreview->setText(QApplication::translate("QgsLabelingGuiBase", "Lorem Ipsum", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("QgsLabelingGuiBase", "Text style", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("QgsLabelingGuiBase", "Font", 0, QApplication::UnicodeUTF8));
        lblFontName->setText(QApplication::translate("QgsLabelingGuiBase", "TextLabel", 0, QApplication::UnicodeUTF8));
        btnChangeFont->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("QgsLabelingGuiBase", "Color", 0, QApplication::UnicodeUTF8));
        btnTextColor->setText(QString());
        mFontSizeLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Size", 0, QApplication::UnicodeUTF8));
        mFontSizeUnitComboBox->clear();
        mFontSizeUnitComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelingGuiBase", "In points", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "In map units", 0, QApplication::UnicodeUTF8)
        );
        chkBuffer->setTitle(QApplication::translate("QgsLabelingGuiBase", "Buffer", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("QgsLabelingGuiBase", "Size", 0, QApplication::UnicodeUTF8));
        spinBufferSize->setSuffix(QApplication::translate("QgsLabelingGuiBase", " mm", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("QgsLabelingGuiBase", "Color", 0, QApplication::UnicodeUTF8));
        btnBufferColor->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        chkScaleBasedVisibility->setTitle(QApplication::translate("QgsLabelingGuiBase", "Scale-based visibility", 0, QApplication::UnicodeUTF8));
        spinScaleMin->setPrefix(QApplication::translate("QgsLabelingGuiBase", "Minimum ", 0, QApplication::UnicodeUTF8));
        spinScaleMax->setPrefix(QApplication::translate("QgsLabelingGuiBase", "Maximum ", 0, QApplication::UnicodeUTF8));
        mTabWidget->setTabText(mTabWidget->indexOf(tab_3), QApplication::translate("QgsLabelingGuiBase", "Label settings", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("QgsLabelingGuiBase", "Priority", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("QgsLabelingGuiBase", "Low", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("QgsLabelingGuiBase", "High", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsLabelingGuiBase", "Options", 0, QApplication::UnicodeUTF8));
        chkLabelPerFeaturePart->setText(QApplication::translate("QgsLabelingGuiBase", "Label every part of multi-part features", 0, QApplication::UnicodeUTF8));
        chkMergeLines->setText(QApplication::translate("QgsLabelingGuiBase", "Merge connected lines to avoid duplicate labels", 0, QApplication::UnicodeUTF8));
        chkMultiLine->setText(QApplication::translate("QgsLabelingGuiBase", "Multiline labels", 0, QApplication::UnicodeUTF8));
        chkAddDirectionSymbol->setText(QApplication::translate("QgsLabelingGuiBase", "Add direction symbol", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("QgsLabelingGuiBase", "Suppress labeling of features smaller than", 0, QApplication::UnicodeUTF8));
        mMinSizeSpinBox->setSuffix(QApplication::translate("QgsLabelingGuiBase", " mm", 0, QApplication::UnicodeUTF8));
        chkNoObstacle->setText(QApplication::translate("QgsLabelingGuiBase", "Features don't act as obstacles for labels", 0, QApplication::UnicodeUTF8));
        btnEngineSettings->setText(QApplication::translate("QgsLabelingGuiBase", "Engine settings", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("QgsLabelingGuiBase", "Placement", 0, QApplication::UnicodeUTF8));
        radAroundPoint->setText(QApplication::translate("QgsLabelingGuiBase", "around point", 0, QApplication::UnicodeUTF8));
        radOverPoint->setText(QApplication::translate("QgsLabelingGuiBase", "over point", 0, QApplication::UnicodeUTF8));
        radLineParallel->setText(QApplication::translate("QgsLabelingGuiBase", "parallel", 0, QApplication::UnicodeUTF8));
        radLineCurved->setText(QApplication::translate("QgsLabelingGuiBase", "curved", 0, QApplication::UnicodeUTF8));
        radLineHorizontal->setText(QApplication::translate("QgsLabelingGuiBase", "horizontal", 0, QApplication::UnicodeUTF8));
        radOverCentroid->setText(QApplication::translate("QgsLabelingGuiBase", "over centroid", 0, QApplication::UnicodeUTF8));
        radAroundCentroid->setText(QApplication::translate("QgsLabelingGuiBase", "around centroid", 0, QApplication::UnicodeUTF8));
        radPolygonHorizontal->setText(QApplication::translate("QgsLabelingGuiBase", "horizontal (slow)", 0, QApplication::UnicodeUTF8));
        radPolygonFree->setText(QApplication::translate("QgsLabelingGuiBase", "free (slow)", 0, QApplication::UnicodeUTF8));
        radPolygonPerimeter->setText(QApplication::translate("QgsLabelingGuiBase", "using perimeter", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("QgsLabelingGuiBase", "Label distance", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("QgsLabelingGuiBase", "Rotation", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("QgsLabelingGuiBase", "degrees", 0, QApplication::UnicodeUTF8));
        mPointDistanceUnitComboBox->clear();
        mPointDistanceUnitComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelingGuiBase", "In mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "In map units", 0, QApplication::UnicodeUTF8)
        );
        chkLineAbove->setText(QApplication::translate("QgsLabelingGuiBase", "above line", 0, QApplication::UnicodeUTF8));
        chkLineOn->setText(QApplication::translate("QgsLabelingGuiBase", "on line", 0, QApplication::UnicodeUTF8));
        chkLineBelow->setText(QApplication::translate("QgsLabelingGuiBase", "below line", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("QgsLabelingGuiBase", "Orientation", 0, QApplication::UnicodeUTF8));
        radOrientationMap->setText(QApplication::translate("QgsLabelingGuiBase", "map", 0, QApplication::UnicodeUTF8));
        radOrientationLine->setText(QApplication::translate("QgsLabelingGuiBase", "line", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("QgsLabelingGuiBase", "Label distance", 0, QApplication::UnicodeUTF8));
        mLineDistanceUnitComboBox->clear();
        mLineDistanceUnitComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelingGuiBase", "In mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "In map units", 0, QApplication::UnicodeUTF8)
        );
        mTabWidget->setTabText(mTabWidget->indexOf(tab), QApplication::translate("QgsLabelingGuiBase", "Advanced", 0, QApplication::UnicodeUTF8));
        mFontAttributePropertiesGroupBox->setTitle(QApplication::translate("QgsLabelingGuiBase", "Font properties", 0, QApplication::UnicodeUTF8));
        mSizeLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Size", 0, QApplication::UnicodeUTF8));
        mColorLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Color", 0, QApplication::UnicodeUTF8));
        mBoldLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Bold", 0, QApplication::UnicodeUTF8));
        mItalicLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Italic", 0, QApplication::UnicodeUTF8));
        mUnderlineLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Underline", 0, QApplication::UnicodeUTF8));
        mStrikeoutLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Strikeout", 0, QApplication::UnicodeUTF8));
        mFontFamilyLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Font family", 0, QApplication::UnicodeUTF8));
        mBufferAttributesPropertiesGroupBox->setTitle(QApplication::translate("QgsLabelingGuiBase", "Buffer properties", 0, QApplication::UnicodeUTF8));
        mBufferSizeLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Buffer size", 0, QApplication::UnicodeUTF8));
        mBufferColorLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Buffer color", 0, QApplication::UnicodeUTF8));
        mPositionAttributeGroupBox->setTitle(QApplication::translate("QgsLabelingGuiBase", "Position", 0, QApplication::UnicodeUTF8));
        mXCoordinateLabel->setText(QApplication::translate("QgsLabelingGuiBase", "X Coordinate", 0, QApplication::UnicodeUTF8));
        mYCoordinateLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Y Coordinate", 0, QApplication::UnicodeUTF8));
        mHorizontalAlignmentLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Horizontal alignment", 0, QApplication::UnicodeUTF8));
        mVerticalAlignmentLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Vertical alignment", 0, QApplication::UnicodeUTF8));
        mRotationLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Rotation", 0, QApplication::UnicodeUTF8));
        mLabelDistanceLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Label distance", 0, QApplication::UnicodeUTF8));
        mTabWidget->setTabText(mTabWidget->indexOf(tab_4), QApplication::translate("QgsLabelingGuiBase", "Data defined settings", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsLabelingGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingGuiBase: public Ui_QgsLabelingGuiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGGUIBASE_H
