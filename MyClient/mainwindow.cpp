#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->hostIPText->setText(QNetworkInterface().allAddresses().at(1).toString());   //获取本地IP
    ui->sendText->setEnabled(false);
    tcpClient = new QTcpSocket(this);   //实例化tcpClient
    tcpClient->abort();                 //取消原有连接
    connect(tcpClient, SIGNAL(readyRead()), this, SLOT(ReadData()));
    connect(tcpClient, SIGNAL(error(QAbstractSocket::SocketError)), \
            this, SLOT(ReadError(QAbstractSocket::SocketError)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initClient()
{

}

void MainWindow::ReadData()
{
    QByteArray buffer = tcpClient->readAll();
    if(!buffer.isEmpty())
    {
        ui->receiveText->append("[Host]");
        ui->receiveText->append(buffer);
    }
}

void MainWindow::ReadError(QAbstractSocket::SocketError)
{
    tcpClient->disconnectFromHost();
    ui->receiveText->append("连接错误");
    ui->receiveText->append(tr("failed to connect server because %1").arg(tcpClient->errorString()));
    if(tcpClient->errorString() =="The remote host closed the connection")
    {
        on_unconnectButton_clicked();
    }
    return;
}


void MainWindow::on_sendButton_clicked()
{
    QString sendText;
    sendText = ui->sendText->toPlainText();
    ui->sendText->setText("");
    ui->receiveText->append("[me]");
    ui->receiveText->append(sendText);
    if(sendText != "")
    {
        //tcpClient->write(sendText.toLatin1()); //qt5去除了.toAscii()
        tcpClient->write(sendText.toUtf8());
    }
}

void MainWindow::on_connectButton_clicked()
{
    QString deNameStr = ui->deIPText->toPlainText();
    QString dePostStr = ui->dePostText->toPlainText();
    quint16 post = dePostStr.toUShort();
    tcpClient->connectToHost(deNameStr,post);
    if(tcpClient->waitForConnected())
    {
        QString record = "连接IP:" + deNameStr + "  Post:"+dePostStr;
        ui->receiveText->append(record);
        ui->sendText->setEnabled(true);
    }
    return;
}
void MainWindow::on_unconnectButton_clicked()
{
    tcpClient->disconnectFromHost();
    if (tcpClient->state() == QAbstractSocket::UnconnectedState \
            || tcpClient->waitForDisconnected(1000))  //已断开连接则进入if{}
    {
        ui->receiveText->setText("连接");
        ui->sendText->setEnabled(false);
    }
}

void MainWindow::on_clearButton_clicked()
{
    ui->receiveText->setText("");
    return;
}
