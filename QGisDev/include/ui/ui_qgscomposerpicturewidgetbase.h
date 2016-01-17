/********************************************************************************
** Form generated from reading ui file 'qgscomposerpicturewidgetbase.ui'
**
** Created: Tue Mar 13 10:24:06 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERPICTUREWIDGETBASE_H
#define UI_QGSCOMPOSERPICTUREWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerPictureWidgetBase
{
public:
    QGridLayout *gridLayout_3;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QGroupBox *mSearchDirectoriesGroupBox;
    QGridLayout *gridLayout;
    QComboBox *mSearchDirectoriesComboBox;
    QSpacerItem *spacerItem;
    QPushButton *mAddDirectoryButton;
    QPushButton *mRemoveDirectoryButton;
    QGroupBox *mPreviewGroupBox;
    QGridLayout *gridLayout1;
    QListWidget *mPreviewListWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_1;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mPictureLineEdit;
    QPushButton *mPictureBrowseButton;
    QLabel *textLabel3;
    QLineEdit *mWidthLineEdit;
    QLabel *textLabel4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mHeightLineEdit;
    QLabel *mRotationLabel;
    QDoubleSpinBox *mRotationSpinBox;
    QCheckBox *mRotationFromComposerMapCheckBox;
    QComboBox *mComposerMapComboBox;

    void setupUi(QWidget *QgsComposerPictureWidgetBase)
    {
        if (QgsComposerPictureWidgetBase->objectName().isEmpty())
            QgsComposerPictureWidgetBase->setObjectName(QString::fromUtf8("QgsComposerPictureWidgetBase"));
        QgsComposerPictureWidgetBase->resize(293, 540);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsComposerPictureWidgetBase->sizePolicy().hasHeightForWidth());
        QgsComposerPictureWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(QgsComposerPictureWidgetBase);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        toolBox = new QToolBox(QgsComposerPictureWidgetBase);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, -129, 266, 632));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mSearchDirectoriesGroupBox = new QGroupBox(page);
        mSearchDirectoriesGroupBox->setObjectName(QString::fromUtf8("mSearchDirectoriesGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSearchDirectoriesGroupBox->sizePolicy().hasHeightForWidth());
        mSearchDirectoriesGroupBox->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(mSearchDirectoriesGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSearchDirectoriesComboBox = new QComboBox(mSearchDirectoriesGroupBox);
        mSearchDirectoriesComboBox->setObjectName(QString::fromUtf8("mSearchDirectoriesComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSearchDirectoriesComboBox->sizePolicy().hasHeightForWidth());
        mSearchDirectoriesComboBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mSearchDirectoriesComboBox, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        mAddDirectoryButton = new QPushButton(mSearchDirectoriesGroupBox);
        mAddDirectoryButton->setObjectName(QString::fromUtf8("mAddDirectoryButton"));

        gridLayout->addWidget(mAddDirectoryButton, 1, 1, 1, 1);

        mRemoveDirectoryButton = new QPushButton(mSearchDirectoriesGroupBox);
        mRemoveDirectoryButton->setObjectName(QString::fromUtf8("mRemoveDirectoryButton"));

        gridLayout->addWidget(mRemoveDirectoryButton, 1, 2, 1, 1);


        gridLayout_2->addWidget(mSearchDirectoriesGroupBox, 0, 0, 1, 1);

        mPreviewGroupBox = new QGroupBox(page);
        mPreviewGroupBox->setObjectName(QString::fromUtf8("mPreviewGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mPreviewGroupBox->sizePolicy().hasHeightForWidth());
        mPreviewGroupBox->setSizePolicy(sizePolicy3);
        gridLayout1 = new QGridLayout(mPreviewGroupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setMargin(11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, -1, 0, -1);
        mPreviewListWidget = new QListWidget(mPreviewGroupBox);
        mPreviewListWidget->setObjectName(QString::fromUtf8("mPreviewListWidget"));
        mPreviewListWidget->setProperty("showDropIndicator", QVariant(false));
        mPreviewListWidget->setDragDropMode(QAbstractItemView::DragDrop);
        mPreviewListWidget->setMovement(QListView::Free);
        mPreviewListWidget->setFlow(QListView::LeftToRight);
        mPreviewListWidget->setProperty("isWrapping", QVariant(true));
        mPreviewListWidget->setGridSize(QSize(30, 30));
        mPreviewListWidget->setViewMode(QListView::IconMode);
        mPreviewListWidget->setWordWrap(true);

        gridLayout1->addWidget(mPreviewListWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(mPreviewGroupBox, 1, 0, 1, 1);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_1 = new QGridLayout(groupBox);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setMargin(11);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_1->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mPictureLineEdit = new QLineEdit(groupBox);
        mPictureLineEdit->setObjectName(QString::fromUtf8("mPictureLineEdit"));

        horizontalLayout_2->addWidget(mPictureLineEdit);

        mPictureBrowseButton = new QPushButton(groupBox);
        mPictureBrowseButton->setObjectName(QString::fromUtf8("mPictureBrowseButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mPictureBrowseButton->sizePolicy().hasHeightForWidth());
        mPictureBrowseButton->setSizePolicy(sizePolicy4);
        mPictureBrowseButton->setMaximumSize(QSize(150, 32767));

        horizontalLayout_2->addWidget(mPictureBrowseButton);


        gridLayout_1->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        textLabel3 = new QLabel(groupBox);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy5);
        textLabel3->setWordWrap(true);

        gridLayout_1->addWidget(textLabel3, 2, 0, 1, 1);

        mWidthLineEdit = new QLineEdit(groupBox);
        mWidthLineEdit->setObjectName(QString::fromUtf8("mWidthLineEdit"));

        gridLayout_1->addWidget(mWidthLineEdit, 3, 0, 1, 1);

        textLabel4 = new QLabel(groupBox);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        sizePolicy5.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
        textLabel4->setSizePolicy(sizePolicy5);
        textLabel4->setWordWrap(true);

        gridLayout_1->addWidget(textLabel4, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mHeightLineEdit = new QLineEdit(groupBox);
        mHeightLineEdit->setObjectName(QString::fromUtf8("mHeightLineEdit"));

        horizontalLayout->addWidget(mHeightLineEdit);


        gridLayout_1->addLayout(horizontalLayout, 5, 0, 1, 1);

        mRotationLabel = new QLabel(groupBox);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));
        sizePolicy5.setHeightForWidth(mRotationLabel->sizePolicy().hasHeightForWidth());
        mRotationLabel->setSizePolicy(sizePolicy5);
        mRotationLabel->setWordWrap(true);

        gridLayout_1->addWidget(mRotationLabel, 6, 0, 1, 1);

        mRotationSpinBox = new QDoubleSpinBox(groupBox);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setMaximum(360);

        gridLayout_1->addWidget(mRotationSpinBox, 7, 0, 1, 1);

        mRotationFromComposerMapCheckBox = new QCheckBox(groupBox);
        mRotationFromComposerMapCheckBox->setObjectName(QString::fromUtf8("mRotationFromComposerMapCheckBox"));

        gridLayout_1->addWidget(mRotationFromComposerMapCheckBox, 8, 0, 1, 1);

        mComposerMapComboBox = new QComboBox(groupBox);
        mComposerMapComboBox->setObjectName(QString::fromUtf8("mComposerMapComboBox"));

        gridLayout_1->addWidget(mComposerMapComboBox, 9, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("Picture options"));

        gridLayout_3->addWidget(toolBox, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(mPictureLineEdit);
        textLabel3->setBuddy(mWidthLineEdit);
        textLabel4->setBuddy(mHeightLineEdit);
        mRotationLabel->setBuddy(mRotationSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mSearchDirectoriesComboBox, mAddDirectoryButton);
        QWidget::setTabOrder(mAddDirectoryButton, mRemoveDirectoryButton);
        QWidget::setTabOrder(mRemoveDirectoryButton, mPreviewListWidget);
        QWidget::setTabOrder(mPreviewListWidget, mPictureLineEdit);
        QWidget::setTabOrder(mPictureLineEdit, mPictureBrowseButton);
        QWidget::setTabOrder(mPictureBrowseButton, mWidthLineEdit);
        QWidget::setTabOrder(mWidthLineEdit, mHeightLineEdit);
        QWidget::setTabOrder(mHeightLineEdit, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mRotationFromComposerMapCheckBox);
        QWidget::setTabOrder(mRotationFromComposerMapCheckBox, mComposerMapComboBox);

        retranslateUi(QgsComposerPictureWidgetBase);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsComposerPictureWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerPictureWidgetBase)
    {
        QgsComposerPictureWidgetBase->setWindowTitle(QApplication::translate("QgsComposerPictureWidgetBase", "Picture Options", 0, QApplication::UnicodeUTF8));
        mSearchDirectoriesGroupBox->setTitle(QApplication::translate("QgsComposerPictureWidgetBase", "Search directories", 0, QApplication::UnicodeUTF8));
        mAddDirectoryButton->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Add...", 0, QApplication::UnicodeUTF8));
        mRemoveDirectoryButton->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Remove", 0, QApplication::UnicodeUTF8));
        mPreviewGroupBox->setTitle(QApplication::translate("QgsComposerPictureWidgetBase", "Preview", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsComposerPictureWidgetBase", "Options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Load", 0, QApplication::UnicodeUTF8));
        mPictureBrowseButton->setText(QApplication::translate("QgsComposerPictureWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Width", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Height", 0, QApplication::UnicodeUTF8));
        mRotationLabel->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Rotation", 0, QApplication::UnicodeUTF8));
        mRotationFromComposerMapCheckBox->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Sync with map", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("QgsComposerPictureWidgetBase", "Picture options", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsComposerPictureWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerPictureWidgetBase: public Ui_QgsComposerPictureWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERPICTUREWIDGETBASE_H
