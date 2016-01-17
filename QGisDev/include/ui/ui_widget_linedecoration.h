/********************************************************************************
** Form generated from reading ui file 'widget_linedecoration.ui'
**
** Created: Tue Mar 13 10:23:39 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_LINEDECORATION_H
#define UI_WIDGET_LINEDECORATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetLineDecoration
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QgsColorButtonV2 *btnChangeColor;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QDoubleSpinBox *spinWidth;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *WidgetLineDecoration)
    {
        if (WidgetLineDecoration->objectName().isEmpty())
            WidgetLineDecoration->setObjectName(QString::fromUtf8("WidgetLineDecoration"));
        WidgetLineDecoration->resize(366, 242);
        verticalLayout = new QVBoxLayout(WidgetLineDecoration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WidgetLineDecoration);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnChangeColor = new QgsColorButtonV2(WidgetLineDecoration);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnChangeColor, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(112, 48, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 2, 1);

        label_2 = new QLabel(WidgetLineDecoration);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinWidth = new QDoubleSpinBox(WidgetLineDecoration);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        spinWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinWidth->setDecimals(5);
        spinWidth->setMaximum(100000);
        spinWidth->setValue(1);

        gridLayout->addWidget(spinWidth, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        spacerItem1 = new QSpacerItem(350, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem1);

        QWidget::setTabOrder(btnChangeColor, spinWidth);

        retranslateUi(WidgetLineDecoration);

        QMetaObject::connectSlotsByName(WidgetLineDecoration);
    } // setupUi

    void retranslateUi(QWidget *WidgetLineDecoration)
    {
        WidgetLineDecoration->setWindowTitle(QApplication::translate("WidgetLineDecoration", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetLineDecoration", "Color", 0, QApplication::UnicodeUTF8));
        btnChangeColor->setText(QApplication::translate("WidgetLineDecoration", "Change", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetLineDecoration", "Pen width", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WidgetLineDecoration);
    } // retranslateUi

};

namespace Ui {
    class WidgetLineDecoration: public Ui_WidgetLineDecoration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_LINEDECORATION_H
