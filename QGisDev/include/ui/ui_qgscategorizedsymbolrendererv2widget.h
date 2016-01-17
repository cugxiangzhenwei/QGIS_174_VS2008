/********************************************************************************
** Form generated from reading ui file 'qgscategorizedsymbolrendererv2widget.ui'
**
** Created: Tue Mar 13 10:24:10 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCATEGORIZEDSYMBOLRENDERERV2WIDGET_H
#define UI_QGSCATEGORIZEDSYMBOLRENDERERV2WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorrampcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCategorizedSymbolRendererV2Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *cboCategorizedColumn;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QPushButton *btnChangeCategorizedSymbol;
    QLabel *label_10;
    QgsColorRampComboBox *cboCategorizedColorRamp;
    QTreeView *viewCategories;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAddCategories;
    QPushButton *btnAddCategory;
    QPushButton *btnDeleteCategory;
    QPushButton *btnDeleteAllCategories;
    QSpacerItem *spacerItem;
    QPushButton *btnJoinCategories;
    QPushButton *btnAdvanced;

    void setupUi(QWidget *QgsCategorizedSymbolRendererV2Widget)
    {
        if (QgsCategorizedSymbolRendererV2Widget->objectName().isEmpty())
            QgsCategorizedSymbolRendererV2Widget->setObjectName(QString::fromUtf8("QgsCategorizedSymbolRendererV2Widget"));
        QgsCategorizedSymbolRendererV2Widget->resize(599, 298);
        verticalLayout = new QVBoxLayout(QgsCategorizedSymbolRendererV2Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(QgsCategorizedSymbolRendererV2Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        cboCategorizedColumn = new QComboBox(QgsCategorizedSymbolRendererV2Widget);
        cboCategorizedColumn->setObjectName(QString::fromUtf8("cboCategorizedColumn"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboCategorizedColumn->sizePolicy().hasHeightForWidth());
        cboCategorizedColumn->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cboCategorizedColumn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_9 = new QLabel(QgsCategorizedSymbolRendererV2Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        btnChangeCategorizedSymbol = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnChangeCategorizedSymbol->setObjectName(QString::fromUtf8("btnChangeCategorizedSymbol"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnChangeCategorizedSymbol->sizePolicy().hasHeightForWidth());
        btnChangeCategorizedSymbol->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btnChangeCategorizedSymbol);

        label_10 = new QLabel(QgsCategorizedSymbolRendererV2Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        cboCategorizedColorRamp = new QgsColorRampComboBox(QgsCategorizedSymbolRendererV2Widget);
        cboCategorizedColorRamp->setObjectName(QString::fromUtf8("cboCategorizedColorRamp"));
        sizePolicy1.setHeightForWidth(cboCategorizedColorRamp->sizePolicy().hasHeightForWidth());
        cboCategorizedColorRamp->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(cboCategorizedColorRamp);


        verticalLayout->addLayout(horizontalLayout);

        viewCategories = new QTreeView(QgsCategorizedSymbolRendererV2Widget);
        viewCategories->setObjectName(QString::fromUtf8("viewCategories"));
        viewCategories->setIconSize(QSize(16, 16));
        viewCategories->setRootIsDecorated(false);
        viewCategories->setSortingEnabled(true);
        viewCategories->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(viewCategories);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnAddCategories = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnAddCategories->setObjectName(QString::fromUtf8("btnAddCategories"));

        horizontalLayout_3->addWidget(btnAddCategories);

        btnAddCategory = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnAddCategory->setObjectName(QString::fromUtf8("btnAddCategory"));

        horizontalLayout_3->addWidget(btnAddCategory);

        btnDeleteCategory = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnDeleteCategory->setObjectName(QString::fromUtf8("btnDeleteCategory"));

        horizontalLayout_3->addWidget(btnDeleteCategory);

        btnDeleteAllCategories = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnDeleteAllCategories->setObjectName(QString::fromUtf8("btnDeleteAllCategories"));

        horizontalLayout_3->addWidget(btnDeleteAllCategories);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerItem);

        btnJoinCategories = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnJoinCategories->setObjectName(QString::fromUtf8("btnJoinCategories"));
        btnJoinCategories->setEnabled(false);

        horizontalLayout_3->addWidget(btnJoinCategories);

        btnAdvanced = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));

        horizontalLayout_3->addWidget(btnAdvanced);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(cboCategorizedColumn, btnChangeCategorizedSymbol);
        QWidget::setTabOrder(btnChangeCategorizedSymbol, cboCategorizedColorRamp);
        QWidget::setTabOrder(cboCategorizedColorRamp, viewCategories);
        QWidget::setTabOrder(viewCategories, btnAddCategories);
        QWidget::setTabOrder(btnAddCategories, btnDeleteCategory);
        QWidget::setTabOrder(btnDeleteCategory, btnDeleteAllCategories);
        QWidget::setTabOrder(btnDeleteAllCategories, btnJoinCategories);

        retranslateUi(QgsCategorizedSymbolRendererV2Widget);

        QMetaObject::connectSlotsByName(QgsCategorizedSymbolRendererV2Widget);
    } // setupUi

    void retranslateUi(QWidget *QgsCategorizedSymbolRendererV2Widget)
    {
        label_3->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Column", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Symbol", 0, QApplication::UnicodeUTF8));
        btnChangeCategorizedSymbol->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "change", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Color ramp", 0, QApplication::UnicodeUTF8));
        btnAddCategories->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Classify", 0, QApplication::UnicodeUTF8));
        btnAddCategory->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Add", 0, QApplication::UnicodeUTF8));
        btnDeleteCategory->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Delete", 0, QApplication::UnicodeUTF8));
        btnDeleteAllCategories->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Delete all", 0, QApplication::UnicodeUTF8));
        btnJoinCategories->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Join", 0, QApplication::UnicodeUTF8));
        btnAdvanced->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Advanced", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsCategorizedSymbolRendererV2Widget);
    } // retranslateUi

};

namespace Ui {
    class QgsCategorizedSymbolRendererV2Widget: public Ui_QgsCategorizedSymbolRendererV2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCATEGORIZEDSYMBOLRENDERERV2WIDGET_H
