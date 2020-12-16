/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *receiveText;
    QTextEdit *sendText;
    QLabel *interSetting;
    QLabel *interText;
    QLabel *hostIP;
    QTextEdit *hostIPText;
    QLabel *hostPost;
    QTextEdit *hostPostText;
    QPushButton *sendButton;
    QPushButton *startButton;
    QComboBox *cbxConnection;
    QLabel *clientT;
    QPushButton *closeConnectButton;
    QPushButton *closeNowConnectButton;
    QPushButton *allSendButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(907, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        receiveText = new QTextEdit(centralwidget);
        receiveText->setObjectName(QString::fromUtf8("receiveText"));
        receiveText->setGeometry(QRect(20, 20, 591, 391));
        sendText = new QTextEdit(centralwidget);
        sendText->setObjectName(QString::fromUtf8("sendText"));
        sendText->setGeometry(QRect(20, 420, 591, 81));
        interSetting = new QLabel(centralwidget);
        interSetting->setObjectName(QString::fromUtf8("interSetting"));
        interSetting->setGeometry(QRect(640, 40, 251, 491));
        interSetting->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-width: 1;\n"
"border-style: solid;"));
        interText = new QLabel(centralwidget);
        interText->setObjectName(QString::fromUtf8("interText"));
        interText->setGeometry(QRect(740, 50, 54, 12));
        hostIP = new QLabel(centralwidget);
        hostIP->setObjectName(QString::fromUtf8("hostIP"));
        hostIP->setGeometry(QRect(650, 70, 54, 12));
        hostIPText = new QTextEdit(centralwidget);
        hostIPText->setObjectName(QString::fromUtf8("hostIPText"));
        hostIPText->setGeometry(QRect(650, 90, 201, 31));
        hostIPText->setReadOnly(true);
        hostPost = new QLabel(centralwidget);
        hostPost->setObjectName(QString::fromUtf8("hostPost"));
        hostPost->setGeometry(QRect(650, 130, 54, 12));
        hostPostText = new QTextEdit(centralwidget);
        hostPostText->setObjectName(QString::fromUtf8("hostPostText"));
        hostPostText->setGeometry(QRect(650, 150, 201, 31));
        hostPostText->setReadOnly(false);
        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(530, 510, 75, 23));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(650, 350, 75, 23));
        cbxConnection = new QComboBox(centralwidget);
        cbxConnection->setObjectName(QString::fromUtf8("cbxConnection"));
        cbxConnection->setGeometry(QRect(650, 230, 201, 31));
        clientT = new QLabel(centralwidget);
        clientT->setObjectName(QString::fromUtf8("clientT"));
        clientT->setGeometry(QRect(650, 210, 54, 12));
        closeConnectButton = new QPushButton(centralwidget);
        closeConnectButton->setObjectName(QString::fromUtf8("closeConnectButton"));
        closeConnectButton->setGeometry(QRect(710, 490, 101, 23));
        closeNowConnectButton = new QPushButton(centralwidget);
        closeNowConnectButton->setObjectName(QString::fromUtf8("closeNowConnectButton"));
        closeNowConnectButton->setGeometry(QRect(760, 350, 101, 23));
        allSendButton = new QPushButton(centralwidget);
        allSendButton->setObjectName(QString::fromUtf8("allSendButton"));
        allSendButton->setGeometry(QRect(440, 510, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 907, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        interSetting->setText(QString());
        interText->setText(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\351\205\215\347\275\256", nullptr));
        hostIP->setText(QCoreApplication::translate("MainWindow", "\347\233\256\345\211\215IP", nullptr));
        hostPost->setText(QCoreApplication::translate("MainWindow", "\347\233\256\345\211\215Post", nullptr));
        sendButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        clientT->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257", nullptr));
        closeConnectButton->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\346\211\200\346\234\211\350\277\236\346\216\245", nullptr));
        closeNowConnectButton->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\347\233\256\345\211\215\350\277\236\346\216\245", nullptr));
        allSendButton->setText(QCoreApplication::translate("MainWindow", "\345\205\250\344\275\223\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
