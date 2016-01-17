/********************************************************************************
** Form generated from reading ui file 'qgssponsorsbase.ui'
**
** Created: Tue Mar 13 10:23:46 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSPONSORSBASE_H
#define UI_QGSSPONSORSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_QgsSponsorsBase
{
public:
    QGridLayout *gridLayout;
    QLabel *qgisIcon;
    QTextBrowser *txtSponsors;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSponsorsBase)
    {
        if (QgsSponsorsBase->objectName().isEmpty())
            QgsSponsorsBase->setObjectName(QString::fromUtf8("QgsSponsorsBase"));
        QgsSponsorsBase->resize(640, 493);
        gridLayout = new QGridLayout(QgsSponsorsBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qgisIcon = new QLabel(QgsSponsorsBase);
        qgisIcon->setObjectName(QString::fromUtf8("qgisIcon"));

        gridLayout->addWidget(qgisIcon, 0, 0, 1, 1);

        txtSponsors = new QTextBrowser(QgsSponsorsBase);
        txtSponsors->setObjectName(QString::fromUtf8("txtSponsors"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtSponsors->sizePolicy().hasHeightForWidth());
        txtSponsors->setSizePolicy(sizePolicy);
        txtSponsors->setOpenExternalLinks(true);

        gridLayout->addWidget(txtSponsors, 0, 1, 2, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSponsorsBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(QgsSponsorsBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSponsorsBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSponsorsBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSponsorsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSponsorsBase)
    {
        QgsSponsorsBase->setWindowTitle(QApplication::translate("QgsSponsorsBase", "QGIS Sponsors", 0, QApplication::UnicodeUTF8));
        qgisIcon->setText(QApplication::translate("QgsSponsorsBase", "TextLabel", 0, QApplication::UnicodeUTF8));
        txtSponsors->setHtml(QApplication::translate("QgsSponsorsBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">We work really hard to make this nice software for you. See all the cool features it has? Get a warm fuzzy feeling when you use it? Quantum GIS is a labour of love by a dedicated team of developers. We want you to copy &amp; share it and put it in the hands of as many people as possible. If QGIS is saving you money or you like our work and have the financial ability to help, please consider sponsoring the development of Quantum GIS. We use money from sponsors to pay for travel and costs related to our bi-an"
                        "nual hackfests, and to generally support the goals of our project.  Please see the </span><a href=\"http://qgis.org/en/sponsorship.html\"><span style=\" font-family:'Ubuntu'; font-size:10pt; text-decoration: underline; color:#0000ff;\">QGIS Sponsorship Web Page</span></a><span style=\" font-family:'Ubuntu'; font-size:10pt;\"> for more details. In the list below you can see the fine people and companies that are helping us financially - a great big 'thank you' to you all!</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:14pt; font-weight:600;\">2011 Sponsors</span></p>\n"
"<hr />\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-lef"
                        "t:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600;\">SILVER SPONSORS</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.vorarlberg.at\"><span style=\" font-family:'Courier New,courier'; font-size:10pt; text-decoration: underline; color:#0000ff;\">State of Vorarlberg</span></a><span style=\" font-family:'Courier New,courier'; font-size:10pt;\"> </span><span style=\" font-family:'Courier New,courier'; font-size:10pt; color:#333333;\">, Austria (11.2011)</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.agi.so.ch\"><span style=\" font-family:'Courier New,courier'; font-size:10pt; text-decoration: underline; color:#0000ff;\">Kanton Solothurn</span></a><span style=\" font-family:"
                        "'Courier New,courier'; font-size:10pt; color:#333333;\">, Switzerland (4.2011)</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:600;\">BRONZE SPONSORS</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.municipia.pt\"><span style=\" font-family:'Sans'; font-size:10pt; text-decoration: underline; color:#000"
                        "0ff;\">Munic\303\255pia, SA</span></a></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:14pt; font-weight:600;\">2010 Sponsors</span></p>\n"
"<hr />\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:600;\">BRONZE SPONSORS</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.gfosservices.com\"><span style=\" font-family:'Sans'; font-size:10pt; text-decoration: underline; color:#0000ff;\">Studio Associato Gfosservices</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://nextgis.org\"><span style=\" font-family:'Sans'; font-size:10pt; text-decoration: underline; color:#0000ff;\">NEXTGIS</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:14pt; font-weight:600;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsSponsorsBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSponsorsBase: public Ui_QgsSponsorsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSPONSORSBASE_H
