#include "receiveapm.h"
#include <QMessageBox>
#include <QDateTime>
ReceiveAPM::ReceiveAPM(QObject *parent) : QObject(parent)
{

}
void ReceiveAPM::initThis()
{
    //==============================
    apmSocket=new QTcpSocket;
    //连接服务器时发送信号connected
    connect(apmSocket,SIGNAL(connected()),this,SLOT(onConnected()));
    //和服务器断开连接时时发送信号disconnected
    connect(apmSocket,SIGNAL(disconnected()),this,SLOT(onDisConnected()));
    //有聊天消息到来时，发送信号readyRead
    connect(apmSocket,SIGNAL(readyRead()), this,SLOT(onReadyRead()));
    //网络连接异常时，发送信号error
    connect(apmSocket, SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(onError(QAbstractSocket::SocketError)));

    connectServerTimer=new QTimer;
    connect(connectServerTimer,SIGNAL(timeout()),this,SLOT(connectToServer()));
    //=============================
    //设置配置文件的目录和位置，如果有，则不动，没有，会自动创建
    QSettings setting(qApp->applicationDirPath()+"/set.ini",QSettings::IniFormat);
    localIp=setting.value("IP/local_IP").toString();//将读取出的数据进行使用;
    ServerIp=setting.value("IP/server_IP").toString();//将读取出的数据进行使用;
    //=========================================================================




    connectServerTimer->start(2000);
}
//链接到服务器
void ReceiveAPM::connectToServer()
{
    apmSocket->connectToHost(QHostAddress(ServerIp),59877);
    qDebug()<<"connectToHost"<<ServerIp<<59877;
}

//网络异常时执行的槽函数
void ReceiveAPM::onError(QAbstractSocket::SocketError)
{

    //connectServerTimer->stop();
    //显示网络异常原因
    qDebug()<<apmSocket->errorString();
    g->dataLinkState=false;
}
//和服务器连接时执行的槽函数
void ReceiveAPM::onConnected(void)
{
    connectServerTimer->stop();
    qDebug()<<"connectToHost"<<ServerIp<<"success";
    g->dataLinkState=true;
}
//和服务器断开连接时执行的槽函数
void ReceiveAPM::onDisConnected(void)
{
    connectServerTimer->start(2000);
    for(int i=0;i<200;i++) g->APM[i]=0;
    g->dataLinkState=false;
}
//接收聊天消息的槽函数,
void ReceiveAPM::onReadyRead(void)
{
    if(apmSocket->bytesAvailable())
    {
        QByteArray buf;
        buf=apmSocket->readAll();
        QString msg(buf);
        QStringList msgList=msg.split("|");
        //qDebug()<<msgList.count()<<QDateTime::currentDateTime().toString("hh:mm:ss.zzz");
        if(msgList.count()>=202)
        {
            for(int i=0;i<200;i++)
            {
                g->APM[i]=msgList.at(i+1).toInt();
            }
        }
        else
        {

            qDebug()<<msg;
        }

    }
    else
    {
        //如果个数不正确，读取消息，扔掉
        QByteArray buf;
        buf=apmSocket->readAll();
    }
}
