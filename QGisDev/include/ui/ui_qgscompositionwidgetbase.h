/********************************************************************************
** Form generated from reading ui file 'qgscompositionwidgetbase.ui'
**
** Created: Tue Mar 13 10:24:04 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSITIONWIDGETBASE_H
#define UI_QGSCOMPOSITIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCompositionWidgetBase
{
public:
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *textLabel3;
    QComboBox *mPaperSizeComboBox;
    QLabel *textLabel5;
    QComboBox *mPaperUnitsComboBox;
    QLabel *textLabel7;
    QComboBox *mPaperOrientationComboBox;
    QCheckBox *mPrintAsRasterCheckBox;
    QSpinBox *mResolutionSpinBox;
    QDoubleSpinBox *mPaperWidthDoubleSpinBox;
    QDoubleSpinBox *mPaperHeightDoubleSpinBox;
    QGroupBox *mSnapGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *mSnapToGridCheckBox;
    QDoubleSpinBox *mGridResolutionSpinBox;
    QDoubleSpinBox *mOffsetXSpinBox;
    QDoubleSpinBox *mOffsetYSpinBox;
    QDoubleSpinBox *mPenWidthSpinBox;
    QLabel *mGridColorLabel;
    QgsColorButton *mGridColorButton;
    QLabel *mGridStyleLabel;
    QComboBox *mGridStyleComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsCompositionWidgetBase)
    {
        if (QgsCompositionWidgetBase->objectName().isEmpty())
            QgsCompositionWidgetBase->setObjectName(QString::fromUtf8("QgsCompositionWidgetBase"));
        QgsCompositionWidgetBase->resize(416, 570);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsCompositionWidgetBase->sizePolicy().hasHeightForWidth());
        QgsCompositionWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(QgsCompositionWidgetBase);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea = new QScrollArea(QgsCompositionWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -11, 397, 579));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel3 = new QLabel(groupBox);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy1);
        textLabel3->setWordWrap(true);

        gridLayout->addWidget(textLabel3, 0, 0, 1, 1);

        mPaperSizeComboBox = new QComboBox(groupBox);
        mPaperSizeComboBox->setObjectName(QString::fromUtf8("mPaperSizeComboBox"));
        mPaperSizeComboBox->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPaperSizeComboBox->sizePolicy().hasHeightForWidth());
        mPaperSizeComboBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mPaperSizeComboBox, 1, 0, 1, 1);

        textLabel5 = new QLabel(groupBox);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        sizePolicy1.setHeightForWidth(textLabel5->sizePolicy().hasHeightForWidth());
        textLabel5->setSizePolicy(sizePolicy1);
        textLabel5->setWordWrap(true);

        gridLayout->addWidget(textLabel5, 2, 0, 1, 1);

        mPaperUnitsComboBox = new QComboBox(groupBox);
        mPaperUnitsComboBox->setObjectName(QString::fromUtf8("mPaperUnitsComboBox"));
        mPaperUnitsComboBox->setEnabled(true);
        sizePolicy2.setHeightForWidth(mPaperUnitsComboBox->sizePolicy().hasHeightForWidth());
        mPaperUnitsComboBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mPaperUnitsComboBox, 3, 0, 1, 1);

        textLabel7 = new QLabel(groupBox);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
        sizePolicy1.setHeightForWidth(textLabel7->sizePolicy().hasHeightForWidth());
        textLabel7->setSizePolicy(sizePolicy1);
        textLabel7->setWordWrap(true);

        gridLayout->addWidget(textLabel7, 6, 0, 1, 1);

        mPaperOrientationComboBox = new QComboBox(groupBox);
        mPaperOrientationComboBox->setObjectName(QString::fromUtf8("mPaperOrientationComboBox"));
        mPaperOrientationComboBox->setEnabled(true);
        sizePolicy2.setHeightForWidth(mPaperOrientationComboBox->sizePolicy().hasHeightForWidth());
        mPaperOrientationComboBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mPaperOrientationComboBox, 7, 0, 1, 1);

        mPrintAsRasterCheckBox = new QCheckBox(groupBox);
        mPrintAsRasterCheckBox->setObjectName(QString::fromUtf8("mPrintAsRasterCheckBox"));

        gridLayout->addWidget(mPrintAsRasterCheckBox, 9, 0, 1, 1);

        mResolutionSpinBox = new QSpinBox(groupBox);
        mResolutionSpinBox->setObjectName(QString::fromUtf8("mResolutionSpinBox"));
        mResolutionSpinBox->setMaximum(3000);

        gridLayout->addWidget(mResolutionSpinBox, 8, 0, 1, 1);

        mPaperWidthDoubleSpinBox = new QDoubleSpinBox(groupBox);
        mPaperWidthDoubleSpinBox->setObjectName(QString::fromUtf8("mPaperWidthDoubleSpinBox"));
        mPaperWidthDoubleSpinBox->setMaximum(99999);

        gridLayout->addWidget(mPaperWidthDoubleSpinBox, 4, 0, 1, 1);

        mPaperHeightDoubleSpinBox = new QDoubleSpinBox(groupBox);
        mPaperHeightDoubleSpinBox->setObjectName(QString::fromUtf8("mPaperHeightDoubleSpinBox"));
        mPaperHeightDoubleSpinBox->setMaximum(99999);

        gridLayout->addWidget(mPaperHeightDoubleSpinBox, 5, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        mSnapGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mSnapGroupBox->setObjectName(QString::fromUtf8("mSnapGroupBox"));
        gridLayout_2 = new QGridLayout(mSnapGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mSnapToGridCheckBox = new QCheckBox(mSnapGroupBox);
        mSnapToGridCheckBox->setObjectName(QString::fromUtf8("mSnapToGridCheckBox"));

        gridLayout_2->addWidget(mSnapToGridCheckBox, 0, 0, 1, 1);

        mGridResolutionSpinBox = new QDoubleSpinBox(mSnapGroupBox);
        mGridResolutionSpinBox->setObjectName(QString::fromUtf8("mGridResolutionSpinBox"));
        mGridResolutionSpinBox->setMaximum(9999);

        gridLayout_2->addWidget(mGridResolutionSpinBox, 1, 0, 1, 1);

        mOffsetXSpinBox = new QDoubleSpinBox(mSnapGroupBox);
        mOffsetXSpinBox->setObjectName(QString::fromUtf8("mOffsetXSpinBox"));
        mOffsetXSpinBox->setMaximum(9999);

        gridLayout_2->addWidget(mOffsetXSpinBox, 2, 0, 1, 1);

        mOffsetYSpinBox = new QDoubleSpinBox(mSnapGroupBox);
        mOffsetYSpinBox->setObjectName(QString::fromUtf8("mOffsetYSpinBox"));

        gridLayout_2->addWidget(mOffsetYSpinBox, 3, 0, 1, 1);

        mPenWidthSpinBox = new QDoubleSpinBox(mSnapGroupBox);
        mPenWidthSpinBox->setObjectName(QString::fromUtf8("mPenWidthSpinBox"));

        gridLayout_2->addWidget(mPenWidthSpinBox, 4, 0, 1, 1);

        mGridColorLabel = new QLabel(mSnapGroupBox);
        mGridColorLabel->setObjectName(QString::fromUtf8("mGridColorLabel"));
        mGridColorLabel->setWordWrap(true);

        gridLayout_2->addWidget(mGridColorLabel, 5, 0, 1, 1);

        mGridColorButton = new QgsColorButton(mSnapGroupBox);
        mGridColorButton->setObjectName(QString::fromUtf8("mGridColorButton"));
        sizePolicy1.setHeightForWidth(mGridColorButton->sizePolicy().hasHeightForWidth());
        mGridColorButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mGridColorButton, 6, 0, 1, 1);

        mGridStyleLabel = new QLabel(mSnapGroupBox);
        mGridStyleLabel->setObjectName(QString::fromUtf8("mGridStyleLabel"));
        mGridStyleLabel->setWordWrap(true);

        gridLayout_2->addWidget(mGridStyleLabel, 7, 0, 1, 1);

        mGridStyleComboBox = new QComboBox(mSnapGroupBox);
        mGridStyleComboBox->setObjectName(QString::fromUtf8("mGridStyleComboBox"));

        gridLayout_2->addWidget(mGridStyleComboBox, 8, 0, 1, 1);


        gridLayout_3->addWidget(mSnapGroupBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel3->setBuddy(mPaperSizeComboBox);
        textLabel5->setBuddy(mPaperUnitsComboBox);
        textLabel7->setBuddy(mPaperOrientationComboBox);
        mGridColorLabel->setBuddy(mGridColorButton);
        mGridStyleLabel->setBuddy(mGridStyleComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, mPaperSizeComboBox);
        QWidget::setTabOrder(mPaperSizeComboBox, mPaperUnitsComboBox);
        QWidget::setTabOrder(mPaperUnitsComboBox, mPaperWidthDoubleSpinBox);
        QWidget::setTabOrder(mPaperWidthDoubleSpinBox, mPaperHeightDoubleSpinBox);
        QWidget::setTabOrder(mPaperHeightDoubleSpinBox, mPaperOrientationComboBox);
        QWidget::setTabOrder(mPaperOrientationComboBox, mResolutionSpinBox);
        QWidget::setTabOrder(mResolutionSpinBox, mPrintAsRasterCheckBox);
        QWidget::setTabOrder(mPrintAsRasterCheckBox, mSnapToGridCheckBox);
        QWidget::setTabOrder(mSnapToGridCheckBox, mGridResolutionSpinBox);
        QWidget::setTabOrder(mGridResolutionSpinBox, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mPenWidthSpinBox);
        QWidget::setTabOrder(mPenWidthSpinBox, mGridColorButton);
        QWidget::setTabOrder(mGridColorButton, mGridStyleComboBox);

        retranslateUi(QgsCompositionWidgetBase);

        QMetaObject::connectSlotsByName(QgsCompositionWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCompositionWidgetBase)
    {
        QgsCompositionWidgetBase->setWindowTitle(QApplication::translate("QgsCompositionWidgetBase", "Composition", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsCompositionWidgetBase", "Paper and quality", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("QgsCompositionWidgetBase", "Size", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("QgsCompositionWidgetBase", "Units", 0, QApplication::UnicodeUTF8));
        textLabel7->setText(QApplication::translate("QgsCompositionWidgetBase", "Orientation", 0, QApplication::UnicodeUTF8));
        mPrintAsRasterCheckBox->setText(QApplication::translate("QgsCompositionWidgetBase", "Print as raster", 0, QApplication::UnicodeUTF8));
        mResolutionSpinBox->setSuffix(QApplication::translate("QgsCompositionWidgetBase", " dpi", 0, QApplication::UnicodeUTF8));
        mResolutionSpinBox->setPrefix(QApplication::translate("QgsCompositionWidgetBase", "Quality ", 0, QApplication::UnicodeUTF8));
        mPaperWidthDoubleSpinBox->setPrefix(QApplication::translate("QgsCompositionWidgetBase", "Width ", 0, QApplication::UnicodeUTF8));
        mPaperWidthDoubleSpinBox->setSuffix(QString());
        mPaperHeightDoubleSpinBox->setPrefix(QApplication::translate("QgsCompositionWidgetBase", "Height ", 0, QApplication::UnicodeUTF8));
        mPaperHeightDoubleSpinBox->setSuffix(QString());
        mSnapGroupBox->setTitle(QApplication::translate("QgsCompositionWidgetBase", "Snapping", 0, QApplication::UnicodeUTF8));
        mSnapToGridCheckBox->setText(QApplication::translate("QgsCompositionWidgetBase", "Snap to grid", 0, QApplication::UnicodeUTF8));
        mGridResolutionSpinBox->setPrefix(QApplication::translate("QgsCompositionWidgetBase", "Spacing ", 0, QApplication::UnicodeUTF8));
        mGridResolutionSpinBox->setSuffix(QString());
        mOffsetXSpinBox->setPrefix(QApplication::translate("QgsCompositionWidgetBase", "X offset ", 0, QApplication::UnicodeUTF8));
        mOffsetYSpinBox->setPrefix(QApplication::translate("QgsCompositionWidgetBase", "Y offset ", 0, QApplication::UnicodeUTF8));
        mPenWidthSpinBox->setPrefix(QApplication::translate("QgsCompositionWidgetBase", "Pen width ", 0, QApplication::UnicodeUTF8));
        mGridColorLabel->setText(QApplication::translate("QgsCompositionWidgetBase", "Grid color", 0, QApplication::UnicodeUTF8));
        mGridColorButton->setText(QString());
        mGridStyleLabel->setText(QApplication::translate("QgsCompositionWidgetBase", "Grid style", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsCompositionWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCompositionWidgetBase: public Ui_QgsCompositionWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSITIONWIDGETBASE_H
