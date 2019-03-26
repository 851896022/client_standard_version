#ifndef LISTEN_H
#define LISTEN_H

#include <QFrame>
#include <QList>
#include <QTcpSocket>
#include <QHostAddress>
#include <QTimer>
#include <QSettings>
namespace Ui {
class Listen;
}
enum PlayState
{
    stopListen,
    singleListen,
    loopListen
};


class Listen : public QFrame
{
    Q_OBJECT

public:
    explicit Listen(QWidget *parent = 0);
    ~Listen();
    QList<int> playList;
    PlayState playState=stopListen;
    QTcpSocket *sendSocket;
    QTimer *connectServerTimer;
    QString localIp;
    QString ServerIp;
    int playNo=0;//循环列表中的第几个
    int nowPlayCh=999;
    QTimer *switchDelay;
private:
    Ui::Listen *ui;
public slots:
    void onChangeListen(int type,int ch);
    void refPlayListWidget();
    void onSwitch();

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
    //发送数据
    void sendData(int ch);
private slots:
    void on_putUp_clicked();
    void on_putDown_clicked();
    void on_putDelete_clicked();
    void on_startOrStop_clicked();
signals:
    void listenInfo(int,int);
};

#endif // LISTEN_H
