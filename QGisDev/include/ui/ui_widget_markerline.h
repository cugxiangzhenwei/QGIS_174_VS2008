/********************************************************************************
** Form generated from reading ui file 'widget_markerline.ui'
**
** Created: Tue Mar 13 10:23:38 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_MARKERLINE_H
#define UI_WIDGET_MARKERLINE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetMarkerLine
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *btnChangeMarker;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QRadioButton *radInterval;
    QDoubleSpinBox *spinInterval;
    QRadioButton *radVertex;
    QRadioButton *radVertexLast;
    QRadioButton *radVertexFirst;
    QCheckBox *chkRotateMarker;
    QLabel *label_3;
    QDoubleSpinBox *spinOffset;
    QSpacerItem *spacerItem1;
    QFrame *line;
    QRadioButton *radCentralPoint;

    void setupUi(QWidget *WidgetMarkerLine)
    {
        if (WidgetMarkerLine->objectName().isEmpty())
            WidgetMarkerLine->setObjectName(QString::fromUtf8("WidgetMarkerLine"));
        WidgetMarkerLine->resize(352, 281);
        gridLayout = new QGridLayout(WidgetMarkerLine);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WidgetMarkerLine);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnChangeMarker = new QPushButton(WidgetMarkerLine);
        btnChangeMarker->setObjectName(QString::fromUtf8("btnChangeMarker"));

        gridLayout->addWidget(btnChangeMarker, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(109, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        label_2 = new QLabel(WidgetMarkerLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        radInterval = new QRadioButton(WidgetMarkerLine);
        radInterval->setObjectName(QString::fromUtf8("radInterval"));
        radInterval->setChecked(true);

        gridLayout->addWidget(radInterval, 2, 0, 1, 1);

        spinInterval = new QDoubleSpinBox(WidgetMarkerLine);
        spinInterval->setObjectName(QString::fromUtf8("spinInterval"));
        spinInterval->setDecimals(2);
        spinInterval->setMaximum(100000);
        spinInterval->setValue(1);

        gridLayout->addWidget(spinInterval, 2, 1, 1, 1);

        radVertex = new QRadioButton(WidgetMarkerLine);
        radVertex->setObjectName(QString::fromUtf8("radVertex"));

        gridLayout->addWidget(radVertex, 3, 0, 1, 2);

        radVertexLast = new QRadioButton(WidgetMarkerLine);
        radVertexLast->setObjectName(QString::fromUtf8("radVertexLast"));

        gridLayout->addWidget(radVertexLast, 4, 0, 1, 2);

        radVertexFirst = new QRadioButton(WidgetMarkerLine);
        radVertexFirst->setObjectName(QString::fromUtf8("radVertexFirst"));

        gridLayout->addWidget(radVertexFirst, 5, 0, 1, 2);

        chkRotateMarker = new QCheckBox(WidgetMarkerLine);
        chkRotateMarker->setObjectName(QString::fromUtf8("chkRotateMarker"));

        gridLayout->addWidget(chkRotateMarker, 8, 0, 1, 2);

        label_3 = new QLabel(WidgetMarkerLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 9, 0, 1, 1);

        spinOffset = new QDoubleSpinBox(WidgetMarkerLine);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        spinOffset->setDecimals(5);
        spinOffset->setMinimum(-100000);
        spinOffset->setMaximum(100000);

        gridLayout->addWidget(spinOffset, 9, 1, 1, 1);

        spacerItem1 = new QSpacerItem(261, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 10, 0, 1, 3);

        line = new QFrame(WidgetMarkerLine);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 7, 0, 1, 3);

        radCentralPoint = new QRadioButton(WidgetMarkerLine);
        radCentralPoint->setObjectName(QString::fromUtf8("radCentralPoint"));

        gridLayout->addWidget(radCentralPoint, 6, 0, 1, 1);

        QWidget::setTabOrder(btnChangeMarker, radInterval);
        QWidget::setTabOrder(radInterval, spinInterval);
        QWidget::setTabOrder(spinInterval, radVertex);
        QWidget::setTabOrder(radVertex, radVertexLast);
        QWidget::setTabOrder(radVertexLast, radVertexFirst);
        QWidget::setTabOrder(radVertexFirst, radCentralPoint);
        QWidget::setTabOrder(radCentralPoint, chkRotateMarker);
        QWidget::setTabOrder(chkRotateMarker, spinOffset);

        retranslateUi(WidgetMarkerLine);

        QMetaObject::connectSlotsByName(WidgetMarkerLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetMarkerLine)
    {
        WidgetMarkerLine->setWindowTitle(QApplication::translate("WidgetMarkerLine", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetMarkerLine", "Marker", 0, QApplication::UnicodeUTF8));
        btnChangeMarker->setText(QApplication::translate("WidgetMarkerLine", "Change", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetMarkerLine", "Marker placement", 0, QApplication::UnicodeUTF8));
        radInterval->setText(QApplication::translate("WidgetMarkerLine", "with interval", 0, QApplication::UnicodeUTF8));
        radVertex->setText(QApplication::translate("WidgetMarkerLine", "on every vertex", 0, QApplication::UnicodeUTF8));
        radVertexLast->setText(QApplication::translate("WidgetMarkerLine", "on last vertex only", 0, QApplication::UnicodeUTF8));
        radVertexFirst->setText(QApplication::translate("WidgetMarkerLine", "on first vertex only", 0, QApplication::UnicodeUTF8));
        chkRotateMarker->setText(QApplication::translate("WidgetMarkerLine", "Rotate marker", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetMarkerLine", "Line offset", 0, QApplication::UnicodeUTF8));
        radCentralPoint->setText(QApplication::translate("WidgetMarkerLine", "on central point", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WidgetMarkerLine);
    } // retranslateUi

};

namespace Ui {
    class WidgetMarkerLine: public Ui_WidgetMarkerLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_MARKERLINE_H
