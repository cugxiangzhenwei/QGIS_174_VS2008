/********************************************************************************
** Form generated from reading ui file 'qgssymbolv2propertiesdialogbase.ui'
**
** Created: Tue Mar 13 10:23:44 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSYMBOLV2PROPERTIESDIALOGBASE_H
#define UI_QGSSYMBOLV2PROPERTIESDIALOGBASE_H

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
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgSymbolV2Properties
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QComboBox *cboLayerType;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QStackedWidget *stackedWidget;
    QWidget *pageDummy;
    QVBoxLayout *vboxLayout1;
    QLabel *label_4;
    QListView *listLayers;
    QHBoxLayout *hboxLayout1;
    QPushButton *btnAddLayer;
    QPushButton *btnRemoveLayer;
    QSpacerItem *spacerItem;
    QPushButton *btnLock;
    QSpacerItem *spacerItem1;
    QPushButton *btnUp;
    QPushButton *btnDown;
    QLabel *label;
    QLabel *lblPreview;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DlgSymbolV2Properties)
    {
        if (DlgSymbolV2Properties->objectName().isEmpty())
            DlgSymbolV2Properties->setObjectName(QString::fromUtf8("DlgSymbolV2Properties"));
        DlgSymbolV2Properties->resize(674, 396);
        gridLayout = new QGridLayout(DlgSymbolV2Properties);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(DlgSymbolV2Properties);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_2 = new QLabel(DlgSymbolV2Properties);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout->addWidget(label_2);

        cboLayerType = new QComboBox(DlgSymbolV2Properties);
        cboLayerType->setObjectName(QString::fromUtf8("cboLayerType"));

        hboxLayout->addWidget(cboLayerType);


        vboxLayout->addLayout(hboxLayout);

        groupBox = new QGroupBox(DlgSymbolV2Properties);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setMargin(0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageDummy = new QWidget();
        pageDummy->setObjectName(QString::fromUtf8("pageDummy"));
        vboxLayout1 = new QVBoxLayout(pageDummy);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label_4 = new QLabel(pageDummy);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        vboxLayout1->addWidget(label_4);

        stackedWidget->addWidget(pageDummy);

        gridLayout1->addWidget(stackedWidget, 0, 0, 1, 1);


        vboxLayout->addWidget(groupBox);


        gridLayout->addLayout(vboxLayout, 0, 1, 5, 1);

        listLayers = new QListView(DlgSymbolV2Properties);
        listLayers->setObjectName(QString::fromUtf8("listLayers"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listLayers->sizePolicy().hasHeightForWidth());
        listLayers->setSizePolicy(sizePolicy1);
        listLayers->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(listLayers, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        btnAddLayer = new QPushButton(DlgSymbolV2Properties);
        btnAddLayer->setObjectName(QString::fromUtf8("btnAddLayer"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnAddLayer->sizePolicy().hasHeightForWidth());
        btnAddLayer->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(btnAddLayer);

        btnRemoveLayer = new QPushButton(DlgSymbolV2Properties);
        btnRemoveLayer->setObjectName(QString::fromUtf8("btnRemoveLayer"));
        sizePolicy2.setHeightForWidth(btnRemoveLayer->sizePolicy().hasHeightForWidth());
        btnRemoveLayer->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(btnRemoveLayer);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        btnLock = new QPushButton(DlgSymbolV2Properties);
        btnLock->setObjectName(QString::fromUtf8("btnLock"));
        sizePolicy2.setHeightForWidth(btnLock->sizePolicy().hasHeightForWidth());
        btnLock->setSizePolicy(sizePolicy2);
        btnLock->setCheckable(true);

        hboxLayout1->addWidget(btnLock);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        btnUp = new QPushButton(DlgSymbolV2Properties);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        sizePolicy2.setHeightForWidth(btnUp->sizePolicy().hasHeightForWidth());
        btnUp->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(btnUp);

        btnDown = new QPushButton(DlgSymbolV2Properties);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        sizePolicy2.setHeightForWidth(btnDown->sizePolicy().hasHeightForWidth());
        btnDown->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(btnDown);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        label = new QLabel(DlgSymbolV2Properties);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        lblPreview = new QLabel(DlgSymbolV2Properties);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        lblPreview->setMinimumSize(QSize(100, 100));
        lblPreview->setFrameShape(QFrame::StyledPanel);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblPreview, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DlgSymbolV2Properties);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        QWidget::setTabOrder(listLayers, btnAddLayer);
        QWidget::setTabOrder(btnAddLayer, btnRemoveLayer);
        QWidget::setTabOrder(btnRemoveLayer, btnLock);
        QWidget::setTabOrder(btnLock, btnUp);
        QWidget::setTabOrder(btnUp, btnDown);
        QWidget::setTabOrder(btnDown, cboLayerType);
        QWidget::setTabOrder(cboLayerType, buttonBox);

        retranslateUi(DlgSymbolV2Properties);
        QObject::connect(buttonBox, SIGNAL(accepted()), DlgSymbolV2Properties, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DlgSymbolV2Properties, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DlgSymbolV2Properties);
    } // setupUi

    void retranslateUi(QDialog *DlgSymbolV2Properties)
    {
        DlgSymbolV2Properties->setWindowTitle(QApplication::translate("DlgSymbolV2Properties", "Symbol properties", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DlgSymbolV2Properties", "Symbol layers", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DlgSymbolV2Properties", "Symbol layer type", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DlgSymbolV2Properties", "Symbol layer properties", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DlgSymbolV2Properties", "This symbol layer doesn't have GUI for settings.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAddLayer->setToolTip(QApplication::translate("DlgSymbolV2Properties", "Add symbol layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveLayer->setToolTip(QApplication::translate("DlgSymbolV2Properties", "Remove symbol layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnLock->setToolTip(QApplication::translate("DlgSymbolV2Properties", "Lock layer's color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnUp->setToolTip(QApplication::translate("DlgSymbolV2Properties", "Move up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnDown->setToolTip(QApplication::translate("DlgSymbolV2Properties", "Move down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("DlgSymbolV2Properties", "Symbol preview", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DlgSymbolV2Properties);
    } // retranslateUi

};

namespace Ui {
    class DlgSymbolV2Properties: public Ui_DlgSymbolV2Properties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSYMBOLV2PROPERTIESDIALOGBASE_H
