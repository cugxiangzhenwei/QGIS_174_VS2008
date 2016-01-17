/********************************************************************************
** Form generated from reading ui file 'qgsogrsublayersdialogbase.ui'
**
** Created: Tue Mar 13 10:23:53 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSOGRSUBLAYERSDIALOGBASE_H
#define UI_QGSOGRSUBLAYERSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsOGRSublayersDialogBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTreeWidget *layersTable;

    void setupUi(QDialog *QgsOGRSublayersDialogBase)
    {
        if (QgsOGRSublayersDialogBase->objectName().isEmpty())
            QgsOGRSublayersDialogBase->setObjectName(QString::fromUtf8("QgsOGRSublayersDialogBase"));
        QgsOGRSublayersDialogBase->resize(584, 236);
        gridLayout = new QGridLayout(QgsOGRSublayersDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsOGRSublayersDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 1);

        layersTable = new QTreeWidget(QgsOGRSublayersDialogBase);
        layersTable->setObjectName(QString::fromUtf8("layersTable"));
        layersTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        layersTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(layersTable, 0, 0, 1, 1);


        retranslateUi(QgsOGRSublayersDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsOGRSublayersDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOGRSublayersDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsOGRSublayersDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOGRSublayersDialogBase)
    {
        QgsOGRSublayersDialogBase->setWindowTitle(QApplication::translate("QgsOGRSublayersDialogBase", "Select layers to load", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = layersTable->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsOGRSublayersDialogBase", "1", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsOGRSublayersDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsOGRSublayersDialogBase: public Ui_QgsOGRSublayersDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOGRSUBLAYERSDIALOGBASE_H
