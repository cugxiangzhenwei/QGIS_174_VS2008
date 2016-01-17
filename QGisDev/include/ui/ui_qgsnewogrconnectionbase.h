/********************************************************************************
** Form generated from reading ui file 'qgsnewogrconnectionbase.ui'
**
** Created: Tue Mar 13 10:23:54 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSNEWOGRCONNECTIONBASE_H
#define UI_QGSNEWOGRCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsNewOgrConnectionBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QCheckBox *chkStorePassword;
    QPushButton *btnConnect;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QLabel *TextLabel2;
    QLabel *TextLabel2_2;
    QLabel *TextLabel3;
    QLabel *TextLabel3_2;
    QVBoxLayout *vboxLayout1;
    QComboBox *cmbDatabaseTypes;
    QLineEdit *txtName;
    QLineEdit *txtHost;
    QLineEdit *txtDatabase;
    QLineEdit *txtPort;
    QLineEdit *txtUsername;
    QLineEdit *txtPassword;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewOgrConnectionBase)
    {
        if (QgsNewOgrConnectionBase->objectName().isEmpty())
            QgsNewOgrConnectionBase->setObjectName(QString::fromUtf8("QgsNewOgrConnectionBase"));
        QgsNewOgrConnectionBase->resize(706, 541);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewOgrConnectionBase->sizePolicy().hasHeightForWidth());
        QgsNewOgrConnectionBase->setSizePolicy(sizePolicy);
        QgsNewOgrConnectionBase->setSizeGripEnabled(true);
        QgsNewOgrConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsNewOgrConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox1 = new QGroupBox(QgsNewOgrConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout1 = new QGridLayout(GroupBox1);
        gridLayout1->setSpacing(5);
        gridLayout1->setMargin(0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        chkStorePassword = new QCheckBox(GroupBox1);
        chkStorePassword->setObjectName(QString::fromUtf8("chkStorePassword"));

        hboxLayout->addWidget(chkStorePassword);

        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        hboxLayout->addWidget(btnConnect);


        gridLayout1->addLayout(hboxLayout, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setMargin(0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(GroupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        vboxLayout->addWidget(TextLabel1_2);

        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        vboxLayout->addWidget(TextLabel1);

        TextLabel2 = new QLabel(GroupBox1);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        vboxLayout->addWidget(TextLabel2);

        TextLabel2_2 = new QLabel(GroupBox1);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        vboxLayout->addWidget(TextLabel2_2);

        TextLabel3 = new QLabel(GroupBox1);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        vboxLayout->addWidget(TextLabel3);

        TextLabel3_2 = new QLabel(GroupBox1);
        TextLabel3_2->setObjectName(QString::fromUtf8("TextLabel3_2"));

        vboxLayout->addWidget(TextLabel3_2);


        hboxLayout1->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setMargin(0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        cmbDatabaseTypes = new QComboBox(GroupBox1);
        cmbDatabaseTypes->setObjectName(QString::fromUtf8("cmbDatabaseTypes"));

        vboxLayout1->addWidget(cmbDatabaseTypes);

        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        vboxLayout1->addWidget(txtName);

        txtHost = new QLineEdit(GroupBox1);
        txtHost->setObjectName(QString::fromUtf8("txtHost"));

        vboxLayout1->addWidget(txtHost);

        txtDatabase = new QLineEdit(GroupBox1);
        txtDatabase->setObjectName(QString::fromUtf8("txtDatabase"));

        vboxLayout1->addWidget(txtDatabase);

        txtPort = new QLineEdit(GroupBox1);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));

        vboxLayout1->addWidget(txtPort);

        txtUsername = new QLineEdit(GroupBox1);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));

        vboxLayout1->addWidget(txtUsername);

        txtPassword = new QLineEdit(GroupBox1);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);

        vboxLayout1->addWidget(txtPassword);


        hboxLayout1->addLayout(vboxLayout1);


        gridLayout1->addLayout(hboxLayout1, 0, 0, 1, 1);


        gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsNewOgrConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(cmbDatabaseTypes);
        TextLabel1_2->setBuddy(txtName);
        TextLabel1->setBuddy(txtHost);
        TextLabel2->setBuddy(txtDatabase);
        TextLabel2_2->setBuddy(txtPort);
        TextLabel3->setBuddy(txtUsername);
        TextLabel3_2->setBuddy(txtPassword);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbDatabaseTypes, txtName);
        QWidget::setTabOrder(txtName, txtHost);
        QWidget::setTabOrder(txtHost, txtDatabase);
        QWidget::setTabOrder(txtDatabase, txtPort);
        QWidget::setTabOrder(txtPort, txtUsername);
        QWidget::setTabOrder(txtUsername, txtPassword);
        QWidget::setTabOrder(txtPassword, chkStorePassword);
        QWidget::setTabOrder(chkStorePassword, btnConnect);
        QWidget::setTabOrder(btnConnect, buttonBox);

        retranslateUi(QgsNewOgrConnectionBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewOgrConnectionBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewOgrConnectionBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewOgrConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewOgrConnectionBase)
    {
        QgsNewOgrConnectionBase->setWindowTitle(QApplication::translate("QgsNewOgrConnectionBase", "Create a New OGR Database connection", 0, QApplication::UnicodeUTF8));
        GroupBox1->setTitle(QApplication::translate("QgsNewOgrConnectionBase", "Connection Information", 0, QApplication::UnicodeUTF8));
        chkStorePassword->setText(QApplication::translate("QgsNewOgrConnectionBase", "Save Password", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("QgsNewOgrConnectionBase", "&Test Connect", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsNewOgrConnectionBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Type</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("QgsNewOgrConnectionBase", "Name", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("QgsNewOgrConnectionBase", "Host", 0, QApplication::UnicodeUTF8));
        TextLabel2->setText(QApplication::translate("QgsNewOgrConnectionBase", "Database", 0, QApplication::UnicodeUTF8));
        TextLabel2_2->setText(QApplication::translate("QgsNewOgrConnectionBase", "Port", 0, QApplication::UnicodeUTF8));
        TextLabel3->setText(QApplication::translate("QgsNewOgrConnectionBase", "Username", 0, QApplication::UnicodeUTF8));
        TextLabel3_2->setText(QApplication::translate("QgsNewOgrConnectionBase", "Password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtName->setToolTip(QApplication::translate("QgsNewOgrConnectionBase", "Name of the new connection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        txtPort->setText(QString());
        Q_UNUSED(QgsNewOgrConnectionBase);
    } // retranslateUi

};

namespace Ui {
    class QgsNewOgrConnectionBase: public Ui_QgsNewOgrConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWOGRCONNECTIONBASE_H
