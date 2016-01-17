/********************************************************************************
** Form generated from reading ui file 'qgsattributetypeedit.ui'
**
** Created: Tue Mar 13 10:24:11 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTETYPEEDIT_H
#define UI_QGSATTRIBUTETYPEEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeTypeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *selectionComboBox;
    QStackedWidget *stackedWidget;
    QWidget *lineEditPage;
    QVBoxLayout *verticalLayout_1;
    QLabel *lineEditLabel;
    QSpacerItem *verticalSpacer_5;
    QWidget *classificationPage;
    QVBoxLayout *verticalLayout_10;
    QLabel *classificationLabel;
    QSpacerItem *verticalSpacer_6;
    QWidget *rangePage;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalRangeLayout;
    QLabel *rangeLabel;
    QComboBox *rangeWidget;
    QGridLayout *gridRangeLayout;
    QLabel *minimumLabel;
    QLabel *maximumLabel;
    QLabel *stepLabel;
    QStackedWidget *rangeStackedWidget;
    QWidget *intPage;
    QVBoxLayout *verticalLayout_11;
    QSpinBox *minimumSpinBox;
    QSpinBox *maximumSpinBox;
    QSpinBox *stepSpinBox;
    QWidget *doublePage;
    QVBoxLayout *verticalLayout_12;
    QDoubleSpinBox *minimumDoubleSpinBox;
    QDoubleSpinBox *maximumDoubleSpinBox;
    QDoubleSpinBox *stepDoubleSpinBox;
    QLabel *valuesLabel;
    QWidget *uniqueValuesPage;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QCheckBox *editableUniqueValues;
    QSpacerItem *verticalSpacer;
    QWidget *fileNamePage;
    QVBoxLayout *verticalLayout_5;
    QLabel *fileNameLabel;
    QSpacerItem *verticalSpacer_2;
    QWidget *valueMapPage;
    QGridLayout *gridLayout;
    QLabel *valueMapLabel;
    QPushButton *loadFromLayerButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QPushButton *removeSelectedButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *loadFromCSVButton;
    QWidget *enumerationPage;
    QVBoxLayout *verticalLayout_7;
    QLabel *enumerationLabel;
    QLabel *enumerationWarningLabel;
    QSpacerItem *verticalSpacer_3;
    QWidget *immutablePage;
    QVBoxLayout *verticalLayout_8;
    QLabel *immutableLabel;
    QSpacerItem *verticalSpacer_4;
    QWidget *hiddenPage;
    QVBoxLayout *verticalLayout_9;
    QLabel *hiddenLabel;
    QSpacerItem *verticalSpacer_7;
    QWidget *checkBoxPage;
    QVBoxLayout *verticalLayout_13;
    QGridLayout *gridLayout_2;
    QLineEdit *leCheckedState;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *leUncheckedState;
    QSpacerItem *verticalSpacer_8;
    QWidget *textEditPage;
    QVBoxLayout *verticalLayout_25;
    QLabel *hiddenLabel_3;
    QSpacerItem *verticalSpacer_17;
    QWidget *calendarPage;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_9;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAttributeTypeDialog)
    {
        if (QgsAttributeTypeDialog->objectName().isEmpty())
            QgsAttributeTypeDialog->setObjectName(QString::fromUtf8("QgsAttributeTypeDialog"));
        QgsAttributeTypeDialog->resize(471, 428);
        verticalLayout = new QVBoxLayout(QgsAttributeTypeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        selectionComboBox = new QComboBox(QgsAttributeTypeDialog);
        selectionComboBox->setObjectName(QString::fromUtf8("selectionComboBox"));

        verticalLayout->addWidget(selectionComboBox);

        stackedWidget = new QStackedWidget(QgsAttributeTypeDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        lineEditPage = new QWidget();
        lineEditPage->setObjectName(QString::fromUtf8("lineEditPage"));
        verticalLayout_1 = new QVBoxLayout(lineEditPage);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        lineEditLabel = new QLabel(lineEditPage);
        lineEditLabel->setObjectName(QString::fromUtf8("lineEditLabel"));

        verticalLayout_1->addWidget(lineEditLabel);

        verticalSpacer_5 = new QSpacerItem(20, 321, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer_5);

        stackedWidget->addWidget(lineEditPage);
        classificationPage = new QWidget();
        classificationPage->setObjectName(QString::fromUtf8("classificationPage"));
        verticalLayout_10 = new QVBoxLayout(classificationPage);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        classificationLabel = new QLabel(classificationPage);
        classificationLabel->setObjectName(QString::fromUtf8("classificationLabel"));
        classificationLabel->setWordWrap(true);

        verticalLayout_10->addWidget(classificationLabel);

        verticalSpacer_6 = new QSpacerItem(20, 304, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_6);

        stackedWidget->addWidget(classificationPage);
        rangePage = new QWidget();
        rangePage->setObjectName(QString::fromUtf8("rangePage"));
        verticalLayout_4 = new QVBoxLayout(rangePage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalRangeLayout = new QVBoxLayout();
        verticalRangeLayout->setObjectName(QString::fromUtf8("verticalRangeLayout"));
        rangeLabel = new QLabel(rangePage);
        rangeLabel->setObjectName(QString::fromUtf8("rangeLabel"));
        rangeLabel->setWordWrap(true);

        verticalRangeLayout->addWidget(rangeLabel);

        rangeWidget = new QComboBox(rangePage);
        rangeWidget->setObjectName(QString::fromUtf8("rangeWidget"));

        verticalRangeLayout->addWidget(rangeWidget);

        gridRangeLayout = new QGridLayout();
        gridRangeLayout->setObjectName(QString::fromUtf8("gridRangeLayout"));
        minimumLabel = new QLabel(rangePage);
        minimumLabel->setObjectName(QString::fromUtf8("minimumLabel"));

        gridRangeLayout->addWidget(minimumLabel, 0, 0, 1, 1);

        maximumLabel = new QLabel(rangePage);
        maximumLabel->setObjectName(QString::fromUtf8("maximumLabel"));

        gridRangeLayout->addWidget(maximumLabel, 1, 0, 1, 1);

        stepLabel = new QLabel(rangePage);
        stepLabel->setObjectName(QString::fromUtf8("stepLabel"));

        gridRangeLayout->addWidget(stepLabel, 2, 0, 1, 1);

        rangeStackedWidget = new QStackedWidget(rangePage);
        rangeStackedWidget->setObjectName(QString::fromUtf8("rangeStackedWidget"));
        intPage = new QWidget();
        intPage->setObjectName(QString::fromUtf8("intPage"));
        verticalLayout_11 = new QVBoxLayout(intPage);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        minimumSpinBox = new QSpinBox(intPage);
        minimumSpinBox->setObjectName(QString::fromUtf8("minimumSpinBox"));
        minimumSpinBox->setMaximum(999999999);

        verticalLayout_11->addWidget(minimumSpinBox);

        maximumSpinBox = new QSpinBox(intPage);
        maximumSpinBox->setObjectName(QString::fromUtf8("maximumSpinBox"));
        maximumSpinBox->setMaximum(999999999);
        maximumSpinBox->setValue(5);

        verticalLayout_11->addWidget(maximumSpinBox);

        stepSpinBox = new QSpinBox(intPage);
        stepSpinBox->setObjectName(QString::fromUtf8("stepSpinBox"));
        stepSpinBox->setMaximum(999999999);
        stepSpinBox->setValue(1);

        verticalLayout_11->addWidget(stepSpinBox);

        rangeStackedWidget->addWidget(intPage);
        doublePage = new QWidget();
        doublePage->setObjectName(QString::fromUtf8("doublePage"));
        verticalLayout_12 = new QVBoxLayout(doublePage);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        minimumDoubleSpinBox = new QDoubleSpinBox(doublePage);
        minimumDoubleSpinBox->setObjectName(QString::fromUtf8("minimumDoubleSpinBox"));
        minimumDoubleSpinBox->setMaximum(1e+09);

        verticalLayout_12->addWidget(minimumDoubleSpinBox);

        maximumDoubleSpinBox = new QDoubleSpinBox(doublePage);
        maximumDoubleSpinBox->setObjectName(QString::fromUtf8("maximumDoubleSpinBox"));
        maximumDoubleSpinBox->setMaximum(1e+09);
        maximumDoubleSpinBox->setValue(5);

        verticalLayout_12->addWidget(maximumDoubleSpinBox);

        stepDoubleSpinBox = new QDoubleSpinBox(doublePage);
        stepDoubleSpinBox->setObjectName(QString::fromUtf8("stepDoubleSpinBox"));
        stepDoubleSpinBox->setMaximum(1e+09);
        stepDoubleSpinBox->setValue(1);

        verticalLayout_12->addWidget(stepDoubleSpinBox);

        rangeStackedWidget->addWidget(doublePage);

        gridRangeLayout->addWidget(rangeStackedWidget, 0, 1, 3, 1);


        verticalRangeLayout->addLayout(gridRangeLayout);

        valuesLabel = new QLabel(rangePage);
        valuesLabel->setObjectName(QString::fromUtf8("valuesLabel"));
        valuesLabel->setWordWrap(true);

        verticalRangeLayout->addWidget(valuesLabel);


        verticalLayout_4->addLayout(verticalRangeLayout);

        stackedWidget->addWidget(rangePage);
        uniqueValuesPage = new QWidget();
        uniqueValuesPage->setObjectName(QString::fromUtf8("uniqueValuesPage"));
        verticalLayout_3 = new QVBoxLayout(uniqueValuesPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(uniqueValuesPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        editableUniqueValues = new QCheckBox(uniqueValuesPage);
        editableUniqueValues->setObjectName(QString::fromUtf8("editableUniqueValues"));

        verticalLayout_2->addWidget(editableUniqueValues);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);

        stackedWidget->addWidget(uniqueValuesPage);
        fileNamePage = new QWidget();
        fileNamePage->setObjectName(QString::fromUtf8("fileNamePage"));
        verticalLayout_5 = new QVBoxLayout(fileNamePage);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        fileNameLabel = new QLabel(fileNamePage);
        fileNameLabel->setObjectName(QString::fromUtf8("fileNameLabel"));
        fileNameLabel->setWordWrap(true);

        verticalLayout_5->addWidget(fileNameLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        stackedWidget->addWidget(fileNamePage);
        valueMapPage = new QWidget();
        valueMapPage->setObjectName(QString::fromUtf8("valueMapPage"));
        gridLayout = new QGridLayout(valueMapPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        valueMapLabel = new QLabel(valueMapPage);
        valueMapLabel->setObjectName(QString::fromUtf8("valueMapLabel"));
        valueMapLabel->setWordWrap(true);

        gridLayout->addWidget(valueMapLabel, 0, 0, 1, 3);

        loadFromLayerButton = new QPushButton(valueMapPage);
        loadFromLayerButton->setObjectName(QString::fromUtf8("loadFromLayerButton"));

        gridLayout->addWidget(loadFromLayerButton, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(227, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        tableWidget = new QTableWidget(valueMapPage);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 3);

        removeSelectedButton = new QPushButton(valueMapPage);
        removeSelectedButton->setObjectName(QString::fromUtf8("removeSelectedButton"));

        gridLayout->addWidget(removeSelectedButton, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(227, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 1, 1, 2);

        loadFromCSVButton = new QPushButton(valueMapPage);
        loadFromCSVButton->setObjectName(QString::fromUtf8("loadFromCSVButton"));

        gridLayout->addWidget(loadFromCSVButton, 1, 1, 1, 1);

        stackedWidget->addWidget(valueMapPage);
        enumerationPage = new QWidget();
        enumerationPage->setObjectName(QString::fromUtf8("enumerationPage"));
        verticalLayout_7 = new QVBoxLayout(enumerationPage);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        enumerationLabel = new QLabel(enumerationPage);
        enumerationLabel->setObjectName(QString::fromUtf8("enumerationLabel"));
        enumerationLabel->setWordWrap(true);

        verticalLayout_7->addWidget(enumerationLabel);

        enumerationWarningLabel = new QLabel(enumerationPage);
        enumerationWarningLabel->setObjectName(QString::fromUtf8("enumerationWarningLabel"));

        verticalLayout_7->addWidget(enumerationWarningLabel);

        verticalSpacer_3 = new QSpacerItem(20, 304, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        stackedWidget->addWidget(enumerationPage);
        immutablePage = new QWidget();
        immutablePage->setObjectName(QString::fromUtf8("immutablePage"));
        verticalLayout_8 = new QVBoxLayout(immutablePage);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        immutableLabel = new QLabel(immutablePage);
        immutableLabel->setObjectName(QString::fromUtf8("immutableLabel"));
        immutableLabel->setWordWrap(true);

        verticalLayout_8->addWidget(immutableLabel);

        verticalSpacer_4 = new QSpacerItem(20, 304, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        stackedWidget->addWidget(immutablePage);
        hiddenPage = new QWidget();
        hiddenPage->setObjectName(QString::fromUtf8("hiddenPage"));
        verticalLayout_9 = new QVBoxLayout(hiddenPage);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        hiddenLabel = new QLabel(hiddenPage);
        hiddenLabel->setObjectName(QString::fromUtf8("hiddenLabel"));
        hiddenLabel->setWordWrap(true);

        verticalLayout_9->addWidget(hiddenLabel);

        verticalSpacer_7 = new QSpacerItem(20, 304, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);

        stackedWidget->addWidget(hiddenPage);
        checkBoxPage = new QWidget();
        checkBoxPage->setObjectName(QString::fromUtf8("checkBoxPage"));
        checkBoxPage->setMaximumSize(QSize(453, 333));
        verticalLayout_13 = new QVBoxLayout(checkBoxPage);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        leCheckedState = new QLineEdit(checkBoxPage);
        leCheckedState->setObjectName(QString::fromUtf8("leCheckedState"));

        gridLayout_2->addWidget(leCheckedState, 0, 2, 1, 1);

        label_2 = new QLabel(checkBoxPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(checkBoxPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        leUncheckedState = new QLineEdit(checkBoxPage);
        leUncheckedState->setObjectName(QString::fromUtf8("leUncheckedState"));

        gridLayout_2->addWidget(leUncheckedState, 1, 2, 1, 1);


        verticalLayout_13->addLayout(gridLayout_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_8);

        stackedWidget->addWidget(checkBoxPage);
        textEditPage = new QWidget();
        textEditPage->setObjectName(QString::fromUtf8("textEditPage"));
        verticalLayout_25 = new QVBoxLayout(textEditPage);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        hiddenLabel_3 = new QLabel(textEditPage);
        hiddenLabel_3->setObjectName(QString::fromUtf8("hiddenLabel_3"));
        hiddenLabel_3->setWordWrap(true);

        verticalLayout_25->addWidget(hiddenLabel_3);

        verticalSpacer_17 = new QSpacerItem(20, 302, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_25->addItem(verticalSpacer_17);

        stackedWidget->addWidget(textEditPage);
        calendarPage = new QWidget();
        calendarPage->setObjectName(QString::fromUtf8("calendarPage"));
        verticalLayout_6 = new QVBoxLayout(calendarPage);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(calendarPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_6->addWidget(label_4);

        verticalSpacer_9 = new QSpacerItem(20, 303, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_9);

        stackedWidget->addWidget(calendarPage);

        verticalLayout->addWidget(stackedWidget);

        buttonBox = new QDialogButtonBox(QgsAttributeTypeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsAttributeTypeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAttributeTypeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAttributeTypeDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);
        rangeStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsAttributeTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeTypeDialog)
    {
        QgsAttributeTypeDialog->setWindowTitle(QApplication::translate("QgsAttributeTypeDialog", "Attribute Edit Dialog", 0, QApplication::UnicodeUTF8));
        selectionComboBox->clear();
        selectionComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsAttributeTypeDialog", "Line edit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "Classification", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "Range", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "Unique values", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "File name", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "Value map", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "Enumeration", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "Immutable", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "Hidden", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "Checkbox", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "Text edit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeTypeDialog", "Calendar", 0, QApplication::UnicodeUTF8)
        );
        lineEditLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "Simple edit box. This is the default editation widget.", 0, QApplication::UnicodeUTF8));
        classificationLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "Displays combo box containing values of attribute used for classification.", 0, QApplication::UnicodeUTF8));
        rangeLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "Allows to set numeric values from a specified range. The edit widget can be either a slider or a spin box.", 0, QApplication::UnicodeUTF8));
        minimumLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "Minimum", 0, QApplication::UnicodeUTF8));
        maximumLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "Maximum", 0, QApplication::UnicodeUTF8));
        stepLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "Step", 0, QApplication::UnicodeUTF8));
        valuesLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "Local minimum/maximum = 0/0", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsAttributeTypeDialog", "The user can select one of the values already used in the attribute. If editable, a line edit is shown with autocompletion support, otherwise a combo box is used.", 0, QApplication::UnicodeUTF8));
        editableUniqueValues->setText(QApplication::translate("QgsAttributeTypeDialog", "Editable", 0, QApplication::UnicodeUTF8));
        fileNameLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "Simplifies file selection by adding a file chooser dialog.", 0, QApplication::UnicodeUTF8));
        valueMapLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "Combo box with predefined items. Value is stored in the attribute, description is shown in the combo box.", 0, QApplication::UnicodeUTF8));
        loadFromLayerButton->setText(QApplication::translate("QgsAttributeTypeDialog", "Load Data from layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsAttributeTypeDialog", "Value", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsAttributeTypeDialog", "Description", 0, QApplication::UnicodeUTF8));
        removeSelectedButton->setText(QApplication::translate("QgsAttributeTypeDialog", "Remove Selected", 0, QApplication::UnicodeUTF8));
        loadFromCSVButton->setText(QApplication::translate("QgsAttributeTypeDialog", "Load Data from CSV file", 0, QApplication::UnicodeUTF8));
        enumerationLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "Combo box with values that can be used within the column's type. Must be supported by the provider.", 0, QApplication::UnicodeUTF8));
        enumerationWarningLabel->setText(QString());
        immutableLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "An immutable attribute is read-only - the user is not able to modify the contents.", 0, QApplication::UnicodeUTF8));
        hiddenLabel->setText(QApplication::translate("QgsAttributeTypeDialog", "A hidden attribute will be invisible - the user is not able to see it's contents.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsAttributeTypeDialog", "Representation for checked state", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsAttributeTypeDialog", "Representation for unchecked state", 0, QApplication::UnicodeUTF8));
        hiddenLabel_3->setText(QApplication::translate("QgsAttributeTypeDialog", "A text edit field that accepts multiple lines will be used.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsAttributeTypeDialog", "A calendar widget to enter a date.", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsAttributeTypeDialog);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeTypeDialog: public Ui_QgsAttributeTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTETYPEEDIT_H
