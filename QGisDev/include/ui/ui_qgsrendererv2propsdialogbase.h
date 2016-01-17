/********************************************************************************
** Form generated from reading ui file 'qgsrendererv2propsdialogbase.ui'
**
** Created: Tue Mar 13 10:23:48 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSRENDERERV2PROPSDIALOGBASE_H
#define UI_QGSRENDERERV2PROPSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRendererV2PropsDialogBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *cboRenderers;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSymbolLevels;
    QPushButton *btnOldSymbology;
    QStackedWidget *stackedWidget;
    QWidget *pageNoWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRendererV2PropsDialogBase)
    {
        if (QgsRendererV2PropsDialogBase->objectName().isEmpty())
            QgsRendererV2PropsDialogBase->setObjectName(QString::fromUtf8("QgsRendererV2PropsDialogBase"));
        QgsRendererV2PropsDialogBase->resize(529, 324);
        verticalLayout_2 = new QVBoxLayout(QgsRendererV2PropsDialogBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cboRenderers = new QComboBox(QgsRendererV2PropsDialogBase);
        cboRenderers->setObjectName(QString::fromUtf8("cboRenderers"));

        horizontalLayout->addWidget(cboRenderers);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSymbolLevels = new QPushButton(QgsRendererV2PropsDialogBase);
        btnSymbolLevels->setObjectName(QString::fromUtf8("btnSymbolLevels"));

        horizontalLayout->addWidget(btnSymbolLevels);

        btnOldSymbology = new QPushButton(QgsRendererV2PropsDialogBase);
        btnOldSymbology->setObjectName(QString::fromUtf8("btnOldSymbology"));

        horizontalLayout->addWidget(btnOldSymbology);


        verticalLayout_2->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(QgsRendererV2PropsDialogBase);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageNoWidget = new QWidget();
        pageNoWidget->setObjectName(QString::fromUtf8("pageNoWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageNoWidget->sizePolicy().hasHeightForWidth());
        pageNoWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(pageNoWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(pageNoWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        stackedWidget->addWidget(pageNoWidget);

        verticalLayout_2->addWidget(stackedWidget);

        buttonBox = new QDialogButtonBox(QgsRendererV2PropsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(cboRenderers, btnSymbolLevels);
        QWidget::setTabOrder(btnSymbolLevels, buttonBox);

        retranslateUi(QgsRendererV2PropsDialogBase);

        QMetaObject::connectSlotsByName(QgsRendererV2PropsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRendererV2PropsDialogBase)
    {
        QgsRendererV2PropsDialogBase->setWindowTitle(QApplication::translate("QgsRendererV2PropsDialogBase", "Renderer settings", 0, QApplication::UnicodeUTF8));
        btnSymbolLevels->setText(QApplication::translate("QgsRendererV2PropsDialogBase", "Symbol levels", 0, QApplication::UnicodeUTF8));
        btnOldSymbology->setText(QApplication::translate("QgsRendererV2PropsDialogBase", "Old symbology", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsRendererV2PropsDialogBase", "This renderer doesn't implement a graphical interface.", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsRendererV2PropsDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRendererV2PropsDialogBase: public Ui_QgsRendererV2PropsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERV2PROPSDIALOGBASE_H
