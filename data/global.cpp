#include "global.h"
#include <QApplication>
#include <QSettings>

Global::Global(QObject *parent) : QObject(parent)
{
    for(int i=0;i<200;i++)
    {
        audioSim[i]=-0.01;
        //chIsAlert[i]=false;
        chState[i]=Normal;
    }
    alarmTypeString<<"恢复正常"<<"相似度报警"<<"幅度报警"<<"相似度和幅度报警"<<"相似度恢复"<<"幅度恢复"<<"其他问题";
    QString fileDir=(qApp->applicationDirPath()+"/name_list.txt");
    QFile *file = new QFile(fileDir);
    if(file->open(QIODevice::ReadOnly))
    {

        for(int i=0;i<10000;i++)
        {
            {
                QByteArray ba= file->readLine();
                QString msg(QString::fromUtf8(ba));

                qDebug()<<msg<<ba;
                msg.remove("\r");
                msg.remove("\n");
                chNameList.append(msg);
            }
            if(file->atEnd())break;
        }
        file->close();

    }
    else
    {

    }
    file->deleteLater();
    if(chNameList.count()<200)
    {
        int count=200-chNameList.count();
        for(int i=0;i<count;i++)
        {
            chNameList.append(QString("通道")+QString::number(chNameList.count()+1));
        }
    }
    voiceObj=new QAxObject("Sapi.SpVoice");
    //=============================
    //设置配置文件的目录和位置，如果有，则不动，没有，会自动创建
    QSettings setting(qApp->applicationDirPath()+"/set.ini",QSettings::IniFormat);
    localIp=setting.value("IP/local_IP").toString();//将读取出的数据进行使用;
    ServerIp=setting.value("IP/server_IP").toString();//将读取出的数据进行使用;
    //=========================================================================
    mySql.initThis(ServerIp,"ggd","root","986753421");
    doLog("启动程序！");
}
void Global::switchListen(int,int)
{
    emit switchListen();
}
void Global::speak(QString str)
{
    //voiceObj->dynamicCall("Speak(QString, SpeechVoiceSpeakFlags)", QString(), 2);
    voiceObj->dynamicCall("Speak(QString, SpeechVoiceSpeakFlags)", str, 1);
}
bool Global::doLog(QString str)
{
    QString msg;
    msg.append("insert into user values('");
    msg.append(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    msg.append("','");
    msg.append(userName);
    msg.append("','");
    msg.append(str);
    msg.append("')");

    //return mySql.command(msg);


}
