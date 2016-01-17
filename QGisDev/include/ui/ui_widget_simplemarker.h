/********************************************************************************
** Form generated from reading ui file 'widget_simplemarker.ui'
**
** Created: Tue Mar 13 10:23:37 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLEMARKER_H
#define UI_WIDGET_SIMPLEMARKER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleMarker
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QgsColorButtonV2 *btnChangeColorBorder;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QgsColorButtonV2 *btnChangeColorFill;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *spinAngle;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QDoubleSpinBox *spinSize;
    QListWidget *lstNames;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *WidgetSimpleMarker)
    {
        if (WidgetSimpleMarker->objectName().isEmpty())
            WidgetSimpleMarker->setObjectName(QString::fromUtf8("WidgetSimpleMarker"));
        WidgetSimpleMarker->resize(394, 275);
        verticalLayout = new QVBoxLayout(WidgetSimpleMarker);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WidgetSimpleMarker);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnChangeColorBorder = new QgsColorButtonV2(WidgetSimpleMarker);
        btnChangeColorBorder->setObjectName(QString::fromUtf8("btnChangeColorBorder"));

        gridLayout->addWidget(btnChangeColorBorder, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(61, 61, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 2, 1);

        label_2 = new QLabel(WidgetSimpleMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        btnChangeColorFill = new QgsColorButtonV2(WidgetSimpleMarker);
        btnChangeColorFill->setObjectName(QString::fromUtf8("btnChangeColorFill"));

        gridLayout->addWidget(btnChangeColorFill, 1, 1, 1, 1);

        label_3 = new QLabel(WidgetSimpleMarker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(WidgetSimpleMarker);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinAngle = new QDoubleSpinBox(WidgetSimpleMarker);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setDecimals(2);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(5);

        gridLayout->addWidget(spinAngle, 3, 1, 1, 1);

        label_5 = new QLabel(WidgetSimpleMarker);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinOffsetX = new QDoubleSpinBox(WidgetSimpleMarker);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        spinOffsetX->setDecimals(5);
        spinOffsetX->setMinimum(-100);

        horizontalLayout->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetSimpleMarker);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        spinOffsetY->setDecimals(5);
        spinOffsetY->setMinimum(-100);

        horizontalLayout->addWidget(spinOffsetY);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        spinSize = new QDoubleSpinBox(WidgetSimpleMarker);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        spinSize->setDecimals(5);
        spinSize->setMaximum(100000);
        spinSize->setValue(1);

        gridLayout->addWidget(spinSize, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        lstNames = new QListWidget(WidgetSimpleMarker);
        lstNames->setObjectName(QString::fromUtf8("lstNames"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lstNames->sizePolicy().hasHeightForWidth());
        lstNames->setSizePolicy(sizePolicy);
        lstNames->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstNames->setIconSize(QSize(20, 20));
        lstNames->setMovement(QListView::Static);
        lstNames->setFlow(QListView::LeftToRight);
        lstNames->setResizeMode(QListView::Adjust);
        lstNames->setSpacing(4);
        lstNames->setGridSize(QSize(30, 25));
        lstNames->setViewMode(QListView::IconMode);
        lstNames->setWordWrap(true);

        verticalLayout->addWidget(lstNames);

        spacerItem1 = new QSpacerItem(376, 16, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(spacerItem1);

        QWidget::setTabOrder(lstNames, btnChangeColorBorder);
        QWidget::setTabOrder(btnChangeColorBorder, btnChangeColorFill);
        QWidget::setTabOrder(btnChangeColorFill, spinSize);
        QWidget::setTabOrder(spinSize, spinAngle);
        QWidget::setTabOrder(spinAngle, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);

        retranslateUi(WidgetSimpleMarker);

        QMetaObject::connectSlotsByName(WidgetSimpleMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleMarker)
    {
        WidgetSimpleMarker->setWindowTitle(QApplication::translate("WidgetSimpleMarker", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetSimpleMarker", "Border color", 0, QApplication::UnicodeUTF8));
        btnChangeColorBorder->setText(QApplication::translate("WidgetSimpleMarker", "Change", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetSimpleMarker", "Fill color", 0, QApplication::UnicodeUTF8));
        btnChangeColorFill->setText(QApplication::translate("WidgetSimpleMarker", "Change", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetSimpleMarker", "Size", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WidgetSimpleMarker", "Angle", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetSimpleMarker", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WidgetSimpleMarker);
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleMarker: public Ui_WidgetSimpleMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLEMARKER_H
