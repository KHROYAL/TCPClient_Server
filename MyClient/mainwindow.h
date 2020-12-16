#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QMainWindow>
#include <QNetworkInterface>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //客户端槽函数
    void initClient();
    void ReadData();
    void ReadError(QAbstractSocket::SocketError);
    void on_sendButton_clicked();

    void on_connectButton_clicked();

    void on_unconnectButton_clicked();

    void on_clearButton_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket *tcpClient;
};
#endif // MAINWINDOW_H
