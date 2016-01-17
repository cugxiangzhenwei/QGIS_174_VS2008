/********************************************************************************
** Form generated from reading ui file 'qgscomposermanagerbase.ui'
**
** Created: Tue Mar 13 10:24:07 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERMANAGERBASE_H
#define UI_QGSCOMPOSERMANAGERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerManagerBase
{
public:
    QGridLayout *gridLayout;
    QListWidget *mComposerListWidget;
    QDialogButtonBox *mButtonBox;
    QComboBox *mTemplate;
    QPushButton *mAddButton;

    void setupUi(QDialog *QgsComposerManagerBase)
    {
        if (QgsComposerManagerBase->objectName().isEmpty())
            QgsComposerManagerBase->setObjectName(QString::fromUtf8("QgsComposerManagerBase"));
        QgsComposerManagerBase->resize(346, 195);
        gridLayout = new QGridLayout(QgsComposerManagerBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mComposerListWidget = new QListWidget(QgsComposerManagerBase);
        mComposerListWidget->setObjectName(QString::fromUtf8("mComposerListWidget"));

        gridLayout->addWidget(mComposerListWidget, 0, 0, 3, 2);

        mButtonBox = new QDialogButtonBox(QgsComposerManagerBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(mButtonBox, 4, 0, 1, 2);

        mTemplate = new QComboBox(QgsComposerManagerBase);
        mTemplate->setObjectName(QString::fromUtf8("mTemplate"));

        gridLayout->addWidget(mTemplate, 3, 0, 1, 1);

        mAddButton = new QPushButton(QgsComposerManagerBase);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));

        gridLayout->addWidget(mAddButton, 3, 1, 1, 1);

        QWidget::setTabOrder(mComposerListWidget, mTemplate);
        QWidget::setTabOrder(mTemplate, mAddButton);
        QWidget::setTabOrder(mAddButton, mButtonBox);

        retranslateUi(QgsComposerManagerBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsComposerManagerBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsComposerManagerBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsComposerManagerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsComposerManagerBase)
    {
        QgsComposerManagerBase->setWindowTitle(QApplication::translate("QgsComposerManagerBase", "Composer manager", 0, QApplication::UnicodeUTF8));
        mAddButton->setText(QApplication::translate("QgsComposerManagerBase", "Add", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsComposerManagerBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerManagerBase: public Ui_QgsComposerManagerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERMANAGERBASE_H
