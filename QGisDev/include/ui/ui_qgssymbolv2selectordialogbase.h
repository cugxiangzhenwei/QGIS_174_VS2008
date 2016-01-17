/********************************************************************************
** Form generated from reading ui file 'qgssymbolv2selectordialogbase.ui'
**
** Created: Tue Mar 13 10:23:44 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSYMBOLV2SELECTORDIALOGBASE_H
#define UI_QGSSYMBOLV2SELECTORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSymbolV2SelectorDialogBase
{
public:
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *lblPreview;
    QPushButton *btnSymbolProperties;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_3;
    QLabel *mSymbolUnitLabel;
    QComboBox *mSymbolUnitComboBox;
    QLabel *mTransparencyLabel;
    QSlider *mTransparencySlider;
    QLabel *label_5;
    QgsColorButtonV2 *btnColor;
    QStackedWidget *stackedWidget;
    QWidget *pageMarker;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *spinSize;
    QLabel *label_3;
    QDoubleSpinBox *spinAngle;
    QSpacerItem *horizontalSpacer_3;
    QWidget *pageLine;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *spinWidth;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *pageFill;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAdvanced;
    QPushButton *btnAddToStyle;
    QFrame *line;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnStyleManager;
    QListView *viewSymbols;
    QLabel *lblSymbolName;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSymbolV2SelectorDialogBase)
    {
        if (QgsSymbolV2SelectorDialogBase->objectName().isEmpty())
            QgsSymbolV2SelectorDialogBase->setObjectName(QString::fromUtf8("QgsSymbolV2SelectorDialogBase"));
        QgsSymbolV2SelectorDialogBase->resize(489, 416);
        gridLayout_6 = new QGridLayout(QgsSymbolV2SelectorDialogBase);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblPreview = new QLabel(QgsSymbolV2SelectorDialogBase);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy);
        lblPreview->setMinimumSize(QSize(100, 100));
        lblPreview->setFrameShape(QFrame::StyledPanel);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblPreview);

        btnSymbolProperties = new QPushButton(QgsSymbolV2SelectorDialogBase);
        btnSymbolProperties->setObjectName(QString::fromUtf8("btnSymbolProperties"));

        verticalLayout->addWidget(btnSymbolProperties);


        gridLayout_6->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mSymbolUnitLabel = new QLabel(QgsSymbolV2SelectorDialogBase);
        mSymbolUnitLabel->setObjectName(QString::fromUtf8("mSymbolUnitLabel"));

        gridLayout_3->addWidget(mSymbolUnitLabel, 0, 0, 1, 1);

        mSymbolUnitComboBox = new QComboBox(QgsSymbolV2SelectorDialogBase);
        mSymbolUnitComboBox->setObjectName(QString::fromUtf8("mSymbolUnitComboBox"));

        gridLayout_3->addWidget(mSymbolUnitComboBox, 0, 1, 1, 1);

        mTransparencyLabel = new QLabel(QgsSymbolV2SelectorDialogBase);
        mTransparencyLabel->setObjectName(QString::fromUtf8("mTransparencyLabel"));

        gridLayout_3->addWidget(mTransparencyLabel, 1, 0, 1, 1);

        mTransparencySlider = new QSlider(QgsSymbolV2SelectorDialogBase);
        mTransparencySlider->setObjectName(QString::fromUtf8("mTransparencySlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mTransparencySlider->sizePolicy().hasHeightForWidth());
        mTransparencySlider->setSizePolicy(sizePolicy1);
        mTransparencySlider->setMaximum(255);
        mTransparencySlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(mTransparencySlider, 1, 1, 1, 1);

        label_5 = new QLabel(QgsSymbolV2SelectorDialogBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        btnColor = new QgsColorButtonV2(QgsSymbolV2SelectorDialogBase);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));

        gridLayout_3->addWidget(btnColor, 2, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 2);

        stackedWidget = new QStackedWidget(QgsSymbolV2SelectorDialogBase);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        pageMarker = new QWidget();
        pageMarker->setObjectName(QString::fromUtf8("pageMarker"));
        gridLayout = new QGridLayout(pageMarker);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(pageMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        spinSize = new QDoubleSpinBox(pageMarker);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        spinSize->setDecimals(2);
        spinSize->setMaximum(99999);
        spinSize->setValue(1);

        gridLayout->addWidget(spinSize, 0, 1, 1, 1);

        label_3 = new QLabel(pageMarker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinAngle = new QDoubleSpinBox(pageMarker);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setDecimals(1);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(5);

        gridLayout->addWidget(spinAngle, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 2);

        stackedWidget->addWidget(pageMarker);
        pageLine = new QWidget();
        pageLine->setObjectName(QString::fromUtf8("pageLine"));
        gridLayout_2 = new QGridLayout(pageLine);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(pageLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        spinWidth = new QDoubleSpinBox(pageLine);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        spinWidth->setDecimals(5);
        spinWidth->setMaximum(99999);
        spinWidth->setValue(1);

        gridLayout_2->addWidget(spinWidth, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 1, 1, 1);

        stackedWidget->addWidget(pageLine);
        pageFill = new QWidget();
        pageFill->setObjectName(QString::fromUtf8("pageFill"));
        horizontalLayout_2 = new QHBoxLayout(pageFill);
        horizontalLayout_2->setMargin(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        stackedWidget->addWidget(pageFill);

        gridLayout_5->addWidget(stackedWidget, 0, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 0, 1, 1);

        btnAdvanced = new QPushButton(QgsSymbolV2SelectorDialogBase);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));

        gridLayout_5->addWidget(btnAdvanced, 1, 1, 1, 2);

        btnAddToStyle = new QPushButton(QgsSymbolV2SelectorDialogBase);
        btnAddToStyle->setObjectName(QString::fromUtf8("btnAddToStyle"));

        gridLayout_5->addWidget(btnAddToStyle, 1, 3, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 1, 1, 1);

        line = new QFrame(QgsSymbolV2SelectorDialogBase);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(QgsSymbolV2SelectorDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        btnStyleManager = new QPushButton(QgsSymbolV2SelectorDialogBase);
        btnStyleManager->setObjectName(QString::fromUtf8("btnStyleManager"));

        gridLayout_4->addWidget(btnStyleManager, 0, 2, 1, 1);

        viewSymbols = new QListView(QgsSymbolV2SelectorDialogBase);
        viewSymbols->setObjectName(QString::fromUtf8("viewSymbols"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(viewSymbols->sizePolicy().hasHeightForWidth());
        viewSymbols->setSizePolicy(sizePolicy3);
        viewSymbols->setIconSize(QSize(48, 48));
        viewSymbols->setFlow(QListView::LeftToRight);
        viewSymbols->setResizeMode(QListView::Adjust);
        viewSymbols->setSpacing(5);
        viewSymbols->setViewMode(QListView::IconMode);
        viewSymbols->setUniformItemSizes(true);
        viewSymbols->setWordWrap(true);

        gridLayout_4->addWidget(viewSymbols, 1, 0, 1, 3);


        gridLayout_6->addLayout(gridLayout_4, 2, 0, 1, 2);

        lblSymbolName = new QLabel(QgsSymbolV2SelectorDialogBase);
        lblSymbolName->setObjectName(QString::fromUtf8("lblSymbolName"));

        gridLayout_6->addWidget(lblSymbolName, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSymbolV2SelectorDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_6->addWidget(buttonBox, 3, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        mSymbolUnitLabel->setBuddy(mSymbolUnitComboBox);
        mTransparencyLabel->setBuddy(mTransparencySlider);
        label_5->setBuddy(btnColor);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(btnSymbolProperties, mSymbolUnitComboBox);
        QWidget::setTabOrder(mSymbolUnitComboBox, mTransparencySlider);
        QWidget::setTabOrder(mTransparencySlider, btnColor);
        QWidget::setTabOrder(btnColor, spinWidth);
        QWidget::setTabOrder(spinWidth, spinSize);
        QWidget::setTabOrder(spinSize, spinAngle);
        QWidget::setTabOrder(spinAngle, btnAdvanced);
        QWidget::setTabOrder(btnAdvanced, btnAddToStyle);
        QWidget::setTabOrder(btnAddToStyle, btnStyleManager);
        QWidget::setTabOrder(btnStyleManager, viewSymbols);
        QWidget::setTabOrder(viewSymbols, buttonBox);

        retranslateUi(QgsSymbolV2SelectorDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSymbolV2SelectorDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSymbolV2SelectorDialogBase, SLOT(reject()));

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QgsSymbolV2SelectorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSymbolV2SelectorDialogBase)
    {
        QgsSymbolV2SelectorDialogBase->setWindowTitle(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Symbol selector", 0, QApplication::UnicodeUTF8));
        lblPreview->setText(QString());
        btnSymbolProperties->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Change...", 0, QApplication::UnicodeUTF8));
        mSymbolUnitLabel->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Unit", 0, QApplication::UnicodeUTF8));
        mSymbolUnitComboBox->clear();
        mSymbolUnitComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsSymbolV2SelectorDialogBase", "Millimeter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsSymbolV2SelectorDialogBase", "Map unit", 0, QApplication::UnicodeUTF8)
        );
        mTransparencyLabel->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Opacity", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Color", 0, QApplication::UnicodeUTF8));
        btnColor->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Change", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Size", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Rotation", 0, QApplication::UnicodeUTF8));
        spinAngle->setSuffix(QApplication::translate("QgsSymbolV2SelectorDialogBase", "\302\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Width", 0, QApplication::UnicodeUTF8));
        btnAdvanced->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Advanced", 0, QApplication::UnicodeUTF8));
        btnAddToStyle->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Save as style", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Saved styles", 0, QApplication::UnicodeUTF8));
        btnStyleManager->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Style manager...", 0, QApplication::UnicodeUTF8));
        lblSymbolName->setText(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Symbol Name", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsSymbolV2SelectorDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSymbolV2SelectorDialogBase: public Ui_QgsSymbolV2SelectorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSYMBOLV2SELECTORDIALOGBASE_H
