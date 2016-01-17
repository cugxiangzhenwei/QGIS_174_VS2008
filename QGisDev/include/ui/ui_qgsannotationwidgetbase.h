/********************************************************************************
** Form generated from reading ui file 'qgsannotationwidgetbase.ui'
**
** Created: Tue Mar 13 10:24:13 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONWIDGETBASE_H
#define UI_QGSANNOTATIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationWidgetBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mMapPositionFixedCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mMapMarkerLabel;
    QPushButton *mMapMarkerButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mFrameWidthLabel;
    QDoubleSpinBox *mFrameWidthSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mFrameColorLabel;
    QgsColorButton *mFrameColorButton;

    void setupUi(QWidget *QgsAnnotationWidgetBase)
    {
        if (QgsAnnotationWidgetBase->objectName().isEmpty())
            QgsAnnotationWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationWidgetBase"));
        QgsAnnotationWidgetBase->resize(213, 152);
        gridLayout = new QGridLayout(QgsAnnotationWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mMapPositionFixedCheckBox = new QCheckBox(QgsAnnotationWidgetBase);
        mMapPositionFixedCheckBox->setObjectName(QString::fromUtf8("mMapPositionFixedCheckBox"));

        gridLayout->addWidget(mMapPositionFixedCheckBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mMapMarkerLabel = new QLabel(QgsAnnotationWidgetBase);
        mMapMarkerLabel->setObjectName(QString::fromUtf8("mMapMarkerLabel"));

        horizontalLayout->addWidget(mMapMarkerLabel);

        mMapMarkerButton = new QPushButton(QgsAnnotationWidgetBase);
        mMapMarkerButton->setObjectName(QString::fromUtf8("mMapMarkerButton"));

        horizontalLayout->addWidget(mMapMarkerButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mFrameWidthLabel = new QLabel(QgsAnnotationWidgetBase);
        mFrameWidthLabel->setObjectName(QString::fromUtf8("mFrameWidthLabel"));

        horizontalLayout_2->addWidget(mFrameWidthLabel);

        mFrameWidthSpinBox = new QDoubleSpinBox(QgsAnnotationWidgetBase);
        mFrameWidthSpinBox->setObjectName(QString::fromUtf8("mFrameWidthSpinBox"));

        horizontalLayout_2->addWidget(mFrameWidthSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mFrameColorLabel = new QLabel(QgsAnnotationWidgetBase);
        mFrameColorLabel->setObjectName(QString::fromUtf8("mFrameColorLabel"));

        horizontalLayout_3->addWidget(mFrameColorLabel);

        mFrameColorButton = new QgsColorButton(QgsAnnotationWidgetBase);
        mFrameColorButton->setObjectName(QString::fromUtf8("mFrameColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFrameColorButton->sizePolicy().hasHeightForWidth());
        mFrameColorButton->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(mFrameColorButton);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mMapMarkerLabel->setBuddy(mMapMarkerButton);
        mFrameWidthLabel->setBuddy(mFrameWidthSpinBox);
        mFrameColorLabel->setBuddy(mFrameColorButton);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsAnnotationWidgetBase);

        QMetaObject::connectSlotsByName(QgsAnnotationWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationWidgetBase)
    {
        QgsAnnotationWidgetBase->setWindowTitle(QApplication::translate("QgsAnnotationWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mMapPositionFixedCheckBox->setText(QApplication::translate("QgsAnnotationWidgetBase", "Fixed map position", 0, QApplication::UnicodeUTF8));
        mMapMarkerLabel->setText(QApplication::translate("QgsAnnotationWidgetBase", "Map marker", 0, QApplication::UnicodeUTF8));
        mMapMarkerButton->setText(QString());
        mFrameWidthLabel->setText(QApplication::translate("QgsAnnotationWidgetBase", "Frame width", 0, QApplication::UnicodeUTF8));
        mFrameColorLabel->setText(QApplication::translate("QgsAnnotationWidgetBase", "Frame color", 0, QApplication::UnicodeUTF8));
        mFrameColorButton->setText(QString());
        Q_UNUSED(QgsAnnotationWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationWidgetBase: public Ui_QgsAnnotationWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONWIDGETBASE_H
