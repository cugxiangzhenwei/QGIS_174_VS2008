/********************************************************************************
** Form generated from reading ui file 'qgscomposerarrowwidgetbase.ui'
**
** Created: Tue Mar 13 10:24:10 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERARROWWIDGETBASE_H
#define UI_QGSCOMPOSERARROWWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerArrowWidgetBase
{
public:
    QGridLayout *gridLayout_3;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QPushButton *mArrowColorButton;
    QDoubleSpinBox *mOutlineWidthSpinBox;
    QDoubleSpinBox *mArrowHeadWidthSpinBox;
    QGroupBox *mArrowMarkersGroupBox;
    QGridLayout *gridLayout_1;
    QRadioButton *mDefaultMarkerRadioButton;
    QRadioButton *mNoMarkerRadioButton;
    QRadioButton *mSvgMarkerRadioButton;
    QLabel *mStartMarkerLabel;
    QLineEdit *mStartMarkerLineEdit;
    QToolButton *mStartMarkerToolButton;
    QLabel *mEndMarkerLabel;
    QLineEdit *mEndMarkerLineEdit;
    QToolButton *mEndMarkerToolButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsComposerArrowWidgetBase)
    {
        if (QgsComposerArrowWidgetBase->objectName().isEmpty())
            QgsComposerArrowWidgetBase->setObjectName(QString::fromUtf8("QgsComposerArrowWidgetBase"));
        QgsComposerArrowWidgetBase->resize(196, 407);
        gridLayout_3 = new QGridLayout(QgsComposerArrowWidgetBase);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        toolBox = new QToolBox(QgsComposerArrowWidgetBase);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 178, 363));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mArrowColorButton = new QPushButton(page);
        mArrowColorButton->setObjectName(QString::fromUtf8("mArrowColorButton"));

        gridLayout_2->addWidget(mArrowColorButton, 0, 0, 1, 1);

        mOutlineWidthSpinBox = new QDoubleSpinBox(page);
        mOutlineWidthSpinBox->setObjectName(QString::fromUtf8("mOutlineWidthSpinBox"));

        gridLayout_2->addWidget(mOutlineWidthSpinBox, 1, 0, 1, 1);

        mArrowHeadWidthSpinBox = new QDoubleSpinBox(page);
        mArrowHeadWidthSpinBox->setObjectName(QString::fromUtf8("mArrowHeadWidthSpinBox"));

        gridLayout_2->addWidget(mArrowHeadWidthSpinBox, 2, 0, 1, 1);

        mArrowMarkersGroupBox = new QGroupBox(page);
        mArrowMarkersGroupBox->setObjectName(QString::fromUtf8("mArrowMarkersGroupBox"));
        gridLayout_1 = new QGridLayout(mArrowMarkersGroupBox);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        mDefaultMarkerRadioButton = new QRadioButton(mArrowMarkersGroupBox);
        mDefaultMarkerRadioButton->setObjectName(QString::fromUtf8("mDefaultMarkerRadioButton"));

        gridLayout_1->addWidget(mDefaultMarkerRadioButton, 0, 0, 1, 2);

        mNoMarkerRadioButton = new QRadioButton(mArrowMarkersGroupBox);
        mNoMarkerRadioButton->setObjectName(QString::fromUtf8("mNoMarkerRadioButton"));

        gridLayout_1->addWidget(mNoMarkerRadioButton, 1, 0, 1, 1);

        mSvgMarkerRadioButton = new QRadioButton(mArrowMarkersGroupBox);
        mSvgMarkerRadioButton->setObjectName(QString::fromUtf8("mSvgMarkerRadioButton"));

        gridLayout_1->addWidget(mSvgMarkerRadioButton, 2, 0, 1, 2);

        mStartMarkerLabel = new QLabel(mArrowMarkersGroupBox);
        mStartMarkerLabel->setObjectName(QString::fromUtf8("mStartMarkerLabel"));

        gridLayout_1->addWidget(mStartMarkerLabel, 3, 0, 1, 1);

        mStartMarkerLineEdit = new QLineEdit(mArrowMarkersGroupBox);
        mStartMarkerLineEdit->setObjectName(QString::fromUtf8("mStartMarkerLineEdit"));

        gridLayout_1->addWidget(mStartMarkerLineEdit, 4, 0, 1, 1);

        mStartMarkerToolButton = new QToolButton(mArrowMarkersGroupBox);
        mStartMarkerToolButton->setObjectName(QString::fromUtf8("mStartMarkerToolButton"));

        gridLayout_1->addWidget(mStartMarkerToolButton, 4, 1, 1, 1);

        mEndMarkerLabel = new QLabel(mArrowMarkersGroupBox);
        mEndMarkerLabel->setObjectName(QString::fromUtf8("mEndMarkerLabel"));

        gridLayout_1->addWidget(mEndMarkerLabel, 5, 0, 1, 1);

        mEndMarkerLineEdit = new QLineEdit(mArrowMarkersGroupBox);
        mEndMarkerLineEdit->setObjectName(QString::fromUtf8("mEndMarkerLineEdit"));

        gridLayout_1->addWidget(mEndMarkerLineEdit, 6, 0, 1, 1);

        mEndMarkerToolButton = new QToolButton(mArrowMarkersGroupBox);
        mEndMarkerToolButton->setObjectName(QString::fromUtf8("mEndMarkerToolButton"));

        gridLayout_1->addWidget(mEndMarkerToolButton, 6, 1, 1, 1);


        gridLayout_2->addWidget(mArrowMarkersGroupBox, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("Arrow"));

        gridLayout_3->addWidget(toolBox, 0, 0, 1, 1);


        retranslateUi(QgsComposerArrowWidgetBase);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsComposerArrowWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerArrowWidgetBase)
    {
        QgsComposerArrowWidgetBase->setWindowTitle(QApplication::translate("QgsComposerArrowWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mArrowColorButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Arrow color...", 0, QApplication::UnicodeUTF8));
        mOutlineWidthSpinBox->setPrefix(QApplication::translate("QgsComposerArrowWidgetBase", "Line width ", 0, QApplication::UnicodeUTF8));
        mArrowHeadWidthSpinBox->setPrefix(QApplication::translate("QgsComposerArrowWidgetBase", "Arrow head width ", 0, QApplication::UnicodeUTF8));
        mArrowMarkersGroupBox->setTitle(QApplication::translate("QgsComposerArrowWidgetBase", "Arrow markers", 0, QApplication::UnicodeUTF8));
        mDefaultMarkerRadioButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Default marker", 0, QApplication::UnicodeUTF8));
        mNoMarkerRadioButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "No marker", 0, QApplication::UnicodeUTF8));
        mSvgMarkerRadioButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "SVG markers", 0, QApplication::UnicodeUTF8));
        mStartMarkerLabel->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Start marker", 0, QApplication::UnicodeUTF8));
        mStartMarkerToolButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mEndMarkerLabel->setText(QApplication::translate("QgsComposerArrowWidgetBase", "End marker", 0, QApplication::UnicodeUTF8));
        mEndMarkerToolButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("QgsComposerArrowWidgetBase", "Arrow", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsComposerArrowWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerArrowWidgetBase: public Ui_QgsComposerArrowWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERARROWWIDGETBASE_H
