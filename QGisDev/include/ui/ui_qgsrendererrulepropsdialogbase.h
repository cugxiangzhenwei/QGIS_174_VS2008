/********************************************************************************
** Form generated from reading ui file 'qgsrendererrulepropsdialogbase.ui'
**
** Created: Tue Mar 13 10:23:49 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSRENDERERRULEPROPSDIALOGBASE_H
#define UI_QGSRENDERERRULEPROPSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsRendererRulePropsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLineEdit *editLabel;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editFilter;
    QPushButton *btnExpressionBuilder;
    QPushButton *btnTestFilter;
    QLabel *label_4;
    QLineEdit *editDescription;
    QGroupBox *groupScale;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinMinScale;
    QLabel *label_3;
    QSpinBox *spinMaxScale;
    QGroupBox *groupSymbol;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRendererRulePropsDialog)
    {
        if (QgsRendererRulePropsDialog->objectName().isEmpty())
            QgsRendererRulePropsDialog->setObjectName(QString::fromUtf8("QgsRendererRulePropsDialog"));
        QgsRendererRulePropsDialog->resize(558, 298);
        verticalLayout = new QVBoxLayout(QgsRendererRulePropsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_1 = new QLabel(QgsRendererRulePropsDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        editLabel = new QLineEdit(QgsRendererRulePropsDialog);
        editLabel->setObjectName(QString::fromUtf8("editLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editLabel);

        label_5 = new QLabel(QgsRendererRulePropsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editFilter = new QLineEdit(QgsRendererRulePropsDialog);
        editFilter->setObjectName(QString::fromUtf8("editFilter"));

        horizontalLayout->addWidget(editFilter);

        btnExpressionBuilder = new QPushButton(QgsRendererRulePropsDialog);
        btnExpressionBuilder->setObjectName(QString::fromUtf8("btnExpressionBuilder"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnExpressionBuilder->sizePolicy().hasHeightForWidth());
        btnExpressionBuilder->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnExpressionBuilder);

        btnTestFilter = new QPushButton(QgsRendererRulePropsDialog);
        btnTestFilter->setObjectName(QString::fromUtf8("btnTestFilter"));

        horizontalLayout->addWidget(btnTestFilter);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_4 = new QLabel(QgsRendererRulePropsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        editDescription = new QLineEdit(QgsRendererRulePropsDialog);
        editDescription->setObjectName(QString::fromUtf8("editDescription"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editDescription);


        verticalLayout->addLayout(formLayout);

        groupScale = new QGroupBox(QgsRendererRulePropsDialog);
        groupScale->setObjectName(QString::fromUtf8("groupScale"));
        groupScale->setCheckable(true);
        groupScale->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(groupScale);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupScale);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        spinMinScale = new QSpinBox(groupScale);
        spinMinScale->setObjectName(QString::fromUtf8("spinMinScale"));
        spinMinScale->setMinimum(0);
        spinMinScale->setMaximum(1000000000);
        spinMinScale->setSingleStep(1000);
        spinMinScale->setValue(1000);

        horizontalLayout_2->addWidget(spinMinScale);

        label_3 = new QLabel(groupScale);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        spinMaxScale = new QSpinBox(groupScale);
        spinMaxScale->setObjectName(QString::fromUtf8("spinMaxScale"));
        spinMaxScale->setMinimum(0);
        spinMaxScale->setMaximum(1000000000);
        spinMaxScale->setSingleStep(1000);
        spinMaxScale->setValue(1000);

        horizontalLayout_2->addWidget(spinMaxScale);


        verticalLayout->addWidget(groupScale);

        groupSymbol = new QGroupBox(QgsRendererRulePropsDialog);
        groupSymbol->setObjectName(QString::fromUtf8("groupSymbol"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSymbol->sizePolicy().hasHeightForWidth());
        groupSymbol->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(groupSymbol);

        buttonBox = new QDialogButtonBox(QgsRendererRulePropsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(editLabel, editFilter);
        QWidget::setTabOrder(editFilter, btnExpressionBuilder);
        QWidget::setTabOrder(btnExpressionBuilder, btnTestFilter);
        QWidget::setTabOrder(btnTestFilter, editDescription);
        QWidget::setTabOrder(editDescription, groupScale);
        QWidget::setTabOrder(groupScale, spinMinScale);
        QWidget::setTabOrder(spinMinScale, spinMaxScale);
        QWidget::setTabOrder(spinMaxScale, buttonBox);

        retranslateUi(QgsRendererRulePropsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsRendererRulePropsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsRendererRulePropsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsRendererRulePropsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsRendererRulePropsDialog)
    {
        QgsRendererRulePropsDialog->setWindowTitle(QApplication::translate("QgsRendererRulePropsDialog", "Rule properties", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("QgsRendererRulePropsDialog", "Label", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsRendererRulePropsDialog", "Filter", 0, QApplication::UnicodeUTF8));
        btnExpressionBuilder->setText(QApplication::translate("QgsRendererRulePropsDialog", "...", 0, QApplication::UnicodeUTF8));
        btnTestFilter->setText(QApplication::translate("QgsRendererRulePropsDialog", "Test", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsRendererRulePropsDialog", "Description", 0, QApplication::UnicodeUTF8));
        groupScale->setTitle(QApplication::translate("QgsRendererRulePropsDialog", "Scale range", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsRendererRulePropsDialog", "Min. scale", 0, QApplication::UnicodeUTF8));
        spinMinScale->setPrefix(QApplication::translate("QgsRendererRulePropsDialog", "1 : ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsRendererRulePropsDialog", "Max. scale", 0, QApplication::UnicodeUTF8));
        spinMaxScale->setPrefix(QApplication::translate("QgsRendererRulePropsDialog", "1 : ", 0, QApplication::UnicodeUTF8));
        groupSymbol->setTitle(QApplication::translate("QgsRendererRulePropsDialog", "Symbol", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsRendererRulePropsDialog);
    } // retranslateUi

};

namespace Ui {
    class QgsRendererRulePropsDialog: public Ui_QgsRendererRulePropsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERRULEPROPSDIALOGBASE_H
