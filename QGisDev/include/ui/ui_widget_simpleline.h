/********************************************************************************
** Form generated from reading ui file 'widget_simpleline.ui'
**
** Created: Tue Mar 13 10:23:38 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLELINE_H
#define UI_WIDGET_SIMPLELINE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"
#include "qgspenstylecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleLine
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QgsColorButtonV2 *btnChangeColor;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QDoubleSpinBox *spinWidth;
    QLabel *label_4;
    QDoubleSpinBox *spinOffset;
    QLabel *label_3;
    QgsPenStyleComboBox *cboPenStyle;
    QCheckBox *mCustomCheckBox;
    QPushButton *mChangePatternButton;
    QSpacerItem *spacerItem1;
    QGridLayout *gridLayout_1;
    QLabel *label_5;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QgsPenCapStyleComboBox *cboCapStyle;

    void setupUi(QWidget *WidgetSimpleLine)
    {
        if (WidgetSimpleLine->objectName().isEmpty())
            WidgetSimpleLine->setObjectName(QString::fromUtf8("WidgetSimpleLine"));
        WidgetSimpleLine->resize(358, 296);
        gridLayout_2 = new QGridLayout(WidgetSimpleLine);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WidgetSimpleLine);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnChangeColor = new QgsColorButtonV2(WidgetSimpleLine);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnChangeColor, 0, 1, 1, 2);

        spacerItem = new QSpacerItem(50, 91, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 3, 3, 1);

        label_2 = new QLabel(WidgetSimpleLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinWidth = new QDoubleSpinBox(WidgetSimpleLine);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        sizePolicy.setHeightForWidth(spinWidth->sizePolicy().hasHeightForWidth());
        spinWidth->setSizePolicy(sizePolicy);
        spinWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinWidth->setDecimals(5);
        spinWidth->setMaximum(100000);
        spinWidth->setValue(1);

        gridLayout->addWidget(spinWidth, 1, 1, 1, 2);

        label_4 = new QLabel(WidgetSimpleLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        spinOffset = new QDoubleSpinBox(WidgetSimpleLine);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        spinOffset->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinOffset->setDecimals(5);
        spinOffset->setMinimum(-100000);
        spinOffset->setMaximum(100000);

        gridLayout->addWidget(spinOffset, 2, 1, 1, 2);

        label_3 = new QLabel(WidgetSimpleLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        cboPenStyle = new QgsPenStyleComboBox(WidgetSimpleLine);
        cboPenStyle->setObjectName(QString::fromUtf8("cboPenStyle"));

        gridLayout->addWidget(cboPenStyle, 3, 2, 1, 1);

        mCustomCheckBox = new QCheckBox(WidgetSimpleLine);
        mCustomCheckBox->setObjectName(QString::fromUtf8("mCustomCheckBox"));

        gridLayout->addWidget(mCustomCheckBox, 4, 0, 1, 4);

        mChangePatternButton = new QPushButton(WidgetSimpleLine);
        mChangePatternButton->setObjectName(QString::fromUtf8("mChangePatternButton"));

        gridLayout->addWidget(mChangePatternButton, 5, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(350, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem1, 1, 0, 1, 1);

        gridLayout_1 = new QGridLayout();
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        label_5 = new QLabel(WidgetSimpleLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_1->addWidget(label_5, 0, 0, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetSimpleLine);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout_1->addWidget(cboJoinStyle, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 38, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_1->addItem(horizontalSpacer, 0, 2, 2, 1);

        label_6 = new QLabel(WidgetSimpleLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_1->addWidget(label_6, 1, 0, 1, 1);

        cboCapStyle = new QgsPenCapStyleComboBox(WidgetSimpleLine);
        cboCapStyle->setObjectName(QString::fromUtf8("cboCapStyle"));

        gridLayout_1->addWidget(cboCapStyle, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_1, 2, 0, 1, 1);


        retranslateUi(WidgetSimpleLine);

        QMetaObject::connectSlotsByName(WidgetSimpleLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleLine)
    {
        WidgetSimpleLine->setWindowTitle(QApplication::translate("WidgetSimpleLine", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetSimpleLine", "Color", 0, QApplication::UnicodeUTF8));
        btnChangeColor->setText(QApplication::translate("WidgetSimpleLine", "Change", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetSimpleLine", "Pen width", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WidgetSimpleLine", "Offset", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetSimpleLine", "Pen style", 0, QApplication::UnicodeUTF8));
        mCustomCheckBox->setText(QApplication::translate("WidgetSimpleLine", "Use custom dash pattern", 0, QApplication::UnicodeUTF8));
        mChangePatternButton->setText(QApplication::translate("WidgetSimpleLine", "Change", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetSimpleLine", "Join style", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WidgetSimpleLine", "Cap style", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WidgetSimpleLine);
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleLine: public Ui_WidgetSimpleLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLELINE_H
