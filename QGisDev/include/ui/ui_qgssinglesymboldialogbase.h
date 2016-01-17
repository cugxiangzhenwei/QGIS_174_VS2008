/********************************************************************************
** Form generated from reading ui file 'qgssinglesymboldialogbase.ui'
**
** Created: Tue Mar 13 10:23:47 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSINGLESYMBOLDIALOGBASE_H
#define UI_QGSSINGLESYMBOLDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSingleSymbolDialogBase
{
public:
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_5;
    QGroupBox *mGroupPoint;
    QGridLayout *gridLayout_4;
    QLabel *textLabel1_2;
    QDoubleSpinBox *mPointSizeSpinBox;
    QCheckBox *mPointSizeUnitsCheckBox;
    QListView *lstSymbols;
    QLabel *mLabel;
    QLineEdit *mLabelEdit;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *cboFillStyle;
    QToolButton *toolSelectTexture;
    QgsColorButton *btnFillColor;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *cboOutlineStyle;
    QgsColorButton *btnOutlineColor;
    QLabel *outlinewidthlabel;
    QDoubleSpinBox *outlinewidthspinbox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *mGroupDrawingByField;
    QGridLayout *gridLayout;
    QLabel *mLblRotationField;
    QComboBox *mRotationClassificationComboBox;
    QLabel *textLabel9;
    QComboBox *mScaleClassificationComboBox;
    QLabel *label;
    QComboBox *mSymbolComboBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *QgsSingleSymbolDialogBase)
    {
        if (QgsSingleSymbolDialogBase->objectName().isEmpty())
            QgsSingleSymbolDialogBase->setObjectName(QString::fromUtf8("QgsSingleSymbolDialogBase"));
        QgsSingleSymbolDialogBase->resize(337, 620);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsSingleSymbolDialogBase->sizePolicy().hasHeightForWidth());
        QgsSingleSymbolDialogBase->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(QgsSingleSymbolDialogBase);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        scrollArea = new QScrollArea(QgsSingleSymbolDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 335, 618));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mGroupPoint = new QGroupBox(scrollAreaWidgetContents);
        mGroupPoint->setObjectName(QString::fromUtf8("mGroupPoint"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mGroupPoint->sizePolicy().hasHeightForWidth());
        mGroupPoint->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(mGroupPoint);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        textLabel1_2 = new QLabel(mGroupPoint);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout_4->addWidget(textLabel1_2, 1, 0, 1, 1);

        mPointSizeSpinBox = new QDoubleSpinBox(mGroupPoint);
        mPointSizeSpinBox->setObjectName(QString::fromUtf8("mPointSizeSpinBox"));
        mPointSizeSpinBox->setDecimals(5);
        mPointSizeSpinBox->setMaximum(1e+06);
        mPointSizeSpinBox->setSingleStep(0.1);
        mPointSizeSpinBox->setValue(1);

        gridLayout_4->addWidget(mPointSizeSpinBox, 1, 1, 1, 1);

        mPointSizeUnitsCheckBox = new QCheckBox(mGroupPoint);
        mPointSizeUnitsCheckBox->setObjectName(QString::fromUtf8("mPointSizeUnitsCheckBox"));

        gridLayout_4->addWidget(mPointSizeUnitsCheckBox, 1, 2, 1, 1);

        lstSymbols = new QListView(mGroupPoint);
        lstSymbols->setObjectName(QString::fromUtf8("lstSymbols"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lstSymbols->sizePolicy().hasHeightForWidth());
        lstSymbols->setSizePolicy(sizePolicy2);
        lstSymbols->setDragDropMode(QAbstractItemView::DragDrop);
        lstSymbols->setAlternatingRowColors(false);
        lstSymbols->setIconSize(QSize(0, -1));
        lstSymbols->setResizeMode(QListView::Adjust);
        lstSymbols->setLayoutMode(QListView::Batched);
        lstSymbols->setViewMode(QListView::IconMode);
        lstSymbols->setUniformItemSizes(true);
        lstSymbols->setWordWrap(false);

        gridLayout_4->addWidget(lstSymbols, 0, 0, 1, 3);


        gridLayout_5->addWidget(mGroupPoint, 0, 0, 1, 1);

        mLabel = new QLabel(scrollAreaWidgetContents);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));
        mLabel->setMinimumSize(QSize(0, 22));

        gridLayout_5->addWidget(mLabel, 1, 0, 1, 1);

        mLabelEdit = new QLineEdit(scrollAreaWidgetContents);
        mLabelEdit->setObjectName(QString::fromUtf8("mLabelEdit"));
        mLabelEdit->setMinimumSize(QSize(0, 22));

        gridLayout_5->addWidget(mLabelEdit, 2, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setMargin(11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cboFillStyle = new QComboBox(groupBox);
        cboFillStyle->setObjectName(QString::fromUtf8("cboFillStyle"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cboFillStyle->sizePolicy().hasHeightForWidth());
        cboFillStyle->setSizePolicy(sizePolicy3);
        cboFillStyle->setMinimumSize(QSize(0, 20));
        cboFillStyle->setMaximumSize(QSize(172, 16777215));
        cboFillStyle->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(cboFillStyle);

        toolSelectTexture = new QToolButton(groupBox);
        toolSelectTexture->setObjectName(QString::fromUtf8("toolSelectTexture"));

        horizontalLayout_2->addWidget(toolSelectTexture);

        btnFillColor = new QgsColorButton(groupBox);
        btnFillColor->setObjectName(QString::fromUtf8("btnFillColor"));
        sizePolicy1.setHeightForWidth(btnFillColor->sizePolicy().hasHeightForWidth());
        btnFillColor->setSizePolicy(sizePolicy1);
        btnFillColor->setMinimumSize(QSize(32, 0));
        btnFillColor->setMaximumSize(QSize(32, 16777215));

        horizontalLayout_2->addWidget(btnFillColor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_5->addWidget(groupBox, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setMargin(11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cboOutlineStyle = new QComboBox(groupBox_3);
        cboOutlineStyle->setObjectName(QString::fromUtf8("cboOutlineStyle"));
        sizePolicy1.setHeightForWidth(cboOutlineStyle->sizePolicy().hasHeightForWidth());
        cboOutlineStyle->setSizePolicy(sizePolicy1);
        cboOutlineStyle->setMinimumSize(QSize(0, 20));
        cboOutlineStyle->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(cboOutlineStyle);

        btnOutlineColor = new QgsColorButton(groupBox_3);
        btnOutlineColor->setObjectName(QString::fromUtf8("btnOutlineColor"));
        sizePolicy3.setHeightForWidth(btnOutlineColor->sizePolicy().hasHeightForWidth());
        btnOutlineColor->setSizePolicy(sizePolicy3);
        btnOutlineColor->setMinimumSize(QSize(32, 0));
        btnOutlineColor->setMaximumSize(QSize(32, 16777215));

        horizontalLayout_3->addWidget(btnOutlineColor);

        outlinewidthlabel = new QLabel(groupBox_3);
        outlinewidthlabel->setObjectName(QString::fromUtf8("outlinewidthlabel"));

        horizontalLayout_3->addWidget(outlinewidthlabel);

        outlinewidthspinbox = new QDoubleSpinBox(groupBox_3);
        outlinewidthspinbox->setObjectName(QString::fromUtf8("outlinewidthspinbox"));
        sizePolicy1.setHeightForWidth(outlinewidthspinbox->sizePolicy().hasHeightForWidth());
        outlinewidthspinbox->setSizePolicy(sizePolicy1);
        outlinewidthspinbox->setMinimumSize(QSize(0, 20));
        outlinewidthspinbox->setMaximumSize(QSize(172, 16777215));
        outlinewidthspinbox->setSingleStep(0.1);

        horizontalLayout_3->addWidget(outlinewidthspinbox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_5->addWidget(groupBox_3, 4, 0, 1, 1);

        mGroupDrawingByField = new QGroupBox(scrollAreaWidgetContents);
        mGroupDrawingByField->setObjectName(QString::fromUtf8("mGroupDrawingByField"));
        gridLayout = new QGridLayout(mGroupDrawingByField);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLblRotationField = new QLabel(mGroupDrawingByField);
        mLblRotationField->setObjectName(QString::fromUtf8("mLblRotationField"));

        gridLayout->addWidget(mLblRotationField, 0, 0, 1, 1);

        mRotationClassificationComboBox = new QComboBox(mGroupDrawingByField);
        mRotationClassificationComboBox->setObjectName(QString::fromUtf8("mRotationClassificationComboBox"));

        gridLayout->addWidget(mRotationClassificationComboBox, 0, 1, 1, 1);

        textLabel9 = new QLabel(mGroupDrawingByField);
        textLabel9->setObjectName(QString::fromUtf8("textLabel9"));

        gridLayout->addWidget(textLabel9, 1, 0, 1, 1);

        mScaleClassificationComboBox = new QComboBox(mGroupDrawingByField);
        mScaleClassificationComboBox->setObjectName(QString::fromUtf8("mScaleClassificationComboBox"));

        gridLayout->addWidget(mScaleClassificationComboBox, 1, 1, 1, 1);

        label = new QLabel(mGroupDrawingByField);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        mSymbolComboBox = new QComboBox(mGroupDrawingByField);
        mSymbolComboBox->setObjectName(QString::fromUtf8("mSymbolComboBox"));

        gridLayout->addWidget(mSymbolComboBox, 2, 1, 1, 1);


        gridLayout_5->addWidget(mGroupDrawingByField, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 6, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_6->addWidget(scrollArea, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel1_2->setBuddy(mPointSizeSpinBox);
        mLabel->setBuddy(mLabelEdit);
        outlinewidthlabel->setBuddy(outlinewidthspinbox);
        mLblRotationField->setBuddy(mRotationClassificationComboBox);
        textLabel9->setBuddy(mScaleClassificationComboBox);
        label->setBuddy(mSymbolComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lstSymbols, mPointSizeSpinBox);
        QWidget::setTabOrder(mPointSizeSpinBox, mPointSizeUnitsCheckBox);
        QWidget::setTabOrder(mPointSizeUnitsCheckBox, mLabelEdit);
        QWidget::setTabOrder(mLabelEdit, cboFillStyle);
        QWidget::setTabOrder(cboFillStyle, toolSelectTexture);
        QWidget::setTabOrder(toolSelectTexture, btnFillColor);
        QWidget::setTabOrder(btnFillColor, cboOutlineStyle);
        QWidget::setTabOrder(cboOutlineStyle, btnOutlineColor);
        QWidget::setTabOrder(btnOutlineColor, outlinewidthspinbox);
        QWidget::setTabOrder(outlinewidthspinbox, mRotationClassificationComboBox);
        QWidget::setTabOrder(mRotationClassificationComboBox, mScaleClassificationComboBox);
        QWidget::setTabOrder(mScaleClassificationComboBox, mSymbolComboBox);
        QWidget::setTabOrder(mSymbolComboBox, scrollArea);

        retranslateUi(QgsSingleSymbolDialogBase);

        QMetaObject::connectSlotsByName(QgsSingleSymbolDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSingleSymbolDialogBase)
    {
        QgsSingleSymbolDialogBase->setWindowTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Single Symbol", 0, QApplication::UnicodeUTF8));
        mGroupPoint->setTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Point Symbol", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Size", 0, QApplication::UnicodeUTF8));
        mPointSizeUnitsCheckBox->setText(QApplication::translate("QgsSingleSymbolDialogBase", "In map units", 0, QApplication::UnicodeUTF8));
        mLabel->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Label", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Fill options", 0, QApplication::UnicodeUTF8));
        toolSelectTexture->setText(QApplication::translate("QgsSingleSymbolDialogBase", "...", 0, QApplication::UnicodeUTF8));
        btnFillColor->setText(QString());
        groupBox_3->setTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Outline options", 0, QApplication::UnicodeUTF8));
        btnOutlineColor->setText(QString());
        outlinewidthlabel->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Width", 0, QApplication::UnicodeUTF8));
        mGroupDrawingByField->setTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Drawing by field", 0, QApplication::UnicodeUTF8));
        mLblRotationField->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Rotation", 0, QApplication::UnicodeUTF8));
        textLabel9->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Area scale", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Symbol", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsSingleSymbolDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSingleSymbolDialogBase: public Ui_QgsSingleSymbolDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSINGLESYMBOLDIALOGBASE_H
