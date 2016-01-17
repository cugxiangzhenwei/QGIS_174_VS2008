/********************************************************************************
** Form generated from reading ui file 'qgscontinuouscolordialogbase.ui'
**
** Created: Tue Mar 13 10:24:04 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCONTINUOUSCOLORDIALOGBASE_H
#define UI_QGSCONTINUOUSCOLORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsContinuousColorDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *classvarlabel;
    QComboBox *classificationComboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *mincolorlabel;
    QgsColorButton *btnMinValue;
    QLabel *maxcolorlabel;
    QgsColorButton *btnMaxValue;
    QLabel *outlinewidthlabel;
    QDoubleSpinBox *outlinewidthspinbox;
    QCheckBox *cb_polygonOutline;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *QgsContinuousColorDialogBase)
    {
        if (QgsContinuousColorDialogBase->objectName().isEmpty())
            QgsContinuousColorDialogBase->setObjectName(QString::fromUtf8("QgsContinuousColorDialogBase"));
        QgsContinuousColorDialogBase->resize(256, 175);
        gridLayout = new QGridLayout(QgsContinuousColorDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        classvarlabel = new QLabel(QgsContinuousColorDialogBase);
        classvarlabel->setObjectName(QString::fromUtf8("classvarlabel"));
        classvarlabel->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(classvarlabel, 0, 0, 1, 1);

        classificationComboBox = new QComboBox(QgsContinuousColorDialogBase);
        classificationComboBox->setObjectName(QString::fromUtf8("classificationComboBox"));
        classificationComboBox->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(classificationComboBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        mincolorlabel = new QLabel(QgsContinuousColorDialogBase);
        mincolorlabel->setObjectName(QString::fromUtf8("mincolorlabel"));
        mincolorlabel->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(mincolorlabel, 1, 0, 1, 1);

        btnMinValue = new QgsColorButton(QgsContinuousColorDialogBase);
        btnMinValue->setObjectName(QString::fromUtf8("btnMinValue"));
        btnMinValue->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(btnMinValue, 1, 1, 1, 1);

        maxcolorlabel = new QLabel(QgsContinuousColorDialogBase);
        maxcolorlabel->setObjectName(QString::fromUtf8("maxcolorlabel"));
        maxcolorlabel->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(maxcolorlabel, 2, 0, 1, 1);

        btnMaxValue = new QgsColorButton(QgsContinuousColorDialogBase);
        btnMaxValue->setObjectName(QString::fromUtf8("btnMaxValue"));
        btnMaxValue->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(btnMaxValue, 2, 1, 1, 1);

        outlinewidthlabel = new QLabel(QgsContinuousColorDialogBase);
        outlinewidthlabel->setObjectName(QString::fromUtf8("outlinewidthlabel"));
        outlinewidthlabel->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(outlinewidthlabel, 3, 0, 1, 1);

        outlinewidthspinbox = new QDoubleSpinBox(QgsContinuousColorDialogBase);
        outlinewidthspinbox->setObjectName(QString::fromUtf8("outlinewidthspinbox"));

        gridLayout->addWidget(outlinewidthspinbox, 3, 1, 1, 1);

        cb_polygonOutline = new QCheckBox(QgsContinuousColorDialogBase);
        cb_polygonOutline->setObjectName(QString::fromUtf8("cb_polygonOutline"));

        gridLayout->addWidget(cb_polygonOutline, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        classvarlabel->setBuddy(classificationComboBox);
        mincolorlabel->setBuddy(btnMinValue);
        maxcolorlabel->setBuddy(btnMaxValue);
        outlinewidthlabel->setBuddy(outlinewidthspinbox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(classificationComboBox, btnMinValue);
        QWidget::setTabOrder(btnMinValue, btnMaxValue);
        QWidget::setTabOrder(btnMaxValue, outlinewidthspinbox);
        QWidget::setTabOrder(outlinewidthspinbox, cb_polygonOutline);

        retranslateUi(QgsContinuousColorDialogBase);

        QMetaObject::connectSlotsByName(QgsContinuousColorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsContinuousColorDialogBase)
    {
        QgsContinuousColorDialogBase->setWindowTitle(QApplication::translate("QgsContinuousColorDialogBase", "Continuous color", 0, QApplication::UnicodeUTF8));
        classvarlabel->setText(QApplication::translate("QgsContinuousColorDialogBase", "Classification field", 0, QApplication::UnicodeUTF8));
        mincolorlabel->setText(QApplication::translate("QgsContinuousColorDialogBase", "Minimum value", 0, QApplication::UnicodeUTF8));
        maxcolorlabel->setText(QApplication::translate("QgsContinuousColorDialogBase", "Maximum value", 0, QApplication::UnicodeUTF8));
        outlinewidthlabel->setText(QApplication::translate("QgsContinuousColorDialogBase", "Outline width", 0, QApplication::UnicodeUTF8));
        cb_polygonOutline->setText(QApplication::translate("QgsContinuousColorDialogBase", "Draw polygon outline", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsContinuousColorDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsContinuousColorDialogBase: public Ui_QgsContinuousColorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCONTINUOUSCOLORDIALOGBASE_H
