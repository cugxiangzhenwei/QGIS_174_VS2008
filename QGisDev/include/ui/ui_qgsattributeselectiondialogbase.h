/********************************************************************************
** Form generated from reading ui file 'qgsattributeselectiondialogbase.ui'
**
** Created: Tue Mar 13 10:24:12 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTESELECTIONDIALOGBASE_H
#define UI_QGSATTRIBUTESELECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeSelectionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *mSelectAllButton;
    QPushButton *mClearButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *mSortingGroupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *mUpPushButton;
    QPushButton *mDownPushButton;
    QPushButton *mAddPushButton;
    QPushButton *mRemovePushButton;
    QComboBox *mSortColumnComboBox;
    QComboBox *mOrderComboBox;
    QTreeWidget *mSortColumnTreeWidget;
    QDialogButtonBox *buttonBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QGridLayout *mAttributeGridLayout;
    QLabel *mAttributeLabel;
    QLabel *mAliasLabel;

    void setupUi(QDialog *QgsAttributeSelectionDialogBase)
    {
        if (QgsAttributeSelectionDialogBase->objectName().isEmpty())
            QgsAttributeSelectionDialogBase->setObjectName(QString::fromUtf8("QgsAttributeSelectionDialogBase"));
        QgsAttributeSelectionDialogBase->resize(322, 373);
        gridLayout_2 = new QGridLayout(QgsAttributeSelectionDialogBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mSelectAllButton = new QPushButton(QgsAttributeSelectionDialogBase);
        mSelectAllButton->setObjectName(QString::fromUtf8("mSelectAllButton"));

        gridLayout_2->addWidget(mSelectAllButton, 1, 0, 1, 1);

        mClearButton = new QPushButton(QgsAttributeSelectionDialogBase);
        mClearButton->setObjectName(QString::fromUtf8("mClearButton"));

        gridLayout_2->addWidget(mClearButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        mSortingGroupBox = new QGroupBox(QgsAttributeSelectionDialogBase);
        mSortingGroupBox->setObjectName(QString::fromUtf8("mSortingGroupBox"));
        gridLayout = new QGridLayout(mSortingGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mUpPushButton = new QPushButton(mSortingGroupBox);
        mUpPushButton->setObjectName(QString::fromUtf8("mUpPushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        mUpPushButton->setIcon(icon);

        horizontalLayout->addWidget(mUpPushButton);

        mDownPushButton = new QPushButton(mSortingGroupBox);
        mDownPushButton->setObjectName(QString::fromUtf8("mDownPushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        mDownPushButton->setIcon(icon1);

        horizontalLayout->addWidget(mDownPushButton);

        mAddPushButton = new QPushButton(mSortingGroupBox);
        mAddPushButton->setObjectName(QString::fromUtf8("mAddPushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddPushButton->setIcon(icon2);

        horizontalLayout->addWidget(mAddPushButton);

        mRemovePushButton = new QPushButton(mSortingGroupBox);
        mRemovePushButton->setObjectName(QString::fromUtf8("mRemovePushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemovePushButton->setIcon(icon3);

        horizontalLayout->addWidget(mRemovePushButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        mSortColumnComboBox = new QComboBox(mSortingGroupBox);
        mSortColumnComboBox->setObjectName(QString::fromUtf8("mSortColumnComboBox"));

        gridLayout->addWidget(mSortColumnComboBox, 1, 0, 1, 1);

        mOrderComboBox = new QComboBox(mSortingGroupBox);
        mOrderComboBox->setObjectName(QString::fromUtf8("mOrderComboBox"));

        gridLayout->addWidget(mOrderComboBox, 1, 1, 1, 1);

        mSortColumnTreeWidget = new QTreeWidget(mSortingGroupBox);
        mSortColumnTreeWidget->setObjectName(QString::fromUtf8("mSortColumnTreeWidget"));

        gridLayout->addWidget(mSortColumnTreeWidget, 2, 0, 1, 2);


        gridLayout_2->addWidget(mSortingGroupBox, 2, 0, 1, 3);

        buttonBox = new QDialogButtonBox(QgsAttributeSelectionDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 3);

        scrollArea = new QScrollArea(QgsAttributeSelectionDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 300, 90));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mAttributeGridLayout = new QGridLayout();
        mAttributeGridLayout->setObjectName(QString::fromUtf8("mAttributeGridLayout"));
        mAttributeGridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        mAttributeLabel = new QLabel(scrollAreaWidgetContents);
        mAttributeLabel->setObjectName(QString::fromUtf8("mAttributeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAttributeLabel->sizePolicy().hasHeightForWidth());
        mAttributeLabel->setSizePolicy(sizePolicy);

        mAttributeGridLayout->addWidget(mAttributeLabel, 0, 0, 1, 1);

        mAliasLabel = new QLabel(scrollAreaWidgetContents);
        mAliasLabel->setObjectName(QString::fromUtf8("mAliasLabel"));
        sizePolicy.setHeightForWidth(mAliasLabel->sizePolicy().hasHeightForWidth());
        mAliasLabel->setSizePolicy(sizePolicy);
        mAliasLabel->setTextFormat(Qt::AutoText);

        mAttributeGridLayout->addWidget(mAliasLabel, 0, 1, 1, 1);


        gridLayout_3->addLayout(mAttributeGridLayout, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 3);


        retranslateUi(QgsAttributeSelectionDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAttributeSelectionDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAttributeSelectionDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAttributeSelectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeSelectionDialogBase)
    {
        QgsAttributeSelectionDialogBase->setWindowTitle(QApplication::translate("QgsAttributeSelectionDialogBase", "Select attributes", 0, QApplication::UnicodeUTF8));
        mSelectAllButton->setText(QApplication::translate("QgsAttributeSelectionDialogBase", "Select all", 0, QApplication::UnicodeUTF8));
        mClearButton->setText(QApplication::translate("QgsAttributeSelectionDialogBase", "Clear", 0, QApplication::UnicodeUTF8));
        mSortingGroupBox->setTitle(QApplication::translate("QgsAttributeSelectionDialogBase", "Sorting", 0, QApplication::UnicodeUTF8));
        mUpPushButton->setText(QString());
        mDownPushButton->setText(QString());
        mAddPushButton->setText(QString());
        mRemovePushButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = mSortColumnTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsAttributeSelectionDialogBase", "Ascending", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsAttributeSelectionDialogBase", "Column", 0, QApplication::UnicodeUTF8));
        mAttributeLabel->setText(QApplication::translate("QgsAttributeSelectionDialogBase", "<b>Attribute</b>", 0, QApplication::UnicodeUTF8));
        mAliasLabel->setText(QApplication::translate("QgsAttributeSelectionDialogBase", "<b>Alias</b>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsAttributeSelectionDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeSelectionDialogBase: public Ui_QgsAttributeSelectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTESELECTIONDIALOGBASE_H
