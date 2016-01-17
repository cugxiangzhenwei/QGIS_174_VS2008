/********************************************************************************
** Form generated from reading ui file 'qgscomposermapwidgetbase.ui'
**
** Created: Tue Mar 13 10:24:07 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERMAPWIDGETBASE_H
#define UI_QGSCOMPOSERMAPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerMapWidgetBase
{
public:
    QGridLayout *gridLayout_8;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QComboBox *mPreviewModeComboBox;
    QPushButton *mUpdatePreviewButton;
    QGroupBox *mMapGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QLineEdit *mWidthLineEdit;
    QLabel *label_3;
    QLineEdit *mHeightLineEdit;
    QLabel *label_2;
    QLineEdit *mScaleLineEdit;
    QLabel *mRotationLabel;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mKeepLayerListCheckBox;
    QLabel *label;
    QCheckBox *mDrawCanvasItemsCheckBox;
    QSpacerItem *verticalSpacer;
    QDoubleSpinBox *mRotationSpinBox;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QGroupBox *mMapExtentGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *mXMinLabel;
    QLineEdit *mXMinLineEdit;
    QLabel *mXMaxLabel;
    QLineEdit *mXMaxLineEdit;
    QLabel *mYMinLabel;
    QLineEdit *mYMinLineEdit;
    QLabel *mYMaxLabel;
    QLineEdit *mYMaxLineEdit;
    QPushButton *mSetToMapCanvasExtentButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_3;
    QGridLayout *gridLayout_7;
    QGroupBox *mGridCheckBox;
    QGridLayout *gridLayout_6;
    QLabel *mGridTypeLabel;
    QComboBox *mGridTypeComboBox;
    QLabel *mIntervalXLabel;
    QDoubleSpinBox *mIntervalXSpinBox;
    QLabel *mOffsetXLabel;
    QDoubleSpinBox *mOffsetXSpinBox;
    QLabel *mLineWidthLabel;
    QDoubleSpinBox *mLineWidthSpinBox;
    QCheckBox *mDrawAnnotationCheckBox;
    QLabel *mAnnotationPositionLabel;
    QComboBox *mAnnotationPositionComboBox;
    QLabel *mAnnotationDirectionLabel;
    QComboBox *mAnnotationDirectionComboBox;
    QPushButton *mAnnotationFontButton;
    QLabel *mDistanceToFrameLabel;
    QDoubleSpinBox *mDistanceToMapFrameSpinBox;
    QLabel *mCoordinatePrecisionLabel;
    QSpinBox *mCoordinatePrecisionSpinBox;
    QDoubleSpinBox *mCrossWidthSpinBox;
    QDoubleSpinBox *mOffsetYSpinBox;
    QLabel *mIntervalYLabel;
    QDoubleSpinBox *mIntervalYSpinBox;
    QLabel *mOffsetYLabel;
    QLabel *mCrossWidthLabel;
    QSpacerItem *verticalSpacer_2;
    QLabel *mLineColorLabel;
    QgsColorButton *mLineColorButton;

    void setupUi(QWidget *QgsComposerMapWidgetBase)
    {
        if (QgsComposerMapWidgetBase->objectName().isEmpty())
            QgsComposerMapWidgetBase->setObjectName(QString::fromUtf8("QgsComposerMapWidgetBase"));
        QgsComposerMapWidgetBase->resize(404, 447);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsComposerMapWidgetBase->sizePolicy().hasHeightForWidth());
        QgsComposerMapWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_8 = new QGridLayout(QgsComposerMapWidgetBase);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setMargin(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        toolBox = new QToolBox(QgsComposerMapWidgetBase);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 377, 414));
        gridLayout = new QGridLayout(page);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mPreviewModeComboBox = new QComboBox(groupBox);
        mPreviewModeComboBox->setObjectName(QString::fromUtf8("mPreviewModeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mPreviewModeComboBox->sizePolicy().hasHeightForWidth());
        mPreviewModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(mPreviewModeComboBox, 0, 0, 1, 1);

        mUpdatePreviewButton = new QPushButton(groupBox);
        mUpdatePreviewButton->setObjectName(QString::fromUtf8("mUpdatePreviewButton"));

        gridLayout_4->addWidget(mUpdatePreviewButton, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        mMapGroupBox = new QGroupBox(page);
        mMapGroupBox->setObjectName(QString::fromUtf8("mMapGroupBox"));
        gridLayout_2 = new QGridLayout(mMapGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textLabel1 = new QLabel(mMapGroupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1, 0, 1, 1, 1);

        mWidthLineEdit = new QLineEdit(mMapGroupBox);
        mWidthLineEdit->setObjectName(QString::fromUtf8("mWidthLineEdit"));

        gridLayout_2->addWidget(mWidthLineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(mMapGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        mHeightLineEdit = new QLineEdit(mMapGroupBox);
        mHeightLineEdit->setObjectName(QString::fromUtf8("mHeightLineEdit"));

        gridLayout_2->addWidget(mHeightLineEdit, 3, 1, 1, 1);

        label_2 = new QLabel(mMapGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setWordWrap(true);

        gridLayout_2->addWidget(label_2, 4, 1, 1, 1);

        mScaleLineEdit = new QLineEdit(mMapGroupBox);
        mScaleLineEdit->setObjectName(QString::fromUtf8("mScaleLineEdit"));

        gridLayout_2->addWidget(mScaleLineEdit, 5, 1, 1, 1);

        mRotationLabel = new QLabel(mMapGroupBox);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));
        mRotationLabel->setWordWrap(true);

        gridLayout_2->addWidget(mRotationLabel, 6, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mKeepLayerListCheckBox = new QCheckBox(mMapGroupBox);
        mKeepLayerListCheckBox->setObjectName(QString::fromUtf8("mKeepLayerListCheckBox"));
        mKeepLayerListCheckBox->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(mKeepLayerListCheckBox);

        label = new QLabel(mMapGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        horizontalLayout_2->addWidget(label);


        gridLayout_2->addLayout(horizontalLayout_2, 8, 0, 2, 2);

        mDrawCanvasItemsCheckBox = new QCheckBox(mMapGroupBox);
        mDrawCanvasItemsCheckBox->setObjectName(QString::fromUtf8("mDrawCanvasItemsCheckBox"));

        gridLayout_2->addWidget(mDrawCanvasItemsCheckBox, 10, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 11, 0, 1, 1);

        mRotationSpinBox = new QDoubleSpinBox(mMapGroupBox);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setMaximum(360);

        gridLayout_2->addWidget(mRotationSpinBox, 7, 1, 1, 1);


        gridLayout->addWidget(mMapGroupBox, 1, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("Map"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 394, 356));
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mMapExtentGroupBox = new QGroupBox(page_2);
        mMapExtentGroupBox->setObjectName(QString::fromUtf8("mMapExtentGroupBox"));
        gridLayout_3 = new QGridLayout(mMapExtentGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mXMinLabel = new QLabel(mMapExtentGroupBox);
        mXMinLabel->setObjectName(QString::fromUtf8("mXMinLabel"));
        mXMinLabel->setEnabled(true);
        mXMinLabel->setWordWrap(true);

        gridLayout_3->addWidget(mXMinLabel, 0, 0, 1, 1);

        mXMinLineEdit = new QLineEdit(mMapExtentGroupBox);
        mXMinLineEdit->setObjectName(QString::fromUtf8("mXMinLineEdit"));

        gridLayout_3->addWidget(mXMinLineEdit, 1, 0, 1, 1);

        mXMaxLabel = new QLabel(mMapExtentGroupBox);
        mXMaxLabel->setObjectName(QString::fromUtf8("mXMaxLabel"));
        mXMaxLabel->setWordWrap(true);

        gridLayout_3->addWidget(mXMaxLabel, 2, 0, 1, 1);

        mXMaxLineEdit = new QLineEdit(mMapExtentGroupBox);
        mXMaxLineEdit->setObjectName(QString::fromUtf8("mXMaxLineEdit"));

        gridLayout_3->addWidget(mXMaxLineEdit, 3, 0, 1, 1);

        mYMinLabel = new QLabel(mMapExtentGroupBox);
        mYMinLabel->setObjectName(QString::fromUtf8("mYMinLabel"));
        mYMinLabel->setWordWrap(true);

        gridLayout_3->addWidget(mYMinLabel, 4, 0, 1, 1);

        mYMinLineEdit = new QLineEdit(mMapExtentGroupBox);
        mYMinLineEdit->setObjectName(QString::fromUtf8("mYMinLineEdit"));

        gridLayout_3->addWidget(mYMinLineEdit, 5, 0, 1, 1);

        mYMaxLabel = new QLabel(mMapExtentGroupBox);
        mYMaxLabel->setObjectName(QString::fromUtf8("mYMaxLabel"));
        mYMaxLabel->setWordWrap(true);

        gridLayout_3->addWidget(mYMaxLabel, 6, 0, 1, 1);

        mYMaxLineEdit = new QLineEdit(mMapExtentGroupBox);
        mYMaxLineEdit->setObjectName(QString::fromUtf8("mYMaxLineEdit"));

        gridLayout_3->addWidget(mYMaxLineEdit, 7, 0, 1, 1);

        mSetToMapCanvasExtentButton = new QPushButton(mMapExtentGroupBox);
        mSetToMapCanvasExtentButton->setObjectName(QString::fromUtf8("mSetToMapCanvasExtentButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mSetToMapCanvasExtentButton->sizePolicy().hasHeightForWidth());
        mSetToMapCanvasExtentButton->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(mSetToMapCanvasExtentButton, 8, 0, 1, 1);


        gridLayout_5->addWidget(mMapExtentGroupBox, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 1, 0, 1, 1);

        toolBox->addItem(page_2, QString::fromUtf8("Extents"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 377, 695));
        gridLayout_7 = new QGridLayout(page_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setMargin(11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mGridCheckBox = new QGroupBox(page_3);
        mGridCheckBox->setObjectName(QString::fromUtf8("mGridCheckBox"));
        mGridCheckBox->setCheckable(true);
        mGridCheckBox->setChecked(false);
        gridLayout_6 = new QGridLayout(mGridCheckBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mGridTypeLabel = new QLabel(mGridCheckBox);
        mGridTypeLabel->setObjectName(QString::fromUtf8("mGridTypeLabel"));
        mGridTypeLabel->setWordWrap(true);

        gridLayout_6->addWidget(mGridTypeLabel, 0, 0, 1, 1);

        mGridTypeComboBox = new QComboBox(mGridCheckBox);
        mGridTypeComboBox->setObjectName(QString::fromUtf8("mGridTypeComboBox"));

        gridLayout_6->addWidget(mGridTypeComboBox, 1, 0, 1, 1);

        mIntervalXLabel = new QLabel(mGridCheckBox);
        mIntervalXLabel->setObjectName(QString::fromUtf8("mIntervalXLabel"));
        mIntervalXLabel->setWordWrap(true);

        gridLayout_6->addWidget(mIntervalXLabel, 2, 0, 1, 1);

        mIntervalXSpinBox = new QDoubleSpinBox(mGridCheckBox);
        mIntervalXSpinBox->setObjectName(QString::fromUtf8("mIntervalXSpinBox"));
        mIntervalXSpinBox->setDecimals(5);
        mIntervalXSpinBox->setMaximum(1e+07);

        gridLayout_6->addWidget(mIntervalXSpinBox, 3, 0, 1, 1);

        mOffsetXLabel = new QLabel(mGridCheckBox);
        mOffsetXLabel->setObjectName(QString::fromUtf8("mOffsetXLabel"));
        mOffsetXLabel->setWordWrap(true);

        gridLayout_6->addWidget(mOffsetXLabel, 7, 0, 1, 1);

        mOffsetXSpinBox = new QDoubleSpinBox(mGridCheckBox);
        mOffsetXSpinBox->setObjectName(QString::fromUtf8("mOffsetXSpinBox"));
        mOffsetXSpinBox->setDecimals(5);
        mOffsetXSpinBox->setMaximum(1e+07);

        gridLayout_6->addWidget(mOffsetXSpinBox, 8, 0, 1, 1);

        mLineWidthLabel = new QLabel(mGridCheckBox);
        mLineWidthLabel->setObjectName(QString::fromUtf8("mLineWidthLabel"));
        mLineWidthLabel->setWordWrap(true);

        gridLayout_6->addWidget(mLineWidthLabel, 17, 0, 1, 1);

        mLineWidthSpinBox = new QDoubleSpinBox(mGridCheckBox);
        mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
        mLineWidthSpinBox->setDecimals(5);

        gridLayout_6->addWidget(mLineWidthSpinBox, 18, 0, 1, 1);

        mDrawAnnotationCheckBox = new QCheckBox(mGridCheckBox);
        mDrawAnnotationCheckBox->setObjectName(QString::fromUtf8("mDrawAnnotationCheckBox"));

        gridLayout_6->addWidget(mDrawAnnotationCheckBox, 21, 0, 1, 1);

        mAnnotationPositionLabel = new QLabel(mGridCheckBox);
        mAnnotationPositionLabel->setObjectName(QString::fromUtf8("mAnnotationPositionLabel"));
        mAnnotationPositionLabel->setWordWrap(true);

        gridLayout_6->addWidget(mAnnotationPositionLabel, 22, 0, 1, 1);

        mAnnotationPositionComboBox = new QComboBox(mGridCheckBox);
        mAnnotationPositionComboBox->setObjectName(QString::fromUtf8("mAnnotationPositionComboBox"));

        gridLayout_6->addWidget(mAnnotationPositionComboBox, 23, 0, 1, 1);

        mAnnotationDirectionLabel = new QLabel(mGridCheckBox);
        mAnnotationDirectionLabel->setObjectName(QString::fromUtf8("mAnnotationDirectionLabel"));
        mAnnotationDirectionLabel->setFrameShape(QFrame::NoFrame);
        mAnnotationDirectionLabel->setWordWrap(true);

        gridLayout_6->addWidget(mAnnotationDirectionLabel, 24, 0, 1, 1);

        mAnnotationDirectionComboBox = new QComboBox(mGridCheckBox);
        mAnnotationDirectionComboBox->setObjectName(QString::fromUtf8("mAnnotationDirectionComboBox"));

        gridLayout_6->addWidget(mAnnotationDirectionComboBox, 25, 0, 1, 1);

        mAnnotationFontButton = new QPushButton(mGridCheckBox);
        mAnnotationFontButton->setObjectName(QString::fromUtf8("mAnnotationFontButton"));

        gridLayout_6->addWidget(mAnnotationFontButton, 34, 0, 1, 1);

        mDistanceToFrameLabel = new QLabel(mGridCheckBox);
        mDistanceToFrameLabel->setObjectName(QString::fromUtf8("mDistanceToFrameLabel"));
        mDistanceToFrameLabel->setWordWrap(true);

        gridLayout_6->addWidget(mDistanceToFrameLabel, 35, 0, 1, 1);

        mDistanceToMapFrameSpinBox = new QDoubleSpinBox(mGridCheckBox);
        mDistanceToMapFrameSpinBox->setObjectName(QString::fromUtf8("mDistanceToMapFrameSpinBox"));

        gridLayout_6->addWidget(mDistanceToMapFrameSpinBox, 36, 0, 1, 1);

        mCoordinatePrecisionLabel = new QLabel(mGridCheckBox);
        mCoordinatePrecisionLabel->setObjectName(QString::fromUtf8("mCoordinatePrecisionLabel"));
        mCoordinatePrecisionLabel->setWordWrap(true);

        gridLayout_6->addWidget(mCoordinatePrecisionLabel, 37, 0, 1, 1);

        mCoordinatePrecisionSpinBox = new QSpinBox(mGridCheckBox);
        mCoordinatePrecisionSpinBox->setObjectName(QString::fromUtf8("mCoordinatePrecisionSpinBox"));

        gridLayout_6->addWidget(mCoordinatePrecisionSpinBox, 38, 0, 1, 1);

        mCrossWidthSpinBox = new QDoubleSpinBox(mGridCheckBox);
        mCrossWidthSpinBox->setObjectName(QString::fromUtf8("mCrossWidthSpinBox"));
        mCrossWidthSpinBox->setDecimals(5);

        gridLayout_6->addWidget(mCrossWidthSpinBox, 15, 0, 1, 1);

        mOffsetYSpinBox = new QDoubleSpinBox(mGridCheckBox);
        mOffsetYSpinBox->setObjectName(QString::fromUtf8("mOffsetYSpinBox"));
        mOffsetYSpinBox->setDecimals(5);
        mOffsetYSpinBox->setMaximum(1e+07);

        gridLayout_6->addWidget(mOffsetYSpinBox, 11, 0, 1, 1);

        mIntervalYLabel = new QLabel(mGridCheckBox);
        mIntervalYLabel->setObjectName(QString::fromUtf8("mIntervalYLabel"));
        mIntervalYLabel->setWordWrap(true);

        gridLayout_6->addWidget(mIntervalYLabel, 4, 0, 1, 1);

        mIntervalYSpinBox = new QDoubleSpinBox(mGridCheckBox);
        mIntervalYSpinBox->setObjectName(QString::fromUtf8("mIntervalYSpinBox"));
        mIntervalYSpinBox->setDecimals(5);
        mIntervalYSpinBox->setMaximum(1e+07);

        gridLayout_6->addWidget(mIntervalYSpinBox, 6, 0, 1, 1);

        mOffsetYLabel = new QLabel(mGridCheckBox);
        mOffsetYLabel->setObjectName(QString::fromUtf8("mOffsetYLabel"));
        mOffsetYLabel->setWordWrap(true);

        gridLayout_6->addWidget(mOffsetYLabel, 9, 0, 1, 1);

        mCrossWidthLabel = new QLabel(mGridCheckBox);
        mCrossWidthLabel->setObjectName(QString::fromUtf8("mCrossWidthLabel"));
        mCrossWidthLabel->setWordWrap(true);

        gridLayout_6->addWidget(mCrossWidthLabel, 14, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 39, 0, 1, 1);

        mLineColorLabel = new QLabel(mGridCheckBox);
        mLineColorLabel->setObjectName(QString::fromUtf8("mLineColorLabel"));
        mLineColorLabel->setWordWrap(true);

        gridLayout_6->addWidget(mLineColorLabel, 19, 0, 1, 1);

        mLineColorButton = new QgsColorButton(mGridCheckBox);
        mLineColorButton->setObjectName(QString::fromUtf8("mLineColorButton"));
        sizePolicy2.setHeightForWidth(mLineColorButton->sizePolicy().hasHeightForWidth());
        mLineColorButton->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(mLineColorButton, 20, 0, 1, 1);


        gridLayout_7->addWidget(mGridCheckBox, 0, 0, 1, 1);

        toolBox->addItem(page_3, QString::fromUtf8("Grid"));

        gridLayout_8->addWidget(toolBox, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(mWidthLineEdit);
        label_3->setBuddy(mHeightLineEdit);
        label_2->setBuddy(mScaleLineEdit);
        mXMinLabel->setBuddy(mXMinLineEdit);
        mXMaxLabel->setBuddy(mXMaxLineEdit);
        mYMinLabel->setBuddy(mYMinLineEdit);
        mYMaxLabel->setBuddy(mYMaxLineEdit);
        mGridTypeLabel->setBuddy(mGridTypeComboBox);
        mIntervalXLabel->setBuddy(mIntervalXSpinBox);
        mOffsetXLabel->setBuddy(mOffsetXSpinBox);
        mLineWidthLabel->setBuddy(mLineWidthSpinBox);
        mAnnotationPositionLabel->setBuddy(mAnnotationPositionComboBox);
        mAnnotationDirectionLabel->setBuddy(mAnnotationDirectionComboBox);
        mDistanceToFrameLabel->setBuddy(mDistanceToMapFrameSpinBox);
        mCoordinatePrecisionLabel->setBuddy(mCoordinatePrecisionSpinBox);
        mIntervalYLabel->setBuddy(mIntervalYSpinBox);
        mOffsetYLabel->setBuddy(mOffsetYSpinBox);
        mCrossWidthLabel->setBuddy(mCrossWidthSpinBox);
        mLineColorLabel->setBuddy(mLineColorButton);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mPreviewModeComboBox, mUpdatePreviewButton);
        QWidget::setTabOrder(mUpdatePreviewButton, mWidthLineEdit);
        QWidget::setTabOrder(mWidthLineEdit, mHeightLineEdit);
        QWidget::setTabOrder(mHeightLineEdit, mScaleLineEdit);
        QWidget::setTabOrder(mScaleLineEdit, mKeepLayerListCheckBox);
        QWidget::setTabOrder(mKeepLayerListCheckBox, mXMinLineEdit);
        QWidget::setTabOrder(mXMinLineEdit, mXMaxLineEdit);
        QWidget::setTabOrder(mXMaxLineEdit, mYMinLineEdit);
        QWidget::setTabOrder(mYMinLineEdit, mYMaxLineEdit);
        QWidget::setTabOrder(mYMaxLineEdit, mSetToMapCanvasExtentButton);
        QWidget::setTabOrder(mSetToMapCanvasExtentButton, mGridCheckBox);
        QWidget::setTabOrder(mGridCheckBox, mGridTypeComboBox);
        QWidget::setTabOrder(mGridTypeComboBox, mIntervalXSpinBox);
        QWidget::setTabOrder(mIntervalXSpinBox, mIntervalYSpinBox);
        QWidget::setTabOrder(mIntervalYSpinBox, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mCrossWidthSpinBox);
        QWidget::setTabOrder(mCrossWidthSpinBox, mLineWidthSpinBox);
        QWidget::setTabOrder(mLineWidthSpinBox, mLineColorButton);
        QWidget::setTabOrder(mLineColorButton, mDrawAnnotationCheckBox);
        QWidget::setTabOrder(mDrawAnnotationCheckBox, mAnnotationPositionComboBox);
        QWidget::setTabOrder(mAnnotationPositionComboBox, mAnnotationDirectionComboBox);
        QWidget::setTabOrder(mAnnotationDirectionComboBox, mAnnotationFontButton);
        QWidget::setTabOrder(mAnnotationFontButton, mDistanceToMapFrameSpinBox);
        QWidget::setTabOrder(mDistanceToMapFrameSpinBox, mCoordinatePrecisionSpinBox);

        retranslateUi(QgsComposerMapWidgetBase);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsComposerMapWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerMapWidgetBase)
    {
        QgsComposerMapWidgetBase->setWindowTitle(QApplication::translate("QgsComposerMapWidgetBase", "Map options", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Preview", 0, QApplication::UnicodeUTF8));
        mUpdatePreviewButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "Update preview", 0, QApplication::UnicodeUTF8));
        mMapGroupBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Map", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("QgsComposerMapWidgetBase", "Width", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsComposerMapWidgetBase", "Height", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsComposerMapWidgetBase", "Scale", 0, QApplication::UnicodeUTF8));
        mScaleLineEdit->setInputMask(QString());
        mRotationLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Rotation", 0, QApplication::UnicodeUTF8));
        mKeepLayerListCheckBox->setText(QString());
        label->setText(QApplication::translate("QgsComposerMapWidgetBase", "Lock layers for map item", 0, QApplication::UnicodeUTF8));
        mDrawCanvasItemsCheckBox->setText(QApplication::translate("QgsComposerMapWidgetBase", "Draw map canvas items", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("QgsComposerMapWidgetBase", "Map", 0, QApplication::UnicodeUTF8));
        mMapExtentGroupBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Map extent", 0, QApplication::UnicodeUTF8));
        mXMinLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "X min", 0, QApplication::UnicodeUTF8));
        mXMaxLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "X max", 0, QApplication::UnicodeUTF8));
        mYMinLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Y min", 0, QApplication::UnicodeUTF8));
        mYMaxLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Y max", 0, QApplication::UnicodeUTF8));
        mSetToMapCanvasExtentButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "Set to map canvas extent", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("QgsComposerMapWidgetBase", "Extents", 0, QApplication::UnicodeUTF8));
        mGridCheckBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Show grid?", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        mGridTypeLabel->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        mGridTypeLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Grid &type", 0, QApplication::UnicodeUTF8));
        mIntervalXLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Interval X", 0, QApplication::UnicodeUTF8));
        mOffsetXLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Offset X", 0, QApplication::UnicodeUTF8));
        mLineWidthLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Line width", 0, QApplication::UnicodeUTF8));
        mDrawAnnotationCheckBox->setText(QApplication::translate("QgsComposerMapWidgetBase", "Draw annotation", 0, QApplication::UnicodeUTF8));
        mAnnotationPositionLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Annotation position", 0, QApplication::UnicodeUTF8));
        mAnnotationDirectionLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Annotation direction", 0, QApplication::UnicodeUTF8));
        mAnnotationFontButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "Font...", 0, QApplication::UnicodeUTF8));
        mDistanceToFrameLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Distance to map frame", 0, QApplication::UnicodeUTF8));
        mCoordinatePrecisionLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Coordinate precision", 0, QApplication::UnicodeUTF8));
        mIntervalYLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Interval Y", 0, QApplication::UnicodeUTF8));
        mOffsetYLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Offset Y", 0, QApplication::UnicodeUTF8));
        mCrossWidthLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Cross width", 0, QApplication::UnicodeUTF8));
        mLineColorLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Line color", 0, QApplication::UnicodeUTF8));
        mLineColorButton->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("QgsComposerMapWidgetBase", "Grid", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsComposerMapWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerMapWidgetBase: public Ui_QgsComposerMapWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERMAPWIDGETBASE_H
