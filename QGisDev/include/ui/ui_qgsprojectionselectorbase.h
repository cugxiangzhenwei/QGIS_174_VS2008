/********************************************************************************
** Form generated from reading ui file 'qgsprojectionselectorbase.ui'
**
** Created: Tue Mar 13 10:23:50 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPROJECTIONSELECTORBASE_H
#define UI_QGSPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsProjectionSelectorBase
{
public:
    QGridLayout *gridLayout;
    QTextEdit *teProjection;
    QTreeWidget *lstCoordinateSystems;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *cbxAuthority;
    QLabel *label_2;
    QComboBox *cbxMode;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cbxHideDeprecated;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leSearch;
    QPushButton *pbnFind;
    QLabel *label_3;
    QTreeWidget *lstRecent;

    void setupUi(QWidget *QgsProjectionSelectorBase)
    {
        if (QgsProjectionSelectorBase->objectName().isEmpty())
            QgsProjectionSelectorBase->setObjectName(QString::fromUtf8("QgsProjectionSelectorBase"));
        QgsProjectionSelectorBase->resize(590, 358);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsProjectionSelectorBase->sizePolicy().hasHeightForWidth());
        QgsProjectionSelectorBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsProjectionSelectorBase->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsProjectionSelectorBase);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        teProjection = new QTextEdit(QgsProjectionSelectorBase);
        teProjection->setObjectName(QString::fromUtf8("teProjection"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(teProjection->sizePolicy().hasHeightForWidth());
        teProjection->setSizePolicy(sizePolicy1);
        teProjection->setMinimumSize(QSize(0, 30));
        teProjection->setMaximumSize(QSize(16777215, 50));
        teProjection->setBaseSize(QSize(0, 50));
        teProjection->setAutoFormatting(QTextEdit::AutoBulletList);
        teProjection->setReadOnly(true);

        gridLayout->addWidget(teProjection, 1, 0, 1, 1);

        lstCoordinateSystems = new QTreeWidget(QgsProjectionSelectorBase);
        lstCoordinateSystems->setObjectName(QString::fromUtf8("lstCoordinateSystems"));
        lstCoordinateSystems->setAlternatingRowColors(true);
        lstCoordinateSystems->setUniformRowHeights(true);
        lstCoordinateSystems->setColumnCount(3);

        gridLayout->addWidget(lstCoordinateSystems, 0, 0, 1, 1);

        groupBox = new QGroupBox(QgsProjectionSelectorBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        cbxAuthority = new QComboBox(groupBox);
        cbxAuthority->setObjectName(QString::fromUtf8("cbxAuthority"));

        horizontalLayout_2->addWidget(cbxAuthority);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cbxMode = new QComboBox(groupBox);
        cbxMode->setObjectName(QString::fromUtf8("cbxMode"));

        horizontalLayout_2->addWidget(cbxMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cbxHideDeprecated = new QCheckBox(groupBox);
        cbxHideDeprecated->setObjectName(QString::fromUtf8("cbxHideDeprecated"));

        horizontalLayout_2->addWidget(cbxHideDeprecated);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leSearch = new QLineEdit(groupBox);
        leSearch->setObjectName(QString::fromUtf8("leSearch"));

        horizontalLayout->addWidget(leSearch);

        pbnFind = new QPushButton(groupBox);
        pbnFind->setObjectName(QString::fromUtf8("pbnFind"));
        pbnFind->setMaximumSize(QSize(100, 16777215));
        pbnFind->setDefault(true);

        horizontalLayout->addWidget(pbnFind);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);

        label_3 = new QLabel(QgsProjectionSelectorBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        lstRecent = new QTreeWidget(QgsProjectionSelectorBase);
        lstRecent->setObjectName(QString::fromUtf8("lstRecent"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lstRecent->sizePolicy().hasHeightForWidth());
        lstRecent->setSizePolicy(sizePolicy3);
        lstRecent->setMinimumSize(QSize(0, 105));
        lstRecent->setMaximumSize(QSize(16777215, 105));
        lstRecent->setAlternatingRowColors(true);
        lstRecent->setRootIsDecorated(false);
        lstRecent->setUniformRowHeights(true);
        lstRecent->setColumnCount(3);

        gridLayout->addWidget(lstRecent, 4, 0, 1, 1);

        QWidget::setTabOrder(lstCoordinateSystems, teProjection);
        QWidget::setTabOrder(teProjection, cbxAuthority);
        QWidget::setTabOrder(cbxAuthority, cbxMode);
        QWidget::setTabOrder(cbxMode, cbxHideDeprecated);
        QWidget::setTabOrder(cbxHideDeprecated, leSearch);
        QWidget::setTabOrder(leSearch, pbnFind);
        QWidget::setTabOrder(pbnFind, lstRecent);

        retranslateUi(QgsProjectionSelectorBase);

        QMetaObject::connectSlotsByName(QgsProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProjectionSelectorBase)
    {
        QgsProjectionSelectorBase->setWindowTitle(QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System Selector", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = lstCoordinateSystems->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsProjectionSelectorBase", "ID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsProjectionSelectorBase", "Authority ID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsProjectionSelectorBase", "Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsProjectionSelectorBase", "Authority", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsProjectionSelectorBase", "Search for", 0, QApplication::UnicodeUTF8));
        cbxMode->clear();
        cbxMode->insertItems(0, QStringList()
         << QApplication::translate("QgsProjectionSelectorBase", "ID", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsProjectionSelectorBase", "Name", 0, QApplication::UnicodeUTF8)
        );
        cbxHideDeprecated->setText(QApplication::translate("QgsProjectionSelectorBase", "Hide deprecated CRSs", 0, QApplication::UnicodeUTF8));
        pbnFind->setText(QApplication::translate("QgsProjectionSelectorBase", "Find", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsProjectionSelectorBase", "Recently used coordinate references systems", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = lstRecent->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("QgsProjectionSelectorBase", "ID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsProjectionSelectorBase", "Authority ID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsProjectionSelectorBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProjectionSelectorBase: public Ui_QgsProjectionSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTIONSELECTORBASE_H
