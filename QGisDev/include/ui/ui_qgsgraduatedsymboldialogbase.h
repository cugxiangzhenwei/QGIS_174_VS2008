/********************************************************************************
** Form generated from reading ui file 'qgsgraduatedsymboldialogbase.ui'
**
** Created: Tue Mar 13 10:23:59 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGRADUATEDSYMBOLDIALOGBASE_H
#define UI_QGSGRADUATEDSYMBOLDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsGraduatedSymbolDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *classvarlabel;
    QComboBox *classificationComboBox;
    QLabel *modelabel;
    QComboBox *modeComboBox;
    QLabel *numberofclasseslabel;
    QSpinBox *numberofclassesspinbox;
    QPushButton *mClassifyButton;
    QPushButton *mDeleteClassButton;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QStackedWidget *mSymbolWidgetStack;
    QWidget *page;
    QWidget *page_2;
    QListWidget *mClassListWidget;

    void setupUi(QDialog *QgsGraduatedSymbolDialogBase)
    {
        if (QgsGraduatedSymbolDialogBase->objectName().isEmpty())
            QgsGraduatedSymbolDialogBase->setObjectName(QString::fromUtf8("QgsGraduatedSymbolDialogBase"));
        QgsGraduatedSymbolDialogBase->resize(548, 479);
        QgsGraduatedSymbolDialogBase->setMinimumSize(QSize(300, 100));
        QgsGraduatedSymbolDialogBase->setMaximumSize(QSize(32767, 32767));
        gridLayout_2 = new QGridLayout(QgsGraduatedSymbolDialogBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        classvarlabel = new QLabel(QgsGraduatedSymbolDialogBase);
        classvarlabel->setObjectName(QString::fromUtf8("classvarlabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(classvarlabel->sizePolicy().hasHeightForWidth());
        classvarlabel->setSizePolicy(sizePolicy);
        classvarlabel->setMinimumSize(QSize(0, 20));
        classvarlabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(classvarlabel, 0, 0, 1, 1);

        classificationComboBox = new QComboBox(QgsGraduatedSymbolDialogBase);
        classificationComboBox->setObjectName(QString::fromUtf8("classificationComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(classificationComboBox->sizePolicy().hasHeightForWidth());
        classificationComboBox->setSizePolicy(sizePolicy1);
        classificationComboBox->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(classificationComboBox, 0, 1, 1, 1);

        modelabel = new QLabel(QgsGraduatedSymbolDialogBase);
        modelabel->setObjectName(QString::fromUtf8("modelabel"));
        sizePolicy.setHeightForWidth(modelabel->sizePolicy().hasHeightForWidth());
        modelabel->setSizePolicy(sizePolicy);
        modelabel->setMinimumSize(QSize(0, 20));
        modelabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(modelabel, 1, 0, 1, 1);

        modeComboBox = new QComboBox(QgsGraduatedSymbolDialogBase);
        modeComboBox->setObjectName(QString::fromUtf8("modeComboBox"));
        sizePolicy1.setHeightForWidth(modeComboBox->sizePolicy().hasHeightForWidth());
        modeComboBox->setSizePolicy(sizePolicy1);
        modeComboBox->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(modeComboBox, 1, 1, 1, 1);

        numberofclasseslabel = new QLabel(QgsGraduatedSymbolDialogBase);
        numberofclasseslabel->setObjectName(QString::fromUtf8("numberofclasseslabel"));
        sizePolicy.setHeightForWidth(numberofclasseslabel->sizePolicy().hasHeightForWidth());
        numberofclasseslabel->setSizePolicy(sizePolicy);
        numberofclasseslabel->setMinimumSize(QSize(0, 30));
        numberofclasseslabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(numberofclasseslabel, 2, 0, 1, 1);

        numberofclassesspinbox = new QSpinBox(QgsGraduatedSymbolDialogBase);
        numberofclassesspinbox->setObjectName(QString::fromUtf8("numberofclassesspinbox"));
        sizePolicy1.setHeightForWidth(numberofclassesspinbox->sizePolicy().hasHeightForWidth());
        numberofclassesspinbox->setSizePolicy(sizePolicy1);
        numberofclassesspinbox->setMinimumSize(QSize(0, 20));
        numberofclassesspinbox->setMinimum(1);
        numberofclassesspinbox->setValue(5);

        gridLayout->addWidget(numberofclassesspinbox, 2, 1, 1, 1);

        mClassifyButton = new QPushButton(QgsGraduatedSymbolDialogBase);
        mClassifyButton->setObjectName(QString::fromUtf8("mClassifyButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mClassifyButton->sizePolicy().hasHeightForWidth());
        mClassifyButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mClassifyButton, 3, 0, 1, 1);

        mDeleteClassButton = new QPushButton(QgsGraduatedSymbolDialogBase);
        mDeleteClassButton->setObjectName(QString::fromUtf8("mDeleteClassButton"));

        gridLayout->addWidget(mDeleteClassButton, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mSymbolWidgetStack = new QStackedWidget(QgsGraduatedSymbolDialogBase);
        mSymbolWidgetStack->setObjectName(QString::fromUtf8("mSymbolWidgetStack"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mSymbolWidgetStack->sizePolicy().hasHeightForWidth());
        mSymbolWidgetStack->setSizePolicy(sizePolicy3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mSymbolWidgetStack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mSymbolWidgetStack->addWidget(page_2);

        verticalLayout->addWidget(mSymbolWidgetStack);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 2, 1);

        mClassListWidget = new QListWidget(QgsGraduatedSymbolDialogBase);
        mClassListWidget->setObjectName(QString::fromUtf8("mClassListWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mClassListWidget->sizePolicy().hasHeightForWidth());
        mClassListWidget->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(mClassListWidget, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        classvarlabel->setBuddy(classificationComboBox);
        modelabel->setBuddy(modeComboBox);
        numberofclasseslabel->setBuddy(numberofclassesspinbox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(classificationComboBox, modeComboBox);
        QWidget::setTabOrder(modeComboBox, numberofclassesspinbox);
        QWidget::setTabOrder(numberofclassesspinbox, mClassifyButton);
        QWidget::setTabOrder(mClassifyButton, mDeleteClassButton);
        QWidget::setTabOrder(mDeleteClassButton, mClassListWidget);

        retranslateUi(QgsGraduatedSymbolDialogBase);

        mSymbolWidgetStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsGraduatedSymbolDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGraduatedSymbolDialogBase)
    {
        QgsGraduatedSymbolDialogBase->setWindowTitle(QApplication::translate("QgsGraduatedSymbolDialogBase", "graduated Symbol", 0, QApplication::UnicodeUTF8));
        classvarlabel->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Classification field", 0, QApplication::UnicodeUTF8));
        modelabel->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Mode", 0, QApplication::UnicodeUTF8));
        numberofclasseslabel->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Number of classes", 0, QApplication::UnicodeUTF8));
        mClassifyButton->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Classify", 0, QApplication::UnicodeUTF8));
        mDeleteClassButton->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Delete class", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsGraduatedSymbolDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGraduatedSymbolDialogBase: public Ui_QgsGraduatedSymbolDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGRADUATEDSYMBOLDIALOGBASE_H
