/********************************************************************************
** Form generated from reading ui file 'widget_fontmarker.ui'
**
** Created: Tue Mar 13 10:23:39 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_FONTMARKER_H
#define UI_WIDGET_FONTMARKER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetFontMarker
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QFontComboBox *cboFont;
    QLabel *label_3;
    QgsColorButtonV2 *btnColor;
    QLabel *label_2;
    QLabel *label_4;
    QDoubleSpinBox *spinAngle;
    QDoubleSpinBox *spinSize;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *WidgetFontMarker)
    {
        if (WidgetFontMarker->objectName().isEmpty())
            WidgetFontMarker->setObjectName(QString::fromUtf8("WidgetFontMarker"));
        WidgetFontMarker->resize(400, 300);
        verticalLayout = new QVBoxLayout(WidgetFontMarker);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 0, -1, -1);
        label = new QLabel(WidgetFontMarker);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cboFont = new QFontComboBox(WidgetFontMarker);
        cboFont->setObjectName(QString::fromUtf8("cboFont"));

        gridLayout->addWidget(cboFont, 0, 1, 1, 2);

        label_3 = new QLabel(WidgetFontMarker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        btnColor = new QgsColorButtonV2(WidgetFontMarker);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));

        gridLayout->addWidget(btnColor, 1, 1, 1, 1);

        label_2 = new QLabel(WidgetFontMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_4 = new QLabel(WidgetFontMarker);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinAngle = new QDoubleSpinBox(WidgetFontMarker);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setDecimals(1);
        spinAngle->setMaximum(360);

        gridLayout->addWidget(spinAngle, 3, 1, 1, 1);

        spinSize = new QDoubleSpinBox(WidgetFontMarker);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        spinSize->setDecimals(5);
        spinSize->setValue(12);

        gridLayout->addWidget(spinSize, 2, 1, 1, 1);

        label_5 = new QLabel(WidgetFontMarker);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinOffsetX = new QDoubleSpinBox(WidgetFontMarker);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        spinOffsetX->setDecimals(5);
        spinOffsetX->setMinimum(-100000);
        spinOffsetX->setMaximum(100000);

        horizontalLayout->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetFontMarker);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        spinOffsetY->setDecimals(5);
        spinOffsetY->setMinimum(-100000);
        spinOffsetY->setMaximum(100000);

        horizontalLayout->addWidget(spinOffsetY);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        scrollArea = new QScrollArea(WidgetFontMarker);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 378, 158));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(WidgetFontMarker);

        QMetaObject::connectSlotsByName(WidgetFontMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetFontMarker)
    {
        WidgetFontMarker->setWindowTitle(QApplication::translate("WidgetFontMarker", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetFontMarker", "Font family", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetFontMarker", "Color", 0, QApplication::UnicodeUTF8));
        btnColor->setText(QApplication::translate("WidgetFontMarker", "Change", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetFontMarker", "Size", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WidgetFontMarker", "Rotation", 0, QApplication::UnicodeUTF8));
        spinAngle->setSuffix(QApplication::translate("WidgetFontMarker", "\302\260", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetFontMarker", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WidgetFontMarker);
    } // retranslateUi

};

namespace Ui {
    class WidgetFontMarker: public Ui_WidgetFontMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_FONTMARKER_H
