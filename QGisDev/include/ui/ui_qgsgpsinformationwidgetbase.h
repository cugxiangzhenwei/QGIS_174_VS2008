/********************************************************************************
** Form generated from reading ui file 'qgsgpsinformationwidgetbase.ui'
**
** Created: Tue Mar 13 10:24:00 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGPSINFORMATIONWIDGETBASE_H
#define UI_QGSGPSINFORMATIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsGPSInformationWidgetBase
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mBtnPosition;
    QToolButton *mBtnSignal;
    QToolButton *mBtnSatellites;
    QToolButton *mBtnOptions;
    QToolButton *mBtnDebug;
    QSpacerItem *horizontalSpacer;
    QPushButton *mConnectButton;
    QStackedWidget *mStackedWidget;
    QWidget *stackedWidgetPage1;
    QGridLayout *gridLayout_2;
    QDateTimeEdit *mDateTime;
    QDoubleSpinBox *mSpinLatitude;
    QDoubleSpinBox *mSpinLongitude;
    QDoubleSpinBox *mSpinElevation;
    QProgressBar *mVerticalAccuracy;
    QProgressBar *mHorizontalAccuracy;
    QPushButton *mBtnAddVertex;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *mBtnCloseFeature;
    QToolButton *mBtnResetFeature;
    QWidget *stackedWidgetPage2;
    QWidget *stackedWidgetPage3;
    QWidget *stackedWidgetPage4;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_7;
    QGroupBox *mDeviceGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *mRadAutodetect;
    QRadioButton *mRadUserPath;
    QHBoxLayout *horizontalLayout;
    QLabel *mPathLabel;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mCboDevices;
    QToolButton *mBtnRefreshDevices;
    QGridLayout *gridLayout_12;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *mGpsdDevice;
    QLineEdit *mGpsdHost;
    QLineEdit *mGpsdPort;
    QRadioButton *mRadGpsd;
    QGroupBox *mGroupShowMarker;
    QGridLayout *gridLayout_3;
    QSlider *mSliderMarkerSize;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_9;
    QCheckBox *mCbxAutoAddVertices;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QRadioButton *radRecenterWhenNeeded;
    QRadioButton *radNeverRecenter;
    QRadioButton *radRecenterMap;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_11;
    QPushButton *mBtnTrackColour;
    QSpinBox *mSpinTrackWidth;
    QWidget *stackedWidgetPage5;
    QGridLayout *gridLayout_6;
    QTextEdit *mGPSTextEdit;

    void setupUi(QWidget *QgsGPSInformationWidgetBase)
    {
        if (QgsGPSInformationWidgetBase->objectName().isEmpty())
            QgsGPSInformationWidgetBase->setObjectName(QString::fromUtf8("QgsGPSInformationWidgetBase"));
        QgsGPSInformationWidgetBase->resize(279, 723);
        gridLayout_4 = new QGridLayout(QgsGPSInformationWidgetBase);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(3, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mBtnPosition = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnPosition->setObjectName(QString::fromUtf8("mBtnPosition"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionToggleEditing.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnPosition->setIcon(icon);

        horizontalLayout_2->addWidget(mBtnPosition);

        mBtnSignal = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnSignal->setObjectName(QString::fromUtf8("mBtnSignal"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/gpsicons/barchart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnSignal->setIcon(icon1);

        horizontalLayout_2->addWidget(mBtnSignal);

        mBtnSatellites = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnSatellites->setObjectName(QString::fromUtf8("mBtnSatellites"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/gpsicons/polarchart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnSatellites->setIcon(icon2);

        horizontalLayout_2->addWidget(mBtnSatellites);

        mBtnOptions = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnOptions->setObjectName(QString::fromUtf8("mBtnOptions"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionOptions.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnOptions->setIcon(icon3);

        horizontalLayout_2->addWidget(mBtnOptions);

        mBtnDebug = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnDebug->setObjectName(QString::fromUtf8("mBtnDebug"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/gis/mActionCopySelected.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnDebug->setIcon(icon4);

        horizontalLayout_2->addWidget(mBtnDebug);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mConnectButton = new QPushButton(QgsGPSInformationWidgetBase);
        mConnectButton->setObjectName(QString::fromUtf8("mConnectButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mConnectButton->sizePolicy().hasHeightForWidth());
        mConnectButton->setSizePolicy(sizePolicy);
        mConnectButton->setCheckable(true);

        horizontalLayout_2->addWidget(mConnectButton);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsGPSInformationWidgetBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        gridLayout_2 = new QGridLayout(stackedWidgetPage1);
        gridLayout_2->setMargin(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mDateTime = new QDateTimeEdit(stackedWidgetPage1);
        mDateTime->setObjectName(QString::fromUtf8("mDateTime"));
        mDateTime->setReadOnly(true);

        gridLayout_2->addWidget(mDateTime, 0, 0, 1, 1);

        mSpinLatitude = new QDoubleSpinBox(stackedWidgetPage1);
        mSpinLatitude->setObjectName(QString::fromUtf8("mSpinLatitude"));
        mSpinLatitude->setReadOnly(true);
        mSpinLatitude->setMinimum(-90);
        mSpinLatitude->setMaximum(90);

        gridLayout_2->addWidget(mSpinLatitude, 1, 0, 1, 1);

        mSpinLongitude = new QDoubleSpinBox(stackedWidgetPage1);
        mSpinLongitude->setObjectName(QString::fromUtf8("mSpinLongitude"));
        mSpinLongitude->setReadOnly(true);
        mSpinLongitude->setMinimum(-180);
        mSpinLongitude->setMaximum(180);

        gridLayout_2->addWidget(mSpinLongitude, 2, 0, 1, 1);

        mSpinElevation = new QDoubleSpinBox(stackedWidgetPage1);
        mSpinElevation->setObjectName(QString::fromUtf8("mSpinElevation"));
        mSpinElevation->setReadOnly(true);
        mSpinElevation->setMaximum(9999.99);

        gridLayout_2->addWidget(mSpinElevation, 3, 0, 1, 1);

        mVerticalAccuracy = new QProgressBar(stackedWidgetPage1);
        mVerticalAccuracy->setObjectName(QString::fromUtf8("mVerticalAccuracy"));
        mVerticalAccuracy->setMaximum(10);
        mVerticalAccuracy->setValue(5);
        mVerticalAccuracy->setOrientation(Qt::Horizontal);
        mVerticalAccuracy->setTextDirection(QProgressBar::BottomToTop);

        gridLayout_2->addWidget(mVerticalAccuracy, 4, 0, 1, 1);

        mHorizontalAccuracy = new QProgressBar(stackedWidgetPage1);
        mHorizontalAccuracy->setObjectName(QString::fromUtf8("mHorizontalAccuracy"));
        mHorizontalAccuracy->setMaximum(10);
        mHorizontalAccuracy->setValue(5);

        gridLayout_2->addWidget(mHorizontalAccuracy, 5, 0, 1, 1);

        mBtnAddVertex = new QPushButton(stackedWidgetPage1);
        mBtnAddVertex->setObjectName(QString::fromUtf8("mBtnAddVertex"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mBtnAddVertex->sizePolicy().hasHeightForWidth());
        mBtnAddVertex->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mBtnAddVertex, 6, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mBtnCloseFeature = new QPushButton(stackedWidgetPage1);
        mBtnCloseFeature->setObjectName(QString::fromUtf8("mBtnCloseFeature"));
        sizePolicy1.setHeightForWidth(mBtnCloseFeature->sizePolicy().hasHeightForWidth());
        mBtnCloseFeature->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(mBtnCloseFeature);

        mBtnResetFeature = new QToolButton(stackedWidgetPage1);
        mBtnResetFeature->setObjectName(QString::fromUtf8("mBtnResetFeature"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mBtnResetFeature->sizePolicy().hasHeightForWidth());
        mBtnResetFeature->setSizePolicy(sizePolicy2);
        mBtnResetFeature->setMinimumSize(QSize(32, 0));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionRotatePointSymbols.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnResetFeature->setIcon(icon5);

        horizontalLayout_4->addWidget(mBtnResetFeature);


        gridLayout_2->addLayout(horizontalLayout_4, 7, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        mStackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QString::fromUtf8("stackedWidgetPage3"));
        mStackedWidget->addWidget(stackedWidgetPage3);
        stackedWidgetPage4 = new QWidget();
        stackedWidgetPage4->setObjectName(QString::fromUtf8("stackedWidgetPage4"));
        gridLayout_5 = new QGridLayout(stackedWidgetPage4);
        gridLayout_5->setMargin(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        scrollArea = new QScrollArea(stackedWidgetPage4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 272, 684));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_7->setMargin(0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mDeviceGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mDeviceGroupBox->setObjectName(QString::fromUtf8("mDeviceGroupBox"));
        gridLayout = new QGridLayout(mDeviceGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mRadAutodetect = new QRadioButton(mDeviceGroupBox);
        mRadAutodetect->setObjectName(QString::fromUtf8("mRadAutodetect"));
        mRadAutodetect->setChecked(true);

        gridLayout->addWidget(mRadAutodetect, 0, 0, 1, 1);

        mRadUserPath = new QRadioButton(mDeviceGroupBox);
        mRadUserPath->setObjectName(QString::fromUtf8("mRadUserPath"));

        gridLayout->addWidget(mRadUserPath, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mPathLabel = new QLabel(mDeviceGroupBox);
        mPathLabel->setObjectName(QString::fromUtf8("mPathLabel"));

        horizontalLayout->addWidget(mPathLabel);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mCboDevices = new QComboBox(mDeviceGroupBox);
        mCboDevices->setObjectName(QString::fromUtf8("mCboDevices"));
        mCboDevices->setEnabled(false);
        mCboDevices->setEditable(true);

        horizontalLayout_3->addWidget(mCboDevices);

        mBtnRefreshDevices = new QToolButton(mDeviceGroupBox);
        mBtnRefreshDevices->setObjectName(QString::fromUtf8("mBtnRefreshDevices"));
        mBtnRefreshDevices->setEnabled(false);
        mBtnRefreshDevices->setIcon(icon5);

        horizontalLayout_3->addWidget(mBtnRefreshDevices);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_4 = new QLabel(mDeviceGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_12->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(mDeviceGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_12->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(mDeviceGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_12->addWidget(label_5, 2, 0, 1, 1);

        mGpsdDevice = new QLineEdit(mDeviceGroupBox);
        mGpsdDevice->setObjectName(QString::fromUtf8("mGpsdDevice"));
        mGpsdDevice->setEnabled(false);

        gridLayout_12->addWidget(mGpsdDevice, 2, 1, 1, 1);

        mGpsdHost = new QLineEdit(mDeviceGroupBox);
        mGpsdHost->setObjectName(QString::fromUtf8("mGpsdHost"));
        mGpsdHost->setEnabled(false);

        gridLayout_12->addWidget(mGpsdHost, 0, 1, 1, 1);

        mGpsdPort = new QLineEdit(mDeviceGroupBox);
        mGpsdPort->setObjectName(QString::fromUtf8("mGpsdPort"));
        mGpsdPort->setEnabled(false);
        mGpsdPort->setMaxLength(5);

        gridLayout_12->addWidget(mGpsdPort, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_12, 6, 0, 1, 1);

        mRadGpsd = new QRadioButton(mDeviceGroupBox);
        mRadGpsd->setObjectName(QString::fromUtf8("mRadGpsd"));

        gridLayout->addWidget(mRadGpsd, 5, 0, 1, 1);


        gridLayout_7->addWidget(mDeviceGroupBox, 0, 0, 1, 1);

        mGroupShowMarker = new QGroupBox(scrollAreaWidgetContents);
        mGroupShowMarker->setObjectName(QString::fromUtf8("mGroupShowMarker"));
        mGroupShowMarker->setCheckable(true);
        gridLayout_3 = new QGridLayout(mGroupShowMarker);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mSliderMarkerSize = new QSlider(mGroupShowMarker);
        mSliderMarkerSize->setObjectName(QString::fromUtf8("mSliderMarkerSize"));
        mSliderMarkerSize->setMinimum(8);
        mSliderMarkerSize->setMaximum(128);
        mSliderMarkerSize->setSingleStep(4);
        mSliderMarkerSize->setPageStep(8);
        mSliderMarkerSize->setSliderPosition(10);
        mSliderMarkerSize->setOrientation(Qt::Horizontal);
        mSliderMarkerSize->setTickPosition(QSlider::TicksBelow);

        gridLayout_3->addWidget(mSliderMarkerSize, 0, 0, 1, 3);

        label = new QLabel(mGroupShowMarker);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(207, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        label_2 = new QLabel(mGroupShowMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 2, 1, 1);


        gridLayout_7->addWidget(mGroupShowMarker, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_9 = new QGridLayout(groupBox_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        mCbxAutoAddVertices = new QCheckBox(groupBox_2);
        mCbxAutoAddVertices->setObjectName(QString::fromUtf8("mCbxAutoAddVertices"));

        gridLayout_9->addWidget(mCbxAutoAddVertices, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        radRecenterWhenNeeded = new QRadioButton(groupBox);
        radRecenterWhenNeeded->setObjectName(QString::fromUtf8("radRecenterWhenNeeded"));

        gridLayout_8->addWidget(radRecenterWhenNeeded, 1, 0, 1, 1);

        radNeverRecenter = new QRadioButton(groupBox);
        radNeverRecenter->setObjectName(QString::fromUtf8("radNeverRecenter"));

        gridLayout_8->addWidget(radNeverRecenter, 2, 0, 1, 1);

        radRecenterMap = new QRadioButton(groupBox);
        radRecenterMap->setObjectName(QString::fromUtf8("radRecenterMap"));
        radRecenterMap->setChecked(true);

        gridLayout_8->addWidget(radRecenterMap, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_11 = new QGridLayout(groupBox_3);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        mBtnTrackColour = new QPushButton(groupBox_3);
        mBtnTrackColour->setObjectName(QString::fromUtf8("mBtnTrackColour"));

        gridLayout_11->addWidget(mBtnTrackColour, 0, 0, 1, 1);

        mSpinTrackWidth = new QSpinBox(groupBox_3);
        mSpinTrackWidth->setObjectName(QString::fromUtf8("mSpinTrackWidth"));

        gridLayout_11->addWidget(mSpinTrackWidth, 1, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 4, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 0, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage4);
        stackedWidgetPage5 = new QWidget();
        stackedWidgetPage5->setObjectName(QString::fromUtf8("stackedWidgetPage5"));
        gridLayout_6 = new QGridLayout(stackedWidgetPage5);
        gridLayout_6->setMargin(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mGPSTextEdit = new QTextEdit(stackedWidgetPage5);
        mGPSTextEdit->setObjectName(QString::fromUtf8("mGPSTextEdit"));

        gridLayout_6->addWidget(mGPSTextEdit, 0, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage5);

        gridLayout_4->addWidget(mStackedWidget, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mPathLabel->setBuddy(mCboDevices);
        label_4->setBuddy(mGpsdPort);
        label_3->setBuddy(mGpsdHost);
        label_5->setBuddy(mGpsdDevice);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mBtnPosition, mBtnSignal);
        QWidget::setTabOrder(mBtnSignal, mBtnSatellites);
        QWidget::setTabOrder(mBtnSatellites, mBtnOptions);
        QWidget::setTabOrder(mBtnOptions, mBtnDebug);
        QWidget::setTabOrder(mBtnDebug, mDateTime);
        QWidget::setTabOrder(mDateTime, mSpinLatitude);
        QWidget::setTabOrder(mSpinLatitude, mSpinLongitude);
        QWidget::setTabOrder(mSpinLongitude, mSpinElevation);
        QWidget::setTabOrder(mSpinElevation, mBtnAddVertex);
        QWidget::setTabOrder(mBtnAddVertex, mBtnCloseFeature);
        QWidget::setTabOrder(mBtnCloseFeature, mRadAutodetect);
        QWidget::setTabOrder(mRadAutodetect, mRadUserPath);
        QWidget::setTabOrder(mRadUserPath, mCboDevices);
        QWidget::setTabOrder(mCboDevices, mGroupShowMarker);
        QWidget::setTabOrder(mGroupShowMarker, mSliderMarkerSize);
        QWidget::setTabOrder(mSliderMarkerSize, radRecenterMap);
        QWidget::setTabOrder(radRecenterMap, radRecenterWhenNeeded);
        QWidget::setTabOrder(radRecenterWhenNeeded, radNeverRecenter);
        QWidget::setTabOrder(radNeverRecenter, mGPSTextEdit);

        retranslateUi(QgsGPSInformationWidgetBase);
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mPathLabel, SLOT(setDisabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mCboDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mPathLabel, SLOT(setEnabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mCboDevices, SLOT(setEnabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setDisabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setDisabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mCboDevices, SLOT(setEnabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setEnabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setEnabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setEnabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setEnabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mCboDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setDisabled(bool)));

        mStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsGPSInformationWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsGPSInformationWidgetBase)
    {
        QgsGPSInformationWidgetBase->setWindowTitle(QApplication::translate("QgsGPSInformationWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mBtnPosition->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mBtnSignal->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mBtnSatellites->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mBtnOptions->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mBtnDebug->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mConnectButton->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Connect", 0, QApplication::UnicodeUTF8));
        mSpinLatitude->setSuffix(QApplication::translate("QgsGPSInformationWidgetBase", " Latitude", 0, QApplication::UnicodeUTF8));
        mSpinLongitude->setSuffix(QApplication::translate("QgsGPSInformationWidgetBase", " Longitude", 0, QApplication::UnicodeUTF8));
        mSpinElevation->setSuffix(QApplication::translate("QgsGPSInformationWidgetBase", " Elevation", 0, QApplication::UnicodeUTF8));
        mVerticalAccuracy->setFormat(QApplication::translate("QgsGPSInformationWidgetBase", "Vertical Accuracy", 0, QApplication::UnicodeUTF8));
        mHorizontalAccuracy->setFormat(QApplication::translate("QgsGPSInformationWidgetBase", "Horizontal Accuracy", 0, QApplication::UnicodeUTF8));
        mBtnAddVertex->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Add vertex", 0, QApplication::UnicodeUTF8));
        mBtnCloseFeature->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Add feature", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnResetFeature->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Reset current feature", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnResetFeature->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mDeviceGroupBox->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "GPS connection", 0, QApplication::UnicodeUTF8));
        mRadAutodetect->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Autodetect", 0, QApplication::UnicodeUTF8));
        mRadUserPath->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Use path / port below", 0, QApplication::UnicodeUTF8));
        mPathLabel->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Path to serial device", 0, QApplication::UnicodeUTF8));
        mBtnRefreshDevices->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Port", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Host", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Device", 0, QApplication::UnicodeUTF8));
        mGpsdPort->setInputMask(QApplication::translate("QgsGPSInformationWidgetBase", "ddddd; ", 0, QApplication::UnicodeUTF8));
        mRadGpsd->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Connection to gpsd", 0, QApplication::UnicodeUTF8));
        mGroupShowMarker->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "GPS cursor size", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Small", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Large", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "GPS digitizing", 0, QApplication::UnicodeUTF8));
        mCbxAutoAddVertices->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Auto-add vertices", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "GPS map recenter", 0, QApplication::UnicodeUTF8));
        radRecenterWhenNeeded->setText(QApplication::translate("QgsGPSInformationWidgetBase", "when leaving extents", 0, QApplication::UnicodeUTF8));
        radNeverRecenter->setText(QApplication::translate("QgsGPSInformationWidgetBase", "never", 0, QApplication::UnicodeUTF8));
        radRecenterMap->setText(QApplication::translate("QgsGPSInformationWidgetBase", "always", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "Track", 0, QApplication::UnicodeUTF8));
        mBtnTrackColour->setStyleSheet(QString());
        mBtnTrackColour->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Color", 0, QApplication::UnicodeUTF8));
        mSpinTrackWidth->setSuffix(QApplication::translate("QgsGPSInformationWidgetBase", " width", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsGPSInformationWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGPSInformationWidgetBase: public Ui_QgsGPSInformationWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGPSINFORMATIONWIDGETBASE_H
