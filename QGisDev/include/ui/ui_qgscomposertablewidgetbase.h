/********************************************************************************
** Form generated from reading ui file 'qgscomposertablewidgetbase.ui'
**
** Created: Tue Mar 13 10:24:05 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERTABLEWIDGETBASE_H
#define UI_QGSCOMPOSERTABLEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerTableWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QToolBox *mToolBox;
    QWidget *page;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mLayerLabel;
    QComboBox *mLayerComboBox;
    QPushButton *mAttributesPushButton;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mShowOnlyVisibleFeaturesCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mComposerMapLabel;
    QComboBox *mComposerMapComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mMaxNumFeaturesLabel;
    QSpinBox *mMaximumColumnsSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mMarginLabel;
    QDoubleSpinBox *mMarginSpinBox;
    QCheckBox *mShowGridCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mGridStrokeWidthLabel;
    QDoubleSpinBox *mGridStrokeWidthSpinBox;
    QLabel *mGridColorLabel;
    QgsColorButton *mGridColorButton;
    QPushButton *mHeaderFontPushButton;
    QPushButton *mContentFontPushButton;

    void setupUi(QWidget *QgsComposerTableWidgetBase)
    {
        if (QgsComposerTableWidgetBase->objectName().isEmpty())
            QgsComposerTableWidgetBase->setObjectName(QString::fromUtf8("QgsComposerTableWidgetBase"));
        QgsComposerTableWidgetBase->resize(269, 346);
        gridLayout_2 = new QGridLayout(QgsComposerTableWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mToolBox = new QToolBox(QgsComposerTableWidgetBase);
        mToolBox->setObjectName(QString::fromUtf8("mToolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 260, 298));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mLayerLabel = new QLabel(page);
        mLayerLabel->setObjectName(QString::fromUtf8("mLayerLabel"));

        horizontalLayout_4->addWidget(mLayerLabel);

        mLayerComboBox = new QComboBox(page);
        mLayerComboBox->setObjectName(QString::fromUtf8("mLayerComboBox"));

        horizontalLayout_4->addWidget(mLayerComboBox);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 2);

        mAttributesPushButton = new QPushButton(page);
        mAttributesPushButton->setObjectName(QString::fromUtf8("mAttributesPushButton"));

        gridLayout->addWidget(mAttributesPushButton, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        mShowOnlyVisibleFeaturesCheckBox = new QCheckBox(page);
        mShowOnlyVisibleFeaturesCheckBox->setObjectName(QString::fromUtf8("mShowOnlyVisibleFeaturesCheckBox"));

        gridLayout->addWidget(mShowOnlyVisibleFeaturesCheckBox, 2, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mComposerMapLabel = new QLabel(page);
        mComposerMapLabel->setObjectName(QString::fromUtf8("mComposerMapLabel"));

        horizontalLayout_3->addWidget(mComposerMapLabel);

        mComposerMapComboBox = new QComboBox(page);
        mComposerMapComboBox->setObjectName(QString::fromUtf8("mComposerMapComboBox"));

        horizontalLayout_3->addWidget(mComposerMapComboBox);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mMaxNumFeaturesLabel = new QLabel(page);
        mMaxNumFeaturesLabel->setObjectName(QString::fromUtf8("mMaxNumFeaturesLabel"));

        horizontalLayout_2->addWidget(mMaxNumFeaturesLabel);

        mMaximumColumnsSpinBox = new QSpinBox(page);
        mMaximumColumnsSpinBox->setObjectName(QString::fromUtf8("mMaximumColumnsSpinBox"));

        horizontalLayout_2->addWidget(mMaximumColumnsSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mMarginLabel = new QLabel(page);
        mMarginLabel->setObjectName(QString::fromUtf8("mMarginLabel"));

        horizontalLayout->addWidget(mMarginLabel);

        mMarginSpinBox = new QDoubleSpinBox(page);
        mMarginSpinBox->setObjectName(QString::fromUtf8("mMarginSpinBox"));

        horizontalLayout->addWidget(mMarginSpinBox);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 2);

        mShowGridCheckBox = new QCheckBox(page);
        mShowGridCheckBox->setObjectName(QString::fromUtf8("mShowGridCheckBox"));

        gridLayout->addWidget(mShowGridCheckBox, 6, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mGridStrokeWidthLabel = new QLabel(page);
        mGridStrokeWidthLabel->setObjectName(QString::fromUtf8("mGridStrokeWidthLabel"));

        horizontalLayout_5->addWidget(mGridStrokeWidthLabel);

        mGridStrokeWidthSpinBox = new QDoubleSpinBox(page);
        mGridStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mGridStrokeWidthSpinBox"));

        horizontalLayout_5->addWidget(mGridStrokeWidthSpinBox);


        gridLayout->addLayout(horizontalLayout_5, 7, 0, 1, 2);

        mGridColorLabel = new QLabel(page);
        mGridColorLabel->setObjectName(QString::fromUtf8("mGridColorLabel"));

        gridLayout->addWidget(mGridColorLabel, 8, 0, 1, 1);

        mGridColorButton = new QgsColorButton(page);
        mGridColorButton->setObjectName(QString::fromUtf8("mGridColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGridColorButton->sizePolicy().hasHeightForWidth());
        mGridColorButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mGridColorButton, 8, 1, 1, 1);

        mHeaderFontPushButton = new QPushButton(page);
        mHeaderFontPushButton->setObjectName(QString::fromUtf8("mHeaderFontPushButton"));

        gridLayout->addWidget(mHeaderFontPushButton, 9, 0, 1, 1);

        mContentFontPushButton = new QPushButton(page);
        mContentFontPushButton->setObjectName(QString::fromUtf8("mContentFontPushButton"));

        gridLayout->addWidget(mContentFontPushButton, 9, 1, 1, 1);

        mToolBox->addItem(page, QString::fromUtf8("Table"));

        gridLayout_2->addWidget(mToolBox, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mLayerLabel->setBuddy(mLayerComboBox);
        mComposerMapLabel->setBuddy(mComposerMapComboBox);
        mMaxNumFeaturesLabel->setBuddy(mMaximumColumnsSpinBox);
        mMarginLabel->setBuddy(mMarginSpinBox);
        mGridStrokeWidthLabel->setBuddy(mGridStrokeWidthSpinBox);
        mGridColorLabel->setBuddy(mGridColorButton);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsComposerTableWidgetBase);

        mToolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsComposerTableWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerTableWidgetBase)
    {
        QgsComposerTableWidgetBase->setWindowTitle(QApplication::translate("QgsComposerTableWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mLayerLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Layer", 0, QApplication::UnicodeUTF8));
        mAttributesPushButton->setText(QApplication::translate("QgsComposerTableWidgetBase", "Attributes...", 0, QApplication::UnicodeUTF8));
        mShowOnlyVisibleFeaturesCheckBox->setText(QApplication::translate("QgsComposerTableWidgetBase", "Show only visible features", 0, QApplication::UnicodeUTF8));
        mComposerMapLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Composer map", 0, QApplication::UnicodeUTF8));
        mMaxNumFeaturesLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Maximum rows", 0, QApplication::UnicodeUTF8));
        mMarginLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Margin", 0, QApplication::UnicodeUTF8));
        mShowGridCheckBox->setText(QApplication::translate("QgsComposerTableWidgetBase", "Show grid", 0, QApplication::UnicodeUTF8));
        mGridStrokeWidthLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Grid stroke width", 0, QApplication::UnicodeUTF8));
        mGridColorLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Grid color", 0, QApplication::UnicodeUTF8));
        mGridColorButton->setText(QString());
        mHeaderFontPushButton->setText(QApplication::translate("QgsComposerTableWidgetBase", "Header Font...", 0, QApplication::UnicodeUTF8));
        mContentFontPushButton->setText(QApplication::translate("QgsComposerTableWidgetBase", "Content Font...", 0, QApplication::UnicodeUTF8));
        mToolBox->setItemText(mToolBox->indexOf(page), QApplication::translate("QgsComposerTableWidgetBase", "Table", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsComposerTableWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerTableWidgetBase: public Ui_QgsComposerTableWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERTABLEWIDGETBASE_H
