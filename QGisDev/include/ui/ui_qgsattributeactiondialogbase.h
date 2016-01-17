/********************************************************************************
** Form generated from reading ui file 'qgsattributeactiondialogbase.ui'
**
** Created: Tue Mar 13 10:24:12 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEACTIONDIALOGBASE_H
#define UI_QGSATTRIBUTEACTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeActionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTableWidget *attributeActionTable;
    QPushButton *insertButton;
    QPushButton *updateButton;
    QPushButton *moveUpButton;
    QPushButton *moveDownButton;
    QPushButton *removeButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *actionName;
    QLabel *textLabel2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *actionAction;
    QToolButton *browseButton;
    QCheckBox *captureCB;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *fieldComboBox;
    QPushButton *insertFieldButton;
    QComboBox *actionType;
    QLabel *label;

    void setupUi(QWidget *QgsAttributeActionDialogBase)
    {
        if (QgsAttributeActionDialogBase->objectName().isEmpty())
            QgsAttributeActionDialogBase->setObjectName(QString::fromUtf8("QgsAttributeActionDialogBase"));
        QgsAttributeActionDialogBase->resize(695, 449);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsAttributeActionDialogBase->sizePolicy().hasHeightForWidth());
        QgsAttributeActionDialogBase->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(QgsAttributeActionDialogBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(QgsAttributeActionDialogBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        attributeActionTable = new QTableWidget(groupBox_2);
        if (attributeActionTable->columnCount() < 4)
            attributeActionTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        attributeActionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        attributeActionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        attributeActionTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        attributeActionTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        attributeActionTable->setObjectName(QString::fromUtf8("attributeActionTable"));
        sizePolicy.setHeightForWidth(attributeActionTable->sizePolicy().hasHeightForWidth());
        attributeActionTable->setSizePolicy(sizePolicy);
        attributeActionTable->setSelectionMode(QAbstractItemView::SingleSelection);
        attributeActionTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        attributeActionTable->setColumnCount(4);

        gridLayout_3->addWidget(attributeActionTable, 0, 0, 1, 5);

        insertButton = new QPushButton(groupBox_2);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));

        gridLayout_3->addWidget(insertButton, 1, 0, 1, 1);

        updateButton = new QPushButton(groupBox_2);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        gridLayout_3->addWidget(updateButton, 1, 1, 1, 1);

        moveUpButton = new QPushButton(groupBox_2);
        moveUpButton->setObjectName(QString::fromUtf8("moveUpButton"));

        gridLayout_3->addWidget(moveUpButton, 1, 2, 1, 1);

        moveDownButton = new QPushButton(groupBox_2);
        moveDownButton->setObjectName(QString::fromUtf8("moveDownButton"));

        gridLayout_3->addWidget(moveDownButton, 1, 3, 1, 1);

        removeButton = new QPushButton(groupBox_2);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        gridLayout_3->addWidget(removeButton, 1, 4, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(QgsAttributeActionDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);

        actionName = new QLineEdit(groupBox);
        actionName->setObjectName(QString::fromUtf8("actionName"));

        gridLayout->addWidget(actionName, 1, 1, 1, 1);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        actionAction = new QLineEdit(groupBox);
        actionAction->setObjectName(QString::fromUtf8("actionAction"));

        horizontalLayout->addWidget(actionAction);

        browseButton = new QToolButton(groupBox);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        horizontalLayout->addWidget(browseButton);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        captureCB = new QCheckBox(groupBox);
        captureCB->setObjectName(QString::fromUtf8("captureCB"));

        gridLayout->addWidget(captureCB, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        fieldComboBox = new QComboBox(groupBox);
        fieldComboBox->setObjectName(QString::fromUtf8("fieldComboBox"));

        horizontalLayout_2->addWidget(fieldComboBox);

        insertFieldButton = new QPushButton(groupBox);
        insertFieldButton->setObjectName(QString::fromUtf8("insertFieldButton"));

        horizontalLayout_2->addWidget(insertFieldButton);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        actionType = new QComboBox(groupBox);
        actionType->setObjectName(QString::fromUtf8("actionType"));

        gridLayout->addWidget(actionType, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(actionName);
        textLabel2->setBuddy(actionAction);
        label->setBuddy(actionType);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(attributeActionTable, insertButton);
        QWidget::setTabOrder(insertButton, updateButton);
        QWidget::setTabOrder(updateButton, moveUpButton);
        QWidget::setTabOrder(moveUpButton, moveDownButton);
        QWidget::setTabOrder(moveDownButton, removeButton);
        QWidget::setTabOrder(removeButton, actionType);
        QWidget::setTabOrder(actionType, actionName);
        QWidget::setTabOrder(actionName, actionAction);
        QWidget::setTabOrder(actionAction, browseButton);
        QWidget::setTabOrder(browseButton, captureCB);
        QWidget::setTabOrder(captureCB, fieldComboBox);
        QWidget::setTabOrder(fieldComboBox, insertFieldButton);

        retranslateUi(QgsAttributeActionDialogBase);

        QMetaObject::connectSlotsByName(QgsAttributeActionDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeActionDialogBase)
    {
        QgsAttributeActionDialogBase->setWindowTitle(QApplication::translate("QgsAttributeActionDialogBase", "Attribute Actions", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsAttributeActionDialogBase", "Action list", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = attributeActionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsAttributeActionDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = attributeActionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsAttributeActionDialogBase", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = attributeActionTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsAttributeActionDialogBase", "Action", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = attributeActionTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsAttributeActionDialogBase", "Capture", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        attributeActionTable->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "This list contains all actions that have been defined for the current layer. Add actions by entering the details in the controls below and then pressing the Insert action button. Actions can be edited here by double clicking on the item.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        insertButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Inserts the action into the list above", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        insertButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Insert action", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        updateButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Update the selected action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        updateButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Update action", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        moveUpButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Move the selected action up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        moveUpButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Move up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        moveDownButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Move the selected action down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        moveDownButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Move down", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        removeButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Remove the selected action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        removeButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Remove", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsAttributeActionDialogBase", "Action properties", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the name of an action here. The name should be unique (qgis will make it unique if necessary).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(QApplication::translate("QgsAttributeActionDialogBase", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionName->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action name here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionName->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the name of an action here. The name should be unique (qgis will make it unique if necessary).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        textLabel2->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action here. This can be any program, script or command that is available on your system. When the action is invoked any set of characters that start with a % and then have the name of a field will be replaced by the value of that field. The special characters %% will be replaced by the value of the field that was selected. Double quote marks group text into single arguments to the program, script or command. Double quotes will be ignored if prefixed with a backslash", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        textLabel2->setText(QApplication::translate("QgsAttributeActionDialogBase", "Action", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAction->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action command here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionAction->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action here. This can be any program, script or command that is available on your system. When the action is invoked any set of characters that start with a % and then have the name of a field will be replaced by the value of that field. The special characters %% will be replaced by the value of the field that was selected. Double quote marks group text into single arguments to the program, script or command. Double quotes will be ignored if prefixed with a backslash", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        browseButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Browse for action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        browseButton->setStatusTip(QApplication::translate("QgsAttributeActionDialogBase", "Click to browse for an action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        browseButton->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Clicking the button will let you select an application to use as the action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        browseButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        captureCB->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Captures any output from the action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        captureCB->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Captures the standard output or error generated by the action and displays it in a dialog box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        captureCB->setText(QApplication::translate("QgsAttributeActionDialogBase", "Capture output", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fieldComboBox->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "The valid attribute names for this layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        insertFieldButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Inserts the selected field into the action, prepended with a %", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        insertFieldButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Insert field", 0, QApplication::UnicodeUTF8));
        actionType->clear();
        actionType->insertItems(0, QStringList()
         << QApplication::translate("QgsAttributeActionDialogBase", "Generic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeActionDialogBase", "Python", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeActionDialogBase", "Mac", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeActionDialogBase", "Windows", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeActionDialogBase", "Unix", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("QgsAttributeActionDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsAttributeActionDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeActionDialogBase: public Ui_QgsAttributeActionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEACTIONDIALOGBASE_H
