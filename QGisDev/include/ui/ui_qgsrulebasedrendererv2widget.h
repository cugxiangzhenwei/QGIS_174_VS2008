/********************************************************************************
** Form generated from reading ui file 'qgsrulebasedrendererv2widget.ui'
**
** Created: Tue Mar 13 10:23:48 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSRULEBASEDRENDERERV2WIDGET_H
#define UI_QGSRULEBASEDRENDERERV2WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgsrulebasedrendererv2widget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRuleBasedRendererV2Widget
{
public:
    QGridLayout *gridLayout;
    QgsRendererRulesTreeWidget *treeRules;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAddRule;
    QPushButton *btnEditRule;
    QPushButton *btnRemoveRule;
    QPushButton *btnRefineRule;
    QPushButton *btnIncreasePriority;
    QPushButton *btnDecreasePriority;
    QGroupBox *groupBox_2;
    QCheckBox *chkEnableSymbolLevels;
    QCheckBox *chkUsingFirstRule;
    QLabel *label_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *radNoGrouping;
    QRadioButton *radGroupFilter;
    QRadioButton *radGroupScale;

    void setupUi(QWidget *QgsRuleBasedRendererV2Widget)
    {
        if (QgsRuleBasedRendererV2Widget->objectName().isEmpty())
            QgsRuleBasedRendererV2Widget->setObjectName(QString::fromUtf8("QgsRuleBasedRendererV2Widget"));
        QgsRuleBasedRendererV2Widget->resize(640, 401);
        gridLayout = new QGridLayout(QgsRuleBasedRendererV2Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeRules = new QgsRendererRulesTreeWidget(QgsRuleBasedRendererV2Widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(4, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(3, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        treeRules->setHeaderItem(__qtreewidgetitem);
        treeRules->setObjectName(QString::fromUtf8("treeRules"));
        treeRules->setStyleSheet(QString::fromUtf8(""));
        treeRules->setRootIsDecorated(false);
        treeRules->setSortingEnabled(true);
        treeRules->setHeaderHidden(false);

        gridLayout->addWidget(treeRules, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnAddRule = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnAddRule->setObjectName(QString::fromUtf8("btnAddRule"));

        verticalLayout->addWidget(btnAddRule);

        btnEditRule = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnEditRule->setObjectName(QString::fromUtf8("btnEditRule"));

        verticalLayout->addWidget(btnEditRule);

        btnRemoveRule = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnRemoveRule->setObjectName(QString::fromUtf8("btnRemoveRule"));

        verticalLayout->addWidget(btnRemoveRule);

        btnRefineRule = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnRefineRule->setObjectName(QString::fromUtf8("btnRefineRule"));

        verticalLayout->addWidget(btnRefineRule);

        btnIncreasePriority = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnIncreasePriority->setObjectName(QString::fromUtf8("btnIncreasePriority"));

        verticalLayout->addWidget(btnIncreasePriority);

        btnDecreasePriority = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnDecreasePriority->setObjectName(QString::fromUtf8("btnDecreasePriority"));

        verticalLayout->addWidget(btnDecreasePriority);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(QgsRuleBasedRendererV2Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 35));
        groupBox_2->setBaseSize(QSize(0, 0));
        chkEnableSymbolLevels = new QCheckBox(groupBox_2);
        chkEnableSymbolLevels->setObjectName(QString::fromUtf8("chkEnableSymbolLevels"));
        chkEnableSymbolLevels->setGeometry(QRect(113, 10, 231, 24));
        chkUsingFirstRule = new QCheckBox(groupBox_2);
        chkUsingFirstRule->setObjectName(QString::fromUtf8("chkUsingFirstRule"));
        chkUsingFirstRule->setGeometry(QRect(360, 10, 271, 24));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 84, 24));

        gridLayout->addWidget(groupBox_2, 3, 0, 1, 2);

        groupBox = new QGroupBox(QgsRuleBasedRendererV2Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setTitle(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        radNoGrouping = new QRadioButton(groupBox);
        radNoGrouping->setObjectName(QString::fromUtf8("radNoGrouping"));
        radNoGrouping->setChecked(true);

        horizontalLayout->addWidget(radNoGrouping);

        radGroupFilter = new QRadioButton(groupBox);
        radGroupFilter->setObjectName(QString::fromUtf8("radGroupFilter"));

        horizontalLayout->addWidget(radGroupFilter);

        radGroupScale = new QRadioButton(groupBox);
        radGroupScale->setObjectName(QString::fromUtf8("radGroupScale"));

        horizontalLayout->addWidget(radGroupScale);


        gridLayout->addWidget(groupBox, 2, 0, 1, 2);


        retranslateUi(QgsRuleBasedRendererV2Widget);

        QMetaObject::connectSlotsByName(QgsRuleBasedRendererV2Widget);
    } // setupUi

    void retranslateUi(QWidget *QgsRuleBasedRendererV2Widget)
    {
        QgsRuleBasedRendererV2Widget->setWindowTitle(QApplication::translate("QgsRuleBasedRendererV2Widget", "Form", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeRules->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("QgsRuleBasedRendererV2Widget", "Priority", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsRuleBasedRendererV2Widget", "Max. scale", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsRuleBasedRendererV2Widget", "Min. scale", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsRuleBasedRendererV2Widget", "Rule", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsRuleBasedRendererV2Widget", "Label", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(4, QApplication::translate("QgsRuleBasedRendererV2Widget", "Priority when symbol levels are enabled (only first matching rule will be applied)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddRule->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Add", 0, QApplication::UnicodeUTF8));
        btnEditRule->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Edit", 0, QApplication::UnicodeUTF8));
        btnRemoveRule->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Remove", 0, QApplication::UnicodeUTF8));
        btnRefineRule->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Refine", 0, QApplication::UnicodeUTF8));
        btnIncreasePriority->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Increase priority", 0, QApplication::UnicodeUTF8));
        btnDecreasePriority->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Decrease priority", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        chkEnableSymbolLevels->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Enable symbol levels", 0, QApplication::UnicodeUTF8));
        chkUsingFirstRule->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Use only first matched rule", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Behavior", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Rule grouping", 0, QApplication::UnicodeUTF8));
        radNoGrouping->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "None", "No grouping for displaying rules", QApplication::UnicodeUTF8));
        radGroupFilter->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "By filter", "Group rules by filter", QApplication::UnicodeUTF8));
        radGroupScale->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "By scale", "Group rules by scale", QApplication::UnicodeUTF8));
        Q_UNUSED(QgsRuleBasedRendererV2Widget);
    } // retranslateUi

};

namespace Ui {
    class QgsRuleBasedRendererV2Widget: public Ui_QgsRuleBasedRendererV2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRULEBASEDRENDERERV2WIDGET_H
