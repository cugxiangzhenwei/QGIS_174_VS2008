/********************************************************************************
** Form generated from reading ui file 'qgshandlebadlayersbase.ui'
**
** Created: Tue Mar 13 10:23:58 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSHANDLEBADLAYERSBASE_H
#define UI_QGSHANDLEBADLAYERSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsHandleBadLayersBase
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mLayerList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsHandleBadLayersBase)
    {
        if (QgsHandleBadLayersBase->objectName().isEmpty())
            QgsHandleBadLayersBase->setObjectName(QString::fromUtf8("QgsHandleBadLayersBase"));
        QgsHandleBadLayersBase->resize(834, 505);
        verticalLayout = new QVBoxLayout(QgsHandleBadLayersBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mLayerList = new QTableWidget(QgsHandleBadLayersBase);
        if (mLayerList->columnCount() < 7)
            mLayerList->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mLayerList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mLayerList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mLayerList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mLayerList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mLayerList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mLayerList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        mLayerList->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        mLayerList->setObjectName(QString::fromUtf8("mLayerList"));

        verticalLayout->addWidget(mLayerList);

        buttonBox = new QDialogButtonBox(QgsHandleBadLayersBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsHandleBadLayersBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsHandleBadLayersBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsHandleBadLayersBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsHandleBadLayersBase);
    } // setupUi

    void retranslateUi(QDialog *QgsHandleBadLayersBase)
    {
        QgsHandleBadLayersBase->setWindowTitle(QApplication::translate("QgsHandleBadLayersBase", "Handle bad layers", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = mLayerList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsHandleBadLayersBase", "Layer name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = mLayerList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsHandleBadLayersBase", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = mLayerList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsHandleBadLayersBase", "Provider", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = mLayerList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsHandleBadLayersBase", "Original filename", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = mLayerList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsHandleBadLayersBase", "New filename", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = mLayerList->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsHandleBadLayersBase", "Original datasource", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = mLayerList->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsHandleBadLayersBase", "New datasource", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsHandleBadLayersBase);
    } // retranslateUi

};

namespace Ui {
    class QgsHandleBadLayersBase: public Ui_QgsHandleBadLayersBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHANDLEBADLAYERSBASE_H
