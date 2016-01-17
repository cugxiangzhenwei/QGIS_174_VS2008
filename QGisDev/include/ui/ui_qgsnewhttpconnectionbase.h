/********************************************************************************
** Form generated from reading ui file 'qgsnewhttpconnectionbase.ui'
**
** Created: Tue Mar 13 10:23:54 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSNEWHTTPCONNECTIONBASE_H
#define UI_QGSNEWHTTPCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsNewHttpConnectionBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QLabel *TextLabel1;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *TextLabel1_2;
    QLineEdit *txtName;
    QLineEdit *txtUrl;
    QLineEdit *txtUserName;
    QLineEdit *txtPassword;
    QCheckBox *cbxIgnoreGetFeatureInfoURI;
    QCheckBox *cbxIgnoreGetMapURI;

    void setupUi(QDialog *QgsNewHttpConnectionBase)
    {
        if (QgsNewHttpConnectionBase->objectName().isEmpty())
            QgsNewHttpConnectionBase->setObjectName(QString::fromUtf8("QgsNewHttpConnectionBase"));
        QgsNewHttpConnectionBase->resize(507, 322);
        QgsNewHttpConnectionBase->setSizeGripEnabled(true);
        QgsNewHttpConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsNewHttpConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsNewHttpConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        GroupBox1 = new QGroupBox(QgsNewHttpConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout1 = new QGridLayout(GroupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setMargin(11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setMargin(5);

        gridLayout1->addWidget(TextLabel1, 1, 0, 1, 1);

        label = new QLabel(GroupBox1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::PlainText);
        label->setWordWrap(true);

        gridLayout1->addWidget(label, 4, 0, 1, 3);

        label_3 = new QLabel(GroupBox1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 6, 0, 1, 1);

        label_2 = new QLabel(GroupBox1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 5, 0, 1, 1);

        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
        TextLabel1_2->setWordWrap(true);
        TextLabel1_2->setMargin(5);

        gridLayout1->addWidget(TextLabel1_2, 0, 0, 1, 1);

        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setMinimumSize(QSize(0, 0));
        txtName->setFrame(true);

        gridLayout1->addWidget(txtName, 0, 1, 1, 1);

        txtUrl = new QLineEdit(GroupBox1);
        txtUrl->setObjectName(QString::fromUtf8("txtUrl"));

        gridLayout1->addWidget(txtUrl, 1, 1, 1, 1);

        txtUserName = new QLineEdit(GroupBox1);
        txtUserName->setObjectName(QString::fromUtf8("txtUserName"));

        gridLayout1->addWidget(txtUserName, 5, 1, 1, 1);

        txtPassword = new QLineEdit(GroupBox1);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);

        gridLayout1->addWidget(txtPassword, 6, 1, 1, 1);

        cbxIgnoreGetFeatureInfoURI = new QCheckBox(GroupBox1);
        cbxIgnoreGetFeatureInfoURI->setObjectName(QString::fromUtf8("cbxIgnoreGetFeatureInfoURI"));

        gridLayout1->addWidget(cbxIgnoreGetFeatureInfoURI, 8, 0, 1, 2);

        cbxIgnoreGetMapURI = new QCheckBox(GroupBox1);
        cbxIgnoreGetMapURI->setObjectName(QString::fromUtf8("cbxIgnoreGetMapURI"));

        gridLayout1->addWidget(cbxIgnoreGetMapURI, 7, 0, 1, 2);


        gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        TextLabel1->setBuddy(txtUrl);
        label_3->setBuddy(txtPassword);
        label_2->setBuddy(txtUserName);
        TextLabel1_2->setBuddy(txtName);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsNewHttpConnectionBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewHttpConnectionBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewHttpConnectionBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewHttpConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewHttpConnectionBase)
    {
        QgsNewHttpConnectionBase->setWindowTitle(QApplication::translate("QgsNewHttpConnectionBase", "Create a new WMS connection", 0, QApplication::UnicodeUTF8));
        GroupBox1->setTitle(QApplication::translate("QgsNewHttpConnectionBase", "Connection details", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("QgsNewHttpConnectionBase", "URL", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsNewHttpConnectionBase", "If the service requires basic authentication, enter a user name and optional password", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsNewHttpConnectionBase", "Password", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsNewHttpConnectionBase", "&User name", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("QgsNewHttpConnectionBase", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtName->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "Name of the new connection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        txtUrl->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "HTTP address of the Web Map Server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbxIgnoreGetFeatureInfoURI->setText(QApplication::translate("QgsNewHttpConnectionBase", "Ignore GetFeatureInfo URI reported in capabilities", 0, QApplication::UnicodeUTF8));
        cbxIgnoreGetMapURI->setText(QApplication::translate("QgsNewHttpConnectionBase", "Ignore GetMap URI reported in capabilities", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsNewHttpConnectionBase);
    } // retranslateUi

};

namespace Ui {
    class QgsNewHttpConnectionBase: public Ui_QgsNewHttpConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWHTTPCONNECTIONBASE_H
