/********************************************************************************
** Form generated from reading ui file 'qgscomposerlabelwidgetbase.ui'
**
** Created: Tue Mar 13 10:24:09 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERLABELWIDGETBASE_H
#define UI_QGSCOMPOSERLABELWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerLabelWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout;
    QTextEdit *mTextEdit;
    QPushButton *mFontButton;
    QPushButton *mFontColorButton;
    QLabel *mMarginTextLabel;
    QDoubleSpinBox *mMarginDoubleSpinBox;
    QGroupBox *buttonGroup1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mLeftRadioButton;
    QRadioButton *mCenterRadioButton;
    QRadioButton *mRightRadioButton;
    QGroupBox *buttonGroup2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *mTopRadioButton;
    QRadioButton *mMiddleRadioButton;
    QRadioButton *mBottomRadioButton;
    QLineEdit *mLabelIdLineEdit;
    QLabel *mIdLabel;

    void setupUi(QWidget *QgsComposerLabelWidgetBase)
    {
        if (QgsComposerLabelWidgetBase->objectName().isEmpty())
            QgsComposerLabelWidgetBase->setObjectName(QString::fromUtf8("QgsComposerLabelWidgetBase"));
        QgsComposerLabelWidgetBase->resize(547, 425);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsComposerLabelWidgetBase->sizePolicy().hasHeightForWidth());
        QgsComposerLabelWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(QgsComposerLabelWidgetBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        toolBox = new QToolBox(QgsComposerLabelWidgetBase);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 513, 402));
        gridLayout = new QGridLayout(page);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mTextEdit = new QTextEdit(page);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        mTextEdit->setLineWrapMode(QTextEdit::NoWrap);

        gridLayout->addWidget(mTextEdit, 0, 0, 1, 1);

        mFontButton = new QPushButton(page);
        mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mFontButton, 1, 0, 1, 1);

        mFontColorButton = new QPushButton(page);
        mFontColorButton->setObjectName(QString::fromUtf8("mFontColorButton"));

        gridLayout->addWidget(mFontColorButton, 2, 0, 1, 1);

        mMarginTextLabel = new QLabel(page);
        mMarginTextLabel->setObjectName(QString::fromUtf8("mMarginTextLabel"));

        gridLayout->addWidget(mMarginTextLabel, 6, 0, 1, 1);

        mMarginDoubleSpinBox = new QDoubleSpinBox(page);
        mMarginDoubleSpinBox->setObjectName(QString::fromUtf8("mMarginDoubleSpinBox"));

        gridLayout->addWidget(mMarginDoubleSpinBox, 7, 0, 1, 1);

        buttonGroup1 = new QGroupBox(page);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        horizontalLayout = new QHBoxLayout(buttonGroup1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setMargin(11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        mLeftRadioButton = new QRadioButton(buttonGroup1);
        mLeftRadioButton->setObjectName(QString::fromUtf8("mLeftRadioButton"));

        horizontalLayout->addWidget(mLeftRadioButton);

        mCenterRadioButton = new QRadioButton(buttonGroup1);
        mCenterRadioButton->setObjectName(QString::fromUtf8("mCenterRadioButton"));

        horizontalLayout->addWidget(mCenterRadioButton);

        mRightRadioButton = new QRadioButton(buttonGroup1);
        mRightRadioButton->setObjectName(QString::fromUtf8("mRightRadioButton"));

        horizontalLayout->addWidget(mRightRadioButton);


        gridLayout->addWidget(buttonGroup1, 3, 0, 1, 1);

        buttonGroup2 = new QGroupBox(page);
        buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
        horizontalLayout_2 = new QHBoxLayout(buttonGroup2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setMargin(11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mTopRadioButton = new QRadioButton(buttonGroup2);
        mTopRadioButton->setObjectName(QString::fromUtf8("mTopRadioButton"));

        horizontalLayout_2->addWidget(mTopRadioButton);

        mMiddleRadioButton = new QRadioButton(buttonGroup2);
        mMiddleRadioButton->setObjectName(QString::fromUtf8("mMiddleRadioButton"));

        horizontalLayout_2->addWidget(mMiddleRadioButton);

        mBottomRadioButton = new QRadioButton(buttonGroup2);
        mBottomRadioButton->setObjectName(QString::fromUtf8("mBottomRadioButton"));

        horizontalLayout_2->addWidget(mBottomRadioButton);


        gridLayout->addWidget(buttonGroup2, 4, 0, 1, 1);

        mLabelIdLineEdit = new QLineEdit(page);
        mLabelIdLineEdit->setObjectName(QString::fromUtf8("mLabelIdLineEdit"));

        gridLayout->addWidget(mLabelIdLineEdit, 9, 0, 1, 1);

        mIdLabel = new QLabel(page);
        mIdLabel->setObjectName(QString::fromUtf8("mIdLabel"));

        gridLayout->addWidget(mIdLabel, 8, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("Label"));

        gridLayout_2->addWidget(toolBox, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mMarginTextLabel->setBuddy(mMarginDoubleSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mTextEdit, mFontButton);
        QWidget::setTabOrder(mFontButton, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mMarginDoubleSpinBox);

        retranslateUi(QgsComposerLabelWidgetBase);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsComposerLabelWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerLabelWidgetBase)
    {
        QgsComposerLabelWidgetBase->setWindowTitle(QApplication::translate("QgsComposerLabelWidgetBase", "Label Options", 0, QApplication::UnicodeUTF8));
        mFontButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Font", 0, QApplication::UnicodeUTF8));
        mFontColorButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Font color...", 0, QApplication::UnicodeUTF8));
        mMarginTextLabel->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Margin (mm)", 0, QApplication::UnicodeUTF8));
        buttonGroup1->setTitle(QApplication::translate("QgsComposerLabelWidgetBase", "Horizontal Alignment:", 0, QApplication::UnicodeUTF8));
        mLeftRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Left", 0, QApplication::UnicodeUTF8));
        mCenterRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Center", 0, QApplication::UnicodeUTF8));
        mRightRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Right", 0, QApplication::UnicodeUTF8));
        buttonGroup2->setTitle(QApplication::translate("QgsComposerLabelWidgetBase", "Vertical Alignment:", 0, QApplication::UnicodeUTF8));
        mTopRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Top", 0, QApplication::UnicodeUTF8));
        mMiddleRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Middle", 0, QApplication::UnicodeUTF8));
        mBottomRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Bottom", 0, QApplication::UnicodeUTF8));
        mIdLabel->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Label id", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("QgsComposerLabelWidgetBase", "Label", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsComposerLabelWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerLabelWidgetBase: public Ui_QgsComposerLabelWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERLABELWIDGETBASE_H
