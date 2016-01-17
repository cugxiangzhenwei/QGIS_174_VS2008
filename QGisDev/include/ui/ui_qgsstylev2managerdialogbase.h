/********************************************************************************
** Form generated from reading ui file 'qgsstylev2managerdialogbase.ui'
**
** Created: Tue Mar 13 10:23:45 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSTYLEV2MANAGERDIALOGBASE_H
#define UI_QGSSTYLEV2MANAGERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsStyleV2ManagerDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabItemType;
    QWidget *tabMarker;
    QWidget *tabLine;
    QWidget *tabFill;
    QWidget *tabColorRamp;
    QListView *listItems;
    QHBoxLayout *hboxLayout;
    QPushButton *btnAddItem;
    QPushButton *btnEditItem;
    QPushButton *btnRemoveItem;
    QSpacerItem *spacerItem;
    QPushButton *btnExportItems;
    QPushButton *btnImportItems;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStyleV2ManagerDialogBase)
    {
        if (QgsStyleV2ManagerDialogBase->objectName().isEmpty())
            QgsStyleV2ManagerDialogBase->setObjectName(QString::fromUtf8("QgsStyleV2ManagerDialogBase"));
        QgsStyleV2ManagerDialogBase->resize(625, 395);
        verticalLayout = new QVBoxLayout(QgsStyleV2ManagerDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabItemType = new QTabWidget(QgsStyleV2ManagerDialogBase);
        tabItemType->setObjectName(QString::fromUtf8("tabItemType"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabItemType->sizePolicy().hasHeightForWidth());
        tabItemType->setSizePolicy(sizePolicy);
        tabItemType->setIconSize(QSize(22, 22));
        tabMarker = new QWidget();
        tabMarker->setObjectName(QString::fromUtf8("tabMarker"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabMarker->sizePolicy().hasHeightForWidth());
        tabMarker->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/styleicons/style-point.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabMarker, icon, QString());
        tabLine = new QWidget();
        tabLine->setObjectName(QString::fromUtf8("tabLine"));
        sizePolicy1.setHeightForWidth(tabLine->sizePolicy().hasHeightForWidth());
        tabLine->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/styleicons/style-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabLine, icon1, QString());
        tabFill = new QWidget();
        tabFill->setObjectName(QString::fromUtf8("tabFill"));
        sizePolicy1.setHeightForWidth(tabFill->sizePolicy().hasHeightForWidth());
        tabFill->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/styleicons/style-polygon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabFill, icon2, QString());
        tabColorRamp = new QWidget();
        tabColorRamp->setObjectName(QString::fromUtf8("tabColorRamp"));
        sizePolicy1.setHeightForWidth(tabColorRamp->sizePolicy().hasHeightForWidth());
        tabColorRamp->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/styleicons/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabColorRamp, icon3, QString());

        verticalLayout->addWidget(tabItemType);

        listItems = new QListView(QgsStyleV2ManagerDialogBase);
        listItems->setObjectName(QString::fromUtf8("listItems"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(listItems->sizePolicy().hasHeightForWidth());
        listItems->setSizePolicy(sizePolicy2);
        listItems->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listItems->setIconSize(QSize(48, 48));
        listItems->setMovement(QListView::Static);
        listItems->setResizeMode(QListView::Adjust);
        listItems->setSpacing(5);
        listItems->setViewMode(QListView::IconMode);

        verticalLayout->addWidget(listItems);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnAddItem = new QPushButton(QgsStyleV2ManagerDialogBase);
        btnAddItem->setObjectName(QString::fromUtf8("btnAddItem"));

        hboxLayout->addWidget(btnAddItem);

        btnEditItem = new QPushButton(QgsStyleV2ManagerDialogBase);
        btnEditItem->setObjectName(QString::fromUtf8("btnEditItem"));

        hboxLayout->addWidget(btnEditItem);

        btnRemoveItem = new QPushButton(QgsStyleV2ManagerDialogBase);
        btnRemoveItem->setObjectName(QString::fromUtf8("btnRemoveItem"));

        hboxLayout->addWidget(btnRemoveItem);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnExportItems = new QPushButton(QgsStyleV2ManagerDialogBase);
        btnExportItems->setObjectName(QString::fromUtf8("btnExportItems"));

        hboxLayout->addWidget(btnExportItems);

        btnImportItems = new QPushButton(QgsStyleV2ManagerDialogBase);
        btnImportItems->setObjectName(QString::fromUtf8("btnImportItems"));

        hboxLayout->addWidget(btnImportItems);


        verticalLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(QgsStyleV2ManagerDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(listItems, btnAddItem);
        QWidget::setTabOrder(btnAddItem, btnEditItem);
        QWidget::setTabOrder(btnEditItem, buttonBox);

        retranslateUi(QgsStyleV2ManagerDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStyleV2ManagerDialogBase, SLOT(reject()));

        tabItemType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsStyleV2ManagerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsStyleV2ManagerDialogBase)
    {
        QgsStyleV2ManagerDialogBase->setWindowTitle(QApplication::translate("QgsStyleV2ManagerDialogBase", "Style Manager", 0, QApplication::UnicodeUTF8));
        tabItemType->setTabText(tabItemType->indexOf(tabMarker), QApplication::translate("QgsStyleV2ManagerDialogBase", "Marker", 0, QApplication::UnicodeUTF8));
        tabItemType->setTabText(tabItemType->indexOf(tabLine), QApplication::translate("QgsStyleV2ManagerDialogBase", "Line", 0, QApplication::UnicodeUTF8));
        tabItemType->setTabText(tabItemType->indexOf(tabFill), QApplication::translate("QgsStyleV2ManagerDialogBase", "Fill", 0, QApplication::UnicodeUTF8));
        tabItemType->setTabText(tabItemType->indexOf(tabColorRamp), QApplication::translate("QgsStyleV2ManagerDialogBase", "Color ramp", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAddItem->setToolTip(QApplication::translate("QgsStyleV2ManagerDialogBase", "Add item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddItem->setText(QApplication::translate("QgsStyleV2ManagerDialogBase", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnEditItem->setToolTip(QApplication::translate("QgsStyleV2ManagerDialogBase", "Edit item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnEditItem->setText(QApplication::translate("QgsStyleV2ManagerDialogBase", "Edit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnRemoveItem->setToolTip(QApplication::translate("QgsStyleV2ManagerDialogBase", "Remove item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRemoveItem->setText(QApplication::translate("QgsStyleV2ManagerDialogBase", "Remove", 0, QApplication::UnicodeUTF8));
        btnExportItems->setText(QApplication::translate("QgsStyleV2ManagerDialogBase", "Export...", 0, QApplication::UnicodeUTF8));
        btnImportItems->setText(QApplication::translate("QgsStyleV2ManagerDialogBase", "Import...", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsStyleV2ManagerDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsStyleV2ManagerDialogBase: public Ui_QgsStyleV2ManagerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEV2MANAGERDIALOGBASE_H
