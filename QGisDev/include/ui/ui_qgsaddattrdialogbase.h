/********************************************************************************
** Form generated from reading ui file 'qgsaddattrdialogbase.ui'
**
** Created: Tue Mar 13 10:24:13 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSADDATTRDIALOGBASE_H
#define UI_QGSADDATTRDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_QgsAddAttrDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *mNameEdit;
    QLabel *textLabel1_2;
    QLineEdit *mCommentEdit;
    QLabel *textLabel2;
    QComboBox *mTypeBox;
    QLabel *mTypeName;
    QLabel *textLabel2_2;
    QSpinBox *mLength;
    QLabel *textLabel2_3;
    QSpinBox *mPrec;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAddAttrDialogBase)
    {
        if (QgsAddAttrDialogBase->objectName().isEmpty())
            QgsAddAttrDialogBase->setObjectName(QString::fromUtf8("QgsAddAttrDialogBase"));
        QgsAddAttrDialogBase->resize(267, 235);
        QgsAddAttrDialogBase->setModal(true);
        gridLayout = new QGridLayout(QgsAddAttrDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(QgsAddAttrDialogBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        mNameEdit = new QLineEdit(QgsAddAttrDialogBase);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

        gridLayout->addWidget(mNameEdit, 0, 1, 1, 1);

        textLabel1_2 = new QLabel(QgsAddAttrDialogBase);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout->addWidget(textLabel1_2, 1, 0, 1, 1);

        mCommentEdit = new QLineEdit(QgsAddAttrDialogBase);
        mCommentEdit->setObjectName(QString::fromUtf8("mCommentEdit"));

        gridLayout->addWidget(mCommentEdit, 1, 1, 1, 1);

        textLabel2 = new QLabel(QgsAddAttrDialogBase);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 2, 0, 1, 1);

        mTypeBox = new QComboBox(QgsAddAttrDialogBase);
        mTypeBox->setObjectName(QString::fromUtf8("mTypeBox"));

        gridLayout->addWidget(mTypeBox, 2, 1, 1, 1);

        mTypeName = new QLabel(QgsAddAttrDialogBase);
        mTypeName->setObjectName(QString::fromUtf8("mTypeName"));

        gridLayout->addWidget(mTypeName, 3, 1, 1, 1);

        textLabel2_2 = new QLabel(QgsAddAttrDialogBase);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

        gridLayout->addWidget(textLabel2_2, 4, 0, 1, 1);

        mLength = new QSpinBox(QgsAddAttrDialogBase);
        mLength->setObjectName(QString::fromUtf8("mLength"));

        gridLayout->addWidget(mLength, 4, 1, 1, 1);

        textLabel2_3 = new QLabel(QgsAddAttrDialogBase);
        textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));

        gridLayout->addWidget(textLabel2_3, 5, 0, 1, 1);

        mPrec = new QSpinBox(QgsAddAttrDialogBase);
        mPrec->setObjectName(QString::fromUtf8("mPrec"));

        gridLayout->addWidget(mPrec, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsAddAttrDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(mNameEdit);
        textLabel1_2->setBuddy(mCommentEdit);
        textLabel2->setBuddy(mTypeBox);
        mTypeName->setBuddy(mTypeBox);
        textLabel2_2->setBuddy(mLength);
        textLabel2_3->setBuddy(mPrec);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mNameEdit, mCommentEdit);
        QWidget::setTabOrder(mCommentEdit, mTypeBox);
        QWidget::setTabOrder(mTypeBox, mLength);
        QWidget::setTabOrder(mLength, mPrec);
        QWidget::setTabOrder(mPrec, buttonBox);

        retranslateUi(QgsAddAttrDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAddAttrDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAddAttrDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAddAttrDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAddAttrDialogBase)
    {
        QgsAddAttrDialogBase->setWindowTitle(QApplication::translate("QgsAddAttrDialogBase", "Add column", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("QgsAddAttrDialogBase", "N&ame", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("QgsAddAttrDialogBase", "Comment", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("QgsAddAttrDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        mTypeName->setText(QApplication::translate("QgsAddAttrDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        textLabel2_2->setText(QApplication::translate("QgsAddAttrDialogBase", "Width", 0, QApplication::UnicodeUTF8));
        textLabel2_3->setText(QApplication::translate("QgsAddAttrDialogBase", "Precision", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsAddAttrDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAddAttrDialogBase: public Ui_QgsAddAttrDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADDATTRDIALOGBASE_H
