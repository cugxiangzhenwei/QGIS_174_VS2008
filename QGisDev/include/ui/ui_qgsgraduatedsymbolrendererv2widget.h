/********************************************************************************
** Form generated from reading ui file 'qgsgraduatedsymbolrendererv2widget.ui'
**
** Created: Tue Mar 13 10:23:59 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGRADUATEDSYMBOLRENDERERV2WIDGET_H
#define UI_QGSGRADUATEDSYMBOLRENDERERV2WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorrampcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGraduatedSymbolRendererV2Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *cboGraduatedColumn;
    QLabel *label_6;
    QPushButton *btnChangeGraduatedSymbol;
    QLabel *label_5;
    QSpinBox *spinGraduatedClasses;
    QLabel *label_7;
    QgsColorRampComboBox *cboGraduatedColorRamp;
    QLabel *label_8;
    QComboBox *cboGraduatedMode;
    QSpacerItem *spacerItem;
    QTreeView *viewGraduated;
    QHBoxLayout *_2;
    QPushButton *btnGraduatedClassify;
    QPushButton *btnGraduatedAdd;
    QPushButton *btnGraduatedDelete;
    QSpacerItem *spacerItem1;
    QPushButton *btnAdvanced;

    void setupUi(QWidget *QgsGraduatedSymbolRendererV2Widget)
    {
        if (QgsGraduatedSymbolRendererV2Widget->objectName().isEmpty())
            QgsGraduatedSymbolRendererV2Widget->setObjectName(QString::fromUtf8("QgsGraduatedSymbolRendererV2Widget"));
        QgsGraduatedSymbolRendererV2Widget->resize(507, 341);
        verticalLayout = new QVBoxLayout(QgsGraduatedSymbolRendererV2Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        cboGraduatedColumn = new QComboBox(QgsGraduatedSymbolRendererV2Widget);
        cboGraduatedColumn->setObjectName(QString::fromUtf8("cboGraduatedColumn"));

        gridLayout->addWidget(cboGraduatedColumn, 0, 1, 1, 2);

        label_6 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        btnChangeGraduatedSymbol = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnChangeGraduatedSymbol->setObjectName(QString::fromUtf8("btnChangeGraduatedSymbol"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeGraduatedSymbol->sizePolicy().hasHeightForWidth());
        btnChangeGraduatedSymbol->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnChangeGraduatedSymbol, 1, 1, 1, 1);

        label_5 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        spinGraduatedClasses = new QSpinBox(QgsGraduatedSymbolRendererV2Widget);
        spinGraduatedClasses->setObjectName(QString::fromUtf8("spinGraduatedClasses"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinGraduatedClasses->sizePolicy().hasHeightForWidth());
        spinGraduatedClasses->setSizePolicy(sizePolicy1);
        spinGraduatedClasses->setValue(5);

        gridLayout->addWidget(spinGraduatedClasses, 1, 4, 1, 1);

        label_7 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        cboGraduatedColorRamp = new QgsColorRampComboBox(QgsGraduatedSymbolRendererV2Widget);
        cboGraduatedColorRamp->setObjectName(QString::fromUtf8("cboGraduatedColorRamp"));

        gridLayout->addWidget(cboGraduatedColorRamp, 2, 1, 1, 1);

        label_8 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 2, 3, 1, 1);

        cboGraduatedMode = new QComboBox(QgsGraduatedSymbolRendererV2Widget);
        cboGraduatedMode->setObjectName(QString::fromUtf8("cboGraduatedMode"));

        gridLayout->addWidget(cboGraduatedMode, 2, 4, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 2, 1);


        verticalLayout->addLayout(gridLayout);

        viewGraduated = new QTreeView(QgsGraduatedSymbolRendererV2Widget);
        viewGraduated->setObjectName(QString::fromUtf8("viewGraduated"));
        viewGraduated->setRootIsDecorated(false);
        viewGraduated->setSortingEnabled(true);

        verticalLayout->addWidget(viewGraduated);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        btnGraduatedClassify = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnGraduatedClassify->setObjectName(QString::fromUtf8("btnGraduatedClassify"));

        _2->addWidget(btnGraduatedClassify);

        btnGraduatedAdd = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnGraduatedAdd->setObjectName(QString::fromUtf8("btnGraduatedAdd"));

        _2->addWidget(btnGraduatedAdd);

        btnGraduatedDelete = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnGraduatedDelete->setObjectName(QString::fromUtf8("btnGraduatedDelete"));

        _2->addWidget(btnGraduatedDelete);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem1);

        btnAdvanced = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));

        _2->addWidget(btnAdvanced);


        verticalLayout->addLayout(_2);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(cboGraduatedColumn);
        label_6->setBuddy(btnChangeGraduatedSymbol);
        label_5->setBuddy(spinGraduatedClasses);
        label_7->setBuddy(cboGraduatedColorRamp);
        label_8->setBuddy(cboGraduatedMode);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cboGraduatedColumn, btnChangeGraduatedSymbol);
        QWidget::setTabOrder(btnChangeGraduatedSymbol, cboGraduatedColorRamp);
        QWidget::setTabOrder(cboGraduatedColorRamp, spinGraduatedClasses);
        QWidget::setTabOrder(spinGraduatedClasses, cboGraduatedMode);
        QWidget::setTabOrder(cboGraduatedMode, viewGraduated);
        QWidget::setTabOrder(viewGraduated, btnGraduatedClassify);
        QWidget::setTabOrder(btnGraduatedClassify, btnGraduatedDelete);

        retranslateUi(QgsGraduatedSymbolRendererV2Widget);

        QMetaObject::connectSlotsByName(QgsGraduatedSymbolRendererV2Widget);
    } // setupUi

    void retranslateUi(QWidget *QgsGraduatedSymbolRendererV2Widget)
    {
        label_4->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Column", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Symbol", 0, QApplication::UnicodeUTF8));
        btnChangeGraduatedSymbol->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "change", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Classes", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Color ramp", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Mode", 0, QApplication::UnicodeUTF8));
        cboGraduatedMode->clear();
        cboGraduatedMode->insertItems(0, QStringList()
         << QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Equal Interval", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Quantile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Natural Breaks (Jenks)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Standard Deviation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Pretty Breaks", 0, QApplication::UnicodeUTF8)
        );
        btnGraduatedClassify->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Classify", 0, QApplication::UnicodeUTF8));
        btnGraduatedAdd->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Add class", 0, QApplication::UnicodeUTF8));
        btnGraduatedDelete->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Delete class", 0, QApplication::UnicodeUTF8));
        btnAdvanced->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Advanced", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsGraduatedSymbolRendererV2Widget);
    } // retranslateUi

};

namespace Ui {
    class QgsGraduatedSymbolRendererV2Widget: public Ui_QgsGraduatedSymbolRendererV2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGRADUATEDSYMBOLRENDERERV2WIDGET_H
