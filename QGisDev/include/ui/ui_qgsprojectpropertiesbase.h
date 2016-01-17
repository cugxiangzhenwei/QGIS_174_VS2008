/********************************************************************************
** Form generated from reading ui file 'qgsprojectpropertiesbase.ui'
**
** Created: Tue Mar 13 10:23:50 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPROJECTPROPERTIESBASE_H
#define UI_QGSPROJECTPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"
#include "qgsprojectionselector.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectPropertiesBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout;
    QGroupBox *titleBox;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLineEdit *titleEdit;
    QLabel *textLabel1;
    QSpacerItem *spacerItem;
    QgsColorButton *pbnSelectionColor;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QgsColorButton *pbnCanvasColor;
    QComboBox *cbxAbsolutePath;
    QLabel *label_3;
    QSpacerItem *spacerItem2;
    QGroupBox *btnGrpMapUnits;
    QGridLayout *gridLayout2;
    QRadioButton *radMeters;
    QRadioButton *radFeet;
    QRadioButton *radDecimalDegrees;
    QRadioButton *radDMS;
    QGroupBox *btnGrpPrecision;
    QGridLayout *gridLayout3;
    QRadioButton *radAutomatic;
    QRadioButton *radManual;
    QSpinBox *spinBoxDP;
    QLabel *labelDP;
    QWidget *tab2;
    QGridLayout *gridLayout4;
    QCheckBox *cbxProjectionEnabled;
    QgsProjectionSelector *projectionSelector;
    QWidget *tab3;
    QHBoxLayout *hboxLayout;
    QTableWidget *twIdentifyLayers;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QGroupBox *grpWMSServiceCapabilities;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QLineEdit *mWMSTitle;
    QLabel *label_7;
    QLineEdit *mWMSContactPerson;
    QLabel *label_8;
    QLineEdit *mWMSContactPhone;
    QTextEdit *mWMSAbstract;
    QLabel *label_5;
    QLabel *label_13;
    QLineEdit *mWMSContactMail;
    QLabel *label_4;
    QLineEdit *mWMSContactOrganization;
    QGroupBox *grpWMSExt;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QLineEdit *mWMSExtMinX;
    QLabel *label_12;
    QLineEdit *mWMSExtMinY;
    QLabel *label_9;
    QLineEdit *mWMSExtMaxX;
    QLabel *label_10;
    QLineEdit *mWMSExtMaxY;
    QPushButton *pbnWMSExtCanvas;
    QSpacerItem *verticalSpacer;
    QGroupBox *grpWMSList;
    QGridLayout *gridLayout_5;
    QListWidget *mWMSList;
    QPushButton *pbnWMSAddSRS;
    QPushButton *pbnWMSRemoveSRS;
    QPushButton *pbnWMSSetUsedSRS;
    QCheckBox *mAddWktGeometryCheckBox;

    void setupUi(QDialog *QgsProjectPropertiesBase)
    {
        if (QgsProjectPropertiesBase->objectName().isEmpty())
            QgsProjectPropertiesBase->setObjectName(QString::fromUtf8("QgsProjectPropertiesBase"));
        QgsProjectPropertiesBase->resize(678, 690);
        QgsProjectPropertiesBase->setSizeGripEnabled(true);
        QgsProjectPropertiesBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsProjectPropertiesBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(QgsProjectPropertiesBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(QgsProjectPropertiesBase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setIconSize(QSize(22, 22));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        gridLayout = new QGridLayout(tab1);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        titleBox = new QGroupBox(tab1);
        titleBox->setObjectName(QString::fromUtf8("titleBox"));
        gridLayout1 = new QGridLayout(titleBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setMargin(11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_2 = new QLabel(titleBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        titleEdit = new QLineEdit(titleBox);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));

        gridLayout1->addWidget(titleEdit, 0, 1, 1, 3);

        textLabel1 = new QLabel(titleBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout1->addWidget(textLabel1, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 1, 2, 1, 1);

        pbnSelectionColor = new QgsColorButton(titleBox);
        pbnSelectionColor->setObjectName(QString::fromUtf8("pbnSelectionColor"));
        pbnSelectionColor->setMinimumSize(QSize(100, 0));

        gridLayout1->addWidget(pbnSelectionColor, 1, 3, 1, 1);

        label = new QLabel(titleBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 2, 0, 1, 2);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 2, 2, 1, 1);

        pbnCanvasColor = new QgsColorButton(titleBox);
        pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
        pbnCanvasColor->setMinimumSize(QSize(100, 0));

        gridLayout1->addWidget(pbnCanvasColor, 2, 3, 1, 1);

        cbxAbsolutePath = new QComboBox(titleBox);
        cbxAbsolutePath->setObjectName(QString::fromUtf8("cbxAbsolutePath"));

        gridLayout1->addWidget(cbxAbsolutePath, 3, 3, 1, 1);

        label_3 = new QLabel(titleBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 3, 0, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 3, 2, 1, 1);


        gridLayout->addWidget(titleBox, 0, 0, 1, 1);

        btnGrpMapUnits = new QGroupBox(tab1);
        btnGrpMapUnits->setObjectName(QString::fromUtf8("btnGrpMapUnits"));
        gridLayout2 = new QGridLayout(btnGrpMapUnits);
        gridLayout2->setSpacing(6);
        gridLayout2->setMargin(11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        radMeters = new QRadioButton(btnGrpMapUnits);
        radMeters->setObjectName(QString::fromUtf8("radMeters"));
        radMeters->setChecked(true);

        gridLayout2->addWidget(radMeters, 0, 0, 1, 1);

        radFeet = new QRadioButton(btnGrpMapUnits);
        radFeet->setObjectName(QString::fromUtf8("radFeet"));

        gridLayout2->addWidget(radFeet, 0, 1, 1, 1);

        radDecimalDegrees = new QRadioButton(btnGrpMapUnits);
        radDecimalDegrees->setObjectName(QString::fromUtf8("radDecimalDegrees"));

        gridLayout2->addWidget(radDecimalDegrees, 0, 2, 1, 1);

        radDMS = new QRadioButton(btnGrpMapUnits);
        radDMS->setObjectName(QString::fromUtf8("radDMS"));

        gridLayout2->addWidget(radDMS, 0, 3, 1, 1);


        gridLayout->addWidget(btnGrpMapUnits, 1, 0, 1, 1);

        btnGrpPrecision = new QGroupBox(tab1);
        btnGrpPrecision->setObjectName(QString::fromUtf8("btnGrpPrecision"));
        gridLayout3 = new QGridLayout(btnGrpPrecision);
        gridLayout3->setSpacing(6);
        gridLayout3->setMargin(11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        radAutomatic = new QRadioButton(btnGrpPrecision);
        radAutomatic->setObjectName(QString::fromUtf8("radAutomatic"));
        radAutomatic->setChecked(true);

        gridLayout3->addWidget(radAutomatic, 0, 0, 1, 1);

        radManual = new QRadioButton(btnGrpPrecision);
        radManual->setObjectName(QString::fromUtf8("radManual"));

        gridLayout3->addWidget(radManual, 0, 1, 1, 1);

        spinBoxDP = new QSpinBox(btnGrpPrecision);
        spinBoxDP->setObjectName(QString::fromUtf8("spinBoxDP"));

        gridLayout3->addWidget(spinBoxDP, 0, 2, 1, 1);

        labelDP = new QLabel(btnGrpPrecision);
        labelDP->setObjectName(QString::fromUtf8("labelDP"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelDP->sizePolicy().hasHeightForWidth());
        labelDP->setSizePolicy(sizePolicy);

        gridLayout3->addWidget(labelDP, 0, 3, 1, 1);


        gridLayout->addWidget(btnGrpPrecision, 2, 0, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab1, icon, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        gridLayout4 = new QGridLayout(tab2);
        gridLayout4->setSpacing(6);
        gridLayout4->setMargin(11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setContentsMargins(3, 11, 3, 11);
        cbxProjectionEnabled = new QCheckBox(tab2);
        cbxProjectionEnabled->setObjectName(QString::fromUtf8("cbxProjectionEnabled"));

        gridLayout4->addWidget(cbxProjectionEnabled, 0, 0, 1, 1);

        projectionSelector = new QgsProjectionSelector(tab2);
        projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

        gridLayout4->addWidget(projectionSelector, 1, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/CRS.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab2, icon1, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        hboxLayout = new QHBoxLayout(tab3);
        hboxLayout->setSpacing(6);
        hboxLayout->setMargin(11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        twIdentifyLayers = new QTableWidget(tab3);
        if (twIdentifyLayers->columnCount() < 3)
            twIdentifyLayers->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twIdentifyLayers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twIdentifyLayers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twIdentifyLayers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        twIdentifyLayers->setObjectName(QString::fromUtf8("twIdentifyLayers"));
        twIdentifyLayers->setSortingEnabled(true);

        hboxLayout->addWidget(twIdentifyLayers);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/map_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab3, icon2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        grpWMSServiceCapabilities = new QGroupBox(tab);
        grpWMSServiceCapabilities->setObjectName(QString::fromUtf8("grpWMSServiceCapabilities"));
        grpWMSServiceCapabilities->setCheckable(true);
        grpWMSServiceCapabilities->setChecked(false);
        gridLayout_6 = new QGridLayout(grpWMSServiceCapabilities);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_6 = new QLabel(grpWMSServiceCapabilities);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);

        mWMSTitle = new QLineEdit(grpWMSServiceCapabilities);
        mWMSTitle->setObjectName(QString::fromUtf8("mWMSTitle"));

        gridLayout_6->addWidget(mWMSTitle, 0, 2, 1, 1);

        label_7 = new QLabel(grpWMSServiceCapabilities);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 2, 0, 1, 1);

        mWMSContactPerson = new QLineEdit(grpWMSServiceCapabilities);
        mWMSContactPerson->setObjectName(QString::fromUtf8("mWMSContactPerson"));

        gridLayout_6->addWidget(mWMSContactPerson, 2, 2, 1, 1);

        label_8 = new QLabel(grpWMSServiceCapabilities);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_6->addWidget(label_8, 5, 0, 1, 1);

        mWMSContactPhone = new QLineEdit(grpWMSServiceCapabilities);
        mWMSContactPhone->setObjectName(QString::fromUtf8("mWMSContactPhone"));

        gridLayout_6->addWidget(mWMSContactPhone, 5, 2, 1, 1);

        mWMSAbstract = new QTextEdit(grpWMSServiceCapabilities);
        mWMSAbstract->setObjectName(QString::fromUtf8("mWMSAbstract"));

        gridLayout_6->addWidget(mWMSAbstract, 7, 2, 1, 1);

        label_5 = new QLabel(grpWMSServiceCapabilities);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_6->addWidget(label_5, 7, 0, 1, 1);

        label_13 = new QLabel(grpWMSServiceCapabilities);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 4, 0, 1, 1);

        mWMSContactMail = new QLineEdit(grpWMSServiceCapabilities);
        mWMSContactMail->setObjectName(QString::fromUtf8("mWMSContactMail"));

        gridLayout_6->addWidget(mWMSContactMail, 4, 2, 1, 1);

        label_4 = new QLabel(grpWMSServiceCapabilities);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 1, 0, 1, 1);

        mWMSContactOrganization = new QLineEdit(grpWMSServiceCapabilities);
        mWMSContactOrganization->setObjectName(QString::fromUtf8("mWMSContactOrganization"));

        gridLayout_6->addWidget(mWMSContactOrganization, 1, 2, 1, 1);


        gridLayout_3->addWidget(grpWMSServiceCapabilities, 0, 0, 1, 2);

        grpWMSExt = new QGroupBox(tab);
        grpWMSExt->setObjectName(QString::fromUtf8("grpWMSExt"));
        grpWMSExt->setCheckable(true);
        grpWMSExt->setChecked(false);
        gridLayout_4 = new QGridLayout(grpWMSExt);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_11 = new QLabel(grpWMSExt);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        mWMSExtMinX = new QLineEdit(grpWMSExt);
        mWMSExtMinX->setObjectName(QString::fromUtf8("mWMSExtMinX"));

        gridLayout_4->addWidget(mWMSExtMinX, 0, 1, 1, 1);

        label_12 = new QLabel(grpWMSExt);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 1, 0, 1, 1);

        mWMSExtMinY = new QLineEdit(grpWMSExt);
        mWMSExtMinY->setObjectName(QString::fromUtf8("mWMSExtMinY"));

        gridLayout_4->addWidget(mWMSExtMinY, 1, 1, 1, 1);

        label_9 = new QLabel(grpWMSExt);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 2, 0, 1, 1);

        mWMSExtMaxX = new QLineEdit(grpWMSExt);
        mWMSExtMaxX->setObjectName(QString::fromUtf8("mWMSExtMaxX"));

        gridLayout_4->addWidget(mWMSExtMaxX, 2, 1, 1, 1);

        label_10 = new QLabel(grpWMSExt);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 3, 0, 1, 1);

        mWMSExtMaxY = new QLineEdit(grpWMSExt);
        mWMSExtMaxY->setObjectName(QString::fromUtf8("mWMSExtMaxY"));

        gridLayout_4->addWidget(mWMSExtMaxY, 3, 1, 1, 1);

        pbnWMSExtCanvas = new QPushButton(grpWMSExt);
        pbnWMSExtCanvas->setObjectName(QString::fromUtf8("pbnWMSExtCanvas"));

        gridLayout_4->addWidget(pbnWMSExtCanvas, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 5, 0, 1, 2);


        gridLayout_3->addWidget(grpWMSExt, 1, 0, 1, 1);

        grpWMSList = new QGroupBox(tab);
        grpWMSList->setObjectName(QString::fromUtf8("grpWMSList"));
        grpWMSList->setCheckable(true);
        grpWMSList->setChecked(false);
        gridLayout_5 = new QGridLayout(grpWMSList);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mWMSList = new QListWidget(grpWMSList);
        mWMSList->setObjectName(QString::fromUtf8("mWMSList"));

        gridLayout_5->addWidget(mWMSList, 0, 0, 1, 3);

        pbnWMSAddSRS = new QPushButton(grpWMSList);
        pbnWMSAddSRS->setObjectName(QString::fromUtf8("pbnWMSAddSRS"));

        gridLayout_5->addWidget(pbnWMSAddSRS, 1, 0, 1, 1);

        pbnWMSRemoveSRS = new QPushButton(grpWMSList);
        pbnWMSRemoveSRS->setObjectName(QString::fromUtf8("pbnWMSRemoveSRS"));

        gridLayout_5->addWidget(pbnWMSRemoveSRS, 1, 2, 1, 1);

        pbnWMSSetUsedSRS = new QPushButton(grpWMSList);
        pbnWMSSetUsedSRS->setObjectName(QString::fromUtf8("pbnWMSSetUsedSRS"));

        gridLayout_5->addWidget(pbnWMSSetUsedSRS, 1, 1, 1, 1);


        gridLayout_3->addWidget(grpWMSList, 1, 1, 2, 1);

        mAddWktGeometryCheckBox = new QCheckBox(tab);
        mAddWktGeometryCheckBox->setObjectName(QString::fromUtf8("mAddWktGeometryCheckBox"));

        gridLayout_3->addWidget(mAddWktGeometryCheckBox, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(titleEdit);
        textLabel1->setBuddy(pbnSelectionColor);
        label->setBuddy(pbnCanvasColor);
        label_3->setBuddy(cbxAbsolutePath);
        labelDP->setBuddy(spinBoxDP);
        label_6->setBuddy(mWMSTitle);
        label_7->setBuddy(mWMSContactPerson);
        label_8->setBuddy(mWMSContactPhone);
        label_5->setBuddy(mWMSAbstract);
        label_4->setBuddy(mWMSContactOrganization);
        label_11->setBuddy(mWMSExtMinX);
        label_12->setBuddy(mWMSExtMinY);
        label_9->setBuddy(mWMSExtMaxX);
        label_10->setBuddy(mWMSExtMaxY);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(titleEdit, pbnSelectionColor);
        QWidget::setTabOrder(pbnSelectionColor, pbnCanvasColor);
        QWidget::setTabOrder(pbnCanvasColor, cbxAbsolutePath);
        QWidget::setTabOrder(cbxAbsolutePath, radMeters);
        QWidget::setTabOrder(radMeters, radFeet);
        QWidget::setTabOrder(radFeet, radDecimalDegrees);
        QWidget::setTabOrder(radDecimalDegrees, radDMS);
        QWidget::setTabOrder(radDMS, radAutomatic);
        QWidget::setTabOrder(radAutomatic, radManual);
        QWidget::setTabOrder(radManual, spinBoxDP);
        QWidget::setTabOrder(spinBoxDP, cbxProjectionEnabled);
        QWidget::setTabOrder(cbxProjectionEnabled, twIdentifyLayers);
        QWidget::setTabOrder(twIdentifyLayers, tabWidget);
        QWidget::setTabOrder(tabWidget, buttonBox);
        QWidget::setTabOrder(buttonBox, grpWMSServiceCapabilities);
        QWidget::setTabOrder(grpWMSServiceCapabilities, mWMSTitle);
        QWidget::setTabOrder(mWMSTitle, mWMSContactOrganization);
        QWidget::setTabOrder(mWMSContactOrganization, mWMSContactPerson);
        QWidget::setTabOrder(mWMSContactPerson, mWMSContactMail);
        QWidget::setTabOrder(mWMSContactMail, mWMSContactPhone);
        QWidget::setTabOrder(mWMSContactPhone, mWMSAbstract);
        QWidget::setTabOrder(mWMSAbstract, grpWMSExt);
        QWidget::setTabOrder(grpWMSExt, mWMSExtMinX);
        QWidget::setTabOrder(mWMSExtMinX, mWMSExtMinY);
        QWidget::setTabOrder(mWMSExtMinY, mWMSExtMaxX);
        QWidget::setTabOrder(mWMSExtMaxX, mWMSExtMaxY);
        QWidget::setTabOrder(mWMSExtMaxY, pbnWMSExtCanvas);
        QWidget::setTabOrder(pbnWMSExtCanvas, grpWMSList);
        QWidget::setTabOrder(grpWMSList, mWMSList);
        QWidget::setTabOrder(mWMSList, pbnWMSAddSRS);
        QWidget::setTabOrder(pbnWMSAddSRS, pbnWMSSetUsedSRS);
        QWidget::setTabOrder(pbnWMSSetUsedSRS, pbnWMSRemoveSRS);

        retranslateUi(QgsProjectPropertiesBase);
        QObject::connect(radManual, SIGNAL(clicked(bool)), spinBoxDP, SLOT(setEnabled(bool)));
        QObject::connect(radManual, SIGNAL(clicked(bool)), labelDP, SLOT(setEnabled(bool)));
        QObject::connect(radAutomatic, SIGNAL(clicked(bool)), spinBoxDP, SLOT(setDisabled(bool)));
        QObject::connect(radAutomatic, SIGNAL(clicked(bool)), labelDP, SLOT(setDisabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsProjectPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProjectPropertiesBase)
    {
        QgsProjectPropertiesBase->setWindowTitle(QApplication::translate("QgsProjectPropertiesBase", "Project Properties", 0, QApplication::UnicodeUTF8));
        titleBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "General settings", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsProjectPropertiesBase", "Project title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        titleEdit->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Descriptive project name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        titleEdit->setText(QApplication::translate("QgsProjectPropertiesBase", "Default project title", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("QgsProjectPropertiesBase", "Selection color", 0, QApplication::UnicodeUTF8));
        pbnSelectionColor->setText(QString());
        label->setText(QApplication::translate("QgsProjectPropertiesBase", "Background color", 0, QApplication::UnicodeUTF8));
        pbnCanvasColor->setText(QString());
        cbxAbsolutePath->clear();
        cbxAbsolutePath->insertItems(0, QStringList()
         << QApplication::translate("QgsProjectPropertiesBase", "absolute", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsProjectPropertiesBase", "relative", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("QgsProjectPropertiesBase", "Save paths", 0, QApplication::UnicodeUTF8));
        btnGrpMapUnits->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Layer units (only used when CRS transformation is disabled)", 0, QApplication::UnicodeUTF8));
        radMeters->setText(QApplication::translate("QgsProjectPropertiesBase", "Meters", 0, QApplication::UnicodeUTF8));
        radFeet->setText(QApplication::translate("QgsProjectPropertiesBase", "Feet", 0, QApplication::UnicodeUTF8));
        radDecimalDegrees->setText(QApplication::translate("QgsProjectPropertiesBase", "Decimal degrees", 0, QApplication::UnicodeUTF8));
        radDMS->setText(QApplication::translate("QgsProjectPropertiesBase", "Degrees, Minutes, Seconds", 0, QApplication::UnicodeUTF8));
        btnGrpPrecision->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Precision", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radAutomatic->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Automatically sets the number of decimal places in the mouse position display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        radAutomatic->setWhatsThis(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places that are used when displaying the mouse position is automatically set to be enough so that moving the mouse by one pixel gives a change in the position display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        radAutomatic->setText(QApplication::translate("QgsProjectPropertiesBase", "Automatic", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radManual->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Sets the number of decimal places to use for the mouse position display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        radManual->setWhatsThis(QApplication::translate("QgsProjectPropertiesBase", "Sets the number of decimal places to use for the mouse position display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        radManual->setText(QApplication::translate("QgsProjectPropertiesBase", "Manual", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBoxDP->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places for the manual option", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxDP->setWhatsThis(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places for the manual option", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        labelDP->setText(QApplication::translate("QgsProjectPropertiesBase", "decimal places", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("QgsProjectPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
        cbxProjectionEnabled->setText(QApplication::translate("QgsProjectPropertiesBase", "Enable 'on the fly' CRS transformation", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("QgsProjectPropertiesBase", "Coordinate Reference System (CRS)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = twIdentifyLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsProjectPropertiesBase", "Layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = twIdentifyLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsProjectPropertiesBase", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = twIdentifyLayers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsProjectPropertiesBase", "Identifiable", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("QgsProjectPropertiesBase", "Identifiable layers", 0, QApplication::UnicodeUTF8));
        grpWMSServiceCapabilities->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Service Capabilitities", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsProjectPropertiesBase", "Title", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsProjectPropertiesBase", "Person", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsProjectPropertiesBase", "Phone", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsProjectPropertiesBase", "Abstract", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QgsProjectPropertiesBase", "E-Mail", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsProjectPropertiesBase", "Organization", 0, QApplication::UnicodeUTF8));
        grpWMSExt->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Advertised Extent", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QgsProjectPropertiesBase", "Min. X", 0, QApplication::UnicodeUTF8));
        mWMSExtMinX->setText(QString());
        label_12->setText(QApplication::translate("QgsProjectPropertiesBase", "Min. Y", 0, QApplication::UnicodeUTF8));
        mWMSExtMinY->setText(QString());
        label_9->setText(QApplication::translate("QgsProjectPropertiesBase", "Max. X", 0, QApplication::UnicodeUTF8));
        mWMSExtMaxX->setText(QString());
        label_10->setText(QApplication::translate("QgsProjectPropertiesBase", "Max. Y", 0, QApplication::UnicodeUTF8));
        mWMSExtMaxY->setText(QString());
        pbnWMSExtCanvas->setText(QApplication::translate("QgsProjectPropertiesBase", "Use Current Canvas Extent", 0, QApplication::UnicodeUTF8));
        grpWMSList->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Coordinate Systems Restrictions", 0, QApplication::UnicodeUTF8));
        pbnWMSAddSRS->setText(QApplication::translate("QgsProjectPropertiesBase", "Add", 0, QApplication::UnicodeUTF8));
        pbnWMSRemoveSRS->setText(QApplication::translate("QgsProjectPropertiesBase", "Remove", 0, QApplication::UnicodeUTF8));
        pbnWMSSetUsedSRS->setText(QApplication::translate("QgsProjectPropertiesBase", "Used", 0, QApplication::UnicodeUTF8));
        mAddWktGeometryCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Add WKT geometry to feature info response", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsProjectPropertiesBase", "WMS Server", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsProjectPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProjectPropertiesBase: public Ui_QgsProjectPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTPROPERTIESBASE_H
