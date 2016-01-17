/********************************************************************************
** Form generated from reading ui file 'qgsdelattrdialogbase.ui'
**
** Created: Tue Mar 13 10:24:02 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSDELATTRDIALOGBASE_H
#define UI_QGSDELATTRDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDelAttrDialogBase
{
public:
    QGridLayout *gridLayout;
    QListWidget *listBox2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDelAttrDialogBase)
    {
        if (QgsDelAttrDialogBase->objectName().isEmpty())
            QgsDelAttrDialogBase->setObjectName(QString::fromUtf8("QgsDelAttrDialogBase"));
        QgsDelAttrDialogBase->resize(360, 238);
        gridLayout = new QGridLayout(QgsDelAttrDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listBox2 = new QListWidget(QgsDelAttrDialogBase);
        listBox2->setObjectName(QString::fromUtf8("listBox2"));
        listBox2->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout->addWidget(listBox2, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsDelAttrDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(QgsDelAttrDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDelAttrDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDelAttrDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDelAttrDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDelAttrDialogBase)
    {
        QgsDelAttrDialogBase->setWindowTitle(QApplication::translate("QgsDelAttrDialogBase", "Delete Attributes", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsDelAttrDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDelAttrDialogBase: public Ui_QgsDelAttrDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDELATTRDIALOGBASE_H
