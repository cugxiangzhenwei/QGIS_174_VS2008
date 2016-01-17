/********************************************************************************
** Form generated from reading ui file 'qgsvectorlayersaveasdialogbase.ui'
**
** Created: Tue Mar 13 10:23:41 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERSAVEASDIALOGBASE_H
#define UI_QGSVECTORLAYERSAVEASDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerSaveAsDialogBase
{
public:
    QGridLayout *gridLayout;
    QLineEdit *leFilename;
    QLineEdit *leCRS;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QPushButton *browseFilename;
    QPushButton *browseCRS;
    QComboBox *mEncodingComboBox;
    QLabel *label_4;
    QLabel *label_2;
    QComboBox *mFormatComboBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTextEdit *mOgrDatasourceOptions;
    QTextEdit *mOgrLayerOptions;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *mSkipAttributeCreation;
    QComboBox *mCRSSelection;
    QLabel *label_3;

    void setupUi(QDialog *QgsVectorLayerSaveAsDialogBase)
    {
        if (QgsVectorLayerSaveAsDialogBase->objectName().isEmpty())
            QgsVectorLayerSaveAsDialogBase->setObjectName(QString::fromUtf8("QgsVectorLayerSaveAsDialogBase"));
        QgsVectorLayerSaveAsDialogBase->resize(383, 496);
        gridLayout = new QGridLayout(QgsVectorLayerSaveAsDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leFilename = new QLineEdit(QgsVectorLayerSaveAsDialogBase);
        leFilename->setObjectName(QString::fromUtf8("leFilename"));
        leFilename->setEnabled(false);

        gridLayout->addWidget(leFilename, 1, 1, 1, 1);

        leCRS = new QLineEdit(QgsVectorLayerSaveAsDialogBase);
        leCRS->setObjectName(QString::fromUtf8("leCRS"));
        leCRS->setEnabled(false);
        leCRS->setReadOnly(true);

        gridLayout->addWidget(leCRS, 6, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsVectorLayerSaveAsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 3);

        label = new QLabel(QgsVectorLayerSaveAsDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        browseFilename = new QPushButton(QgsVectorLayerSaveAsDialogBase);
        browseFilename->setObjectName(QString::fromUtf8("browseFilename"));
        browseFilename->setEnabled(false);

        gridLayout->addWidget(browseFilename, 1, 2, 1, 1);

        browseCRS = new QPushButton(QgsVectorLayerSaveAsDialogBase);
        browseCRS->setObjectName(QString::fromUtf8("browseCRS"));

        gridLayout->addWidget(browseCRS, 6, 2, 1, 1);

        mEncodingComboBox = new QComboBox(QgsVectorLayerSaveAsDialogBase);
        mEncodingComboBox->setObjectName(QString::fromUtf8("mEncodingComboBox"));

        gridLayout->addWidget(mEncodingComboBox, 4, 1, 1, 2);

        label_4 = new QLabel(QgsVectorLayerSaveAsDialogBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_2 = new QLabel(QgsVectorLayerSaveAsDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mFormatComboBox = new QComboBox(QgsVectorLayerSaveAsDialogBase);
        mFormatComboBox->setObjectName(QString::fromUtf8("mFormatComboBox"));

        gridLayout->addWidget(mFormatComboBox, 0, 1, 1, 2);

        groupBox = new QGroupBox(QgsVectorLayerSaveAsDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mOgrDatasourceOptions = new QTextEdit(groupBox);
        mOgrDatasourceOptions->setObjectName(QString::fromUtf8("mOgrDatasourceOptions"));

        gridLayout_2->addWidget(mOgrDatasourceOptions, 0, 1, 1, 1);

        mOgrLayerOptions = new QTextEdit(groupBox);
        mOgrLayerOptions->setObjectName(QString::fromUtf8("mOgrLayerOptions"));

        gridLayout_2->addWidget(mOgrLayerOptions, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        mSkipAttributeCreation = new QCheckBox(groupBox);
        mSkipAttributeCreation->setObjectName(QString::fromUtf8("mSkipAttributeCreation"));

        gridLayout_2->addWidget(mSkipAttributeCreation, 2, 0, 1, 2);


        gridLayout->addWidget(groupBox, 7, 0, 1, 3);

        mCRSSelection = new QComboBox(QgsVectorLayerSaveAsDialogBase);
        mCRSSelection->setObjectName(QString::fromUtf8("mCRSSelection"));

        gridLayout->addWidget(mCRSSelection, 5, 1, 1, 2);

        label_3 = new QLabel(QgsVectorLayerSaveAsDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 2, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(leFilename);
        label_4->setBuddy(mEncodingComboBox);
        label_2->setBuddy(mFormatComboBox);
        label_5->setBuddy(mOgrDatasourceOptions);
        label_6->setBuddy(mOgrLayerOptions);
        label_3->setBuddy(leCRS);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mFormatComboBox, leFilename);
        QWidget::setTabOrder(leFilename, browseFilename);
        QWidget::setTabOrder(browseFilename, mEncodingComboBox);
        QWidget::setTabOrder(mEncodingComboBox, leCRS);
        QWidget::setTabOrder(leCRS, browseCRS);
        QWidget::setTabOrder(browseCRS, buttonBox);

        retranslateUi(QgsVectorLayerSaveAsDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsVectorLayerSaveAsDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsVectorLayerSaveAsDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsVectorLayerSaveAsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerSaveAsDialogBase)
    {
        QgsVectorLayerSaveAsDialogBase->setWindowTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Save vector layer as...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Save as", 0, QApplication::UnicodeUTF8));
        browseFilename->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Browse", 0, QApplication::UnicodeUTF8));
        browseCRS->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Browse", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Encoding", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Format", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "OGR creation options", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Data source", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Layer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSkipAttributeCreation->setToolTip(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "This allows to surpress attribute creation as some OGR drivers (eg. DGN, DXF) don't support it.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSkipAttributeCreation->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Skip attribute creation", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "CRS", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsVectorLayerSaveAsDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerSaveAsDialogBase: public Ui_QgsVectorLayerSaveAsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERSAVEASDIALOGBASE_H
