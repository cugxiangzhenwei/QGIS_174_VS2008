/********************************************************************************
** Form generated from reading ui file 'qgsengineconfigdialog.ui'
**
** Created: Tue Mar 13 10:24:01 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSENGINECONFIGDIALOG_H
#define UI_QGSENGINECONFIGDIALOG_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsEngineConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cboSearchMethod;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *spinCandPoint;
    QLabel *label_3;
    QSpinBox *spinCandLine;
    QLabel *label_4;
    QSpinBox *spinCandPolygon;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QCheckBox *chkShowAllLabels;
    QCheckBox *chkShowCandidates;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsEngineConfigDialog)
    {
        if (QgsEngineConfigDialog->objectName().isEmpty())
            QgsEngineConfigDialog->setObjectName(QString::fromUtf8("QgsEngineConfigDialog"));
        QgsEngineConfigDialog->resize(316, 271);
        verticalLayout = new QVBoxLayout(QgsEngineConfigDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(QgsEngineConfigDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cboSearchMethod = new QComboBox(QgsEngineConfigDialog);
        cboSearchMethod->setObjectName(QString::fromUtf8("cboSearchMethod"));

        horizontalLayout->addWidget(cboSearchMethod);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        groupBox = new QGroupBox(QgsEngineConfigDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        spinCandPoint = new QSpinBox(groupBox);
        spinCandPoint->setObjectName(QString::fromUtf8("spinCandPoint"));
        spinCandPoint->setMinimum(1);
        spinCandPoint->setMaximum(999);

        gridLayout->addWidget(spinCandPoint, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinCandLine = new QSpinBox(groupBox);
        spinCandLine->setObjectName(QString::fromUtf8("spinCandLine"));
        spinCandLine->setMinimum(1);
        spinCandLine->setMaximum(999);

        gridLayout->addWidget(spinCandLine, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        spinCandPolygon = new QSpinBox(groupBox);
        spinCandPolygon->setObjectName(QString::fromUtf8("spinCandPolygon"));
        spinCandPolygon->setMinimum(1);
        spinCandPolygon->setMaximum(999);

        gridLayout->addWidget(spinCandPolygon, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        chkShowAllLabels = new QCheckBox(QgsEngineConfigDialog);
        chkShowAllLabels->setObjectName(QString::fromUtf8("chkShowAllLabels"));

        verticalLayout->addWidget(chkShowAllLabels);

        chkShowCandidates = new QCheckBox(QgsEngineConfigDialog);
        chkShowCandidates->setObjectName(QString::fromUtf8("chkShowCandidates"));

        verticalLayout->addWidget(chkShowCandidates);

        buttonBox = new QDialogButtonBox(QgsEngineConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(cboSearchMethod, spinCandPoint);
        QWidget::setTabOrder(spinCandPoint, spinCandLine);
        QWidget::setTabOrder(spinCandLine, spinCandPolygon);
        QWidget::setTabOrder(spinCandPolygon, chkShowCandidates);
        QWidget::setTabOrder(chkShowCandidates, buttonBox);

        retranslateUi(QgsEngineConfigDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsEngineConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsEngineConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsEngineConfigDialog)
    {
        QgsEngineConfigDialog->setWindowTitle(QApplication::translate("QgsEngineConfigDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsEngineConfigDialog", "Search method", 0, QApplication::UnicodeUTF8));
        cboSearchMethod->clear();
        cboSearchMethod->insertItems(0, QStringList()
         << QApplication::translate("QgsEngineConfigDialog", "Chain (fast)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsEngineConfigDialog", "Popmusic Tabu", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsEngineConfigDialog", "Popmusic Chain", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsEngineConfigDialog", "Popmusic Tabu Chain", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsEngineConfigDialog", "FALP (fastest)", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("QgsEngineConfigDialog", "Number of candidates", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsEngineConfigDialog", "Point", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsEngineConfigDialog", "Line", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsEngineConfigDialog", "Polygon", 0, QApplication::UnicodeUTF8));
        chkShowAllLabels->setText(QApplication::translate("QgsEngineConfigDialog", "Show all labels (i.e. including colliding labels)", 0, QApplication::UnicodeUTF8));
        chkShowCandidates->setText(QApplication::translate("QgsEngineConfigDialog", "Show label candidates (for debugging)", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsEngineConfigDialog);
    } // retranslateUi

};

namespace Ui {
    class QgsEngineConfigDialog: public Ui_QgsEngineConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSENGINECONFIGDIALOG_H
