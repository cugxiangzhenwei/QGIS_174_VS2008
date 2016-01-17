/********************************************************************************
** Form generated from reading ui file 'qgscomposershapewidgetbase.ui'
**
** Created: Tue Mar 13 10:24:06 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERSHAPEWIDGETBASE_H
#define UI_QGSCOMPOSERSHAPEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerShapeWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QToolBox *toolBox;
    QWidget *Shape;
    QGridLayout *gridLayout;
    QComboBox *mShapeComboBox;
    QPushButton *mOutlineColorButton;
    QDoubleSpinBox *mOutlineWidthSpinBox;
    QCheckBox *mTransparentCheckBox;
    QPushButton *mFillColorButton;
    QSpinBox *mRotationSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsComposerShapeWidgetBase)
    {
        if (QgsComposerShapeWidgetBase->objectName().isEmpty())
            QgsComposerShapeWidgetBase->setObjectName(QString::fromUtf8("QgsComposerShapeWidgetBase"));
        QgsComposerShapeWidgetBase->resize(285, 427);
        gridLayout_2 = new QGridLayout(QgsComposerShapeWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        toolBox = new QToolBox(QgsComposerShapeWidgetBase);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        Shape = new QWidget();
        Shape->setObjectName(QString::fromUtf8("Shape"));
        Shape->setGeometry(QRect(0, 0, 267, 377));
        gridLayout = new QGridLayout(Shape);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mShapeComboBox = new QComboBox(Shape);
        mShapeComboBox->setObjectName(QString::fromUtf8("mShapeComboBox"));

        gridLayout->addWidget(mShapeComboBox, 0, 0, 1, 1);

        mOutlineColorButton = new QPushButton(Shape);
        mOutlineColorButton->setObjectName(QString::fromUtf8("mOutlineColorButton"));

        gridLayout->addWidget(mOutlineColorButton, 1, 0, 1, 1);

        mOutlineWidthSpinBox = new QDoubleSpinBox(Shape);
        mOutlineWidthSpinBox->setObjectName(QString::fromUtf8("mOutlineWidthSpinBox"));

        gridLayout->addWidget(mOutlineWidthSpinBox, 2, 0, 1, 1);

        mTransparentCheckBox = new QCheckBox(Shape);
        mTransparentCheckBox->setObjectName(QString::fromUtf8("mTransparentCheckBox"));

        gridLayout->addWidget(mTransparentCheckBox, 3, 0, 1, 1);

        mFillColorButton = new QPushButton(Shape);
        mFillColorButton->setObjectName(QString::fromUtf8("mFillColorButton"));

        gridLayout->addWidget(mFillColorButton, 4, 0, 1, 1);

        mRotationSpinBox = new QSpinBox(Shape);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setMaximum(359);

        gridLayout->addWidget(mRotationSpinBox, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        toolBox->addItem(Shape, QString::fromUtf8("Shape"));

        gridLayout_2->addWidget(toolBox, 0, 0, 1, 1);


        retranslateUi(QgsComposerShapeWidgetBase);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsComposerShapeWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerShapeWidgetBase)
    {
        QgsComposerShapeWidgetBase->setWindowTitle(QApplication::translate("QgsComposerShapeWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mOutlineColorButton->setText(QApplication::translate("QgsComposerShapeWidgetBase", "Shape outline color...", 0, QApplication::UnicodeUTF8));
        mOutlineWidthSpinBox->setPrefix(QApplication::translate("QgsComposerShapeWidgetBase", "Outline width ", 0, QApplication::UnicodeUTF8));
        mTransparentCheckBox->setText(QApplication::translate("QgsComposerShapeWidgetBase", "Transparent fill", 0, QApplication::UnicodeUTF8));
        mFillColorButton->setText(QApplication::translate("QgsComposerShapeWidgetBase", "Shape fill Color...", 0, QApplication::UnicodeUTF8));
        mRotationSpinBox->setPrefix(QApplication::translate("QgsComposerShapeWidgetBase", "Rotation ", "Rotation", QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(Shape), QApplication::translate("QgsComposerShapeWidgetBase", "Shape", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsComposerShapeWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerShapeWidgetBase: public Ui_QgsComposerShapeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERSHAPEWIDGETBASE_H
