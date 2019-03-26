#include "receivealarm.h"
#include <QMessageBox>
#include <QDateTime>
ReceiveAlarm::ReceiveAlarm(QObject *parent) : QObject(parent)
{

}
void ReceiveAlarm::initThis()
{
    //==============================
    alarmSocket=new QTcpSocket;
    //连接服务器时发送信号connected
    connect(alarmSocket,SIGNAL(connected()),this,SLOT(onConnected()));
    //和服务器断开连接时时发送信号disconnected
    connect(alarmSocket,SIGNAL(disconnected()),this,SLOT(onDisConnected()));
    //有聊天消息到来时，发送信号readyRead
    connect(alarmSocket,SIGNAL(readyRead()), this,SLOT(onReadyRead()));
    //网络连接异常时，发送信号error
    connect(alarmSocket, SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(onError(QAbstractSocket::SocketError)));

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
void ReceiveAlarm::connectToServer()
{
    alarmSocket->connectToHost(QHostAddress(ServerIp),59879);
    qDebug()<<"connectToHost"<<ServerIp<<59879;
}

//网络异常时执行的槽函数
void ReceiveAlarm::onError(QAbstractSocket::SocketError)
{

    //connectServerTimer->stop();
    //显示网络异常原因
    qDebug()<<alarmSocket->errorString();
    g->alarmLinkState=false;
}
//和服务器连接时执行的槽函数
void ReceiveAlarm::onConnected(void)
{
    connectServerTimer->stop();
    for(int i=0;i<200;i++) g->audioSim[i]=-1;
    qDebug()<<"connectToHost"<<ServerIp<<59879<<"success";
    g->alarmLinkState=true;
}
//和服务器断开连接时执行的槽函数
void ReceiveAlarm::onDisConnected(void)
{
    connectServerTimer->start(2000);
    for(int i=0;i<200;i++) g->audioSim[i]=-1;
    g->alarmLinkState=false;
}
//接收聊天消息的槽函数,
void ReceiveAlarm::onReadyRead(void)
{
    if(alarmSocket->bytesAvailable())
    {
        QByteArray buf;
        buf=alarmSocket->readAll();
        if(buf.count()>0)
        {
            QStringList rDataList= QString(buf).split(";");
            for(int i=0;i<rDataList.count()-1;i++)
            {
                QStringList rData= rDataList.at(i).split("|");
                int num=rData.at(0).toInt();
                switch (num)
                {
                case 0://APM
                    {

                        break;
                    }
                case 1://录音信息
                    {
                        break;
                    }
                case 2://报警信息
                    {


                        AlarmInfoData msg;
                        if(rData.count()>=4)
                        {
                            msg.alarmCh=rData.at(1).toInt();
                            msg.alarmType=AlarmType(rData.at(2).toInt()) ;
                            msg.startTime=QDateTime::fromString(rData.at(3),"yyyy-MM-dd hh:mm:ss");
                        }
                        g->alarmInfoList.append(msg);
                        emit alarm(msg.alarmCh,msg.alarmType,msg.startTime);

                        break;
                    }
                case 3://相似度信息
                    {
                        if(rData.count()>=3)
                        {
                            int ch=rData.at(1).toInt();
                            float sim=rData.at(2).toFloat();
                            g->audioSim[ch]=sim;
                            emit simChange(ch,sim);
                        }
                        break;
                    }
                default:
                    break;
                }
            }


        }
    }
    else
    {
        //如果个数不正确，读取消息，扔掉
        QByteArray buf;
        buf=alarmSocket->readAll();
    }
}
