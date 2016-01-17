/********************************************************************************
** Form generated from reading ui file 'widget_centroidfill.ui'
**
** Created: Tue Mar 13 10:23:40 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_CENTROIDFILL_H
#define UI_WIDGET_CENTROIDFILL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetCentroidFill
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *btnChangeMarker;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *WidgetCentroidFill)
    {
        if (WidgetCentroidFill->objectName().isEmpty())
            WidgetCentroidFill->setObjectName(QString::fromUtf8("WidgetCentroidFill"));
        WidgetCentroidFill->resize(366, 242);
        verticalLayout = new QVBoxLayout(WidgetCentroidFill);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(WidgetCentroidFill);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        btnChangeMarker = new QPushButton(WidgetCentroidFill);
        btnChangeMarker->setObjectName(QString::fromUtf8("btnChangeMarker"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeMarker->sizePolicy().hasHeightForWidth());
        btnChangeMarker->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnChangeMarker);

        spacerItem = new QSpacerItem(112, 48, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);


        verticalLayout->addLayout(horizontalLayout);

        spacerItem1 = new QSpacerItem(350, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem1);


        retranslateUi(WidgetCentroidFill);

        QMetaObject::connectSlotsByName(WidgetCentroidFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetCentroidFill)
    {
        WidgetCentroidFill->setWindowTitle(QApplication::translate("WidgetCentroidFill", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetCentroidFill", "Marker", 0, QApplication::UnicodeUTF8));
        btnChangeMarker->setText(QApplication::translate("WidgetCentroidFill", "Change", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WidgetCentroidFill);
    } // retranslateUi

};

namespace Ui {
    class WidgetCentroidFill: public Ui_WidgetCentroidFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_CENTROIDFILL_H
