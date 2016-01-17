/********************************************************************************
** Form generated from reading ui file 'qgshelpviewerbase.ui'
**
** Created: Tue Mar 13 10:30:12 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSHELPVIEWERBASE_H
#define UI_QGSHELPVIEWERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_QgsHelpViewerBase
{
public:
    QGridLayout *gridLayout;
    QWebView *webView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsHelpViewerBase)
    {
        if (QgsHelpViewerBase->objectName().isEmpty())
            QgsHelpViewerBase->setObjectName(QString::fromUtf8("QgsHelpViewerBase"));
        QgsHelpViewerBase->resize(514, 417);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsHelpViewerBase->setWindowIcon(icon);
        QgsHelpViewerBase->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(QgsHelpViewerBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        webView = new QWebView(QgsHelpViewerBase);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl("about:blank"));

        gridLayout->addWidget(webView, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsHelpViewerBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(QgsHelpViewerBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsHelpViewerBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsHelpViewerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsHelpViewerBase)
    {
        QgsHelpViewerBase->setWindowTitle(QApplication::translate("QgsHelpViewerBase", "QGIS Help", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsHelpViewerBase);
    } // retranslateUi

};

namespace Ui {
    class QgsHelpViewerBase: public Ui_QgsHelpViewerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHELPVIEWERBASE_H
