/********************************************************************************
** Form generated from reading UI file 'BoardClient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDCLIENT_H
#define UI_BOARDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardClientClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BoardClientClass)
    {
        if (BoardClientClass->objectName().isEmpty())
            BoardClientClass->setObjectName(QString::fromUtf8("BoardClientClass"));
        BoardClientClass->resize(600, 400);
        centralWidget = new QWidget(BoardClientClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 90, 75, 23));
        BoardClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BoardClientClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        BoardClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BoardClientClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BoardClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BoardClientClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BoardClientClass->setStatusBar(statusBar);

        retranslateUi(BoardClientClass);

        QMetaObject::connectSlotsByName(BoardClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *BoardClientClass)
    {
        BoardClientClass->setWindowTitle(QApplication::translate("BoardClientClass", "BoardClient", nullptr));
        pushButton->setText(QApplication::translate("BoardClientClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardClientClass: public Ui_BoardClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDCLIENT_H
