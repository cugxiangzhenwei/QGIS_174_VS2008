/********************************************************************************
** Form generated from reading ui file 'qgsmanageconnectionsdialogbase.ui'
**
** Created: Tue Mar 13 10:23:55 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSMANAGECONNECTIONSDIALOGBASE_H
#define UI_QGSMANAGECONNECTIONSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsManageConnectionsDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listConnections;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsManageConnectionsDialogBase)
    {
        if (QgsManageConnectionsDialogBase->objectName().isEmpty())
            QgsManageConnectionsDialogBase->setObjectName(QString::fromUtf8("QgsManageConnectionsDialogBase"));
        QgsManageConnectionsDialogBase->resize(400, 300);
        verticalLayout = new QVBoxLayout(QgsManageConnectionsDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsManageConnectionsDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        listConnections = new QListWidget(QgsManageConnectionsDialogBase);
        listConnections->setObjectName(QString::fromUtf8("listConnections"));
        listConnections->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listConnections->setAlternatingRowColors(true);
        listConnections->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(listConnections);

        buttonBox = new QDialogButtonBox(QgsManageConnectionsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsManageConnectionsDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsManageConnectionsDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsManageConnectionsDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsManageConnectionsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsManageConnectionsDialogBase)
    {
        QgsManageConnectionsDialogBase->setWindowTitle(QApplication::translate("QgsManageConnectionsDialogBase", "Manage connections", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsManageConnectionsDialogBase", "Select connections to export", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsManageConnectionsDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsManageConnectionsDialogBase: public Ui_QgsManageConnectionsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMANAGECONNECTIONSDIALOGBASE_H
