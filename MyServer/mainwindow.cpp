#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    tcpServer = new QTcpServer(this);
    ui->hostIPText->setText(QNetworkInterface().allAddresses().at(1).toString());   //获取本地IP
    ui->receiveText->setEnabled(false);
    ui->sendText->setEnabled(false);

    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(NewConnectionSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//通过nextPendingConnection()获得连接过来的客户端信息，
//取到peerAddress和peerPort后显示在comboBox(cbxConnection)上，
//并将客户端的readyRead()信号连接到服务器端自定义的读数据槽函数ReadData()上。
//将客户端的disconnected()信号连接到服务器端自定义的槽函数disconnectedSlot()上。

void MainWindow::NewConnectionSlot()
{
    currentClient = tcpServer->nextPendingConnection();
    tcpClient.append(currentClient);
    ui->cbxConnection->addItem(tr("%1:%2").arg(currentClient->peerAddress().toString().split("::ffff:")[1])\
            .arg(currentClient->peerPort()));
    connect(currentClient, SIGNAL(readyRead()), this, SLOT(ReadData()));
    connect(currentClient, SIGNAL(disconnected()), this, SLOT(disconnectedSlot()));
}

void MainWindow::ReadData()
{

    // 由于readyRead信号并未提供SocketDecriptor，所以需要遍历所有客户端
    for(int i=0; i<tcpClient.length(); i++)
    {
        QByteArray buffer = tcpClient[i]->readAll();
        if(buffer.isEmpty())    continue;

        static QString IP_Port, IP_Port_Pre;
        IP_Port = tr("[%1:%2]:").arg(tcpClient[i]->peerAddress().toString().split("::ffff:")[1])\
                .arg(tcpClient[i]->peerPort());

        // 若此次消息的地址与上次不同，则需显示此次消息的客户端地址
        if(IP_Port != IP_Port_Pre)
            ui->receiveText->append(IP_Port);

        ui->receiveText->append(buffer);

        //更新ip_port
        IP_Port_Pre = IP_Port;
    }
}
void MainWindow::disconnectedSlot()
{
    //由于disconnected信号并未提供SocketDescriptor，所以需要遍历寻找
    for(int i=0; i<tcpClient.length(); i++)
    {
        if(tcpClient[i]->state() == QAbstractSocket::UnconnectedState)
        {
            // 删除存储在combox中的客户端信息
            ui->cbxConnection->removeItem(ui->cbxConnection->findText(tr("%1:%2")\
                                                                      .arg(tcpClient[i]->peerAddress().toString().split("::ffff:")[1])\
                                          .arg(tcpClient[i]->peerPort())));
            // 删除存储在tcpClient列表中的客户端信息
            tcpClient[i]->destroyed();
            tcpClient.removeAt(i);
        }
    }
}
void MainWindow::on_startButton_clicked()
{
    bool ok = tcpServer->listen(QHostAddress::Any, ui->hostPostText->toPlainText().toInt());
    if(ok)
    {
        ui->receiveText->setText("开始");
        ui->sendText->setEnabled(true);
    }
}

void MainWindow::on_sendButton_clicked()
{

    QString s = ui->cbxConnection->currentText();
    QString ip = s.split(":")[0];
    QString post = s.split(":")[1];
    qDebug()<<ip;
    qDebug()<<post;
    for(int i =0;i<tcpClient.length();i++)
    {
        if(tr("%1:%2").arg(tcpClient[i]->peerAddress().toString().split("::ffff:")[1]).arg(tcpClient[i]->peerPort())==ip+":"+post)
        {
            QString sendText;
            sendText = ui->sendText->toPlainText();
            ui->sendText->setText("");
            if(sendText!="")
            {
                ui->receiveText->append("[me]");
                ui->receiveText->append(sendText);
                tcpClient[i]->write(sendText.toUtf8());
            }
        }
    }
    return;
}

void MainWindow::on_closeConnectButton_clicked()
{
    for(int i=0; i<tcpClient.length(); i++)//断开所有连接
    {
        tcpClient[i]->disconnectFromHost();
        bool ok = tcpClient[i]->waitForDisconnected(1000);
        if(!ok)
        {
            // 处理异常
        }
        tcpClient.removeAt(i);  //从保存的客户端列表中取去除
    }
    tcpServer->close();     //不再监听端口
}

void MainWindow::on_closeNowConnectButton_clicked()
{
    QString s = ui->cbxConnection->currentText();
    QString ip = s.split(":")[0];
    QString post = s.split(":")[1];
    qDebug()<<ip;
    qDebug()<<post;
    for(int i =0;i<tcpClient.length();i++)
    {
        if(tr("%1:%2").arg(tcpClient[i]->peerAddress().toString().split("::ffff:")[1]).arg(tcpClient[i]->peerPort())==ip+":"+post)
        {
            // 删除存储在combox中的客户端信息
            ui->cbxConnection->removeItem(ui->cbxConnection->findText(tr("%1:%2")\
                                                                      .arg(tcpClient[i]->peerAddress().toString().split("::ffff:")[1])\
                                          .arg(tcpClient[i]->peerPort())));
            // 删除存储在tcpClient列表中的客户端信息
            tcpClient[i]->disconnectFromHost();
            tcpClient.removeAt(i);
        }
    }
    return;
}

void MainWindow::on_allSendButton_clicked()
{
    QString sendText;
    sendText = ui->sendText->toPlainText();
    ui->sendText->setText("");
    if(ui->cbxConnection->currentIndex() == 0)
    {
        for(int i=0; i<tcpClient.length(); i++)
            tcpClient[i]->write(sendText.toLatin1()); //qt5除去了.toAscii()
    }
}
