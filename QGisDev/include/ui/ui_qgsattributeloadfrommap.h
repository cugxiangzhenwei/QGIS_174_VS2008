/********************************************************************************
** Form generated from reading ui file 'qgsattributeloadfrommap.ui'
**
** Created: Tue Mar 13 10:24:12 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTELOADFROMMAP_H
#define UI_QGSATTRIBUTELOADFROMMAP_H

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
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeLoadValues
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *layerLabel;
    QLabel *keyLabel;
    QComboBox *layerComboBox;
    QTableWidget *previewTableWidget;
    QLabel *valueTableLabel;
    QLabel *valueLabel;
    QComboBox *valueComboBox;
    QPushButton *previewButton;
    QComboBox *keyComboBox;

    void setupUi(QDialog *QgsAttributeLoadValues)
    {
        if (QgsAttributeLoadValues->objectName().isEmpty())
            QgsAttributeLoadValues->setObjectName(QString::fromUtf8("QgsAttributeLoadValues"));
        QgsAttributeLoadValues->resize(362, 374);
        buttonBox = new QDialogButtonBox(QgsAttributeLoadValues);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 340, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(QgsAttributeLoadValues);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 341, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        layerLabel = new QLabel(gridLayoutWidget);
        layerLabel->setObjectName(QString::fromUtf8("layerLabel"));

        gridLayout->addWidget(layerLabel, 1, 0, 1, 1);

        keyLabel = new QLabel(gridLayoutWidget);
        keyLabel->setObjectName(QString::fromUtf8("keyLabel"));

        gridLayout->addWidget(keyLabel, 3, 0, 1, 1);

        layerComboBox = new QComboBox(gridLayoutWidget);
        layerComboBox->setObjectName(QString::fromUtf8("layerComboBox"));

        gridLayout->addWidget(layerComboBox, 1, 1, 1, 2);

        previewTableWidget = new QTableWidget(gridLayoutWidget);
        if (previewTableWidget->columnCount() < 2)
            previewTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        previewTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        previewTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        previewTableWidget->setObjectName(QString::fromUtf8("previewTableWidget"));

        gridLayout->addWidget(previewTableWidget, 5, 0, 1, 3);

        valueTableLabel = new QLabel(gridLayoutWidget);
        valueTableLabel->setObjectName(QString::fromUtf8("valueTableLabel"));

        gridLayout->addWidget(valueTableLabel, 0, 0, 1, 3);

        valueLabel = new QLabel(gridLayoutWidget);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        gridLayout->addWidget(valueLabel, 2, 0, 1, 1);

        valueComboBox = new QComboBox(gridLayoutWidget);
        valueComboBox->setObjectName(QString::fromUtf8("valueComboBox"));

        gridLayout->addWidget(valueComboBox, 2, 1, 1, 1);

        previewButton = new QPushButton(gridLayoutWidget);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));

        gridLayout->addWidget(previewButton, 2, 2, 2, 1);

        keyComboBox = new QComboBox(gridLayoutWidget);
        keyComboBox->setObjectName(QString::fromUtf8("keyComboBox"));

        gridLayout->addWidget(keyComboBox, 3, 1, 1, 1);

        QWidget::setTabOrder(layerComboBox, valueComboBox);
        QWidget::setTabOrder(valueComboBox, keyComboBox);
        QWidget::setTabOrder(keyComboBox, previewButton);
        QWidget::setTabOrder(previewButton, previewTableWidget);
        QWidget::setTabOrder(previewTableWidget, buttonBox);

        retranslateUi(QgsAttributeLoadValues);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAttributeLoadValues, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAttributeLoadValues, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAttributeLoadValues);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeLoadValues)
    {
        QgsAttributeLoadValues->setWindowTitle(QApplication::translate("QgsAttributeLoadValues", "Load values from layer", 0, QApplication::UnicodeUTF8));
        layerLabel->setText(QApplication::translate("QgsAttributeLoadValues", "Layer", 0, QApplication::UnicodeUTF8));
        keyLabel->setText(QApplication::translate("QgsAttributeLoadValues", "Description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = previewTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsAttributeLoadValues", "Value", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = previewTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsAttributeLoadValues", "Description", 0, QApplication::UnicodeUTF8));
        valueTableLabel->setText(QApplication::translate("QgsAttributeLoadValues", "Select data from attributes in selected layer.", 0, QApplication::UnicodeUTF8));
        valueLabel->setText(QApplication::translate("QgsAttributeLoadValues", "Value", 0, QApplication::UnicodeUTF8));
        previewButton->setText(QApplication::translate("QgsAttributeLoadValues", "View All", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsAttributeLoadValues);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeLoadValues: public Ui_QgsAttributeLoadValues {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTELOADFROMMAP_H
