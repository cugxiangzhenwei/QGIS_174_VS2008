/********************************************************************************
** Form generated from reading ui file 'qgsitempositiondialogbase.ui'
**
** Created: Tue Mar 13 10:23:57 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSITEMPOSITIONDIALOGBASE_H
#define UI_QGSITEMPOSITIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_QgsItemPositionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *mPositionGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *mUpperLeftCheckBox;
    QCheckBox *mUpperMiddleCheckBox;
    QCheckBox *mUpperRightCheckBox;
    QCheckBox *mMiddleLeftCheckBox;
    QCheckBox *mMiddleCheckBox;
    QCheckBox *mMiddleRightCheckBox;
    QCheckBox *mLowerLeftCheckBox;
    QCheckBox *mLowerMiddleCheckBox;
    QCheckBox *mLowerRightCheckBox;
    QGroupBox *mCoordinatesGroupBox;
    QGridLayout *gridLayout_1;
    QLabel *mXLabel;
    QLineEdit *mXLineEdit;
    QLabel *mYLabel;
    QLineEdit *mYLineEdit;
    QLabel *mWidthLabel;
    QLineEdit *mWidthLineEdit;
    QLabel *mHeightLabel;
    QLineEdit *mHeightLineEdit;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QPushButton *mSetPositionButton;
    QPushButton *mCloseButton;

    void setupUi(QDialog *QgsItemPositionDialogBase)
    {
        if (QgsItemPositionDialogBase->objectName().isEmpty())
            QgsItemPositionDialogBase->setObjectName(QString::fromUtf8("QgsItemPositionDialogBase"));
        QgsItemPositionDialogBase->resize(334, 192);
        gridLayout_2 = new QGridLayout(QgsItemPositionDialogBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mPositionGroupBox = new QGroupBox(QgsItemPositionDialogBase);
        mPositionGroupBox->setObjectName(QString::fromUtf8("mPositionGroupBox"));
        gridLayout = new QGridLayout(mPositionGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mUpperLeftCheckBox = new QCheckBox(mPositionGroupBox);
        mUpperLeftCheckBox->setObjectName(QString::fromUtf8("mUpperLeftCheckBox"));

        gridLayout->addWidget(mUpperLeftCheckBox, 0, 0, 1, 1);

        mUpperMiddleCheckBox = new QCheckBox(mPositionGroupBox);
        mUpperMiddleCheckBox->setObjectName(QString::fromUtf8("mUpperMiddleCheckBox"));

        gridLayout->addWidget(mUpperMiddleCheckBox, 0, 1, 1, 1);

        mUpperRightCheckBox = new QCheckBox(mPositionGroupBox);
        mUpperRightCheckBox->setObjectName(QString::fromUtf8("mUpperRightCheckBox"));

        gridLayout->addWidget(mUpperRightCheckBox, 0, 2, 1, 1);

        mMiddleLeftCheckBox = new QCheckBox(mPositionGroupBox);
        mMiddleLeftCheckBox->setObjectName(QString::fromUtf8("mMiddleLeftCheckBox"));

        gridLayout->addWidget(mMiddleLeftCheckBox, 1, 0, 1, 1);

        mMiddleCheckBox = new QCheckBox(mPositionGroupBox);
        mMiddleCheckBox->setObjectName(QString::fromUtf8("mMiddleCheckBox"));

        gridLayout->addWidget(mMiddleCheckBox, 1, 1, 1, 1);

        mMiddleRightCheckBox = new QCheckBox(mPositionGroupBox);
        mMiddleRightCheckBox->setObjectName(QString::fromUtf8("mMiddleRightCheckBox"));

        gridLayout->addWidget(mMiddleRightCheckBox, 1, 2, 1, 1);

        mLowerLeftCheckBox = new QCheckBox(mPositionGroupBox);
        mLowerLeftCheckBox->setObjectName(QString::fromUtf8("mLowerLeftCheckBox"));

        gridLayout->addWidget(mLowerLeftCheckBox, 2, 0, 1, 1);

        mLowerMiddleCheckBox = new QCheckBox(mPositionGroupBox);
        mLowerMiddleCheckBox->setObjectName(QString::fromUtf8("mLowerMiddleCheckBox"));

        gridLayout->addWidget(mLowerMiddleCheckBox, 2, 1, 1, 1);

        mLowerRightCheckBox = new QCheckBox(mPositionGroupBox);
        mLowerRightCheckBox->setObjectName(QString::fromUtf8("mLowerRightCheckBox"));

        gridLayout->addWidget(mLowerRightCheckBox, 2, 2, 1, 1);


        gridLayout_2->addWidget(mPositionGroupBox, 0, 0, 1, 1);

        mCoordinatesGroupBox = new QGroupBox(QgsItemPositionDialogBase);
        mCoordinatesGroupBox->setObjectName(QString::fromUtf8("mCoordinatesGroupBox"));
        gridLayout_1 = new QGridLayout(mCoordinatesGroupBox);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        mXLabel = new QLabel(mCoordinatesGroupBox);
        mXLabel->setObjectName(QString::fromUtf8("mXLabel"));

        gridLayout_1->addWidget(mXLabel, 0, 0, 1, 1);

        mXLineEdit = new QLineEdit(mCoordinatesGroupBox);
        mXLineEdit->setObjectName(QString::fromUtf8("mXLineEdit"));

        gridLayout_1->addWidget(mXLineEdit, 0, 1, 1, 2);

        mYLabel = new QLabel(mCoordinatesGroupBox);
        mYLabel->setObjectName(QString::fromUtf8("mYLabel"));

        gridLayout_1->addWidget(mYLabel, 1, 0, 1, 1);

        mYLineEdit = new QLineEdit(mCoordinatesGroupBox);
        mYLineEdit->setObjectName(QString::fromUtf8("mYLineEdit"));

        gridLayout_1->addWidget(mYLineEdit, 1, 1, 1, 2);

        mWidthLabel = new QLabel(mCoordinatesGroupBox);
        mWidthLabel->setObjectName(QString::fromUtf8("mWidthLabel"));

        gridLayout_1->addWidget(mWidthLabel, 2, 0, 1, 2);

        mWidthLineEdit = new QLineEdit(mCoordinatesGroupBox);
        mWidthLineEdit->setObjectName(QString::fromUtf8("mWidthLineEdit"));

        gridLayout_1->addWidget(mWidthLineEdit, 2, 2, 1, 1);

        mHeightLabel = new QLabel(mCoordinatesGroupBox);
        mHeightLabel->setObjectName(QString::fromUtf8("mHeightLabel"));

        gridLayout_1->addWidget(mHeightLabel, 3, 0, 1, 2);

        mHeightLineEdit = new QLineEdit(mCoordinatesGroupBox);
        mHeightLineEdit->setObjectName(QString::fromUtf8("mHeightLineEdit"));

        gridLayout_1->addWidget(mHeightLineEdit, 3, 2, 1, 1);


        gridLayout_2->addWidget(mCoordinatesGroupBox, 0, 1, 1, 2);

        spacerItem = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem, 1, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        mSetPositionButton = new QPushButton(QgsItemPositionDialogBase);
        mSetPositionButton->setObjectName(QString::fromUtf8("mSetPositionButton"));

        hboxLayout->addWidget(mSetPositionButton);

        mCloseButton = new QPushButton(QgsItemPositionDialogBase);
        mCloseButton->setObjectName(QString::fromUtf8("mCloseButton"));

        hboxLayout->addWidget(mCloseButton);


        gridLayout_2->addLayout(hboxLayout, 1, 2, 1, 1);


        retranslateUi(QgsItemPositionDialogBase);

        QMetaObject::connectSlotsByName(QgsItemPositionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsItemPositionDialogBase)
    {
        QgsItemPositionDialogBase->setWindowTitle(QApplication::translate("QgsItemPositionDialogBase", "Set item position", 0, QApplication::UnicodeUTF8));
        mPositionGroupBox->setTitle(QApplication::translate("QgsItemPositionDialogBase", "Item reference point", 0, QApplication::UnicodeUTF8));
        mUpperLeftCheckBox->setText(QString());
        mUpperMiddleCheckBox->setText(QString());
        mUpperRightCheckBox->setText(QString());
        mMiddleLeftCheckBox->setText(QString());
        mMiddleCheckBox->setText(QString());
        mMiddleRightCheckBox->setText(QString());
        mLowerLeftCheckBox->setText(QString());
        mLowerMiddleCheckBox->setText(QString());
        mLowerRightCheckBox->setText(QString());
        mCoordinatesGroupBox->setTitle(QApplication::translate("QgsItemPositionDialogBase", "Coordinates", 0, QApplication::UnicodeUTF8));
        mXLabel->setText(QApplication::translate("QgsItemPositionDialogBase", "x", 0, QApplication::UnicodeUTF8));
        mYLabel->setText(QApplication::translate("QgsItemPositionDialogBase", "y", 0, QApplication::UnicodeUTF8));
        mWidthLabel->setText(QApplication::translate("QgsItemPositionDialogBase", "Width", 0, QApplication::UnicodeUTF8));
        mHeightLabel->setText(QApplication::translate("QgsItemPositionDialogBase", "Height", 0, QApplication::UnicodeUTF8));
        mSetPositionButton->setText(QApplication::translate("QgsItemPositionDialogBase", "Set Position", 0, QApplication::UnicodeUTF8));
        mCloseButton->setText(QApplication::translate("QgsItemPositionDialogBase", "Close", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsItemPositionDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsItemPositionDialogBase: public Ui_QgsItemPositionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSITEMPOSITIONDIALOGBASE_H
