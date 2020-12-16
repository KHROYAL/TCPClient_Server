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
    QPushButton *sendButton;
    QLabel *receiveLabel;
    QLabel *sendLavel;
    QLabel *setInterLabel;
    QLabel *setInterText;
    QLabel *hostIPLabel;
    QTextEdit *hostIPText;
    QLabel *hostPostLabel;
    QTextEdit *hostPostText;
    QLabel *dePostLabel;
    QTextEdit *deIPText;
    QTextEdit *dePostText;
    QLabel *deIPLabel;
    QPushButton *connectButton;
    QPushButton *unconnectButton;
    QPushButton *clearButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(906, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        receiveText = new QTextEdit(centralwidget);
        receiveText->setObjectName(QString::fromUtf8("receiveText"));
        receiveText->setGeometry(QRect(20, 20, 581, 361));
        receiveText->setReadOnly(true);
        sendText = new QTextEdit(centralwidget);
        sendText->setObjectName(QString::fromUtf8("sendText"));
        sendText->setGeometry(QRect(20, 400, 581, 101));
        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(510, 510, 75, 23));
        receiveLabel = new QLabel(centralwidget);
        receiveLabel->setObjectName(QString::fromUtf8("receiveLabel"));
        receiveLabel->setGeometry(QRect(20, 0, 61, 21));
        QFont font;
        font.setPointSize(11);
        receiveLabel->setFont(font);
        sendLavel = new QLabel(centralwidget);
        sendLavel->setObjectName(QString::fromUtf8("sendLavel"));
        sendLavel->setGeometry(QRect(20, 380, 61, 21));
        sendLavel->setFont(font);
        setInterLabel = new QLabel(centralwidget);
        setInterLabel->setObjectName(QString::fromUtf8("setInterLabel"));
        setInterLabel->setGeometry(QRect(620, 30, 211, 491));
        setInterLabel->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"border-width: 1;"));
        setInterText = new QLabel(centralwidget);
        setInterText->setObjectName(QString::fromUtf8("setInterText"));
        setInterText->setGeometry(QRect(700, 40, 54, 12));
        hostIPLabel = new QLabel(centralwidget);
        hostIPLabel->setObjectName(QString::fromUtf8("hostIPLabel"));
        hostIPLabel->setGeometry(QRect(630, 70, 91, 16));
        QFont font1;
        font1.setPointSize(12);
        hostIPLabel->setFont(font1);
        hostIPText = new QTextEdit(centralwidget);
        hostIPText->setObjectName(QString::fromUtf8("hostIPText"));
        hostIPText->setGeometry(QRect(630, 90, 171, 31));
        hostIPText->setReadOnly(true);
        hostPostLabel = new QLabel(centralwidget);
        hostPostLabel->setObjectName(QString::fromUtf8("hostPostLabel"));
        hostPostLabel->setGeometry(QRect(630, 130, 91, 16));
        hostPostLabel->setFont(font1);
        hostPostText = new QTextEdit(centralwidget);
        hostPostText->setObjectName(QString::fromUtf8("hostPostText"));
        hostPostText->setGeometry(QRect(630, 150, 171, 31));
        hostPostText->setReadOnly(true);
        dePostLabel = new QLabel(centralwidget);
        dePostLabel->setObjectName(QString::fromUtf8("dePostLabel"));
        dePostLabel->setGeometry(QRect(630, 270, 91, 16));
        dePostLabel->setFont(font1);
        deIPText = new QTextEdit(centralwidget);
        deIPText->setObjectName(QString::fromUtf8("deIPText"));
        deIPText->setGeometry(QRect(630, 230, 171, 31));
        dePostText = new QTextEdit(centralwidget);
        dePostText->setObjectName(QString::fromUtf8("dePostText"));
        dePostText->setGeometry(QRect(630, 290, 171, 31));
        deIPLabel = new QLabel(centralwidget);
        deIPLabel->setObjectName(QString::fromUtf8("deIPLabel"));
        deIPLabel->setGeometry(QRect(630, 210, 91, 16));
        deIPLabel->setFont(font1);
        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(630, 330, 75, 23));
        unconnectButton = new QPushButton(centralwidget);
        unconnectButton->setObjectName(QString::fromUtf8("unconnectButton"));
        unconnectButton->setGeometry(QRect(720, 330, 75, 23));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(20, 510, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 906, 23));
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
        sendButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        receiveLabel->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        sendLavel->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        setInterLabel->setText(QString());
        setInterText->setText(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        hostIPLabel->setText(QCoreApplication::translate("MainWindow", "\346\234\254\346\234\272IP\345\234\260\345\235\200", nullptr));
        hostPostLabel->setText(QCoreApplication::translate("MainWindow", "\346\234\254\346\234\272\347\253\257\345\217\243\345\217\267", nullptr));
        dePostLabel->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\347\253\257\345\217\243\345\217\267", nullptr));
        deIPLabel->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207IP\345\234\260\345\235\200", nullptr));
        connectButton->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        unconnectButton->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
