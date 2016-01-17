/********************************************************************************
** Form generated from reading ui file 'qgsabout.ui'
**
** Created: Tue Mar 13 10:24:14 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSABOUT_H
#define UI_QGSABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAbout
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *Widget2;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *qgisIcon;
    QLabel *TextLabel4;
    QLabel *lblVersion;
    QSpacerItem *spacerItem;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QPushButton *btnQgisHome;
    QPushButton *btnQgisUser;
    QWidget *Widget3;
    QGridLayout *gridLayout2;
    QTextBrowser *txtWhatsNew;
    QWidget *TabPage;
    QGridLayout *gridLayout3;
    QTextBrowser *txtProviders;
    QWidget *tab;
    QGridLayout *gridLayout4;
    QListWidget *lstDevelopers;
    QWidget *tab_5;
    QGridLayout *gridLayout_1;
    QListWidget *lstContributors;
    QWidget *tab_3;
    QGridLayout *gridLayout5;
    QTextBrowser *txtTranslators;
    QWidget *tab_4;
    QGridLayout *gridLayout6;
    QTextBrowser *txtDonors;

    void setupUi(QDialog *QgsAbout)
    {
        if (QgsAbout->objectName().isEmpty())
            QgsAbout->setObjectName(QString::fromUtf8("QgsAbout"));
        QgsAbout->resize(753, 416);
        QgsAbout->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(QgsAbout);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsAbout);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(QgsAbout);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Widget2 = new QWidget();
        Widget2->setObjectName(QString::fromUtf8("Widget2"));
        gridLayout1 = new QGridLayout(Widget2);
        gridLayout1->setSpacing(6);
        gridLayout1->setMargin(11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        qgisIcon = new QLabel(Widget2);
        qgisIcon->setObjectName(QString::fromUtf8("qgisIcon"));
        qgisIcon->setMaximumSize(QSize(60, 60));
        qgisIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/icons/qgis-icon-60x60.png")));
        qgisIcon->setScaledContents(false);

        hboxLayout->addWidget(qgisIcon);

        TextLabel4 = new QLabel(Widget2);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(TextLabel4);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);

        lblVersion = new QLabel(Widget2);
        lblVersion->setObjectName(QString::fromUtf8("lblVersion"));
        lblVersion->setAlignment(Qt::AlignCenter);
        lblVersion->setWordWrap(true);

        gridLayout1->addWidget(lblVersion, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 2, 0, 1, 1);

        label = new QLabel(Widget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout1->addWidget(label, 3, 0, 1, 1);

        label_2 = new QLabel(Widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout1->addWidget(label_2, 4, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 5, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        btnQgisHome = new QPushButton(Widget2);
        btnQgisHome->setObjectName(QString::fromUtf8("btnQgisHome"));
        btnQgisHome->setFlat(false);

        hboxLayout1->addWidget(btnQgisHome);

        btnQgisUser = new QPushButton(Widget2);
        btnQgisUser->setObjectName(QString::fromUtf8("btnQgisUser"));
        btnQgisUser->setFlat(false);

        hboxLayout1->addWidget(btnQgisUser);


        gridLayout1->addLayout(hboxLayout1, 6, 0, 1, 1);

        tabWidget->addTab(Widget2, QString());
        Widget3 = new QWidget();
        Widget3->setObjectName(QString::fromUtf8("Widget3"));
        gridLayout2 = new QGridLayout(Widget3);
        gridLayout2->setSpacing(6);
        gridLayout2->setMargin(11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        txtWhatsNew = new QTextBrowser(Widget3);
        txtWhatsNew->setObjectName(QString::fromUtf8("txtWhatsNew"));

        gridLayout2->addWidget(txtWhatsNew, 0, 0, 1, 1);

        tabWidget->addTab(Widget3, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        gridLayout3 = new QGridLayout(TabPage);
        gridLayout3->setSpacing(6);
        gridLayout3->setMargin(11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        txtProviders = new QTextBrowser(TabPage);
        txtProviders->setObjectName(QString::fromUtf8("txtProviders"));

        gridLayout3->addWidget(txtProviders, 0, 0, 1, 1);

        tabWidget->addTab(TabPage, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout4 = new QGridLayout(tab);
        gridLayout4->setSpacing(6);
        gridLayout4->setMargin(11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        lstDevelopers = new QListWidget(tab);
        lstDevelopers->setObjectName(QString::fromUtf8("lstDevelopers"));
        lstDevelopers->setAlternatingRowColors(true);
        lstDevelopers->setProperty("isWrapping", QVariant(false));

        gridLayout4->addWidget(lstDevelopers, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_1 = new QGridLayout(tab_5);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setMargin(11);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        lstContributors = new QListWidget(tab_5);
        lstContributors->setObjectName(QString::fromUtf8("lstContributors"));
        lstContributors->setAlternatingRowColors(true);

        gridLayout_1->addWidget(lstContributors, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout5 = new QGridLayout(tab_3);
        gridLayout5->setSpacing(6);
        gridLayout5->setMargin(11);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        txtTranslators = new QTextBrowser(tab_3);
        txtTranslators->setObjectName(QString::fromUtf8("txtTranslators"));

        gridLayout5->addWidget(txtTranslators, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout6 = new QGridLayout(tab_4);
        gridLayout6->setSpacing(6);
        gridLayout6->setMargin(11);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        txtDonors = new QTextBrowser(tab_4);
        txtDonors->setObjectName(QString::fromUtf8("txtDonors"));
        txtDonors->setOpenExternalLinks(true);
        txtDonors->setOpenLinks(true);

        gridLayout6->addWidget(txtDonors, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(tabWidget, btnQgisHome);
        QWidget::setTabOrder(btnQgisHome, btnQgisUser);
        QWidget::setTabOrder(btnQgisUser, txtProviders);
        QWidget::setTabOrder(txtProviders, lstDevelopers);
        QWidget::setTabOrder(lstDevelopers, txtTranslators);
        QWidget::setTabOrder(txtTranslators, buttonBox);
        QWidget::setTabOrder(buttonBox, txtDonors);
        QWidget::setTabOrder(txtDonors, lstContributors);

        retranslateUi(QgsAbout);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), QgsAbout, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsAbout);
    } // setupUi

    void retranslateUi(QDialog *QgsAbout)
    {
        QgsAbout->setWindowTitle(QApplication::translate("QgsAbout", "About Quantum GIS", 0, QApplication::UnicodeUTF8));
        TextLabel4->setText(QApplication::translate("QgsAbout", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:x-large; font-weight:600;\"><span style=\" font-size:x-large;\">Quantum GIS (QGIS)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblVersion->setText(QApplication::translate("QgsAbout", "Version", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsAbout", "Quantum GIS is licensed under the GNU General Public License", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsAbout", "http://www.gnu.org/licenses", 0, QApplication::UnicodeUTF8));
        btnQgisHome->setText(QApplication::translate("QgsAbout", "QGIS Home Page", 0, QApplication::UnicodeUTF8));
        btnQgisUser->setText(QApplication::translate("QgsAbout", "Join our user mailing list", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Widget2), QApplication::translate("QgsAbout", "About", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Widget3), QApplication::translate("QgsAbout", "What's New", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(TabPage), QApplication::translate("QgsAbout", "Providers", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsAbout", "Developers", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("QgsAbout", "Contributors", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("QgsAbout", "Translators", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("QgsAbout", "Donors", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsAbout);
    } // retranslateUi

};

namespace Ui {
    class QgsAbout: public Ui_QgsAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSABOUT_H
