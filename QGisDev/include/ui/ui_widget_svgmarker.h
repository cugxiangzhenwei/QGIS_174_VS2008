/********************************************************************************
** Form generated from reading ui file 'widget_svgmarker.ui'
**
** Created: Tue Mar 13 10:23:37 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_SVGMARKER_H
#define UI_WIDGET_SVGMARKER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetSvgMarker
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QDoubleSpinBox *spinAngle;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QLabel *label_4;
    QDoubleSpinBox *spinSize;
    QLabel *label;
    QListView *viewImages;

    void setupUi(QWidget *WidgetSvgMarker)
    {
        if (WidgetSvgMarker->objectName().isEmpty())
            WidgetSvgMarker->setObjectName(QString::fromUtf8("WidgetSvgMarker"));
        WidgetSvgMarker->resize(391, 276);
        verticalLayout = new QVBoxLayout(WidgetSvgMarker);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(WidgetSvgMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(115, 51, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 3, 1);

        label_3 = new QLabel(WidgetSvgMarker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinAngle = new QDoubleSpinBox(WidgetSvgMarker);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setDecimals(2);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(5);

        gridLayout->addWidget(spinAngle, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinOffsetX = new QDoubleSpinBox(WidgetSvgMarker);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        spinOffsetX->setDecimals(5);
        spinOffsetX->setMinimum(-100000);
        spinOffsetX->setMaximum(100000);

        horizontalLayout->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetSvgMarker);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        spinOffsetY->setDecimals(5);
        spinOffsetY->setMinimum(-100000);
        spinOffsetY->setMaximum(100000);

        horizontalLayout->addWidget(spinOffsetY);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        label_4 = new QLabel(WidgetSvgMarker);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        spinSize = new QDoubleSpinBox(WidgetSvgMarker);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinSize->sizePolicy().hasHeightForWidth());
        spinSize->setSizePolicy(sizePolicy1);
        spinSize->setDecimals(2);
        spinSize->setMaximum(100000);
        spinSize->setValue(1);

        gridLayout->addWidget(spinSize, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label = new QLabel(WidgetSvgMarker);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        viewImages = new QListView(WidgetSvgMarker);
        viewImages->setObjectName(QString::fromUtf8("viewImages"));
        viewImages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viewImages->setIconSize(QSize(32, 32));
        viewImages->setMovement(QListView::Static);
        viewImages->setResizeMode(QListView::Adjust);
        viewImages->setLayoutMode(QListView::Batched);
        viewImages->setSpacing(2);
        viewImages->setGridSize(QSize(36, 36));
        viewImages->setViewMode(QListView::IconMode);
        viewImages->setUniformItemSizes(true);
        viewImages->setWordWrap(true);

        verticalLayout->addWidget(viewImages);

        QWidget::setTabOrder(spinSize, spinAngle);
        QWidget::setTabOrder(spinAngle, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, viewImages);

        retranslateUi(WidgetSvgMarker);

        QMetaObject::connectSlotsByName(WidgetSvgMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetSvgMarker)
    {
        WidgetSvgMarker->setWindowTitle(QApplication::translate("WidgetSvgMarker", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetSvgMarker", "Size", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetSvgMarker", "Angle", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WidgetSvgMarker", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetSvgMarker", "SVG Image", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WidgetSvgMarker);
    } // retranslateUi

};

namespace Ui {
    class WidgetSvgMarker: public Ui_WidgetSvgMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGMARKER_H
