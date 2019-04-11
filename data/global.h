#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>
#include <QTimer>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QList>
#include <QDateTime>
#include <QAxObject>
#include "data/sql/mysql.h"
//#include "data/sql/mysql.h"
enum AlarmType
{
    Normal,
    Similar,
    Range,
    All,
    SimilarCancel,
    RangeCancel,
    Other,

};
struct AlarmInfoData
{
    int alarmNo=0;
    int alarmCh=0;
    AlarmType alarmType=Other;
    QDateTime startTime;
    QDateTime endTime;
};
enum UserType
{
  admin,
  highUser,
  lowUser,
  super=-1
};
struct User
{
    User() {}
    QString userName;
    UserType userType=lowUser;
    QString passWord;
};
class Global : public QObject
{
    Q_OBJECT
public:
    explicit Global(QObject *parent = nullptr);
    int APM[200]={0};
    //台站标记
    QString stationLabel;
    QStringList chNameList;
    int equCount=2; //设备数量修改在这儿！！！！！
    bool alarmLinkState=false;
    bool dataLinkState=false;
    bool audioLinkState=false;
    QList<bool> chModelDisplay[10];
    //===================================
    int singlePlayCh=999;
    QList<int> *cyclePlayList;
    //===================================
    float audioSim[200]={0};
    QList<AlarmInfoData> alarmInfoList;
    AlarmType chState[200];
    QStringList alarmTypeString;
    //==============================
    bool islogIn=false;
    QString userName;
    UserType userType;
    //====SAPI=============
    QAxObject *voiceObj;
    MySQL mySql;
    //=============================

    QString localIp;
    QString ServerIp;

signals:
    void switchListen();
public slots:
    void switchListen(int,int);
    void speak(QString str);
    bool doLog(QString str);
};
extern Global *g;
#endif // GLOBAL_H
