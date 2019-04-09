#include "alarminfo.h"
#include "ui_alarminfo.h"
#include "QMessageBox"
#include "QSound"
AlarmInfo::AlarmInfo(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::AlarmInfo)
{
    ui->setupUi(this);
    initThis();
}

AlarmInfo::~AlarmInfo()
{
    delete ui;
}
void AlarmInfo::initThis()
{
    connect(&timer,SIGNAL(timeout()),this,SLOT(alarmTest()));
    timer.start(100);
}
void AlarmInfo::alarmTest()
{
    return;
}
void AlarmInfo::onReceiveAlarmInfo(int ch,int num,QDateTime time)
{
    qDebug()<<"alarm"<<ch<<num<<time;
    AlarmType type=AlarmType(num);
    if(type==Range)
    {
        if(g->chState[ch]==Normal)
        {
            g->chState[ch]=Range;
        }
        else if(g->chState[ch]==Similar)
        {
            g->chState[ch]=All;
        }
    }
    else if(type==Similar)
    {
        if(g->chState[ch]==Normal)
        {
            g->chState[ch]=Similar;
        }
        else if(g->chState[ch]==Range)
        {
            g->chState[ch]=All;
        }
    }
    else if(type==RangeCancel)
    {
        if(g->chState[ch]==All)
        {
            g->chState[ch]=Similar;
        }
        else if(g->chState[ch]==Range)
        {
            g->chState[ch]=Normal;
        }
    }
    else if(type==SimilarCancel)
    {
        if(g->chState[ch]==All)
        {
            g->chState[ch]=Range;
        }
        else if(g->chState[ch]==Similar)
        {
            g->chState[ch]=Normal;
        }
    }
    QString timeStr=time.toString("MM-dd hh:mm:ss ");
    QString info;
    if(num==1)
    {
        if(g->audioSim[ch]<0.15)
        {
            info=g->chNameList[ch]+QString("音频错误");
        }
        else
        {
            info=g->chNameList[ch]+QString("音频相似度较低");
        }
    }
    else
    {
        info=g->chNameList[ch]+g->alarmTypeString.at(num);
    }

    ui->alarmListWidget->addItem(timeStr+"\r\n"+info);
    qDebug()<<timeStr<<info;
    //speak
    if(num==1||num==2)
    {
        QSound::play(qApp->applicationDirPath()+"/alarm.wav");
    }
    g->speak(info);


}

void AlarmInfo::on_btnReset_clicked()
{
    if(g->islogIn)
    {
        ui->alarmListWidget->clear();
        for(int i=0;i<200;i++)
        {
            g->chState[i]=Normal;
        }
    }
    else
    {
        QMessageBox::information(this,"信息","请登录");
    }


}

void AlarmInfo::on_btnSet_clicked()
{
    emit onSetClicked();
}

void AlarmInfo::on_btnReach_clicked()
{
    emit onReachClicked();
}
