/********************************************************************************
** Form generated from reading ui file 'qgsnewvectorlayerdialogbase.ui'
**
** Created: Tue Mar 13 10:23:53 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSNEWVECTORLAYERDIALOGBASE_H
#define UI_QGSNEWVECTORLAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsNewVectorLayerDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mFileFormatLabel;
    QComboBox *mFileFormatComboBox;
    QGroupBox *buttonGroup1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mPointRadioButton;
    QRadioButton *mLineRadioButton;
    QRadioButton *mPolygonRadioButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *textLabel1;
    QLineEdit *mNameEdit;
    QLabel *textLabel2;
    QComboBox *mTypeBox;
    QLabel *label;
    QLineEdit *mWidth;
    QLabel *label_2;
    QLineEdit *mPrecision;
    QToolButton *mAddAttributeButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QTreeWidget *mAttributeView;
    QSpacerItem *spacerItem;
    QToolButton *mRemoveAttributeButton;
    QDialogButtonBox *buttonBox;
    QPushButton *pbnChangeSpatialRefSys;
    QLineEdit *leSpatialRefSys;

    void setupUi(QDialog *QgsNewVectorLayerDialogBase)
    {
        if (QgsNewVectorLayerDialogBase->objectName().isEmpty())
            QgsNewVectorLayerDialogBase->setObjectName(QString::fromUtf8("QgsNewVectorLayerDialogBase"));
        QgsNewVectorLayerDialogBase->resize(444, 543);
        QgsNewVectorLayerDialogBase->setModal(true);
        gridLayout = new QGridLayout(QgsNewVectorLayerDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mFileFormatLabel = new QLabel(QgsNewVectorLayerDialogBase);
        mFileFormatLabel->setObjectName(QString::fromUtf8("mFileFormatLabel"));
        mFileFormatLabel->setEnabled(true);

        gridLayout->addWidget(mFileFormatLabel, 0, 0, 1, 1);

        mFileFormatComboBox = new QComboBox(QgsNewVectorLayerDialogBase);
        mFileFormatComboBox->setObjectName(QString::fromUtf8("mFileFormatComboBox"));
        mFileFormatComboBox->setEnabled(true);

        gridLayout->addWidget(mFileFormatComboBox, 0, 1, 1, 2);

        buttonGroup1 = new QGroupBox(QgsNewVectorLayerDialogBase);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        horizontalLayout = new QHBoxLayout(buttonGroup1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setMargin(11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mPointRadioButton = new QRadioButton(buttonGroup1);
        mPointRadioButton->setObjectName(QString::fromUtf8("mPointRadioButton"));

        horizontalLayout->addWidget(mPointRadioButton);

        mLineRadioButton = new QRadioButton(buttonGroup1);
        mLineRadioButton->setObjectName(QString::fromUtf8("mLineRadioButton"));

        horizontalLayout->addWidget(mLineRadioButton);

        mPolygonRadioButton = new QRadioButton(buttonGroup1);
        mPolygonRadioButton->setObjectName(QString::fromUtf8("mPolygonRadioButton"));

        horizontalLayout->addWidget(mPolygonRadioButton);


        gridLayout->addWidget(buttonGroup1, 1, 0, 1, 3);

        groupBox = new QGroupBox(QgsNewVectorLayerDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setMargin(11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

        mNameEdit = new QLineEdit(groupBox);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

        gridLayout1->addWidget(mNameEdit, 0, 1, 1, 4);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout1->addWidget(textLabel2, 1, 0, 1, 1);

        mTypeBox = new QComboBox(groupBox);
        mTypeBox->setObjectName(QString::fromUtf8("mTypeBox"));

        gridLayout1->addWidget(mTypeBox, 1, 1, 1, 4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 2, 0, 1, 1);

        mWidth = new QLineEdit(groupBox);
        mWidth->setObjectName(QString::fromUtf8("mWidth"));

        gridLayout1->addWidget(mWidth, 2, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 2, 3, 1, 1);

        mPrecision = new QLineEdit(groupBox);
        mPrecision->setObjectName(QString::fromUtf8("mPrecision"));

        gridLayout1->addWidget(mPrecision, 2, 4, 1, 1);

        mAddAttributeButton = new QToolButton(groupBox);
        mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy);
        mAddAttributeButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/themes/default/mActionNewAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeButton->setIcon(icon);
        mAddAttributeButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout1->addWidget(mAddAttributeButton, 4, 4, 1, 1);


        gridLayout->addWidget(groupBox, 4, 0, 1, 3);

        groupBox_2 = new QGroupBox(QgsNewVectorLayerDialogBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setMargin(11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        mAttributeView = new QTreeWidget(groupBox_2);
        mAttributeView->setObjectName(QString::fromUtf8("mAttributeView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAttributeView->sizePolicy().hasHeightForWidth());
        mAttributeView->setSizePolicy(sizePolicy1);
        mAttributeView->setAlternatingRowColors(true);
        mAttributeView->setRootIsDecorated(false);
        mAttributeView->setColumnCount(4);

        gridLayout2->addWidget(mAttributeView, 2, 0, 1, 2);

        spacerItem = new QSpacerItem(121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 3, 0, 1, 1);

        mRemoveAttributeButton = new QToolButton(groupBox_2);
        mRemoveAttributeButton->setObjectName(QString::fromUtf8("mRemoveAttributeButton"));
        sizePolicy.setHeightForWidth(mRemoveAttributeButton->sizePolicy().hasHeightForWidth());
        mRemoveAttributeButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../images/themes/default/mActionDeleteAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAttributeButton->setIcon(icon1);
        mRemoveAttributeButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout2->addWidget(mRemoveAttributeButton, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 6, 0, 1, 3);

        buttonBox = new QDialogButtonBox(QgsNewVectorLayerDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 3);

        pbnChangeSpatialRefSys = new QPushButton(QgsNewVectorLayerDialogBase);
        pbnChangeSpatialRefSys->setObjectName(QString::fromUtf8("pbnChangeSpatialRefSys"));

        gridLayout->addWidget(pbnChangeSpatialRefSys, 3, 2, 1, 1);

        leSpatialRefSys = new QLineEdit(QgsNewVectorLayerDialogBase);
        leSpatialRefSys->setObjectName(QString::fromUtf8("leSpatialRefSys"));
        leSpatialRefSys->setReadOnly(true);

        gridLayout->addWidget(leSpatialRefSys, 3, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        mFileFormatLabel->setBuddy(mFileFormatComboBox);
        textLabel1->setBuddy(mNameEdit);
        textLabel2->setBuddy(mTypeBox);
        label->setBuddy(mWidth);
        label_2->setBuddy(mPrecision);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mFileFormatComboBox, mPointRadioButton);
        QWidget::setTabOrder(mPointRadioButton, mLineRadioButton);
        QWidget::setTabOrder(mLineRadioButton, mPolygonRadioButton);
        QWidget::setTabOrder(mPolygonRadioButton, leSpatialRefSys);
        QWidget::setTabOrder(leSpatialRefSys, pbnChangeSpatialRefSys);
        QWidget::setTabOrder(pbnChangeSpatialRefSys, mNameEdit);
        QWidget::setTabOrder(mNameEdit, mTypeBox);
        QWidget::setTabOrder(mTypeBox, mWidth);
        QWidget::setTabOrder(mWidth, mPrecision);
        QWidget::setTabOrder(mPrecision, mAttributeView);
        QWidget::setTabOrder(mAttributeView, buttonBox);

        retranslateUi(QgsNewVectorLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewVectorLayerDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewVectorLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewVectorLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewVectorLayerDialogBase)
    {
        QgsNewVectorLayerDialogBase->setWindowTitle(QApplication::translate("QgsNewVectorLayerDialogBase", "New Vector Layer", 0, QApplication::UnicodeUTF8));
        mFileFormatLabel->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "File format", 0, QApplication::UnicodeUTF8));
        buttonGroup1->setTitle(QApplication::translate("QgsNewVectorLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        mPointRadioButton->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "Point", 0, QApplication::UnicodeUTF8));
        mLineRadioButton->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "Line", 0, QApplication::UnicodeUTF8));
        mPolygonRadioButton->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "Polygon", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsNewVectorLayerDialogBase", "New attribute", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "Name", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "Width", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "Precision", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddAttributeButton->setToolTip(QApplication::translate("QgsNewVectorLayerDialogBase", "Add attribute to list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddAttributeButton->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "Add to attributes list", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsNewVectorLayerDialogBase", "Attributes list", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mAttributeView->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsNewVectorLayerDialogBase", "Precision", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsNewVectorLayerDialogBase", "Width", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsNewVectorLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsNewVectorLayerDialogBase", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRemoveAttributeButton->setToolTip(QApplication::translate("QgsNewVectorLayerDialogBase", "Delete selected attribute", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRemoveAttributeButton->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "Remove attribute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnChangeSpatialRefSys->setToolTip(QApplication::translate("QgsNewVectorLayerDialogBase", "Specify the coordinate reference system of the layer's geometry.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbnChangeSpatialRefSys->setWhatsThis(QApplication::translate("QgsNewVectorLayerDialogBase", "Specify the coordinate reference system of the layer's geometry.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pbnChangeSpatialRefSys->setText(QApplication::translate("QgsNewVectorLayerDialogBase", "Specify CRS", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsNewVectorLayerDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsNewVectorLayerDialogBase: public Ui_QgsNewVectorLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWVECTORLAYERDIALOGBASE_H
