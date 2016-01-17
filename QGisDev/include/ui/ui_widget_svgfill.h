/********************************************************************************
** Form generated from reading ui file 'widget_svgfill.ui'
**
** Created: Tue Mar 13 10:23:37 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_SVGFILL_H
#define UI_WIDGET_SVGFILL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetSVGFill
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mTextureWidthLabel;
    QDoubleSpinBox *mTextureWidthSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mRotationLabel;
    QDoubleSpinBox *mRotationSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mOutlineLabel;
    QPushButton *mChangeOutlinePushButton;
    QListView *mSvgListView;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mSVGLineEdit;
    QToolButton *mBrowseToolButton;

    void setupUi(QWidget *WidgetSVGFill)
    {
        if (WidgetSVGFill->objectName().isEmpty())
            WidgetSVGFill->setObjectName(QString::fromUtf8("WidgetSVGFill"));
        WidgetSVGFill->resize(185, 221);
        gridLayout = new QGridLayout(WidgetSVGFill);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mTextureWidthLabel = new QLabel(WidgetSVGFill);
        mTextureWidthLabel->setObjectName(QString::fromUtf8("mTextureWidthLabel"));

        horizontalLayout_2->addWidget(mTextureWidthLabel);

        mTextureWidthSpinBox = new QDoubleSpinBox(WidgetSVGFill);
        mTextureWidthSpinBox->setObjectName(QString::fromUtf8("mTextureWidthSpinBox"));
        mTextureWidthSpinBox->setDecimals(5);
        mTextureWidthSpinBox->setMaximum(1e+08);

        horizontalLayout_2->addWidget(mTextureWidthSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mRotationLabel = new QLabel(WidgetSVGFill);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        horizontalLayout_3->addWidget(mRotationLabel);

        mRotationSpinBox = new QDoubleSpinBox(WidgetSVGFill);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setMaximum(360);

        horizontalLayout_3->addWidget(mRotationSpinBox);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mOutlineLabel = new QLabel(WidgetSVGFill);
        mOutlineLabel->setObjectName(QString::fromUtf8("mOutlineLabel"));

        horizontalLayout_4->addWidget(mOutlineLabel);

        mChangeOutlinePushButton = new QPushButton(WidgetSVGFill);
        mChangeOutlinePushButton->setObjectName(QString::fromUtf8("mChangeOutlinePushButton"));

        horizontalLayout_4->addWidget(mChangeOutlinePushButton);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        mSvgListView = new QListView(WidgetSVGFill);
        mSvgListView->setObjectName(QString::fromUtf8("mSvgListView"));
        mSvgListView->setFlow(QListView::LeftToRight);
        mSvgListView->setLayoutMode(QListView::Batched);
        mSvgListView->setViewMode(QListView::IconMode);
        mSvgListView->setUniformItemSizes(true);

        gridLayout->addWidget(mSvgListView, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mSVGLineEdit = new QLineEdit(WidgetSVGFill);
        mSVGLineEdit->setObjectName(QString::fromUtf8("mSVGLineEdit"));

        horizontalLayout->addWidget(mSVGLineEdit);

        mBrowseToolButton = new QToolButton(WidgetSVGFill);
        mBrowseToolButton->setObjectName(QString::fromUtf8("mBrowseToolButton"));

        horizontalLayout->addWidget(mBrowseToolButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(WidgetSVGFill);

        QMetaObject::connectSlotsByName(WidgetSVGFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetSVGFill)
    {
        WidgetSVGFill->setWindowTitle(QApplication::translate("WidgetSVGFill", "Form", 0, QApplication::UnicodeUTF8));
        mTextureWidthLabel->setText(QApplication::translate("WidgetSVGFill", "Texture width", 0, QApplication::UnicodeUTF8));
        mRotationLabel->setText(QApplication::translate("WidgetSVGFill", "Rotation", 0, QApplication::UnicodeUTF8));
        mOutlineLabel->setText(QApplication::translate("WidgetSVGFill", "Outline", 0, QApplication::UnicodeUTF8));
        mChangeOutlinePushButton->setText(QApplication::translate("WidgetSVGFill", "Change", 0, QApplication::UnicodeUTF8));
        mBrowseToolButton->setText(QApplication::translate("WidgetSVGFill", "...", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WidgetSVGFill);
    } // retranslateUi

};

namespace Ui {
    class WidgetSVGFill: public Ui_WidgetSVGFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGFILL_H
