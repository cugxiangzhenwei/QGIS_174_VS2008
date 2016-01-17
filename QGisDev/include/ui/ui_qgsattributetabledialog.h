/********************************************************************************
** Form generated from reading ui file 'qgsattributetabledialog.ui'
**
** Created: Tue Mar 13 10:24:11 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTETABLEDIALOG_H
#define UI_QGSATTRIBUTETABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include "qgsattributetableview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeTableDialog
{
public:
    QGridLayout *gridLayout;
    QgsAttributeTableView *mView;
    QHBoxLayout *hboxLayout;
    QCheckBox *cbxShowSelectedOnly;
    QCheckBox *cbxSearchSelectedOnly;
    QCheckBox *cbxCaseSensitive;
    QSpacerItem *spacerItem;
    QPushButton *mAdvancedSearchButton;
    QPushButton *mHelpButton;
    QHBoxLayout *horizontalLayout;
    QToolButton *mRemoveSelectionButton;
    QToolButton *mSelectedToTopButton;
    QToolButton *mInvertSelectionButton;
    QToolButton *mCopySelectedRowsButton;
    QToolButton *mZoomMapToSelectedRowsButton;
    QToolButton *mToggleEditingButton;
    QToolButton *mDeleteSelectedButton;
    QToolButton *mAddAttribute;
    QToolButton *mRemoveAttribute;
    QToolButton *mAddFeature;
    QToolButton *mOpenFieldCalculator;
    QLabel *searchFor;
    QLineEdit *query;
    QLabel *searchIn;
    QComboBox *columnBox;
    QPushButton *searchButton;

    void setupUi(QDialog *QgsAttributeTableDialog)
    {
        if (QgsAttributeTableDialog->objectName().isEmpty())
            QgsAttributeTableDialog->setObjectName(QString::fromUtf8("QgsAttributeTableDialog"));
        QgsAttributeTableDialog->resize(763, 570);
        gridLayout = new QGridLayout(QgsAttributeTableDialog);
        gridLayout->setMargin(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mView = new QgsAttributeTableView(QgsAttributeTableDialog);
        mView->setObjectName(QString::fromUtf8("mView"));
        mView->setAlternatingRowColors(true);

        gridLayout->addWidget(mView, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(3, -1, 3, -1);
        cbxShowSelectedOnly = new QCheckBox(QgsAttributeTableDialog);
        cbxShowSelectedOnly->setObjectName(QString::fromUtf8("cbxShowSelectedOnly"));

        hboxLayout->addWidget(cbxShowSelectedOnly);

        cbxSearchSelectedOnly = new QCheckBox(QgsAttributeTableDialog);
        cbxSearchSelectedOnly->setObjectName(QString::fromUtf8("cbxSearchSelectedOnly"));

        hboxLayout->addWidget(cbxSearchSelectedOnly);

        cbxCaseSensitive = new QCheckBox(QgsAttributeTableDialog);
        cbxCaseSensitive->setObjectName(QString::fromUtf8("cbxCaseSensitive"));
        cbxCaseSensitive->setChecked(true);

        hboxLayout->addWidget(cbxCaseSensitive);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        mAdvancedSearchButton = new QPushButton(QgsAttributeTableDialog);
        mAdvancedSearchButton->setObjectName(QString::fromUtf8("mAdvancedSearchButton"));
        mAdvancedSearchButton->setIconSize(QSize(12, 12));

        hboxLayout->addWidget(mAdvancedSearchButton);

        mHelpButton = new QPushButton(QgsAttributeTableDialog);
        mHelpButton->setObjectName(QString::fromUtf8("mHelpButton"));
        mHelpButton->setMinimumSize(QSize(85, 0));

        hboxLayout->addWidget(mHelpButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, -1, 3, -1);
        mRemoveSelectionButton = new QToolButton(QgsAttributeTableDialog);
        mRemoveSelectionButton->setObjectName(QString::fromUtf8("mRemoveSelectionButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/themes/default/mActionUnselectAttributes.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveSelectionButton->setIcon(icon);
        mRemoveSelectionButton->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(mRemoveSelectionButton);

        mSelectedToTopButton = new QToolButton(QgsAttributeTableDialog);
        mSelectedToTopButton->setObjectName(QString::fromUtf8("mSelectedToTopButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../images/themes/default/mActionSelectedToTop.png"), QSize(), QIcon::Normal, QIcon::Off);
        mSelectedToTopButton->setIcon(icon1);
        mSelectedToTopButton->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(mSelectedToTopButton);

        mInvertSelectionButton = new QToolButton(QgsAttributeTableDialog);
        mInvertSelectionButton->setObjectName(QString::fromUtf8("mInvertSelectionButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../images/themes/default/mActionInvertSelection.png"), QSize(), QIcon::Normal, QIcon::Off);
        mInvertSelectionButton->setIcon(icon2);
        mInvertSelectionButton->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(mInvertSelectionButton);

        mCopySelectedRowsButton = new QToolButton(QgsAttributeTableDialog);
        mCopySelectedRowsButton->setObjectName(QString::fromUtf8("mCopySelectedRowsButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../images/themes/default/mActionEditCopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        mCopySelectedRowsButton->setIcon(icon3);
        mCopySelectedRowsButton->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(mCopySelectedRowsButton);

        mZoomMapToSelectedRowsButton = new QToolButton(QgsAttributeTableDialog);
        mZoomMapToSelectedRowsButton->setObjectName(QString::fromUtf8("mZoomMapToSelectedRowsButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../images/themes/default/mActionZoomToSelected.png"), QSize(), QIcon::Normal, QIcon::Off);
        mZoomMapToSelectedRowsButton->setIcon(icon4);
        mZoomMapToSelectedRowsButton->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(mZoomMapToSelectedRowsButton);

        mToggleEditingButton = new QToolButton(QgsAttributeTableDialog);
        mToggleEditingButton->setObjectName(QString::fromUtf8("mToggleEditingButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../images/themes/default/mActionToggleEditing.png"), QSize(), QIcon::Normal, QIcon::Off);
        mToggleEditingButton->setIcon(icon5);
        mToggleEditingButton->setIconSize(QSize(18, 18));
        mToggleEditingButton->setCheckable(false);

        horizontalLayout->addWidget(mToggleEditingButton);

        mDeleteSelectedButton = new QToolButton(QgsAttributeTableDialog);
        mDeleteSelectedButton->setObjectName(QString::fromUtf8("mDeleteSelectedButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../images/themes/default/mActionDeleteSelected.png"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteSelectedButton->setIcon(icon6);
        mDeleteSelectedButton->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(mDeleteSelectedButton);

        mAddAttribute = new QToolButton(QgsAttributeTableDialog);
        mAddAttribute->setObjectName(QString::fromUtf8("mAddAttribute"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../images/themes/default/mActionNewAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttribute->setIcon(icon7);
        mAddAttribute->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(mAddAttribute);

        mRemoveAttribute = new QToolButton(QgsAttributeTableDialog);
        mRemoveAttribute->setObjectName(QString::fromUtf8("mRemoveAttribute"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../images/themes/default/mActionDeleteAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAttribute->setIcon(icon8);
        mRemoveAttribute->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(mRemoveAttribute);

        mAddFeature = new QToolButton(QgsAttributeTableDialog);
        mAddFeature->setObjectName(QString::fromUtf8("mAddFeature"));
        mAddFeature->setEnabled(false);

        horizontalLayout->addWidget(mAddFeature);

        mOpenFieldCalculator = new QToolButton(QgsAttributeTableDialog);
        mOpenFieldCalculator->setObjectName(QString::fromUtf8("mOpenFieldCalculator"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../../images/themes/default/mActionCalculateField.png"), QSize(), QIcon::Normal, QIcon::Off);
        mOpenFieldCalculator->setIcon(icon9);
        mOpenFieldCalculator->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(mOpenFieldCalculator);

        searchFor = new QLabel(QgsAttributeTableDialog);
        searchFor->setObjectName(QString::fromUtf8("searchFor"));

        horizontalLayout->addWidget(searchFor);

        query = new QLineEdit(QgsAttributeTableDialog);
        query->setObjectName(QString::fromUtf8("query"));

        horizontalLayout->addWidget(query);

        searchIn = new QLabel(QgsAttributeTableDialog);
        searchIn->setObjectName(QString::fromUtf8("searchIn"));

        horizontalLayout->addWidget(searchIn);

        columnBox = new QComboBox(QgsAttributeTableDialog);
        columnBox->setObjectName(QString::fromUtf8("columnBox"));

        horizontalLayout->addWidget(columnBox);

        searchButton = new QPushButton(QgsAttributeTableDialog);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout->addWidget(searchButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(mView, columnBox);
        QWidget::setTabOrder(columnBox, query);
        QWidget::setTabOrder(query, searchButton);
        QWidget::setTabOrder(searchButton, cbxShowSelectedOnly);
        QWidget::setTabOrder(cbxShowSelectedOnly, cbxSearchSelectedOnly);
        QWidget::setTabOrder(cbxSearchSelectedOnly, mAdvancedSearchButton);
        QWidget::setTabOrder(mAdvancedSearchButton, mHelpButton);
        QWidget::setTabOrder(mHelpButton, mRemoveSelectionButton);
        QWidget::setTabOrder(mRemoveSelectionButton, mSelectedToTopButton);
        QWidget::setTabOrder(mSelectedToTopButton, mInvertSelectionButton);
        QWidget::setTabOrder(mInvertSelectionButton, mCopySelectedRowsButton);
        QWidget::setTabOrder(mCopySelectedRowsButton, mZoomMapToSelectedRowsButton);
        QWidget::setTabOrder(mZoomMapToSelectedRowsButton, mToggleEditingButton);
        QWidget::setTabOrder(mToggleEditingButton, mDeleteSelectedButton);
        QWidget::setTabOrder(mDeleteSelectedButton, mAddAttribute);
        QWidget::setTabOrder(mAddAttribute, mRemoveAttribute);
        QWidget::setTabOrder(mRemoveAttribute, mOpenFieldCalculator);

        retranslateUi(QgsAttributeTableDialog);

        QMetaObject::connectSlotsByName(QgsAttributeTableDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeTableDialog)
    {
        QgsAttributeTableDialog->setWindowTitle(QApplication::translate("QgsAttributeTableDialog", "Attribute Table", 0, QApplication::UnicodeUTF8));
        cbxShowSelectedOnly->setText(QApplication::translate("QgsAttributeTableDialog", "Show selected only", 0, QApplication::UnicodeUTF8));
        cbxSearchSelectedOnly->setText(QApplication::translate("QgsAttributeTableDialog", "Search selected only", 0, QApplication::UnicodeUTF8));
        cbxCaseSensitive->setText(QApplication::translate("QgsAttributeTableDialog", "Case sensitive", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAdvancedSearchButton->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Opens the search query builder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAdvancedSearchButton->setText(QApplication::translate("QgsAttributeTableDialog", "Advanced search", 0, QApplication::UnicodeUTF8));
        mHelpButton->setText(QApplication::translate("QgsAttributeTableDialog", "?", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRemoveSelectionButton->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Unselect all (Ctrl+U)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRemoveSelectionButton->setText(QString());
        mRemoveSelectionButton->setShortcut(QApplication::translate("QgsAttributeTableDialog", "Ctrl+U", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSelectedToTopButton->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Move selection to top (Ctrl+T)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSelectedToTopButton->setText(QString());
        mSelectedToTopButton->setShortcut(QApplication::translate("QgsAttributeTableDialog", "Ctrl+T", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mInvertSelectionButton->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Invert selection (Ctrl+S)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mInvertSelectionButton->setText(QString());
        mInvertSelectionButton->setShortcut(QApplication::translate("QgsAttributeTableDialog", "Ctrl+S", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mCopySelectedRowsButton->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Copy selected rows to clipboard (Ctrl+C)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mCopySelectedRowsButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        mCopySelectedRowsButton->setText(QString());
        mCopySelectedRowsButton->setShortcut(QApplication::translate("QgsAttributeTableDialog", "Ctrl+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mZoomMapToSelectedRowsButton->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Zoom map to the selected rows (Ctrl+J)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mZoomMapToSelectedRowsButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        mZoomMapToSelectedRowsButton->setText(QString());
        mZoomMapToSelectedRowsButton->setShortcut(QApplication::translate("QgsAttributeTableDialog", "Ctrl+J", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mToggleEditingButton->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Toggle editing mode (Ctrl+E)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mToggleEditingButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        mToggleEditingButton->setText(QString());
        mToggleEditingButton->setShortcut(QApplication::translate("QgsAttributeTableDialog", "Ctrl+E", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mDeleteSelectedButton->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Delete selected features (Ctrl+D)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mDeleteSelectedButton->setText(QApplication::translate("QgsAttributeTableDialog", "...", 0, QApplication::UnicodeUTF8));
        mDeleteSelectedButton->setShortcut(QApplication::translate("QgsAttributeTableDialog", "Ctrl+D", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddAttribute->setToolTip(QApplication::translate("QgsAttributeTableDialog", "New column (Ctrl+W)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddAttribute->setText(QString());
        mAddAttribute->setShortcut(QApplication::translate("QgsAttributeTableDialog", "Ctrl+W", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRemoveAttribute->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Delete column (Ctrl+L)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRemoveAttribute->setText(QString());
        mRemoveAttribute->setShortcut(QApplication::translate("QgsAttributeTableDialog", "Ctrl+L", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddFeature->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Add feature", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddFeature->setText(QApplication::translate("QgsAttributeTableDialog", "+", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mOpenFieldCalculator->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Open field calculator (Ctrl+I)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mOpenFieldCalculator->setText(QString());
        mOpenFieldCalculator->setShortcut(QApplication::translate("QgsAttributeTableDialog", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        searchFor->setText(QApplication::translate("QgsAttributeTableDialog", "Look for", 0, QApplication::UnicodeUTF8));
        searchIn->setText(QApplication::translate("QgsAttributeTableDialog", "in", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        searchButton->setToolTip(QApplication::translate("QgsAttributeTableDialog", "Looks for the given value in the given attribute column", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        searchButton->setText(QApplication::translate("QgsAttributeTableDialog", "&Search", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsAttributeTableDialog);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeTableDialog: public Ui_QgsAttributeTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTETABLEDIALOG_H
