#include "listen.h"
#include "ui_listen.h"
#include "data/global.h"
#include <QScrollBar>
#include <QIcon>
Listen::Listen(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Listen)
{
    ui->setupUi(this);
    initThis();
    switchDelay=new QTimer;
    connect(switchDelay,SIGNAL(timeout()),this,SLOT(onSwitch()));
    connect(this,SIGNAL(listenInfo(int,int)),g,SLOT(switchListen(int,int)));
    g->cyclePlayList=&playList;
}

Listen::~Listen()
{
    delete ui;
}
//==========================================================================
void Listen::onChangeListen(int type,int ch)
{

    if(type==0)//单路监听
    {
        ui->putDelete->setEnabled(true);
        ui->putUp->setEnabled(true);
        ui->putDown->setEnabled(true);
        ui->startOrStop->setIcon(QIcon(QString(":/image/CyclePlayAudio.png")));
        playNo=0;
        switchDelay->stop();
        if(playState==singleListen)
        {
            if(nowPlayCh==ch)
            {
                playState=stopListen;

                sendData(999);
                g->singlePlayCh=999;

            }
            else
            {
                sendData(ch);
                g->singlePlayCh=ch;
            }


        }
        else
        {
            playState=singleListen;
            sendData(ch);
            g->singlePlayCh=ch;



        }






    }
    else if(type==1)//循环监听
    {
        int count=playList.count();
        for(int i=0;i<=count;i++)
        {
            if(i==count)
            {
                playList.append(ch);
                break;
            }
            else if(playList.at(i)==ch)
            {
                playList.removeAt(i);
                break;
            }
        }
        refPlayListWidget();

    }
}
void Listen::refPlayListWidget()
{
    ui->listenListWidget->clear();
    for(int i=0;i<playList.count();i++)
    {
        ui->listenListWidget->addItem(QString::number(i+1)+QString(":")+g->chNameList.at(playList.at(i)));
    }

}

void Listen::on_putUp_clicked()
{
    int i=ui->listenListWidget->currentRow();
    if(i==0||i<0) return;
    else
    {
        int tmp=playList.at(i);
        playList.removeAt(i);
        playList.insert(i-1,tmp);
    }
    refPlayListWidget();
    ui->listenListWidget->setCurrentRow(i-1);
    ui->listenListWidget->verticalScrollBar()->setValue(i-1);
}

void Listen::on_putDown_clicked()
{
    int i=ui->listenListWidget->currentRow();
    if(i==playList.count()-1||i<0) return;
    else
    {
        int tmp=playList.at(i);
        playList.removeAt(i);
        playList.insert(i+1,tmp);
    }
    refPlayListWidget();
    ui->listenListWidget->setCurrentRow(i+1);
    ui->listenListWidget->verticalScrollBar()->setValue(i+1);
}

void Listen::on_putDelete_clicked()
{
    int i=ui->listenListWidget->currentRow();
    if(i<0) return;
    else
    {
        playList.removeAt(i);
    }
    refPlayListWidget();
}

void Listen::on_startOrStop_clicked()
{
    if(playList.count()==0) return;
    if(playState==loopListen)
    {
        ui->putDelete->setEnabled(true);
        ui->putUp->setEnabled(true);
        ui->putDown->setEnabled(true);
        ui->startOrStop->setIcon(QIcon(QString(":/image/CyclePlayAudio.png")));
        playState=stopListen;

        playNo=0;
        switchDelay->stop();
        sendData(999);
        g->singlePlayCh=999;



    }
    else if(playState==singleListen)
    {
        ui->putDelete->setEnabled(false);
        ui->putUp->setEnabled(false);
        ui->putDown->setEnabled(false);
        ui->startOrStop->setIcon(QIcon(QString(":/image/CycleStopAudio.png")));
        playState=loopListen;
        playNo=0;
        g->singlePlayCh=999;
        int tim=ui->switchDelay->text().toInt();
        if(tim<2) tim=2;
        switchDelay->start(tim*1000);
        onSwitch();




    }
    else if(playState==stopListen)
    {
        ui->putDelete->setEnabled(false);
        ui->putUp->setEnabled(false);
        ui->putDown->setEnabled(false);
        ui->startOrStop->setIcon(QIcon(QString(":/image/CycleStopAudio.png")));
        playState=loopListen;
        playNo=0;
        int tim=ui->switchDelay->text().toInt();
        if(tim<2) tim=2;
        switchDelay->start(tim*1000);
        onSwitch();



    }
}
void Listen::onSwitch()
{

    sendData(playList.at(playNo));
    playNo++;

    if(playNo>=playList.count())
    {
        playNo=0;
    }
}
//=======================================================================================
void Listen::initThis()
{
    //==============================
    sendSocket=new QTcpSocket;
    //连接服务器时发送信号connected
    connect(sendSocket,SIGNAL(connected()),this,SLOT(onConnected()));
    //和服务器断开连接时时发送信号disconnected
    connect(sendSocket,SIGNAL(disconnected()),this,SLOT(onDisConnected()));
    //有聊天消息到来时，发送信号readyRead
    connect(sendSocket,SIGNAL(readyRead()), this,SLOT(onReadyRead()));
    //网络连接异常时，发送信号error
    connect(sendSocket, SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(onError(QAbstractSocket::SocketError)));

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
void Listen::connectToServer()
{
    sendSocket->connectToHost(QHostAddress(ServerIp),59878);
    qDebug()<<"connectToHost"<<ServerIp<<59878;
}

//网络异常时执行的槽函数
void Listen::onError(QAbstractSocket::SocketError)
{

    //connectServerTimer->stop();
    //显示网络异常原因
    qDebug()<<sendSocket->errorString();
    g->audioLinkState=false;
}
//和服务器连接时执行的槽函数
void Listen::onConnected(void)
{
    connectServerTimer->stop();
    qDebug()<<"connectToHost"<<ServerIp<<"success";
    g->audioLinkState=true;
}
//和服务器断开连接时执行的槽函数
void Listen::onDisConnected(void)
{
    connectServerTimer->start(2000);
    g->audioLinkState=false;

}
//接收聊天消息的槽函数,
void Listen::onReadyRead(void)
{
    if(sendSocket->bytesAvailable())
    {
        QByteArray buf;
        buf=sendSocket->readAll();

    }
    else
    {
        //如果个数不正确，读取消息，扔掉
        QByteArray buf;
        buf=sendSocket->readAll();
    }
}
//发送数据
void Listen::sendData(int ch)
{
    qDebug()<<ch;
    QString msg;
    msg="0|";
    msg+=localIp;
    msg+="|";
    msg+=QString::number(ch);
    sendSocket->write(msg.toLatin1());
    nowPlayCh=ch;
    if(playState==loopListen)
    {
        emit listenInfo(1,ch);
    }
    else
    {
        emit listenInfo(0,ch);
    }
}




















