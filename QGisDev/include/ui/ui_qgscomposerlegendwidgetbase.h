/********************************************************************************
** Form generated from reading ui file 'qgscomposerlegendwidgetbase.ui'
**
** Created: Tue Mar 13 10:24:08 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERLEGENDWIDGETBASE_H
#define UI_QGSCOMPOSERLEGENDWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerLegendWidgetBase
{
public:
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout;
    QLabel *mTitleLabel;
    QLineEdit *mTitleLineEdit;
    QPushButton *mTitleFontButton;
    QPushButton *mGroupFontButton;
    QPushButton *mLayerFontButton;
    QPushButton *mItemFontButton;
    QDoubleSpinBox *mSymbolWidthSpinBox;
    QDoubleSpinBox *mSymbolHeightSpinBox;
    QDoubleSpinBox *mLayerSpaceSpinBox;
    QDoubleSpinBox *mSymbolSpaceSpinBox;
    QDoubleSpinBox *mIconLabelSpaceSpinBox;
    QDoubleSpinBox *mBoxSpaceSpinBox;
    QSpacerItem *verticalSpacer;
    QComboBox *mMapComboBox;
    QLabel *mMapLabel;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QCheckBox *mCheckBoxAutoUpdate;
    QTreeView *mItemTreeView;
    QToolButton *mMoveDownToolButton;
    QToolButton *mMoveUpToolButton;
    QToolButton *mAddToolButton;
    QToolButton *mRemoveToolButton;
    QToolButton *mEditPushButton;
    QToolButton *mUpdatePushButton;
    QToolButton *mUpdateAllPushButton;
    QToolButton *mAddGroupButton;

    void setupUi(QWidget *QgsComposerLegendWidgetBase)
    {
        if (QgsComposerLegendWidgetBase->objectName().isEmpty())
            QgsComposerLegendWidgetBase->setObjectName(QString::fromUtf8("QgsComposerLegendWidgetBase"));
        QgsComposerLegendWidgetBase->resize(371, 476);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsComposerLegendWidgetBase->sizePolicy().hasHeightForWidth());
        QgsComposerLegendWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(QgsComposerLegendWidgetBase);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea = new QScrollArea(QgsComposerLegendWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 369, 474));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        toolBox = new QToolBox(scrollAreaWidgetContents);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 338, 404));
        gridLayout = new QGridLayout(page);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mTitleLabel = new QLabel(page);
        mTitleLabel->setObjectName(QString::fromUtf8("mTitleLabel"));

        gridLayout->addWidget(mTitleLabel, 0, 0, 1, 1);

        mTitleLineEdit = new QLineEdit(page);
        mTitleLineEdit->setObjectName(QString::fromUtf8("mTitleLineEdit"));

        gridLayout->addWidget(mTitleLineEdit, 1, 0, 1, 1);

        mTitleFontButton = new QPushButton(page);
        mTitleFontButton->setObjectName(QString::fromUtf8("mTitleFontButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mTitleFontButton->sizePolicy().hasHeightForWidth());
        mTitleFontButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mTitleFontButton, 2, 0, 1, 1);

        mGroupFontButton = new QPushButton(page);
        mGroupFontButton->setObjectName(QString::fromUtf8("mGroupFontButton"));

        gridLayout->addWidget(mGroupFontButton, 3, 0, 1, 1);

        mLayerFontButton = new QPushButton(page);
        mLayerFontButton->setObjectName(QString::fromUtf8("mLayerFontButton"));

        gridLayout->addWidget(mLayerFontButton, 4, 0, 1, 1);

        mItemFontButton = new QPushButton(page);
        mItemFontButton->setObjectName(QString::fromUtf8("mItemFontButton"));

        gridLayout->addWidget(mItemFontButton, 5, 0, 1, 1);

        mSymbolWidthSpinBox = new QDoubleSpinBox(page);
        mSymbolWidthSpinBox->setObjectName(QString::fromUtf8("mSymbolWidthSpinBox"));

        gridLayout->addWidget(mSymbolWidthSpinBox, 6, 0, 1, 1);

        mSymbolHeightSpinBox = new QDoubleSpinBox(page);
        mSymbolHeightSpinBox->setObjectName(QString::fromUtf8("mSymbolHeightSpinBox"));

        gridLayout->addWidget(mSymbolHeightSpinBox, 7, 0, 1, 1);

        mLayerSpaceSpinBox = new QDoubleSpinBox(page);
        mLayerSpaceSpinBox->setObjectName(QString::fromUtf8("mLayerSpaceSpinBox"));

        gridLayout->addWidget(mLayerSpaceSpinBox, 8, 0, 1, 1);

        mSymbolSpaceSpinBox = new QDoubleSpinBox(page);
        mSymbolSpaceSpinBox->setObjectName(QString::fromUtf8("mSymbolSpaceSpinBox"));

        gridLayout->addWidget(mSymbolSpaceSpinBox, 9, 0, 1, 1);

        mIconLabelSpaceSpinBox = new QDoubleSpinBox(page);
        mIconLabelSpaceSpinBox->setObjectName(QString::fromUtf8("mIconLabelSpaceSpinBox"));

        gridLayout->addWidget(mIconLabelSpaceSpinBox, 10, 0, 1, 1);

        mBoxSpaceSpinBox = new QDoubleSpinBox(page);
        mBoxSpaceSpinBox->setObjectName(QString::fromUtf8("mBoxSpaceSpinBox"));

        gridLayout->addWidget(mBoxSpaceSpinBox, 11, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 14, 0, 1, 1);

        mMapComboBox = new QComboBox(page);
        mMapComboBox->setObjectName(QString::fromUtf8("mMapComboBox"));

        gridLayout->addWidget(mMapComboBox, 13, 0, 1, 1);

        mMapLabel = new QLabel(page);
        mMapLabel->setObjectName(QString::fromUtf8("mMapLabel"));

        gridLayout->addWidget(mMapLabel, 12, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("General"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 351, 394));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mCheckBoxAutoUpdate = new QCheckBox(page_2);
        mCheckBoxAutoUpdate->setObjectName(QString::fromUtf8("mCheckBoxAutoUpdate"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mCheckBoxAutoUpdate->sizePolicy().hasHeightForWidth());
        mCheckBoxAutoUpdate->setSizePolicy(sizePolicy2);
        mCheckBoxAutoUpdate->setChecked(true);

        gridLayout_2->addWidget(mCheckBoxAutoUpdate, 0, 0, 1, 4);

        mItemTreeView = new QTreeView(page_2);
        mItemTreeView->setObjectName(QString::fromUtf8("mItemTreeView"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mItemTreeView->sizePolicy().hasHeightForWidth());
        mItemTreeView->setSizePolicy(sizePolicy3);
        mItemTreeView->setWordWrap(false);
        mItemTreeView->setHeaderHidden(true);
        mItemTreeView->header()->setVisible(false);

        gridLayout_2->addWidget(mItemTreeView, 1, 0, 1, 8);

        mMoveDownToolButton = new QToolButton(page_2);
        mMoveDownToolButton->setObjectName(QString::fromUtf8("mMoveDownToolButton"));

        gridLayout_2->addWidget(mMoveDownToolButton, 2, 0, 1, 1);

        mMoveUpToolButton = new QToolButton(page_2);
        mMoveUpToolButton->setObjectName(QString::fromUtf8("mMoveUpToolButton"));

        gridLayout_2->addWidget(mMoveUpToolButton, 2, 1, 1, 1);

        mAddToolButton = new QToolButton(page_2);
        mAddToolButton->setObjectName(QString::fromUtf8("mAddToolButton"));

        gridLayout_2->addWidget(mAddToolButton, 2, 2, 1, 1);

        mRemoveToolButton = new QToolButton(page_2);
        mRemoveToolButton->setObjectName(QString::fromUtf8("mRemoveToolButton"));

        gridLayout_2->addWidget(mRemoveToolButton, 2, 3, 1, 1);

        mEditPushButton = new QToolButton(page_2);
        mEditPushButton->setObjectName(QString::fromUtf8("mEditPushButton"));

        gridLayout_2->addWidget(mEditPushButton, 2, 4, 1, 1);

        mUpdatePushButton = new QToolButton(page_2);
        mUpdatePushButton->setObjectName(QString::fromUtf8("mUpdatePushButton"));

        gridLayout_2->addWidget(mUpdatePushButton, 2, 5, 1, 1);

        mUpdateAllPushButton = new QToolButton(page_2);
        mUpdateAllPushButton->setObjectName(QString::fromUtf8("mUpdateAllPushButton"));

        gridLayout_2->addWidget(mUpdateAllPushButton, 2, 6, 1, 1);

        mAddGroupButton = new QToolButton(page_2);
        mAddGroupButton->setObjectName(QString::fromUtf8("mAddGroupButton"));

        gridLayout_2->addWidget(mAddGroupButton, 2, 7, 1, 1);

        toolBox->addItem(page_2, QString::fromUtf8("Legend items"));

        gridLayout_3->addWidget(toolBox, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mTitleLabel->setBuddy(mTitleLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, mTitleLineEdit);
        QWidget::setTabOrder(mTitleLineEdit, mTitleFontButton);
        QWidget::setTabOrder(mTitleFontButton, mGroupFontButton);
        QWidget::setTabOrder(mGroupFontButton, mLayerFontButton);
        QWidget::setTabOrder(mLayerFontButton, mItemFontButton);
        QWidget::setTabOrder(mItemFontButton, mSymbolWidthSpinBox);
        QWidget::setTabOrder(mSymbolWidthSpinBox, mSymbolHeightSpinBox);
        QWidget::setTabOrder(mSymbolHeightSpinBox, mLayerSpaceSpinBox);
        QWidget::setTabOrder(mLayerSpaceSpinBox, mSymbolSpaceSpinBox);
        QWidget::setTabOrder(mSymbolSpaceSpinBox, mIconLabelSpaceSpinBox);
        QWidget::setTabOrder(mIconLabelSpaceSpinBox, mBoxSpaceSpinBox);
        QWidget::setTabOrder(mBoxSpaceSpinBox, mItemTreeView);
        QWidget::setTabOrder(mItemTreeView, mMoveDownToolButton);
        QWidget::setTabOrder(mMoveDownToolButton, mMoveUpToolButton);
        QWidget::setTabOrder(mMoveUpToolButton, mRemoveToolButton);
        QWidget::setTabOrder(mRemoveToolButton, mEditPushButton);
        QWidget::setTabOrder(mEditPushButton, mUpdatePushButton);
        QWidget::setTabOrder(mUpdatePushButton, mUpdateAllPushButton);
        QWidget::setTabOrder(mUpdateAllPushButton, mAddGroupButton);

        retranslateUi(QgsComposerLegendWidgetBase);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsComposerLegendWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerLegendWidgetBase)
    {
        QgsComposerLegendWidgetBase->setWindowTitle(QApplication::translate("QgsComposerLegendWidgetBase", "Barscale Options", 0, QApplication::UnicodeUTF8));
        mTitleLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "&Title", 0, QApplication::UnicodeUTF8));
        mTitleFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Title Font...", 0, QApplication::UnicodeUTF8));
        mGroupFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Group Font...", 0, QApplication::UnicodeUTF8));
        mLayerFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Layer Font...", 0, QApplication::UnicodeUTF8));
        mItemFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Item Font...", 0, QApplication::UnicodeUTF8));
        mSymbolWidthSpinBox->setPrefix(QApplication::translate("QgsComposerLegendWidgetBase", "Symbol width ", 0, QApplication::UnicodeUTF8));
        mSymbolWidthSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mSymbolHeightSpinBox->setPrefix(QApplication::translate("QgsComposerLegendWidgetBase", "Symbol height ", 0, QApplication::UnicodeUTF8));
        mSymbolHeightSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mLayerSpaceSpinBox->setPrefix(QApplication::translate("QgsComposerLegendWidgetBase", "Layer space ", 0, QApplication::UnicodeUTF8));
        mLayerSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mSymbolSpaceSpinBox->setPrefix(QApplication::translate("QgsComposerLegendWidgetBase", "Symbol space ", 0, QApplication::UnicodeUTF8));
        mSymbolSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mIconLabelSpaceSpinBox->setPrefix(QApplication::translate("QgsComposerLegendWidgetBase", "Icon label space ", 0, QApplication::UnicodeUTF8));
        mIconLabelSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mBoxSpaceSpinBox->setPrefix(QApplication::translate("QgsComposerLegendWidgetBase", "Box space ", 0, QApplication::UnicodeUTF8));
        mBoxSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mMapLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Map", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("QgsComposerLegendWidgetBase", "General", 0, QApplication::UnicodeUTF8));
        mCheckBoxAutoUpdate->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Auto Update", 0, QApplication::UnicodeUTF8));
        mMoveDownToolButton->setText(QString());
        mMoveUpToolButton->setText(QString());
        mAddToolButton->setText(QString());
        mRemoveToolButton->setText(QString());
        mEditPushButton->setText(QString());
        mUpdatePushButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Update", 0, QApplication::UnicodeUTF8));
        mUpdateAllPushButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "All", 0, QApplication::UnicodeUTF8));
        mAddGroupButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Add group", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("QgsComposerLegendWidgetBase", "Legend items", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsComposerLegendWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerLegendWidgetBase: public Ui_QgsComposerLegendWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERLEGENDWIDGETBASE_H
