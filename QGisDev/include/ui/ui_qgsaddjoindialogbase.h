/********************************************************************************
** Form generated from reading ui file 'qgsaddjoindialogbase.ui'
**
** Created: Tue Mar 13 10:24:13 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSADDJOINDIALOGBASE_H
#define UI_QGSADDJOINDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_QgsAddJoinDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mJoinLayerLabel;
    QComboBox *mJoinLayerComboBox;
    QLabel *mJoinFieldLabel;
    QComboBox *mJoinFieldComboBox;
    QLabel *mTargetFieldLabel;
    QComboBox *mTargetFieldComboBox;
    QDialogButtonBox *buttonBox;
    QCheckBox *mCreateIndexCheckBox;
    QCheckBox *mCacheInMemoryCheckBox;

    void setupUi(QDialog *QgsAddJoinDialogBase)
    {
        if (QgsAddJoinDialogBase->objectName().isEmpty())
            QgsAddJoinDialogBase->setObjectName(QString::fromUtf8("QgsAddJoinDialogBase"));
        QgsAddJoinDialogBase->resize(281, 160);
        gridLayout = new QGridLayout(QgsAddJoinDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mJoinLayerLabel = new QLabel(QgsAddJoinDialogBase);
        mJoinLayerLabel->setObjectName(QString::fromUtf8("mJoinLayerLabel"));

        gridLayout->addWidget(mJoinLayerLabel, 0, 0, 1, 1);

        mJoinLayerComboBox = new QComboBox(QgsAddJoinDialogBase);
        mJoinLayerComboBox->setObjectName(QString::fromUtf8("mJoinLayerComboBox"));

        gridLayout->addWidget(mJoinLayerComboBox, 0, 1, 1, 1);

        mJoinFieldLabel = new QLabel(QgsAddJoinDialogBase);
        mJoinFieldLabel->setObjectName(QString::fromUtf8("mJoinFieldLabel"));

        gridLayout->addWidget(mJoinFieldLabel, 1, 0, 1, 1);

        mJoinFieldComboBox = new QComboBox(QgsAddJoinDialogBase);
        mJoinFieldComboBox->setObjectName(QString::fromUtf8("mJoinFieldComboBox"));

        gridLayout->addWidget(mJoinFieldComboBox, 1, 1, 1, 1);

        mTargetFieldLabel = new QLabel(QgsAddJoinDialogBase);
        mTargetFieldLabel->setObjectName(QString::fromUtf8("mTargetFieldLabel"));

        gridLayout->addWidget(mTargetFieldLabel, 2, 0, 1, 1);

        mTargetFieldComboBox = new QComboBox(QgsAddJoinDialogBase);
        mTargetFieldComboBox->setObjectName(QString::fromUtf8("mTargetFieldComboBox"));

        gridLayout->addWidget(mTargetFieldComboBox, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsAddJoinDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        mCreateIndexCheckBox = new QCheckBox(QgsAddJoinDialogBase);
        mCreateIndexCheckBox->setObjectName(QString::fromUtf8("mCreateIndexCheckBox"));

        gridLayout->addWidget(mCreateIndexCheckBox, 4, 0, 1, 2);

        mCacheInMemoryCheckBox = new QCheckBox(QgsAddJoinDialogBase);
        mCacheInMemoryCheckBox->setObjectName(QString::fromUtf8("mCacheInMemoryCheckBox"));

        gridLayout->addWidget(mCacheInMemoryCheckBox, 3, 0, 1, 2);


        retranslateUi(QgsAddJoinDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAddJoinDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAddJoinDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAddJoinDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAddJoinDialogBase)
    {
        QgsAddJoinDialogBase->setWindowTitle(QApplication::translate("QgsAddJoinDialogBase", "Add vector join", 0, QApplication::UnicodeUTF8));
        mJoinLayerLabel->setText(QApplication::translate("QgsAddJoinDialogBase", "Join layer", 0, QApplication::UnicodeUTF8));
        mJoinFieldLabel->setText(QApplication::translate("QgsAddJoinDialogBase", "Join field", 0, QApplication::UnicodeUTF8));
        mTargetFieldLabel->setText(QApplication::translate("QgsAddJoinDialogBase", "Target field", 0, QApplication::UnicodeUTF8));
        mCreateIndexCheckBox->setText(QApplication::translate("QgsAddJoinDialogBase", "Create attribute index on join field", 0, QApplication::UnicodeUTF8));
        mCacheInMemoryCheckBox->setText(QApplication::translate("QgsAddJoinDialogBase", "Cache join layer in virtual memory", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsAddJoinDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAddJoinDialogBase: public Ui_QgsAddJoinDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADDJOINDIALOGBASE_H
