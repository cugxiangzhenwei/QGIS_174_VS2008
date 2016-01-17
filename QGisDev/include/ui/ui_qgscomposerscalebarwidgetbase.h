/********************************************************************************
** Form generated from reading ui file 'qgscomposerscalebarwidgetbase.ui'
**
** Created: Tue Mar 13 10:24:06 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERSCALEBARWIDGETBASE_H
#define UI_QGSCOMPOSERSCALEBARWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerScaleBarWidgetBase
{
public:
    QGridLayout *gridLayout;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QLabel *mSegmentSizeLabel;
    QDoubleSpinBox *mSegmentSizeSpinBox;
    QLabel *mMapUnitsPerBarUnitLabel;
    QDoubleSpinBox *mMapUnitsPerBarUnitSpinBox;
    QSpinBox *mNumberOfSegmentsSpinBox;
    QSpinBox *mSegmentsLeftSpinBox;
    QLabel *mStyleLabel;
    QComboBox *mStyleComboBox;
    QLabel *mMapLabel;
    QComboBox *mMapComboBox;
    QSpinBox *mHeightSpinBox;
    QDoubleSpinBox *mLineWidthSpinBox;
    QDoubleSpinBox *mLabelBarSpaceSpinBox;
    QDoubleSpinBox *mBoxSizeSpinBox;
    QLabel *mUnitLabelLabel;
    QLineEdit *mUnitLabelLineEdit;
    QPushButton *mFontButton;
    QPushButton *mColorPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsComposerScaleBarWidgetBase)
    {
        if (QgsComposerScaleBarWidgetBase->objectName().isEmpty())
            QgsComposerScaleBarWidgetBase->setObjectName(QString::fromUtf8("QgsComposerScaleBarWidgetBase"));
        QgsComposerScaleBarWidgetBase->resize(325, 537);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsComposerScaleBarWidgetBase->sizePolicy().hasHeightForWidth());
        QgsComposerScaleBarWidgetBase->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QgsComposerScaleBarWidgetBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolBox = new QToolBox(QgsComposerScaleBarWidgetBase);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 307, 616));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mSegmentSizeLabel = new QLabel(page);
        mSegmentSizeLabel->setObjectName(QString::fromUtf8("mSegmentSizeLabel"));
        mSegmentSizeLabel->setWordWrap(true);

        gridLayout_2->addWidget(mSegmentSizeLabel, 0, 0, 1, 1);

        mSegmentSizeSpinBox = new QDoubleSpinBox(page);
        mSegmentSizeSpinBox->setObjectName(QString::fromUtf8("mSegmentSizeSpinBox"));
        mSegmentSizeSpinBox->setDecimals(4);
        mSegmentSizeSpinBox->setMaximum(1e+13);

        gridLayout_2->addWidget(mSegmentSizeSpinBox, 1, 0, 1, 1);

        mMapUnitsPerBarUnitLabel = new QLabel(page);
        mMapUnitsPerBarUnitLabel->setObjectName(QString::fromUtf8("mMapUnitsPerBarUnitLabel"));
        mMapUnitsPerBarUnitLabel->setWordWrap(true);

        gridLayout_2->addWidget(mMapUnitsPerBarUnitLabel, 2, 0, 1, 1);

        mMapUnitsPerBarUnitSpinBox = new QDoubleSpinBox(page);
        mMapUnitsPerBarUnitSpinBox->setObjectName(QString::fromUtf8("mMapUnitsPerBarUnitSpinBox"));
        mMapUnitsPerBarUnitSpinBox->setMaximum(1e+13);

        gridLayout_2->addWidget(mMapUnitsPerBarUnitSpinBox, 3, 0, 1, 1);

        mNumberOfSegmentsSpinBox = new QSpinBox(page);
        mNumberOfSegmentsSpinBox->setObjectName(QString::fromUtf8("mNumberOfSegmentsSpinBox"));

        gridLayout_2->addWidget(mNumberOfSegmentsSpinBox, 4, 0, 1, 1);

        mSegmentsLeftSpinBox = new QSpinBox(page);
        mSegmentsLeftSpinBox->setObjectName(QString::fromUtf8("mSegmentsLeftSpinBox"));

        gridLayout_2->addWidget(mSegmentsLeftSpinBox, 5, 0, 1, 1);

        mStyleLabel = new QLabel(page);
        mStyleLabel->setObjectName(QString::fromUtf8("mStyleLabel"));

        gridLayout_2->addWidget(mStyleLabel, 6, 0, 1, 1);

        mStyleComboBox = new QComboBox(page);
        mStyleComboBox->setObjectName(QString::fromUtf8("mStyleComboBox"));

        gridLayout_2->addWidget(mStyleComboBox, 7, 0, 1, 1);

        mMapLabel = new QLabel(page);
        mMapLabel->setObjectName(QString::fromUtf8("mMapLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mMapLabel->sizePolicy().hasHeightForWidth());
        mMapLabel->setSizePolicy(sizePolicy1);
        mMapLabel->setWordWrap(true);

        gridLayout_2->addWidget(mMapLabel, 8, 0, 1, 1);

        mMapComboBox = new QComboBox(page);
        mMapComboBox->setObjectName(QString::fromUtf8("mMapComboBox"));
        mMapComboBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(mMapComboBox->sizePolicy().hasHeightForWidth());
        mMapComboBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mMapComboBox, 9, 0, 1, 1);

        mHeightSpinBox = new QSpinBox(page);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));

        gridLayout_2->addWidget(mHeightSpinBox, 10, 0, 1, 1);

        mLineWidthSpinBox = new QDoubleSpinBox(page);
        mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mLineWidthSpinBox->setSizePolicy(sizePolicy1);
        mLineWidthSpinBox->setMinimum(0.01);
        mLineWidthSpinBox->setSingleStep(0.1);
        mLineWidthSpinBox->setValue(0.2);

        gridLayout_2->addWidget(mLineWidthSpinBox, 11, 0, 1, 1);

        mLabelBarSpaceSpinBox = new QDoubleSpinBox(page);
        mLabelBarSpaceSpinBox->setObjectName(QString::fromUtf8("mLabelBarSpaceSpinBox"));

        gridLayout_2->addWidget(mLabelBarSpaceSpinBox, 12, 0, 1, 1);

        mBoxSizeSpinBox = new QDoubleSpinBox(page);
        mBoxSizeSpinBox->setObjectName(QString::fromUtf8("mBoxSizeSpinBox"));

        gridLayout_2->addWidget(mBoxSizeSpinBox, 13, 0, 1, 1);

        mUnitLabelLabel = new QLabel(page);
        mUnitLabelLabel->setObjectName(QString::fromUtf8("mUnitLabelLabel"));
        mUnitLabelLabel->setWordWrap(true);

        gridLayout_2->addWidget(mUnitLabelLabel, 14, 0, 1, 1);

        mUnitLabelLineEdit = new QLineEdit(page);
        mUnitLabelLineEdit->setObjectName(QString::fromUtf8("mUnitLabelLineEdit"));

        gridLayout_2->addWidget(mUnitLabelLineEdit, 15, 0, 1, 1);

        mFontButton = new QPushButton(page);
        mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(mFontButton, 16, 0, 1, 1);

        mColorPushButton = new QPushButton(page);
        mColorPushButton->setObjectName(QString::fromUtf8("mColorPushButton"));

        gridLayout_2->addWidget(mColorPushButton, 17, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 18, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("Scale bar"));

        gridLayout->addWidget(toolBox, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mSegmentSizeLabel->setBuddy(mSegmentSizeSpinBox);
        mMapUnitsPerBarUnitLabel->setBuddy(mMapUnitsPerBarUnitSpinBox);
        mStyleLabel->setBuddy(mStyleComboBox);
        mMapLabel->setBuddy(mMapComboBox);
        mUnitLabelLabel->setBuddy(mUnitLabelLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsComposerScaleBarWidgetBase);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsComposerScaleBarWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerScaleBarWidgetBase)
    {
        QgsComposerScaleBarWidgetBase->setWindowTitle(QApplication::translate("QgsComposerScaleBarWidgetBase", "Barscale Options", 0, QApplication::UnicodeUTF8));
        mSegmentSizeLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Segment size (map units)", 0, QApplication::UnicodeUTF8));
        mMapUnitsPerBarUnitLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Map units per bar unit", 0, QApplication::UnicodeUTF8));
        mNumberOfSegmentsSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " Right segments", 0, QApplication::UnicodeUTF8));
        mSegmentsLeftSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " Left segments", 0, QApplication::UnicodeUTF8));
        mStyleLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Style", 0, QApplication::UnicodeUTF8));
        mMapLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Map", 0, QApplication::UnicodeUTF8));
        mHeightSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mHeightSpinBox->setPrefix(QApplication::translate("QgsComposerScaleBarWidgetBase", "Height ", 0, QApplication::UnicodeUTF8));
        mLineWidthSpinBox->setPrefix(QApplication::translate("QgsComposerScaleBarWidgetBase", "Line width ", 0, QApplication::UnicodeUTF8));
        mLineWidthSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mLabelBarSpaceSpinBox->setPrefix(QApplication::translate("QgsComposerScaleBarWidgetBase", "Label space ", 0, QApplication::UnicodeUTF8));
        mLabelBarSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mBoxSizeSpinBox->setPrefix(QApplication::translate("QgsComposerScaleBarWidgetBase", "Box space ", 0, QApplication::UnicodeUTF8));
        mBoxSizeSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mUnitLabelLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Unit label", 0, QApplication::UnicodeUTF8));
        mFontButton->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Font...", 0, QApplication::UnicodeUTF8));
        mColorPushButton->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Color...", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("QgsComposerScaleBarWidgetBase", "Scale bar", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsComposerScaleBarWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerScaleBarWidgetBase: public Ui_QgsComposerScaleBarWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERSCALEBARWIDGETBASE_H
