/********************************************************************************
** Form generated from reading ui file 'qgslabelpropertydialogbase.ui'
**
** Created: Tue Mar 13 10:23:56 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSLABELPROPERTYDIALOGBASE_H
#define UI_QGSLABELPROPERTYDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelPropertyDialogBase
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mLabelTextLabel;
    QLineEdit *mLabelTextLineEdit;
    QGroupBox *mFontGroupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mFontSizeLabel;
    QDoubleSpinBox *mFontSizeSpinBox;
    QPushButton *mFontPushButton;
    QgsColorButton *mFontColorButton;
    QGroupBox *mBufferGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mBufferSizeLabel;
    QDoubleSpinBox *mBufferSizeSpinBox;
    QgsColorButton *mBufferColorButton;
    QGroupBox *mPositionGroupBlox;
    QGridLayout *gridLayout_3;
    QLabel *mLabelDistanceLabel;
    QDoubleSpinBox *mLabelDistanceSpinBox;
    QLabel *mXCoordLabel;
    QDoubleSpinBox *mXCoordSpinBox;
    QLabel *mYCoordLabel;
    QDoubleSpinBox *mYCoordSpinBox;
    QLabel *mHaliLabel;
    QComboBox *mHaliComboBox;
    QLabel *mValiLabel;
    QComboBox *mValiComboBox;
    QLabel *mRotationLabel;
    QDoubleSpinBox *mRotationSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLabelPropertyDialogBase)
    {
        if (QgsLabelPropertyDialogBase->objectName().isEmpty())
            QgsLabelPropertyDialogBase->setObjectName(QString::fromUtf8("QgsLabelPropertyDialogBase"));
        QgsLabelPropertyDialogBase->resize(284, 411);
        gridLayout_4 = new QGridLayout(QgsLabelPropertyDialogBase);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mLabelTextLabel = new QLabel(QgsLabelPropertyDialogBase);
        mLabelTextLabel->setObjectName(QString::fromUtf8("mLabelTextLabel"));

        horizontalLayout_3->addWidget(mLabelTextLabel);

        mLabelTextLineEdit = new QLineEdit(QgsLabelPropertyDialogBase);
        mLabelTextLineEdit->setObjectName(QString::fromUtf8("mLabelTextLineEdit"));

        horizontalLayout_3->addWidget(mLabelTextLineEdit);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        mFontGroupBox = new QGroupBox(QgsLabelPropertyDialogBase);
        mFontGroupBox->setObjectName(QString::fromUtf8("mFontGroupBox"));
        gridLayout = new QGridLayout(mFontGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFontSizeLabel = new QLabel(mFontGroupBox);
        mFontSizeLabel->setObjectName(QString::fromUtf8("mFontSizeLabel"));

        horizontalLayout->addWidget(mFontSizeLabel);

        mFontSizeSpinBox = new QDoubleSpinBox(mFontGroupBox);
        mFontSizeSpinBox->setObjectName(QString::fromUtf8("mFontSizeSpinBox"));
        mFontSizeSpinBox->setMaximum(999999);

        horizontalLayout->addWidget(mFontSizeSpinBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mFontPushButton = new QPushButton(mFontGroupBox);
        mFontPushButton->setObjectName(QString::fromUtf8("mFontPushButton"));

        gridLayout->addWidget(mFontPushButton, 0, 2, 1, 1);

        mFontColorButton = new QgsColorButton(mFontGroupBox);
        mFontColorButton->setObjectName(QString::fromUtf8("mFontColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFontColorButton->sizePolicy().hasHeightForWidth());
        mFontColorButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mFontColorButton, 0, 1, 1, 1);


        gridLayout_4->addWidget(mFontGroupBox, 1, 0, 1, 1);

        mBufferGroupBox = new QGroupBox(QgsLabelPropertyDialogBase);
        mBufferGroupBox->setObjectName(QString::fromUtf8("mBufferGroupBox"));
        gridLayout_2 = new QGridLayout(mBufferGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mBufferSizeLabel = new QLabel(mBufferGroupBox);
        mBufferSizeLabel->setObjectName(QString::fromUtf8("mBufferSizeLabel"));

        horizontalLayout_2->addWidget(mBufferSizeLabel);

        mBufferSizeSpinBox = new QDoubleSpinBox(mBufferGroupBox);
        mBufferSizeSpinBox->setObjectName(QString::fromUtf8("mBufferSizeSpinBox"));
        mBufferSizeSpinBox->setMaximum(999999);

        horizontalLayout_2->addWidget(mBufferSizeSpinBox);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        mBufferColorButton = new QgsColorButton(mBufferGroupBox);
        mBufferColorButton->setObjectName(QString::fromUtf8("mBufferColorButton"));
        sizePolicy.setHeightForWidth(mBufferColorButton->sizePolicy().hasHeightForWidth());
        mBufferColorButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mBufferColorButton, 0, 1, 1, 1);


        gridLayout_4->addWidget(mBufferGroupBox, 2, 0, 1, 1);

        mPositionGroupBlox = new QGroupBox(QgsLabelPropertyDialogBase);
        mPositionGroupBlox->setObjectName(QString::fromUtf8("mPositionGroupBlox"));
        gridLayout_3 = new QGridLayout(mPositionGroupBlox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mLabelDistanceLabel = new QLabel(mPositionGroupBlox);
        mLabelDistanceLabel->setObjectName(QString::fromUtf8("mLabelDistanceLabel"));

        gridLayout_3->addWidget(mLabelDistanceLabel, 0, 0, 1, 1);

        mLabelDistanceSpinBox = new QDoubleSpinBox(mPositionGroupBlox);
        mLabelDistanceSpinBox->setObjectName(QString::fromUtf8("mLabelDistanceSpinBox"));

        gridLayout_3->addWidget(mLabelDistanceSpinBox, 0, 1, 1, 1);

        mXCoordLabel = new QLabel(mPositionGroupBlox);
        mXCoordLabel->setObjectName(QString::fromUtf8("mXCoordLabel"));

        gridLayout_3->addWidget(mXCoordLabel, 1, 0, 1, 1);

        mXCoordSpinBox = new QDoubleSpinBox(mPositionGroupBlox);
        mXCoordSpinBox->setObjectName(QString::fromUtf8("mXCoordSpinBox"));
        mXCoordSpinBox->setMinimum(-1e+09);
        mXCoordSpinBox->setMaximum(1e+09);

        gridLayout_3->addWidget(mXCoordSpinBox, 1, 1, 1, 1);

        mYCoordLabel = new QLabel(mPositionGroupBlox);
        mYCoordLabel->setObjectName(QString::fromUtf8("mYCoordLabel"));

        gridLayout_3->addWidget(mYCoordLabel, 2, 0, 1, 1);

        mYCoordSpinBox = new QDoubleSpinBox(mPositionGroupBlox);
        mYCoordSpinBox->setObjectName(QString::fromUtf8("mYCoordSpinBox"));
        mYCoordSpinBox->setMinimum(-1e+09);
        mYCoordSpinBox->setMaximum(1e+09);

        gridLayout_3->addWidget(mYCoordSpinBox, 2, 1, 1, 1);

        mHaliLabel = new QLabel(mPositionGroupBlox);
        mHaliLabel->setObjectName(QString::fromUtf8("mHaliLabel"));

        gridLayout_3->addWidget(mHaliLabel, 3, 0, 1, 1);

        mHaliComboBox = new QComboBox(mPositionGroupBlox);
        mHaliComboBox->setObjectName(QString::fromUtf8("mHaliComboBox"));

        gridLayout_3->addWidget(mHaliComboBox, 3, 1, 1, 1);

        mValiLabel = new QLabel(mPositionGroupBlox);
        mValiLabel->setObjectName(QString::fromUtf8("mValiLabel"));

        gridLayout_3->addWidget(mValiLabel, 4, 0, 1, 1);

        mValiComboBox = new QComboBox(mPositionGroupBlox);
        mValiComboBox->setObjectName(QString::fromUtf8("mValiComboBox"));

        gridLayout_3->addWidget(mValiComboBox, 4, 1, 1, 1);

        mRotationLabel = new QLabel(mPositionGroupBlox);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        gridLayout_3->addWidget(mRotationLabel, 5, 0, 1, 1);

        mRotationSpinBox = new QDoubleSpinBox(mPositionGroupBlox);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setMaximum(360);

        gridLayout_3->addWidget(mRotationSpinBox, 5, 1, 1, 1);


        gridLayout_4->addWidget(mPositionGroupBlox, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsLabelPropertyDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 4, 0, 1, 1);


        retranslateUi(QgsLabelPropertyDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLabelPropertyDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLabelPropertyDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLabelPropertyDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLabelPropertyDialogBase)
    {
        QgsLabelPropertyDialogBase->setWindowTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Label properties", 0, QApplication::UnicodeUTF8));
        mLabelTextLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Text", 0, QApplication::UnicodeUTF8));
        mFontGroupBox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Font", 0, QApplication::UnicodeUTF8));
        mFontSizeLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Size", 0, QApplication::UnicodeUTF8));
        mFontPushButton->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Font", 0, QApplication::UnicodeUTF8));
        mFontColorButton->setText(QString());
        mBufferGroupBox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Buffer", 0, QApplication::UnicodeUTF8));
        mBufferSizeLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Size", 0, QApplication::UnicodeUTF8));
        mBufferColorButton->setText(QString());
        mPositionGroupBlox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Position", 0, QApplication::UnicodeUTF8));
        mLabelDistanceLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Label distance", 0, QApplication::UnicodeUTF8));
        mXCoordLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "X Coordinate", 0, QApplication::UnicodeUTF8));
        mYCoordLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Y Coordinate", 0, QApplication::UnicodeUTF8));
        mHaliLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Horizontal alignment", 0, QApplication::UnicodeUTF8));
        mValiLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Vertical alignment", 0, QApplication::UnicodeUTF8));
        mRotationLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Rotation", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsLabelPropertyDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLabelPropertyDialogBase: public Ui_QgsLabelPropertyDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELPROPERTYDIALOGBASE_H
