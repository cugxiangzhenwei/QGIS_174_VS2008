/********************************************************************************
** Form generated from reading ui file 'qgscomposerbase.ui'
**
** Created: Tue Mar 13 10:24:09 2012
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERBASE_H
#define UI_QGSCOMPOSERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerBase
{
public:
    QAction *mActionPrint;
    QAction *mActionZoomAll;
    QAction *mActionZoomIn;
    QAction *mActionZoomOut;
    QAction *mActionAddNewMap;
    QAction *mActionAddNewLabel;
    QAction *mActionAddNewLegend;
    QAction *mActionSelectMoveItem;
    QAction *mActionExportAsImage;
    QAction *mActionExportAsPDF;
    QAction *mActionExportAsSVG;
    QAction *mActionAddNewScalebar;
    QAction *mActionRefreshView;
    QAction *mActionAddImage;
    QAction *mActionMoveItemContent;
    QAction *mActionGroupItems;
    QAction *mActionUngroupItems;
    QAction *mActionRaiseItems;
    QAction *mActionLowerItems;
    QAction *mActionMoveItemsToTop;
    QAction *mActionMoveItemsToBottom;
    QAction *mActionLoadFromTemplate;
    QAction *mActionSaveAsTemplate;
    QAction *mActionAlignLeft;
    QAction *mActionAlignHCenter;
    QAction *mActionAlignRight;
    QAction *mActionAlignTop;
    QAction *mActionAlignVCenter;
    QAction *mActionAlignBottom;
    QAction *mActionQuit;
    QAction *mActionAddBasicShape;
    QAction *mActionAddArrow;
    QAction *mActionAddTable;
    QAction *mActionPageSetup;
    QAction *mActionUndo;
    QAction *mActionRedo;
    QWidget *centralwidget;
    QGridLayout *gridLayout_1;
    QSplitter *mSplitter;
    QFrame *mViewFrame;
    QTabWidget *mOptionsTabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QFrame *mCompositionOptionsFrame;
    QComboBox *mCompositionNameComboBox;
    QLabel *textLabel1;
    QWidget *tab_2;
    QGridLayout *gridLayout1;
    QStackedWidget *mItemStackedWidget;
    QWidget *page;
    QWidget *page_2;
    QDialogButtonBox *mButtonBox;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QgsComposerBase)
    {
        if (QgsComposerBase->objectName().isEmpty())
            QgsComposerBase->setObjectName(QString::fromUtf8("QgsComposerBase"));
        QgsComposerBase->resize(1333, 609);
        QgsComposerBase->setMouseTracking(true);
        mActionPrint = new QAction(QgsComposerBase);
        mActionPrint->setObjectName(QString::fromUtf8("mActionPrint"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../themes/default/mActionFilePrint.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPrint->setIcon(icon);
        mActionZoomAll = new QAction(QgsComposerBase);
        mActionZoomAll->setObjectName(QString::fromUtf8("mActionZoomAll"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../themes/default/mActionZoomFullExtent.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomAll->setIcon(icon1);
        mActionZoomIn = new QAction(QgsComposerBase);
        mActionZoomIn->setObjectName(QString::fromUtf8("mActionZoomIn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../themes/default/mActionZoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomIn->setIcon(icon2);
        mActionZoomOut = new QAction(QgsComposerBase);
        mActionZoomOut->setObjectName(QString::fromUtf8("mActionZoomOut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../themes/default/mActionZoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomOut->setIcon(icon3);
        mActionAddNewMap = new QAction(QgsComposerBase);
        mActionAddNewMap->setObjectName(QString::fromUtf8("mActionAddNewMap"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../themes/default/mActionAddMap.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddNewMap->setIcon(icon4);
        mActionAddNewLabel = new QAction(QgsComposerBase);
        mActionAddNewLabel->setObjectName(QString::fromUtf8("mActionAddNewLabel"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../themes/default/mActionLabel.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddNewLabel->setIcon(icon5);
        mActionAddNewLegend = new QAction(QgsComposerBase);
        mActionAddNewLegend->setObjectName(QString::fromUtf8("mActionAddNewLegend"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../themes/default/mActionAddLegend.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddNewLegend->setIcon(icon6);
        mActionSelectMoveItem = new QAction(QgsComposerBase);
        mActionSelectMoveItem->setObjectName(QString::fromUtf8("mActionSelectMoveItem"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../themes/default/mActionPan.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectMoveItem->setIcon(icon7);
        mActionExportAsImage = new QAction(QgsComposerBase);
        mActionExportAsImage->setObjectName(QString::fromUtf8("mActionExportAsImage"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../themes/default/mActionSaveMapAsImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportAsImage->setIcon(icon8);
        mActionExportAsPDF = new QAction(QgsComposerBase);
        mActionExportAsPDF->setObjectName(QString::fromUtf8("mActionExportAsPDF"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../themes/default/mActionSaveAsPDF.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportAsPDF->setIcon(icon9);
        mActionExportAsSVG = new QAction(QgsComposerBase);
        mActionExportAsSVG->setObjectName(QString::fromUtf8("mActionExportAsSVG"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../themes/default/mActionSaveAsSVG.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportAsSVG->setIcon(icon10);
        mActionAddNewScalebar = new QAction(QgsComposerBase);
        mActionAddNewScalebar->setObjectName(QString::fromUtf8("mActionAddNewScalebar"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../../plugins/scale_bar/icon.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddNewScalebar->setIcon(icon11);
        mActionRefreshView = new QAction(QgsComposerBase);
        mActionRefreshView->setObjectName(QString::fromUtf8("mActionRefreshView"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("../themes/default/mActionDraw.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRefreshView->setIcon(icon12);
        mActionAddImage = new QAction(QgsComposerBase);
        mActionAddImage->setObjectName(QString::fromUtf8("mActionAddImage"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("../themes/default/mActionAddImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddImage->setIcon(icon13);
        mActionMoveItemContent = new QAction(QgsComposerBase);
        mActionMoveItemContent->setObjectName(QString::fromUtf8("mActionMoveItemContent"));
        mActionGroupItems = new QAction(QgsComposerBase);
        mActionGroupItems->setObjectName(QString::fromUtf8("mActionGroupItems"));
        mActionUngroupItems = new QAction(QgsComposerBase);
        mActionUngroupItems->setObjectName(QString::fromUtf8("mActionUngroupItems"));
        mActionRaiseItems = new QAction(QgsComposerBase);
        mActionRaiseItems->setObjectName(QString::fromUtf8("mActionRaiseItems"));
        mActionLowerItems = new QAction(QgsComposerBase);
        mActionLowerItems->setObjectName(QString::fromUtf8("mActionLowerItems"));
        mActionMoveItemsToTop = new QAction(QgsComposerBase);
        mActionMoveItemsToTop->setObjectName(QString::fromUtf8("mActionMoveItemsToTop"));
        mActionMoveItemsToBottom = new QAction(QgsComposerBase);
        mActionMoveItemsToBottom->setObjectName(QString::fromUtf8("mActionMoveItemsToBottom"));
        mActionLoadFromTemplate = new QAction(QgsComposerBase);
        mActionLoadFromTemplate->setObjectName(QString::fromUtf8("mActionLoadFromTemplate"));
        mActionSaveAsTemplate = new QAction(QgsComposerBase);
        mActionSaveAsTemplate->setObjectName(QString::fromUtf8("mActionSaveAsTemplate"));
        mActionAlignLeft = new QAction(QgsComposerBase);
        mActionAlignLeft->setObjectName(QString::fromUtf8("mActionAlignLeft"));
        mActionAlignHCenter = new QAction(QgsComposerBase);
        mActionAlignHCenter->setObjectName(QString::fromUtf8("mActionAlignHCenter"));
        mActionAlignRight = new QAction(QgsComposerBase);
        mActionAlignRight->setObjectName(QString::fromUtf8("mActionAlignRight"));
        mActionAlignTop = new QAction(QgsComposerBase);
        mActionAlignTop->setObjectName(QString::fromUtf8("mActionAlignTop"));
        mActionAlignVCenter = new QAction(QgsComposerBase);
        mActionAlignVCenter->setObjectName(QString::fromUtf8("mActionAlignVCenter"));
        mActionAlignBottom = new QAction(QgsComposerBase);
        mActionAlignBottom->setObjectName(QString::fromUtf8("mActionAlignBottom"));
        mActionQuit = new QAction(QgsComposerBase);
        mActionQuit->setObjectName(QString::fromUtf8("mActionQuit"));
        mActionAddBasicShape = new QAction(QgsComposerBase);
        mActionAddBasicShape->setObjectName(QString::fromUtf8("mActionAddBasicShape"));
        mActionAddBasicShape->setCheckable(true);
        mActionAddArrow = new QAction(QgsComposerBase);
        mActionAddArrow->setObjectName(QString::fromUtf8("mActionAddArrow"));
        mActionAddArrow->setCheckable(true);
        mActionAddTable = new QAction(QgsComposerBase);
        mActionAddTable->setObjectName(QString::fromUtf8("mActionAddTable"));
        mActionAddTable->setCheckable(true);
        mActionPageSetup = new QAction(QgsComposerBase);
        mActionPageSetup->setObjectName(QString::fromUtf8("mActionPageSetup"));
        mActionUndo = new QAction(QgsComposerBase);
        mActionUndo->setObjectName(QString::fromUtf8("mActionUndo"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.png"), QSize(), QIcon::Normal, QIcon::On);
        mActionUndo->setIcon(icon14);
        mActionRedo = new QAction(QgsComposerBase);
        mActionRedo->setObjectName(QString::fromUtf8("mActionRedo"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/themes/default/mActionRedo.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRedo->setIcon(icon15);
        centralwidget = new QWidget(QgsComposerBase);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMouseTracking(true);
        gridLayout_1 = new QGridLayout(centralwidget);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        mSplitter = new QSplitter(centralwidget);
        mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
        mSplitter->setMouseTracking(true);
        mSplitter->setOrientation(Qt::Horizontal);
        mViewFrame = new QFrame(mSplitter);
        mViewFrame->setObjectName(QString::fromUtf8("mViewFrame"));
        mViewFrame->setMouseTracking(true);
        mViewFrame->setFrameShape(QFrame::StyledPanel);
        mViewFrame->setFrameShadow(QFrame::Raised);
        mSplitter->addWidget(mViewFrame);
        mOptionsTabWidget = new QTabWidget(mSplitter);
        mOptionsTabWidget->setObjectName(QString::fromUtf8("mOptionsTabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsTabWidget->sizePolicy().hasHeightForWidth());
        mOptionsTabWidget->setSizePolicy(sizePolicy);
        mOptionsTabWidget->setMinimumSize(QSize(150, 10));
        mOptionsTabWidget->setMaximumSize(QSize(32767, 32767));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setMargin(9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mCompositionOptionsFrame = new QFrame(tab);
        mCompositionOptionsFrame->setObjectName(QString::fromUtf8("mCompositionOptionsFrame"));
        mCompositionOptionsFrame->setFrameShape(QFrame::StyledPanel);
        mCompositionOptionsFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(mCompositionOptionsFrame, 1, 0, 1, 2);

        mCompositionNameComboBox = new QComboBox(tab);
        mCompositionNameComboBox->setObjectName(QString::fromUtf8("mCompositionNameComboBox"));
        mCompositionNameComboBox->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCompositionNameComboBox->sizePolicy().hasHeightForWidth());
        mCompositionNameComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mCompositionNameComboBox, 0, 1, 1, 1);

        textLabel1 = new QLabel(tab);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        mOptionsTabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout1 = new QGridLayout(tab_2);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setMargin(0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        mItemStackedWidget = new QStackedWidget(tab_2);
        mItemStackedWidget->setObjectName(QString::fromUtf8("mItemStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mItemStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mItemStackedWidget->addWidget(page_2);

        gridLayout1->addWidget(mItemStackedWidget, 0, 0, 1, 1);

        mOptionsTabWidget->addTab(tab_2, QString());
        mSplitter->addWidget(mOptionsTabWidget);

        gridLayout_1->addWidget(mSplitter, 0, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(centralwidget);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        gridLayout_1->addWidget(mButtonBox, 1, 0, 1, 1);

        QgsComposerBase->setCentralWidget(centralwidget);
        toolBar = new QToolBar(QgsComposerBase);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);
        QgsComposerBase->addToolBar(Qt::TopToolBarArea, toolBar);
        QWidget::setTabOrder(mCompositionNameComboBox, mOptionsTabWidget);

        toolBar->addAction(mActionLoadFromTemplate);
        toolBar->addAction(mActionSaveAsTemplate);
        toolBar->addAction(mActionExportAsImage);
        toolBar->addAction(mActionExportAsPDF);
        toolBar->addAction(mActionExportAsSVG);
        toolBar->addAction(mActionPrint);
        toolBar->addSeparator();
        toolBar->addAction(mActionZoomAll);
        toolBar->addAction(mActionZoomIn);
        toolBar->addAction(mActionZoomOut);
        toolBar->addAction(mActionRefreshView);
        toolBar->addSeparator();
        toolBar->addAction(mActionUndo);
        toolBar->addAction(mActionRedo);
        toolBar->addAction(mActionAddNewMap);
        toolBar->addAction(mActionAddImage);
        toolBar->addAction(mActionAddNewLabel);
        toolBar->addAction(mActionAddNewLegend);
        toolBar->addAction(mActionAddNewScalebar);
        toolBar->addAction(mActionAddBasicShape);
        toolBar->addAction(mActionAddArrow);
        toolBar->addAction(mActionAddTable);
        toolBar->addSeparator();
        toolBar->addAction(mActionSelectMoveItem);
        toolBar->addAction(mActionMoveItemContent);
        toolBar->addAction(mActionGroupItems);
        toolBar->addAction(mActionUngroupItems);

        retranslateUi(QgsComposerBase);

        mOptionsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsComposerBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsComposerBase)
    {
        QgsComposerBase->setWindowTitle(QApplication::translate("QgsComposerBase", "MainWindow", 0, QApplication::UnicodeUTF8));
        mActionPrint->setText(QApplication::translate("QgsComposerBase", "&Print...", 0, QApplication::UnicodeUTF8));
        mActionZoomAll->setText(QApplication::translate("QgsComposerBase", "Zoom Full", 0, QApplication::UnicodeUTF8));
        mActionZoomIn->setText(QApplication::translate("QgsComposerBase", "Zoom In", 0, QApplication::UnicodeUTF8));
        mActionZoomOut->setText(QApplication::translate("QgsComposerBase", "Zoom Out", 0, QApplication::UnicodeUTF8));
        mActionAddNewMap->setText(QApplication::translate("QgsComposerBase", "Add Map", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddNewMap->setToolTip(QApplication::translate("QgsComposerBase", "Add new map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddNewLabel->setText(QApplication::translate("QgsComposerBase", "Add Label", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddNewLabel->setToolTip(QApplication::translate("QgsComposerBase", "Add new label", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddNewLegend->setText(QApplication::translate("QgsComposerBase", "Add Vector Legend", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddNewLegend->setToolTip(QApplication::translate("QgsComposerBase", "Add new vect legend", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSelectMoveItem->setText(QApplication::translate("QgsComposerBase", "Move Item", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionSelectMoveItem->setToolTip(QApplication::translate("QgsComposerBase", "Select/Move item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionExportAsImage->setText(QApplication::translate("QgsComposerBase", "Export as Image...", 0, QApplication::UnicodeUTF8));
        mActionExportAsPDF->setText(QApplication::translate("QgsComposerBase", "Export as PDF...", 0, QApplication::UnicodeUTF8));
        mActionExportAsSVG->setText(QApplication::translate("QgsComposerBase", "Export as SVG...", 0, QApplication::UnicodeUTF8));
        mActionAddNewScalebar->setText(QApplication::translate("QgsComposerBase", "Add Scalebar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddNewScalebar->setToolTip(QApplication::translate("QgsComposerBase", "Add new scalebar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionRefreshView->setText(QApplication::translate("QgsComposerBase", "Refresh", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionRefreshView->setToolTip(QApplication::translate("QgsComposerBase", "Refresh view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddImage->setText(QApplication::translate("QgsComposerBase", "Add Image", 0, QApplication::UnicodeUTF8));
        mActionMoveItemContent->setText(QApplication::translate("QgsComposerBase", "Move Content", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionMoveItemContent->setToolTip(QApplication::translate("QgsComposerBase", "Move item content", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionGroupItems->setText(QApplication::translate("QgsComposerBase", "Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionGroupItems->setToolTip(QApplication::translate("QgsComposerBase", "Group items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionUngroupItems->setText(QApplication::translate("QgsComposerBase", "Ungroup", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionUngroupItems->setToolTip(QApplication::translate("QgsComposerBase", "Ungroup items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionRaiseItems->setText(QApplication::translate("QgsComposerBase", "Raise", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionRaiseItems->setToolTip(QApplication::translate("QgsComposerBase", "Raise selected items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionLowerItems->setText(QApplication::translate("QgsComposerBase", "Lower", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionLowerItems->setToolTip(QApplication::translate("QgsComposerBase", "Lower selected items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionMoveItemsToTop->setText(QApplication::translate("QgsComposerBase", "Bring to Front", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionMoveItemsToTop->setToolTip(QApplication::translate("QgsComposerBase", "Move selected items to top", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionMoveItemsToBottom->setText(QApplication::translate("QgsComposerBase", "Send to Back", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionMoveItemsToBottom->setToolTip(QApplication::translate("QgsComposerBase", "Move selected items to bottom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionLoadFromTemplate->setText(QApplication::translate("QgsComposerBase", "Load From template", 0, QApplication::UnicodeUTF8));
        mActionSaveAsTemplate->setText(QApplication::translate("QgsComposerBase", "Save as template", 0, QApplication::UnicodeUTF8));
        mActionAlignLeft->setText(QApplication::translate("QgsComposerBase", "Align left", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignLeft->setToolTip(QApplication::translate("QgsComposerBase", "Align selected items left", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignHCenter->setText(QApplication::translate("QgsComposerBase", "Align center", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignHCenter->setToolTip(QApplication::translate("QgsComposerBase", "Align center horizontal", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignRight->setText(QApplication::translate("QgsComposerBase", "Align right", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignRight->setToolTip(QApplication::translate("QgsComposerBase", "Align selected items right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignTop->setText(QApplication::translate("QgsComposerBase", "Align top", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignTop->setToolTip(QApplication::translate("QgsComposerBase", "Align selected items to top", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignVCenter->setText(QApplication::translate("QgsComposerBase", "Align center vertical", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignVCenter->setToolTip(QApplication::translate("QgsComposerBase", "Align center vertical", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignBottom->setText(QApplication::translate("QgsComposerBase", "Align bottom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignBottom->setToolTip(QApplication::translate("QgsComposerBase", "Align selected items bottom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionQuit->setText(QApplication::translate("QgsComposerBase", "&Quit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionQuit->setToolTip(QApplication::translate("QgsComposerBase", "Quit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionQuit->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        mActionAddBasicShape->setText(QApplication::translate("QgsComposerBase", "Add Basic Shape", 0, QApplication::UnicodeUTF8));
        mActionAddArrow->setText(QApplication::translate("QgsComposerBase", "Add arrow", 0, QApplication::UnicodeUTF8));
        mActionAddTable->setText(QApplication::translate("QgsComposerBase", "Add table", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddTable->setToolTip(QApplication::translate("QgsComposerBase", "Adds attribute table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionPageSetup->setText(QApplication::translate("QgsComposerBase", "Page Setup", 0, QApplication::UnicodeUTF8));
        mActionUndo->setText(QApplication::translate("QgsComposerBase", "Undo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionUndo->setToolTip(QApplication::translate("QgsComposerBase", "Revert last change", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionUndo->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        mActionRedo->setText(QApplication::translate("QgsComposerBase", "Redo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionRedo->setToolTip(QApplication::translate("QgsComposerBase", "Restore last change", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionRedo->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+Z", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("QgsComposerBase", "Composition", 0, QApplication::UnicodeUTF8));
        mOptionsTabWidget->setTabText(mOptionsTabWidget->indexOf(tab), QApplication::translate("QgsComposerBase", "General", 0, QApplication::UnicodeUTF8));
        mOptionsTabWidget->setTabText(mOptionsTabWidget->indexOf(tab_2), QApplication::translate("QgsComposerBase", "Item", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerBase: public Ui_QgsComposerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERBASE_H
