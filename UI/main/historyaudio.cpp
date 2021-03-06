#include "historyaudio.h"
#include "ui_historyaudio.h"
#include <QSettings>
HistoryAudio::HistoryAudio(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::HistoryAudio)
{
    ui->setupUi(this);
    /*
    vBox.addWidget(&webView);
    this->setLayout(&vBox);
    webView.page()->profile()->clearHttpCache();
    webView.load(QString("http://html5test.com/"));
    //webView.load(QString("http://localhost:56879/"));
    */

        //()


    ui->axWidget->setControl(QString::fromUtf8("{8856F961-340A-11D0-A96B-00C04FD705A2}"));
    ui->axWidget->setFocusPolicy(Qt::StrongFocus);
    ui->axWidget->setProperty("DisplayAlerts",false);
    ui->axWidget->setProperty("DisplayScrollBars",true);





    QSettings setting(qApp->applicationDirPath()+"/set.ini",QSettings::IniFormat);
    QString ServerIp=setting.value("IP/server_IP").toString();//将读取出的数据进行使用;
    QString url="http://";
    url+=ServerIp;
    url+=":56879/";

    ui->axWidget->dynamicCall("Navigate(const QString&)",url);
    this->setWindowTitle("查询历史音频");
    g->mySql.takeLog(/*日志内容*/"查询历史音频",
                     /*表*/"user_log",
                     /*类型*/"user",
                     /*用户名*/g->userName
                     );//用户日志模板
}

HistoryAudio::~HistoryAudio()
{
    delete ui;
}
