/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_A;
    QAction *actionFind_F;
    QAction *actionRelationship;
    QAction *actionBirthday;
    QAction *actionDelete_D;
    QAction *actionName_N;
    QAction *actionBirthday_B;
    QAction *actionBirthday_B_2;
    QAction *actionBirthdayEmail_E;
    QAction *actionEdit_E;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu_O;
    QMenu *menuList_By_L;
    QMenu *menuSort_S;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(603, 527);
        actionAdd_A = new QAction(MainWindow);
        actionAdd_A->setObjectName(QStringLiteral("actionAdd_A"));
        actionFind_F = new QAction(MainWindow);
        actionFind_F->setObjectName(QStringLiteral("actionFind_F"));
        actionRelationship = new QAction(MainWindow);
        actionRelationship->setObjectName(QStringLiteral("actionRelationship"));
        actionBirthday = new QAction(MainWindow);
        actionBirthday->setObjectName(QStringLiteral("actionBirthday"));
        actionDelete_D = new QAction(MainWindow);
        actionDelete_D->setObjectName(QStringLiteral("actionDelete_D"));
        actionName_N = new QAction(MainWindow);
        actionName_N->setObjectName(QStringLiteral("actionName_N"));
        actionBirthday_B = new QAction(MainWindow);
        actionBirthday_B->setObjectName(QStringLiteral("actionBirthday_B"));
        actionBirthday_B_2 = new QAction(MainWindow);
        actionBirthday_B_2->setObjectName(QStringLiteral("actionBirthday_B_2"));
        actionBirthdayEmail_E = new QAction(MainWindow);
        actionBirthdayEmail_E->setObjectName(QStringLiteral("actionBirthdayEmail_E"));
        actionEdit_E = new QAction(MainWindow);
        actionEdit_E->setObjectName(QStringLiteral("actionEdit_E"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 603, 23));
        menu_O = new QMenu(menuBar);
        menu_O->setObjectName(QStringLiteral("menu_O"));
        menuList_By_L = new QMenu(menu_O);
        menuList_By_L->setObjectName(QStringLiteral("menuList_By_L"));
        menuSort_S = new QMenu(menu_O);
        menuSort_S->setObjectName(QStringLiteral("menuSort_S"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_O->menuAction());
        menu_O->addAction(actionAdd_A);
        menu_O->addAction(actionEdit_E);
        menu_O->addAction(actionDelete_D);
        menu_O->addSeparator();
        menu_O->addAction(actionFind_F);
        menu_O->addAction(menuSort_S->menuAction());
        menu_O->addAction(menuList_By_L->menuAction());
        menu_O->addSeparator();
        menu_O->addAction(actionBirthday_B_2);
        menu_O->addAction(actionBirthdayEmail_E);
        menuList_By_L->addAction(actionRelationship);
        menuList_By_L->addAction(actionBirthday);
        menuSort_S->addAction(actionName_N);
        menuSort_S->addAction(actionBirthday_B);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionAdd_A->setText(QApplication::translate("MainWindow", "Add(&A)", Q_NULLPTR));
        actionFind_F->setText(QApplication::translate("MainWindow", "Find(&F)", Q_NULLPTR));
        actionRelationship->setText(QApplication::translate("MainWindow", "Relationship", Q_NULLPTR));
        actionBirthday->setText(QApplication::translate("MainWindow", "Birthday", Q_NULLPTR));
        actionDelete_D->setText(QApplication::translate("MainWindow", "Delete(&D)", Q_NULLPTR));
        actionName_N->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        actionBirthday_B->setText(QApplication::translate("MainWindow", "Birthday", Q_NULLPTR));
        actionBirthday_B_2->setText(QApplication::translate("MainWindow", "Birthday(&B)", Q_NULLPTR));
        actionBirthdayEmail_E->setText(QApplication::translate("MainWindow", "BirthdayEmail(&E)", Q_NULLPTR));
        actionEdit_E->setText(QApplication::translate("MainWindow", "Edit(&E)", Q_NULLPTR));
        menu_O->setTitle(QApplication::translate("MainWindow", "Menu(&M)", Q_NULLPTR));
        menuList_By_L->setTitle(QApplication::translate("MainWindow", "List By...(&L)", Q_NULLPTR));
        menuSort_S->setTitle(QApplication::translate("MainWindow", "Sort By...(&S)", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
