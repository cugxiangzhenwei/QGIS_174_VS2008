/********************************************************************************
** Form generated from reading ui file 'qgsidentifyresultsbase.ui'
**
** Created: Tue Mar 13 10:23:58 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSIDENTIFYRESULTSBASE_H
#define UI_QGSIDENTIFYRESULTSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsIdentifyResultsBase
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *lstResults;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsIdentifyResultsBase)
    {
        if (QgsIdentifyResultsBase->objectName().isEmpty())
            QgsIdentifyResultsBase->setObjectName(QString::fromUtf8("QgsIdentifyResultsBase"));
        QgsIdentifyResultsBase->resize(279, 306);
        vboxLayout = new QVBoxLayout(QgsIdentifyResultsBase);
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lstResults = new QTreeWidget(QgsIdentifyResultsBase);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        lstResults->setHeaderItem(__qtreewidgetitem);
        lstResults->setObjectName(QString::fromUtf8("lstResults"));
        lstResults->setLineWidth(2);
        lstResults->setAlternatingRowColors(true);
        lstResults->setSortingEnabled(true);

        vboxLayout->addWidget(lstResults);

        buttonBox = new QDialogButtonBox(QgsIdentifyResultsBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);
        buttonBox->setCenterButtons(false);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(QgsIdentifyResultsBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsIdentifyResultsBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsIdentifyResultsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsIdentifyResultsBase)
    {
        QgsIdentifyResultsBase->setWindowTitle(QApplication::translate("QgsIdentifyResultsBase", "Identify Results", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsIdentifyResultsBase);
    } // retranslateUi

};

namespace Ui {
    class QgsIdentifyResultsBase: public Ui_QgsIdentifyResultsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSIDENTIFYRESULTSBASE_H
