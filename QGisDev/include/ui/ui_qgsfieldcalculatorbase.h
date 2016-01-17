/********************************************************************************
** Form generated from reading ui file 'qgsfieldcalculatorbase.ui'
**
** Created: Tue Mar 13 10:24:01 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSFIELDCALCULATORBASE_H
#define UI_QGSFIELDCALCULATORBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsFieldCalculatorBase
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *mOnlyUpdateSelectedCheckBox;
    QCheckBox *mUpdateExistingFieldCheckBox;
    QComboBox *mExistingFieldComboBox;
    QGroupBox *mNewFieldGroupBox;
    QGridLayout *gridLayout;
    QLabel *mFieldNameLabel;
    QLineEdit *mOutputFieldNameLineEdit;
    QLabel *mOutputFieldTypeLabel;
    QComboBox *mOutputFieldTypeComboBox;
    QLabel *mOutputFieldWidthLabel;
    QSpinBox *mOuputFieldWidthSpinBox;
    QLabel *mOutputFieldPrecisionLabel;
    QSpinBox *mOutputFieldPrecisionSpinBox;
    QGroupBox *mOperatorsGroupBox;
    QGridLayout *gridLayout_1;
    QPushButton *mPlusPushButton;
    QPushButton *mMultiplyPushButton;
    QPushButton *mSqrtButton;
    QPushButton *mSinButton;
    QPushButton *mTanButton;
    QPushButton *mACosButton;
    QPushButton *mOpenBracketPushButton;
    QPushButton *mMinusPushButton;
    QPushButton *mDividePushButton;
    QPushButton *mExpButton;
    QPushButton *mCosButton;
    QPushButton *mASinButton;
    QPushButton *mATanButton;
    QPushButton *mCloseBracketPushButton;
    QPushButton *mToRealButton;
    QPushButton *mToIntButton;
    QPushButton *mToStringButton;
    QPushButton *mLengthButton;
    QPushButton *mAreaButton;
    QPushButton *mRowNumButton;
    QPushButton *mConcatButton;
    QLabel *mFieldCalculatorExpressionLabel;
    QTextEdit *mExpressionTextEdit;
    QDialogButtonBox *mButtonBox;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QFrame *mValuesFrame;
    QGridLayout *gridLayout1;
    QPushButton *mAllPushButton;
    QListWidget *mValueListWidget;
    QListWidget *mFieldsListWidget;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *QgsFieldCalculatorBase)
    {
        if (QgsFieldCalculatorBase->objectName().isEmpty())
            QgsFieldCalculatorBase->setObjectName(QString::fromUtf8("QgsFieldCalculatorBase"));
        QgsFieldCalculatorBase->resize(689, 538);
        gridLayout_2 = new QGridLayout(QgsFieldCalculatorBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mOnlyUpdateSelectedCheckBox = new QCheckBox(QgsFieldCalculatorBase);
        mOnlyUpdateSelectedCheckBox->setObjectName(QString::fromUtf8("mOnlyUpdateSelectedCheckBox"));

        gridLayout_2->addWidget(mOnlyUpdateSelectedCheckBox, 0, 0, 1, 1);

        mUpdateExistingFieldCheckBox = new QCheckBox(QgsFieldCalculatorBase);
        mUpdateExistingFieldCheckBox->setObjectName(QString::fromUtf8("mUpdateExistingFieldCheckBox"));

        gridLayout_2->addWidget(mUpdateExistingFieldCheckBox, 0, 1, 1, 1);

        mExistingFieldComboBox = new QComboBox(QgsFieldCalculatorBase);
        mExistingFieldComboBox->setObjectName(QString::fromUtf8("mExistingFieldComboBox"));

        gridLayout_2->addWidget(mExistingFieldComboBox, 0, 2, 1, 1);

        mNewFieldGroupBox = new QGroupBox(QgsFieldCalculatorBase);
        mNewFieldGroupBox->setObjectName(QString::fromUtf8("mNewFieldGroupBox"));
        gridLayout = new QGridLayout(mNewFieldGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        mFieldNameLabel = new QLabel(mNewFieldGroupBox);
        mFieldNameLabel->setObjectName(QString::fromUtf8("mFieldNameLabel"));

        gridLayout->addWidget(mFieldNameLabel, 0, 0, 1, 1);

        mOutputFieldNameLineEdit = new QLineEdit(mNewFieldGroupBox);
        mOutputFieldNameLineEdit->setObjectName(QString::fromUtf8("mOutputFieldNameLineEdit"));

        gridLayout->addWidget(mOutputFieldNameLineEdit, 0, 1, 1, 3);

        mOutputFieldTypeLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldTypeLabel->setObjectName(QString::fromUtf8("mOutputFieldTypeLabel"));

        gridLayout->addWidget(mOutputFieldTypeLabel, 1, 0, 1, 1);

        mOutputFieldTypeComboBox = new QComboBox(mNewFieldGroupBox);
        mOutputFieldTypeComboBox->setObjectName(QString::fromUtf8("mOutputFieldTypeComboBox"));

        gridLayout->addWidget(mOutputFieldTypeComboBox, 1, 1, 1, 3);

        mOutputFieldWidthLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldWidthLabel->setObjectName(QString::fromUtf8("mOutputFieldWidthLabel"));

        gridLayout->addWidget(mOutputFieldWidthLabel, 2, 0, 1, 1);

        mOuputFieldWidthSpinBox = new QSpinBox(mNewFieldGroupBox);
        mOuputFieldWidthSpinBox->setObjectName(QString::fromUtf8("mOuputFieldWidthSpinBox"));
        mOuputFieldWidthSpinBox->setMinimum(0);
        mOuputFieldWidthSpinBox->setValue(5);

        gridLayout->addWidget(mOuputFieldWidthSpinBox, 2, 1, 1, 1);

        mOutputFieldPrecisionLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldPrecisionLabel->setObjectName(QString::fromUtf8("mOutputFieldPrecisionLabel"));

        gridLayout->addWidget(mOutputFieldPrecisionLabel, 2, 2, 1, 1);

        mOutputFieldPrecisionSpinBox = new QSpinBox(mNewFieldGroupBox);
        mOutputFieldPrecisionSpinBox->setObjectName(QString::fromUtf8("mOutputFieldPrecisionSpinBox"));
        mOutputFieldPrecisionSpinBox->setValue(2);

        gridLayout->addWidget(mOutputFieldPrecisionSpinBox, 2, 3, 1, 1);


        gridLayout_2->addWidget(mNewFieldGroupBox, 1, 0, 1, 3);

        mOperatorsGroupBox = new QGroupBox(QgsFieldCalculatorBase);
        mOperatorsGroupBox->setObjectName(QString::fromUtf8("mOperatorsGroupBox"));
        gridLayout_1 = new QGridLayout(mOperatorsGroupBox);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        gridLayout_1->setContentsMargins(-1, 5, -1, 5);
        mPlusPushButton = new QPushButton(mOperatorsGroupBox);
        mPlusPushButton->setObjectName(QString::fromUtf8("mPlusPushButton"));

        gridLayout_1->addWidget(mPlusPushButton, 0, 0, 1, 1);

        mMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        mMultiplyPushButton->setObjectName(QString::fromUtf8("mMultiplyPushButton"));

        gridLayout_1->addWidget(mMultiplyPushButton, 0, 1, 1, 1);

        mSqrtButton = new QPushButton(mOperatorsGroupBox);
        mSqrtButton->setObjectName(QString::fromUtf8("mSqrtButton"));

        gridLayout_1->addWidget(mSqrtButton, 0, 2, 1, 1);

        mSinButton = new QPushButton(mOperatorsGroupBox);
        mSinButton->setObjectName(QString::fromUtf8("mSinButton"));

        gridLayout_1->addWidget(mSinButton, 0, 3, 1, 1);

        mTanButton = new QPushButton(mOperatorsGroupBox);
        mTanButton->setObjectName(QString::fromUtf8("mTanButton"));

        gridLayout_1->addWidget(mTanButton, 0, 4, 1, 1);

        mACosButton = new QPushButton(mOperatorsGroupBox);
        mACosButton->setObjectName(QString::fromUtf8("mACosButton"));

        gridLayout_1->addWidget(mACosButton, 0, 5, 1, 1);

        mOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mOpenBracketPushButton->setObjectName(QString::fromUtf8("mOpenBracketPushButton"));

        gridLayout_1->addWidget(mOpenBracketPushButton, 0, 6, 1, 1);

        mMinusPushButton = new QPushButton(mOperatorsGroupBox);
        mMinusPushButton->setObjectName(QString::fromUtf8("mMinusPushButton"));

        gridLayout_1->addWidget(mMinusPushButton, 1, 0, 1, 1);

        mDividePushButton = new QPushButton(mOperatorsGroupBox);
        mDividePushButton->setObjectName(QString::fromUtf8("mDividePushButton"));

        gridLayout_1->addWidget(mDividePushButton, 1, 1, 1, 1);

        mExpButton = new QPushButton(mOperatorsGroupBox);
        mExpButton->setObjectName(QString::fromUtf8("mExpButton"));

        gridLayout_1->addWidget(mExpButton, 1, 2, 1, 1);

        mCosButton = new QPushButton(mOperatorsGroupBox);
        mCosButton->setObjectName(QString::fromUtf8("mCosButton"));

        gridLayout_1->addWidget(mCosButton, 1, 3, 1, 1);

        mASinButton = new QPushButton(mOperatorsGroupBox);
        mASinButton->setObjectName(QString::fromUtf8("mASinButton"));

        gridLayout_1->addWidget(mASinButton, 1, 4, 1, 1);

        mATanButton = new QPushButton(mOperatorsGroupBox);
        mATanButton->setObjectName(QString::fromUtf8("mATanButton"));

        gridLayout_1->addWidget(mATanButton, 1, 5, 1, 1);

        mCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mCloseBracketPushButton->setObjectName(QString::fromUtf8("mCloseBracketPushButton"));

        gridLayout_1->addWidget(mCloseBracketPushButton, 1, 6, 1, 1);

        mToRealButton = new QPushButton(mOperatorsGroupBox);
        mToRealButton->setObjectName(QString::fromUtf8("mToRealButton"));

        gridLayout_1->addWidget(mToRealButton, 2, 0, 1, 1);

        mToIntButton = new QPushButton(mOperatorsGroupBox);
        mToIntButton->setObjectName(QString::fromUtf8("mToIntButton"));

        gridLayout_1->addWidget(mToIntButton, 2, 1, 1, 1);

        mToStringButton = new QPushButton(mOperatorsGroupBox);
        mToStringButton->setObjectName(QString::fromUtf8("mToStringButton"));

        gridLayout_1->addWidget(mToStringButton, 2, 2, 1, 1);

        mLengthButton = new QPushButton(mOperatorsGroupBox);
        mLengthButton->setObjectName(QString::fromUtf8("mLengthButton"));

        gridLayout_1->addWidget(mLengthButton, 2, 3, 1, 1);

        mAreaButton = new QPushButton(mOperatorsGroupBox);
        mAreaButton->setObjectName(QString::fromUtf8("mAreaButton"));

        gridLayout_1->addWidget(mAreaButton, 2, 4, 1, 1);

        mRowNumButton = new QPushButton(mOperatorsGroupBox);
        mRowNumButton->setObjectName(QString::fromUtf8("mRowNumButton"));

        gridLayout_1->addWidget(mRowNumButton, 2, 5, 1, 1);

        mConcatButton = new QPushButton(mOperatorsGroupBox);
        mConcatButton->setObjectName(QString::fromUtf8("mConcatButton"));

        gridLayout_1->addWidget(mConcatButton, 2, 6, 1, 1);


        gridLayout_2->addWidget(mOperatorsGroupBox, 4, 0, 1, 3);

        mFieldCalculatorExpressionLabel = new QLabel(QgsFieldCalculatorBase);
        mFieldCalculatorExpressionLabel->setObjectName(QString::fromUtf8("mFieldCalculatorExpressionLabel"));

        gridLayout_2->addWidget(mFieldCalculatorExpressionLabel, 5, 0, 1, 1);

        mExpressionTextEdit = new QTextEdit(QgsFieldCalculatorBase);
        mExpressionTextEdit->setObjectName(QString::fromUtf8("mExpressionTextEdit"));
        mExpressionTextEdit->setMinimumSize(QSize(0, 32));

        gridLayout_2->addWidget(mExpressionTextEdit, 6, 0, 1, 3);

        mButtonBox = new QDialogButtonBox(QgsFieldCalculatorBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(mButtonBox, 7, 2, 1, 1);

        frame = new QFrame(QgsFieldCalculatorBase);
        frame->setObjectName(QString::fromUtf8("frame"));
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mValuesFrame = new QFrame(frame);
        mValuesFrame->setObjectName(QString::fromUtf8("mValuesFrame"));
        gridLayout1 = new QGridLayout(mValuesFrame);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(9, 0, -1, 6);
        mAllPushButton = new QPushButton(mValuesFrame);
        mAllPushButton->setObjectName(QString::fromUtf8("mAllPushButton"));

        gridLayout1->addWidget(mAllPushButton, 2, 2, 1, 1);

        mValueListWidget = new QListWidget(mValuesFrame);
        mValueListWidget->setObjectName(QString::fromUtf8("mValueListWidget"));
        mValueListWidget->setMinimumSize(QSize(0, 48));

        gridLayout1->addWidget(mValueListWidget, 0, 1, 3, 1);


        gridLayout_3->addWidget(mValuesFrame, 1, 1, 2, 2);

        mFieldsListWidget = new QListWidget(frame);
        mFieldsListWidget->setObjectName(QString::fromUtf8("mFieldsListWidget"));
        mFieldsListWidget->setMinimumSize(QSize(0, 48));

        gridLayout_3->addWidget(mFieldsListWidget, 1, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::AutoText);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        mValuesFrame->raise();
        mFieldsListWidget->raise();
        label->raise();
        label_2->raise();

        gridLayout_2->addWidget(frame, 3, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        mFieldNameLabel->setBuddy(mOutputFieldNameLineEdit);
        mOutputFieldTypeLabel->setBuddy(mOutputFieldTypeComboBox);
        mOutputFieldWidthLabel->setBuddy(mOuputFieldWidthSpinBox);
        mOutputFieldPrecisionLabel->setBuddy(mOutputFieldPrecisionSpinBox);
        mFieldCalculatorExpressionLabel->setBuddy(mExpressionTextEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mOutputFieldNameLineEdit, mOutputFieldTypeComboBox);
        QWidget::setTabOrder(mOutputFieldTypeComboBox, mOuputFieldWidthSpinBox);
        QWidget::setTabOrder(mOuputFieldWidthSpinBox, mOutputFieldPrecisionSpinBox);
        QWidget::setTabOrder(mOutputFieldPrecisionSpinBox, mValueListWidget);
        QWidget::setTabOrder(mValueListWidget, mAllPushButton);
        QWidget::setTabOrder(mAllPushButton, mPlusPushButton);
        QWidget::setTabOrder(mPlusPushButton, mMultiplyPushButton);
        QWidget::setTabOrder(mMultiplyPushButton, mSqrtButton);
        QWidget::setTabOrder(mSqrtButton, mSinButton);
        QWidget::setTabOrder(mSinButton, mTanButton);
        QWidget::setTabOrder(mTanButton, mACosButton);
        QWidget::setTabOrder(mACosButton, mOpenBracketPushButton);
        QWidget::setTabOrder(mOpenBracketPushButton, mMinusPushButton);
        QWidget::setTabOrder(mMinusPushButton, mDividePushButton);
        QWidget::setTabOrder(mDividePushButton, mExpButton);
        QWidget::setTabOrder(mExpButton, mCosButton);
        QWidget::setTabOrder(mCosButton, mASinButton);
        QWidget::setTabOrder(mASinButton, mATanButton);
        QWidget::setTabOrder(mATanButton, mCloseBracketPushButton);
        QWidget::setTabOrder(mCloseBracketPushButton, mToRealButton);
        QWidget::setTabOrder(mToRealButton, mToIntButton);
        QWidget::setTabOrder(mToIntButton, mToStringButton);
        QWidget::setTabOrder(mToStringButton, mLengthButton);
        QWidget::setTabOrder(mLengthButton, mAreaButton);
        QWidget::setTabOrder(mAreaButton, mRowNumButton);
        QWidget::setTabOrder(mRowNumButton, mExpressionTextEdit);
        QWidget::setTabOrder(mExpressionTextEdit, mButtonBox);

        retranslateUi(QgsFieldCalculatorBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFieldCalculatorBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFieldCalculatorBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFieldCalculatorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsFieldCalculatorBase)
    {
        QgsFieldCalculatorBase->setWindowTitle(QApplication::translate("QgsFieldCalculatorBase", "Field calculator", 0, QApplication::UnicodeUTF8));
        mOnlyUpdateSelectedCheckBox->setText(QApplication::translate("QgsFieldCalculatorBase", "Only update selected features", 0, QApplication::UnicodeUTF8));
        mUpdateExistingFieldCheckBox->setText(QApplication::translate("QgsFieldCalculatorBase", "Update existing field", 0, QApplication::UnicodeUTF8));
        mNewFieldGroupBox->setTitle(QApplication::translate("QgsFieldCalculatorBase", "New field", 0, QApplication::UnicodeUTF8));
        mFieldNameLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Output field name", 0, QApplication::UnicodeUTF8));
        mOutputFieldTypeLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Output field type", 0, QApplication::UnicodeUTF8));
        mOutputFieldWidthLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Output field width", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mOuputFieldWidthSpinBox->setToolTip(QApplication::translate("QgsFieldCalculatorBase", "Width of complete output. For example 123,456 means 6 as field width.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mOutputFieldPrecisionLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Precision", 0, QApplication::UnicodeUTF8));
        mOperatorsGroupBox->setTitle(QApplication::translate("QgsFieldCalculatorBase", "Operators", 0, QApplication::UnicodeUTF8));
        mPlusPushButton->setText(QApplication::translate("QgsFieldCalculatorBase", "+", 0, QApplication::UnicodeUTF8));
        mMultiplyPushButton->setText(QApplication::translate("QgsFieldCalculatorBase", "*", 0, QApplication::UnicodeUTF8));
        mSqrtButton->setText(QApplication::translate("QgsFieldCalculatorBase", "sqrt", 0, QApplication::UnicodeUTF8));
        mSinButton->setText(QApplication::translate("QgsFieldCalculatorBase", "sin", 0, QApplication::UnicodeUTF8));
        mTanButton->setText(QApplication::translate("QgsFieldCalculatorBase", "tan", 0, QApplication::UnicodeUTF8));
        mACosButton->setText(QApplication::translate("QgsFieldCalculatorBase", "acos", 0, QApplication::UnicodeUTF8));
        mOpenBracketPushButton->setText(QApplication::translate("QgsFieldCalculatorBase", "(", 0, QApplication::UnicodeUTF8));
        mMinusPushButton->setText(QApplication::translate("QgsFieldCalculatorBase", "-", 0, QApplication::UnicodeUTF8));
        mDividePushButton->setText(QApplication::translate("QgsFieldCalculatorBase", "/", 0, QApplication::UnicodeUTF8));
        mExpButton->setText(QApplication::translate("QgsFieldCalculatorBase", "^", 0, QApplication::UnicodeUTF8));
        mCosButton->setText(QApplication::translate("QgsFieldCalculatorBase", "cos", 0, QApplication::UnicodeUTF8));
        mASinButton->setText(QApplication::translate("QgsFieldCalculatorBase", "asin", 0, QApplication::UnicodeUTF8));
        mATanButton->setText(QApplication::translate("QgsFieldCalculatorBase", "atan", 0, QApplication::UnicodeUTF8));
        mCloseBracketPushButton->setText(QApplication::translate("QgsFieldCalculatorBase", ")", 0, QApplication::UnicodeUTF8));
        mToRealButton->setText(QApplication::translate("QgsFieldCalculatorBase", "to real", 0, QApplication::UnicodeUTF8));
        mToIntButton->setText(QApplication::translate("QgsFieldCalculatorBase", "to int", 0, QApplication::UnicodeUTF8));
        mToStringButton->setText(QApplication::translate("QgsFieldCalculatorBase", "to string", 0, QApplication::UnicodeUTF8));
        mLengthButton->setText(QApplication::translate("QgsFieldCalculatorBase", "length", 0, QApplication::UnicodeUTF8));
        mAreaButton->setText(QApplication::translate("QgsFieldCalculatorBase", "area", 0, QApplication::UnicodeUTF8));
        mRowNumButton->setText(QApplication::translate("QgsFieldCalculatorBase", "rownum", 0, QApplication::UnicodeUTF8));
        mConcatButton->setText(QApplication::translate("QgsFieldCalculatorBase", "||", 0, QApplication::UnicodeUTF8));
        mFieldCalculatorExpressionLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Field calculator expression", 0, QApplication::UnicodeUTF8));
        mAllPushButton->setText(QApplication::translate("QgsFieldCalculatorBase", "All", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsFieldCalculatorBase", "Fields", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsFieldCalculatorBase", "Values", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsFieldCalculatorBase);
    } // retranslateUi

};

namespace Ui {
    class QgsFieldCalculatorBase: public Ui_QgsFieldCalculatorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFIELDCALCULATORBASE_H
