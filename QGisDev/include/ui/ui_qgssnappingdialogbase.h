/********************************************************************************
** Form generated from reading ui file 'qgssnappingdialogbase.ui'
**
** Created: Tue Mar 13 10:23:47 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSNAPPINGDIALOGBASE_H
#define UI_QGSSNAPPINGDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSnappingDialogBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *cbxEnableTopologicalEditingCheckBox;
    QDialogButtonBox *mButtonBox;
    QTreeWidget *mLayerTreeWidget;

    void setupUi(QDialog *QgsSnappingDialogBase)
    {
        if (QgsSnappingDialogBase->objectName().isEmpty())
            QgsSnappingDialogBase->setObjectName(QString::fromUtf8("QgsSnappingDialogBase"));
        QgsSnappingDialogBase->resize(760, 290);
        gridLayout = new QGridLayout(QgsSnappingDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbxEnableTopologicalEditingCheckBox = new QCheckBox(QgsSnappingDialogBase);
        cbxEnableTopologicalEditingCheckBox->setObjectName(QString::fromUtf8("cbxEnableTopologicalEditingCheckBox"));
        cbxEnableTopologicalEditingCheckBox->setChecked(false);
        cbxEnableTopologicalEditingCheckBox->setTristate(false);

        gridLayout->addWidget(cbxEnableTopologicalEditingCheckBox, 1, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsSnappingDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 1, 1, 1, 1);

        mLayerTreeWidget = new QTreeWidget(QgsSnappingDialogBase);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(5, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        mLayerTreeWidget->setHeaderItem(__qtreewidgetitem);
        mLayerTreeWidget->setObjectName(QString::fromUtf8("mLayerTreeWidget"));
        mLayerTreeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        mLayerTreeWidget->setIndentation(0);
        mLayerTreeWidget->setRootIsDecorated(false);

        gridLayout->addWidget(mLayerTreeWidget, 0, 0, 1, 2);


        retranslateUi(QgsSnappingDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsSnappingDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsSnappingDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSnappingDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSnappingDialogBase)
    {
        QgsSnappingDialogBase->setWindowTitle(QApplication::translate("QgsSnappingDialogBase", "Snapping options", 0, QApplication::UnicodeUTF8));
        cbxEnableTopologicalEditingCheckBox->setText(QApplication::translate("QgsSnappingDialogBase", "Enable topological editing", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mLayerTreeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("QgsSnappingDialogBase", "Avoid Int.", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("QgsSnappingDialogBase", "Units", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsSnappingDialogBase", "Tolerance", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsSnappingDialogBase", "Mode", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsSnappingDialogBase", "Layer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(5, QApplication::translate("QgsSnappingDialogBase", "Avoid intersections of new polygons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(QgsSnappingDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSnappingDialogBase: public Ui_QgsSnappingDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSNAPPINGDIALOGBASE_H
