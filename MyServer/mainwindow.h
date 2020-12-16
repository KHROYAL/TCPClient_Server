#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>
#include <QMessageBox>
#include <QHostAddress>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void NewConnectionSlot();

private slots:
    void on_startButton_clicked();

    void on_sendButton_clicked();
    void ReadData();
    void disconnectedSlot();
    void on_closeConnectButton_clicked();

    void on_closeNowConnectButton_clicked();

    void on_allSendButton_clicked();

private:
    Ui::MainWindow *ui;
    QTcpServer *tcpServer;
    QList<QTcpSocket*> tcpClient;
    QTcpSocket *currentClient;
};
#endif // MAINWINDOW_H
