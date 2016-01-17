/********************************************************************************
** Form generated from reading ui file 'qgstextannotationdialogbase.ui'
**
** Created: Tue Mar 13 10:23:44 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSTEXTANNOTATIONDIALOGBASE_H
#define UI_QGSTEXTANNOTATIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTextAnnotationDialogBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *mFontComboBox;
    QSpacerItem *horizontalSpacer;
    QSpinBox *mFontSizeSpinBox;
    QPushButton *mBoldPushButton;
    QPushButton *mItalicsPushButton;
    QgsColorButton *mFontColorButton;
    QTextEdit *mTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mBackgroundColorLabel;
    QgsColorButton *mBackgroundColorButton;
    QStackedWidget *mStackedWidget;
    QWidget *page;
    QWidget *page_2;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsTextAnnotationDialogBase)
    {
        if (QgsTextAnnotationDialogBase->objectName().isEmpty())
            QgsTextAnnotationDialogBase->setObjectName(QString::fromUtf8("QgsTextAnnotationDialogBase"));
        QgsTextAnnotationDialogBase->resize(517, 364);
        gridLayout = new QGridLayout(QgsTextAnnotationDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFontComboBox = new QFontComboBox(QgsTextAnnotationDialogBase);
        mFontComboBox->setObjectName(QString::fromUtf8("mFontComboBox"));

        horizontalLayout->addWidget(mFontComboBox);

        horizontalSpacer = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mFontSizeSpinBox = new QSpinBox(QgsTextAnnotationDialogBase);
        mFontSizeSpinBox->setObjectName(QString::fromUtf8("mFontSizeSpinBox"));

        horizontalLayout->addWidget(mFontSizeSpinBox);

        mBoldPushButton = new QPushButton(QgsTextAnnotationDialogBase);
        mBoldPushButton->setObjectName(QString::fromUtf8("mBoldPushButton"));
        mBoldPushButton->setCheckable(true);

        horizontalLayout->addWidget(mBoldPushButton);

        mItalicsPushButton = new QPushButton(QgsTextAnnotationDialogBase);
        mItalicsPushButton->setObjectName(QString::fromUtf8("mItalicsPushButton"));
        mItalicsPushButton->setCheckable(true);

        horizontalLayout->addWidget(mItalicsPushButton);

        mFontColorButton = new QgsColorButton(QgsTextAnnotationDialogBase);
        mFontColorButton->setObjectName(QString::fromUtf8("mFontColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFontColorButton->sizePolicy().hasHeightForWidth());
        mFontColorButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mFontColorButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mTextEdit = new QTextEdit(QgsTextAnnotationDialogBase);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));

        gridLayout->addWidget(mTextEdit, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mBackgroundColorLabel = new QLabel(QgsTextAnnotationDialogBase);
        mBackgroundColorLabel->setObjectName(QString::fromUtf8("mBackgroundColorLabel"));

        horizontalLayout_2->addWidget(mBackgroundColorLabel);

        mBackgroundColorButton = new QgsColorButton(QgsTextAnnotationDialogBase);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mBackgroundColorButton->sizePolicy().hasHeightForWidth());
        mBackgroundColorButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(mBackgroundColorButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsTextAnnotationDialogBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mStackedWidget, 3, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsTextAnnotationDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mBackgroundColorLabel->setBuddy(mBackgroundColorButton);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mFontComboBox, mFontSizeSpinBox);
        QWidget::setTabOrder(mFontSizeSpinBox, mBoldPushButton);
        QWidget::setTabOrder(mBoldPushButton, mItalicsPushButton);
        QWidget::setTabOrder(mItalicsPushButton, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mTextEdit);
        QWidget::setTabOrder(mTextEdit, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mButtonBox);

        retranslateUi(QgsTextAnnotationDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsTextAnnotationDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsTextAnnotationDialogBase, SLOT(reject()));

        mStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsTextAnnotationDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsTextAnnotationDialogBase)
    {
        QgsTextAnnotationDialogBase->setWindowTitle(QApplication::translate("QgsTextAnnotationDialogBase", "Annotation text", 0, QApplication::UnicodeUTF8));
        mBoldPushButton->setText(QApplication::translate("QgsTextAnnotationDialogBase", "B", 0, QApplication::UnicodeUTF8));
        mItalicsPushButton->setText(QApplication::translate("QgsTextAnnotationDialogBase", "I", 0, QApplication::UnicodeUTF8));
        mFontColorButton->setText(QString());
        mBackgroundColorLabel->setText(QApplication::translate("QgsTextAnnotationDialogBase", "Background color", 0, QApplication::UnicodeUTF8));
        mBackgroundColorButton->setText(QString());
        Q_UNUSED(QgsTextAnnotationDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsTextAnnotationDialogBase: public Ui_QgsTextAnnotationDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTEXTANNOTATIONDIALOGBASE_H
