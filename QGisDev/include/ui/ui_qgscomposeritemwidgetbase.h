/********************************************************************************
** Form generated from reading ui file 'qgscomposeritemwidgetbase.ui'
**
** Created: Tue Mar 13 10:24:09 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERITEMWIDGETBASE_H
#define UI_QGSCOMPOSERITEMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerItemWidgetBase
{
public:
    QGridLayout *gridLayout;
    QPushButton *mFrameColorButton;
    QPushButton *mBackgroundColorButton;
    QLabel *mOpacityLabel;
    QSlider *mOpacitySlider;
    QLabel *mOutlineWidthLabel;
    QDoubleSpinBox *mOutlineWidthSpinBox;
    QPushButton *mPositionButton;
    QCheckBox *mFrameCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsComposerItemWidgetBase)
    {
        if (QgsComposerItemWidgetBase->objectName().isEmpty())
            QgsComposerItemWidgetBase->setObjectName(QString::fromUtf8("QgsComposerItemWidgetBase"));
        QgsComposerItemWidgetBase->resize(236, 314);
        gridLayout = new QGridLayout(QgsComposerItemWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mFrameColorButton = new QPushButton(QgsComposerItemWidgetBase);
        mFrameColorButton->setObjectName(QString::fromUtf8("mFrameColorButton"));

        gridLayout->addWidget(mFrameColorButton, 0, 0, 1, 1);

        mBackgroundColorButton = new QPushButton(QgsComposerItemWidgetBase);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));

        gridLayout->addWidget(mBackgroundColorButton, 1, 0, 1, 1);

        mOpacityLabel = new QLabel(QgsComposerItemWidgetBase);
        mOpacityLabel->setObjectName(QString::fromUtf8("mOpacityLabel"));
        mOpacityLabel->setWordWrap(true);

        gridLayout->addWidget(mOpacityLabel, 2, 0, 1, 1);

        mOpacitySlider = new QSlider(QgsComposerItemWidgetBase);
        mOpacitySlider->setObjectName(QString::fromUtf8("mOpacitySlider"));
        mOpacitySlider->setMaximum(255);
        mOpacitySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(mOpacitySlider, 3, 0, 1, 1);

        mOutlineWidthLabel = new QLabel(QgsComposerItemWidgetBase);
        mOutlineWidthLabel->setObjectName(QString::fromUtf8("mOutlineWidthLabel"));
        mOutlineWidthLabel->setWordWrap(true);

        gridLayout->addWidget(mOutlineWidthLabel, 4, 0, 1, 1);

        mOutlineWidthSpinBox = new QDoubleSpinBox(QgsComposerItemWidgetBase);
        mOutlineWidthSpinBox->setObjectName(QString::fromUtf8("mOutlineWidthSpinBox"));

        gridLayout->addWidget(mOutlineWidthSpinBox, 5, 0, 1, 1);

        mPositionButton = new QPushButton(QgsComposerItemWidgetBase);
        mPositionButton->setObjectName(QString::fromUtf8("mPositionButton"));

        gridLayout->addWidget(mPositionButton, 6, 0, 1, 1);

        mFrameCheckBox = new QCheckBox(QgsComposerItemWidgetBase);
        mFrameCheckBox->setObjectName(QString::fromUtf8("mFrameCheckBox"));

        gridLayout->addWidget(mFrameCheckBox, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(215, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mOpacityLabel->setBuddy(mOpacitySlider);
        mOutlineWidthLabel->setBuddy(mOutlineWidthSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsComposerItemWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerItemWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerItemWidgetBase)
    {
        QgsComposerItemWidgetBase->setWindowTitle(QApplication::translate("QgsComposerItemWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mFrameColorButton->setText(QApplication::translate("QgsComposerItemWidgetBase", "Frame color...", 0, QApplication::UnicodeUTF8));
        mBackgroundColorButton->setText(QApplication::translate("QgsComposerItemWidgetBase", "Background color...", 0, QApplication::UnicodeUTF8));
        mOpacityLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Opacity", 0, QApplication::UnicodeUTF8));
        mOutlineWidthLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Outline width", 0, QApplication::UnicodeUTF8));
        mPositionButton->setText(QApplication::translate("QgsComposerItemWidgetBase", "Position and size...", 0, QApplication::UnicodeUTF8));
        mFrameCheckBox->setText(QApplication::translate("QgsComposerItemWidgetBase", "Show frame", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsComposerItemWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerItemWidgetBase: public Ui_QgsComposerItemWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERITEMWIDGETBASE_H
