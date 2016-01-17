/********************************************************************************
** Form generated from reading ui file 'widget_simplefill.ui'
**
** Created: Tue Mar 13 10:23:38 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLEFILL_H
#define UI_WIDGET_SIMPLEFILL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgsbrushstylecombobox.h"
#include "qgscolorbutton.h"
#include "qgspenstylecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleFill
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QgsColorButtonV2 *btnChangeColor;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QgsBrushStyleComboBox *cboFillStyle;
    QLabel *label_3;
    QgsColorButtonV2 *btnChangeBorderColor;
    QLabel *label_4;
    QgsPenStyleComboBox *cboBorderStyle;
    QLabel *label_5;
    QDoubleSpinBox *spinBorderWidth;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *WidgetSimpleFill)
    {
        if (WidgetSimpleFill->objectName().isEmpty())
            WidgetSimpleFill->setObjectName(QString::fromUtf8("WidgetSimpleFill"));
        WidgetSimpleFill->resize(335, 206);
        verticalLayout = new QVBoxLayout(WidgetSimpleFill);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WidgetSimpleFill);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnChangeColor = new QgsColorButtonV2(WidgetSimpleFill);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));

        gridLayout->addWidget(btnChangeColor, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(28, 158, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 6, 1);

        label_2 = new QLabel(WidgetSimpleFill);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cboFillStyle = new QgsBrushStyleComboBox(WidgetSimpleFill);
        cboFillStyle->setObjectName(QString::fromUtf8("cboFillStyle"));

        gridLayout->addWidget(cboFillStyle, 1, 1, 1, 1);

        label_3 = new QLabel(WidgetSimpleFill);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        btnChangeBorderColor = new QgsColorButtonV2(WidgetSimpleFill);
        btnChangeBorderColor->setObjectName(QString::fromUtf8("btnChangeBorderColor"));

        gridLayout->addWidget(btnChangeBorderColor, 2, 1, 1, 1);

        label_4 = new QLabel(WidgetSimpleFill);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        cboBorderStyle = new QgsPenStyleComboBox(WidgetSimpleFill);
        cboBorderStyle->setObjectName(QString::fromUtf8("cboBorderStyle"));

        gridLayout->addWidget(cboBorderStyle, 3, 1, 1, 1);

        label_5 = new QLabel(WidgetSimpleFill);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        spinBorderWidth = new QDoubleSpinBox(WidgetSimpleFill);
        spinBorderWidth->setObjectName(QString::fromUtf8("spinBorderWidth"));
        spinBorderWidth->setDecimals(5);
        spinBorderWidth->setMaximum(100000);

        gridLayout->addWidget(spinBorderWidth, 4, 1, 1, 1);

        label_6 = new QLabel(WidgetSimpleFill);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinOffsetX = new QDoubleSpinBox(WidgetSimpleFill);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        spinOffsetX->setDecimals(5);
        spinOffsetX->setMinimum(-999);
        spinOffsetX->setMaximum(999);

        horizontalLayout->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetSimpleFill);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        spinOffsetY->setDecimals(5);
        spinOffsetY->setMinimum(-999);
        spinOffsetY->setMaximum(999);

        horizontalLayout->addWidget(spinOffsetY);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        spacerItem1 = new QSpacerItem(244, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem1);

        QWidget::setTabOrder(btnChangeColor, cboFillStyle);
        QWidget::setTabOrder(cboFillStyle, btnChangeBorderColor);
        QWidget::setTabOrder(btnChangeBorderColor, cboBorderStyle);
        QWidget::setTabOrder(cboBorderStyle, spinBorderWidth);

        retranslateUi(WidgetSimpleFill);

        QMetaObject::connectSlotsByName(WidgetSimpleFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleFill)
    {
        WidgetSimpleFill->setWindowTitle(QApplication::translate("WidgetSimpleFill", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetSimpleFill", "Color", 0, QApplication::UnicodeUTF8));
        btnChangeColor->setText(QApplication::translate("WidgetSimpleFill", "Change", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetSimpleFill", "Fill style", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetSimpleFill", "Border color", 0, QApplication::UnicodeUTF8));
        btnChangeBorderColor->setText(QApplication::translate("WidgetSimpleFill", "Change", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WidgetSimpleFill", "Border style", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetSimpleFill", "Border width", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WidgetSimpleFill", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WidgetSimpleFill);
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleFill: public Ui_WidgetSimpleFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLEFILL_H
