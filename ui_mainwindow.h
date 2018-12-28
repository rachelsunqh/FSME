/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "editorevent.h"
#include "editorinput.h"
#include "editoroutput.h"
#include "editorpanel.h"
#include "editorroot.h"
#include "editorstate.h"
#include "editortransition.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *actionClear_List;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *action_Quit;
    QAction *action_Print;
    QAction *actionFitScale;
    QAction *actionDefaultScale;
    QAction *actionAdd;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionDelete;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *treeSplitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeView;
    QSplitter *editorSplitter;
    QGraphicsView *diagramView;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    EditorPanel *editorStack;
    QWidget *noSelection;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QWidget *multipleSelection;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    EditorRoot *editorRoot;
    EditorEvent *editorEvent;
    EditorInput *editorInput;
    EditorOutput *editorOutput;
    EditorState *editorState;
    EditorTransition *editorTransition;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *recentFiles;
    QMenu *menu_Edit;
    QMenu *menuView;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1123, 585);
        MainWindow->setDocumentMode(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        actionClear_List = new QAction(MainWindow);
        actionClear_List->setObjectName(QStringLiteral("actionClear_List"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Print = new QAction(MainWindow);
        action_Print->setObjectName(QStringLiteral("action_Print"));
        actionFitScale = new QAction(MainWindow);
        actionFitScale->setObjectName(QStringLiteral("actionFitScale"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/scale-fit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFitScale->setIcon(icon);
        actionDefaultScale = new QAction(MainWindow);
        actionDefaultScale->setObjectName(QStringLiteral("actionDefaultScale"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/scale-original.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDefaultScale->setIcon(icon1);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionAdd->setCheckable(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon2);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon3);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon4);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        treeSplitter = new QSplitter(centralWidget);
        treeSplitter->setObjectName(QStringLiteral("treeSplitter"));
        treeSplitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(treeSplitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(layoutWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setMinimumSize(QSize(200, 0));
        treeView->setBaseSize(QSize(200, 0));

        verticalLayout_2->addWidget(treeView);

        treeSplitter->addWidget(layoutWidget);
        editorSplitter = new QSplitter(treeSplitter);
        editorSplitter->setObjectName(QStringLiteral("editorSplitter"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editorSplitter->sizePolicy().hasHeightForWidth());
        editorSplitter->setSizePolicy(sizePolicy1);
        editorSplitter->setOrientation(Qt::Vertical);
        diagramView = new QGraphicsView(editorSplitter);
        diagramView->setObjectName(QStringLiteral("diagramView"));
        diagramView->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);
        editorSplitter->addWidget(diagramView);
        frame = new QFrame(editorSplitter);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        editorStack = new EditorPanel(frame);
        editorStack->setObjectName(QStringLiteral("editorStack"));
        sizePolicy2.setHeightForWidth(editorStack->sizePolicy().hasHeightForWidth());
        editorStack->setSizePolicy(sizePolicy2);
        editorStack->setMinimumSize(QSize(0, 200));
        noSelection = new QWidget();
        noSelection->setObjectName(QStringLiteral("noSelection"));
        verticalLayout_3 = new QVBoxLayout(noSelection);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(noSelection);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        editorStack->addWidget(noSelection);
        multipleSelection = new QWidget();
        multipleSelection->setObjectName(QStringLiteral("multipleSelection"));
        verticalLayout_4 = new QVBoxLayout(multipleSelection);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(multipleSelection);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        editorStack->addWidget(multipleSelection);
        editorRoot = new EditorRoot();
        editorRoot->setObjectName(QStringLiteral("editorRoot"));
        editorStack->addWidget(editorRoot);
        editorEvent = new EditorEvent();
        editorEvent->setObjectName(QStringLiteral("editorEvent"));
        editorStack->addWidget(editorEvent);
        editorInput = new EditorInput();
        editorInput->setObjectName(QStringLiteral("editorInput"));
        editorStack->addWidget(editorInput);
        editorOutput = new EditorOutput();
        editorOutput->setObjectName(QStringLiteral("editorOutput"));
        editorStack->addWidget(editorOutput);
        editorState = new EditorState();
        editorState->setObjectName(QStringLiteral("editorState"));
        editorStack->addWidget(editorState);
        editorTransition = new EditorTransition();
        editorTransition->setObjectName(QStringLiteral("editorTransition"));
        editorStack->addWidget(editorTransition);

        verticalLayout->addWidget(editorStack);

        editorSplitter->addWidget(frame);
        treeSplitter->addWidget(editorSplitter);

        horizontalLayout_2->addWidget(treeSplitter);

        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1123, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        recentFiles = new QMenu(menu_File);
        recentFiles->setObjectName(QStringLiteral("recentFiles"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(24, 24));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menuView->menuAction());
        menu_File->addAction(action_New);
        menu_File->addAction(action_Open);
        menu_File->addAction(recentFiles->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionSave);
        menu_File->addAction(actionSaveAs);
        menu_File->addSeparator();
        menu_File->addAction(action_Print);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menuView->addAction(actionFitScale);
        menuView->addAction(actionDefaultScale);
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionFitScale);
        toolBar->addAction(actionDefaultScale);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionDelete, SIGNAL(triggered()), MainWindow, SLOT(deleteItems()));

        editorStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_New->setText(QApplication::translate("MainWindow", "&New", nullptr));
#ifndef QT_NO_SHORTCUT
        action_New->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        action_Open->setText(QApplication::translate("MainWindow", "&Open", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionClear_List->setText(QApplication::translate("MainWindow", "Clear List", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save &As\342\200\246", nullptr));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_Print->setText(QApplication::translate("MainWindow", "&Print", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Print->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionFitScale->setText(QApplication::translate("MainWindow", "&Fit Scale", nullptr));
        actionFitScale->setIconText(QApplication::translate("MainWindow", "Fit", nullptr));
        actionDefaultScale->setText(QApplication::translate("MainWindow", "&Original Scale", nullptr));
        actionDefaultScale->setIconText(QApplication::translate("MainWindow", "Original", nullptr));
        actionAdd->setText(QApplication::translate("MainWindow", "Add New", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAdd->setToolTip(QApplication::translate("MainWindow", "Add New\342\200\246", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAdd->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "No selection", nullptr));
        label->setText(QApplication::translate("MainWindow", "Multiple items selected", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        recentFiles->setTitle(QApplication::translate("MainWindow", "Open &Recent", nullptr));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
