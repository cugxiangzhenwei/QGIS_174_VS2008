/********************************************************************************
** Form generated from reading ui file 'qgsstylev2exportimportdialogbase.ui'
**
** Created: Tue Mar 13 10:23:45 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSTYLEV2EXPORTIMPORTDIALOGBASE_H
#define UI_QGSSTYLEV2EXPORTIMPORTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsStyleV2ExportImportDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *listItems;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStyleV2ExportImportDialogBase)
    {
        if (QgsStyleV2ExportImportDialogBase->objectName().isEmpty())
            QgsStyleV2ExportImportDialogBase->setObjectName(QString::fromUtf8("QgsStyleV2ExportImportDialogBase"));
        QgsStyleV2ExportImportDialogBase->resize(400, 300);
        verticalLayout = new QVBoxLayout(QgsStyleV2ExportImportDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsStyleV2ExportImportDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        listItems = new QListView(QgsStyleV2ExportImportDialogBase);
        listItems->setObjectName(QString::fromUtf8("listItems"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(listItems->sizePolicy().hasHeightForWidth());
        listItems->setSizePolicy(sizePolicy);
        listItems->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listItems->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listItems->setIconSize(QSize(48, 48));
        listItems->setMovement(QListView::Static);
        listItems->setResizeMode(QListView::Adjust);
        listItems->setSpacing(5);
        listItems->setViewMode(QListView::IconMode);

        verticalLayout->addWidget(listItems);

        buttonBox = new QDialogButtonBox(QgsStyleV2ExportImportDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsStyleV2ExportImportDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsStyleV2ExportImportDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStyleV2ExportImportDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsStyleV2ExportImportDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsStyleV2ExportImportDialogBase)
    {
        QgsStyleV2ExportImportDialogBase->setWindowTitle(QApplication::translate("QgsStyleV2ExportImportDialogBase", "Styles import/export", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsStyleV2ExportImportDialogBase", "Select symbols to export", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsStyleV2ExportImportDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsStyleV2ExportImportDialogBase: public Ui_QgsStyleV2ExportImportDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEV2EXPORTIMPORTDIALOGBASE_H
