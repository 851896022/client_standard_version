#ifndef RECEIVEALARM_H
#define RECEIVEALARM_H

#include <QObject>
#include <QApplication>
#include <QSettings>
#include "data/global.h"
#include <QHostAddress>
#include <QTcpSocket>
class ReceiveAlarm : public QObject
{
    Q_OBJECT
public:
    explicit ReceiveAlarm(QObject *parent = nullptr);
    QString localIp;
    QString ServerIp;
    QTcpSocket *alarmSocket;
    QTimer *connectServerTimer;
signals:
    void simChange(int ch,float sim);
    void alarm(int,int,QDateTime);
public slots:
    void initThis();
    //链接到服务器
    void connectToServer();
    //接收聊天消息的槽函数,
    void onReadyRead(void);
    //网络异常时执行的槽函数
    void onError(QAbstractSocket::SocketError);
    //和服务器连接时执行的槽函数
    void onConnected(void);
    //和服务器断开连接时执行的槽函数
    void onDisConnected(void);
};

#endif // RECEIVEALARM_H
