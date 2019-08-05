#include "receiveaudio.h"
#include <QDebug>
ReceiveAudio::ReceiveAudio(QObject *parent) : QObject(parent)
{

}
void ReceiveAudio::initThis()
{
    player=new Player;
    receiveSocket=new QUdpSocket;
    connect(receiveSocket,SIGNAL(readyRead()),this,SLOT(onReceiveAudio()));
    receiveSocket->bind(59876);

    connect(g,SIGNAL(switchListen()),this,SLOT(clearAudioCache()));
    clearBuff=new QTimer;
    connect(clearBuff,SIGNAL(timeout()),this,SLOT(clearAudioCache()));
    //clearBuff->start(180000);

}
void ReceiveAudio::onReceiveAudio()
{

    char ch[23040]={0};
    int len=receiveSocket->readDatagram(ch,23040);
    if(len<2304)
    {
        qDebug()<<"收到异常数据,长度"<<len;
        qDebug()<<QByteArray(ch,len);
        qDebug()<<QByteArray(ch,len).toHex();
        return;
    }
    player->tempBuffer.append(ch,len);
}
void ReceiveAudio::clearAudioCache()
{
    qDebug()<<"tempBuffer="<<player->tempBuffer.count();
    player->tempBuffer.clear();
    player->deleteLater();
    player=new Player;


}
