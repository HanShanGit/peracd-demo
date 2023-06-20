/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAuto;
    QAction *actionEnd;
    QAction *actionStep;
    QAction *actionApple;
    QAction *actionBanana;
    QAction *actionOrange;
    QAction *actionMongo;
    QAction *actionPineApple;
    QAction *actionHow_Run;
    QAction *actionAbout;
    QAction *actionFruit_Info;
    QAction *actionLog;
    QAction *threadStart;
    QAction *threadStop;
    QWidget *centralWidget;
    QTextBrowser *textInfo;
    QTextBrowser *countApple;
    QTextBrowser *countBanana;
    QTextBrowser *countOrange;
    QTextBrowser *countMongo;
    QTextBrowser *countPineapple;
    QGraphicsView *graphicsView;
    QPushButton *pushTry;
    QPushButton *pushRetry;
    QTextEdit *textEdit;
    QPushButton *textLogBtn;
    QPushButton *picBtn;
    QPushButton *picAutoBtn;
    QTextBrowser *textThread;
    QMenuBar *menuBar;
    QMenu *menuStatus;
    QMenu *menuSwitch;
    QMenu *menuHelp;
    QMenu *menuHit;
    QMenu *menuTextShow;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(944, 569);
        actionAuto = new QAction(MainWindow);
        actionAuto->setObjectName(QString::fromUtf8("actionAuto"));
        actionEnd = new QAction(MainWindow);
        actionEnd->setObjectName(QString::fromUtf8("actionEnd"));
        actionStep = new QAction(MainWindow);
        actionStep->setObjectName(QString::fromUtf8("actionStep"));
        actionApple = new QAction(MainWindow);
        actionApple->setObjectName(QString::fromUtf8("actionApple"));
        actionBanana = new QAction(MainWindow);
        actionBanana->setObjectName(QString::fromUtf8("actionBanana"));
        actionOrange = new QAction(MainWindow);
        actionOrange->setObjectName(QString::fromUtf8("actionOrange"));
        actionMongo = new QAction(MainWindow);
        actionMongo->setObjectName(QString::fromUtf8("actionMongo"));
        actionPineApple = new QAction(MainWindow);
        actionPineApple->setObjectName(QString::fromUtf8("actionPineApple"));
        actionHow_Run = new QAction(MainWindow);
        actionHow_Run->setObjectName(QString::fromUtf8("actionHow_Run"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionFruit_Info = new QAction(MainWindow);
        actionFruit_Info->setObjectName(QString::fromUtf8("actionFruit_Info"));
        actionLog = new QAction(MainWindow);
        actionLog->setObjectName(QString::fromUtf8("actionLog"));
        threadStart = new QAction(MainWindow);
        threadStart->setObjectName(QString::fromUtf8("threadStart"));
        threadStop = new QAction(MainWindow);
        threadStop->setObjectName(QString::fromUtf8("threadStop"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textInfo = new QTextBrowser(centralWidget);
        textInfo->setObjectName(QString::fromUtf8("textInfo"));
        textInfo->setGeometry(QRect(20, 60, 461, 381));
        countApple = new QTextBrowser(centralWidget);
        countApple->setObjectName(QString::fromUtf8("countApple"));
        countApple->setGeometry(QRect(20, 10, 111, 41));
        countBanana = new QTextBrowser(centralWidget);
        countBanana->setObjectName(QString::fromUtf8("countBanana"));
        countBanana->setGeometry(QRect(170, 10, 111, 41));
        countOrange = new QTextBrowser(centralWidget);
        countOrange->setObjectName(QString::fromUtf8("countOrange"));
        countOrange->setGeometry(QRect(340, 10, 111, 41));
        countMongo = new QTextBrowser(centralWidget);
        countMongo->setObjectName(QString::fromUtf8("countMongo"));
        countMongo->setGeometry(QRect(500, 10, 111, 41));
        countPineapple = new QTextBrowser(centralWidget);
        countPineapple->setObjectName(QString::fromUtf8("countPineapple"));
        countPineapple->setGeometry(QRect(660, 10, 111, 41));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(510, 80, 401, 381));
        pushTry = new QPushButton(centralWidget);
        pushTry->setObjectName(QString::fromUtf8("pushTry"));
        pushTry->setGeometry(QRect(850, 10, 75, 23));
        pushRetry = new QPushButton(centralWidget);
        pushRetry->setObjectName(QString::fromUtf8("pushRetry"));
        pushRetry->setGeometry(QRect(780, 50, 75, 23));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(340, 470, 141, 41));
        textLogBtn = new QPushButton(centralWidget);
        textLogBtn->setObjectName(QString::fromUtf8("textLogBtn"));
        textLogBtn->setGeometry(QRect(510, 480, 81, 21));
        picBtn = new QPushButton(centralWidget);
        picBtn->setObjectName(QString::fromUtf8("picBtn"));
        picBtn->setGeometry(QRect(720, 480, 75, 23));
        picAutoBtn = new QPushButton(centralWidget);
        picAutoBtn->setObjectName(QString::fromUtf8("picAutoBtn"));
        picAutoBtn->setGeometry(QRect(610, 480, 75, 23));
        textThread = new QTextBrowser(centralWidget);
        textThread->setObjectName(QString::fromUtf8("textThread"));
        textThread->setGeometry(QRect(20, 460, 101, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 944, 23));
        menuStatus = new QMenu(menuBar);
        menuStatus->setObjectName(QString::fromUtf8("menuStatus"));
        menuSwitch = new QMenu(menuBar);
        menuSwitch->setObjectName(QString::fromUtf8("menuSwitch"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuHit = new QMenu(menuBar);
        menuHit->setObjectName(QString::fromUtf8("menuHit"));
        menuTextShow = new QMenu(menuBar);
        menuTextShow->setObjectName(QString::fromUtf8("menuTextShow"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuStatus->menuAction());
        menuBar->addAction(menuSwitch->menuAction());
        menuBar->addAction(menuHit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuTextShow->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuStatus->addAction(actionAuto);
        menuStatus->addAction(actionEnd);
        menuStatus->addAction(actionStep);
        menuSwitch->addAction(actionApple);
        menuSwitch->addAction(actionBanana);
        menuSwitch->addAction(actionOrange);
        menuSwitch->addAction(actionMongo);
        menuSwitch->addAction(actionPineApple);
        menuHelp->addAction(actionHow_Run);
        menuHelp->addAction(actionAbout);
        menuTextShow->addAction(actionFruit_Info);
        menuTextShow->addAction(actionLog);
        menu_2->addAction(threadStart);
        menu_2->addAction(threadStop);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FruitMaster", nullptr));
        actionAuto->setText(QApplication::translate("MainWindow", "Auto", nullptr));
        actionEnd->setText(QApplication::translate("MainWindow", "End", nullptr));
        actionStep->setText(QApplication::translate("MainWindow", "Step", nullptr));
        actionApple->setText(QApplication::translate("MainWindow", "Apple", nullptr));
        actionBanana->setText(QApplication::translate("MainWindow", "Banana", nullptr));
        actionOrange->setText(QApplication::translate("MainWindow", "Orange", nullptr));
        actionMongo->setText(QApplication::translate("MainWindow", "Mongo", nullptr));
        actionPineApple->setText(QApplication::translate("MainWindow", "PineApple", nullptr));
        actionHow_Run->setText(QApplication::translate("MainWindow", "How Run", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionFruit_Info->setText(QApplication::translate("MainWindow", "Fruit Info", nullptr));
        actionLog->setText(QApplication::translate("MainWindow", "Log", nullptr));
        threadStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        threadStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        textInfo->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushTry->setText(QApplication::translate("MainWindow", "PushTry", nullptr));
        pushRetry->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        textLogBtn->setText(QApplication::translate("MainWindow", "WriteLog", nullptr));
        picBtn->setText(QApplication::translate("MainWindow", "ShowPic", nullptr));
        picAutoBtn->setText(QApplication::translate("MainWindow", "Resize", nullptr));
        menuStatus->setTitle(QApplication::translate("MainWindow", "Status", nullptr));
        menuSwitch->setTitle(QApplication::translate("MainWindow", "Switch Fruit", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuHit->setTitle(QApplication::translate("MainWindow", "Hit", nullptr));
        menuTextShow->setTitle(QApplication::translate("MainWindow", "Text Show", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "|||", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\244\232\347\272\277\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
