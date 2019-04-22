#include "setgate.h"
#include "ui_setgate.h"
#include <QSettings>
#include <QMessageBox>
setGate::setGate(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::setGate)
{
    ui->setupUi(this);
    //=============================
    //设置配置文件的目录和位置，如果有，则不动，没有，会自动创建
    QSettings setting(qApp->applicationDirPath()+"/set.ini",QSettings::IniFormat);
    QString ServerIp=setting.value("IP/server_IP").toString();//将读取出的数据进行使用;
    //=========================================================================
    qRedis *redis=new qRedis(ServerIp,6379);
    if (!redis->openConnection())
    {
        //return;
    }
    else
    {
        {
           QString msg=redis->get("alarmGate");
           ui->txtAlarmGate->setText(msg);
        }
        {
           QString msg=redis->get("simGate");
           float num=msg.toFloat()*100.0;
           ui->txtSImGate->setText(QString::number(num));
        }
        {
            QString msg=redis->get("alarmDelay");
            ui->txtAlarmDelay->setText(msg);
        }
        {
            QString msg=redis->get("simDelay");
            ui->txtSImDelay->setText(msg);
        }
    }
    delete redis;
}

setGate::~setGate()
{
    delete ui;
}

void setGate::on_btnOk_clicked()
{
    if(g->userType>1)
    {
        QMessageBox::warning(NULL,"错误","权限不足！");
        return;
    }
    //=============================
    //设置配置文件的目录和位置，如果有，则不动，没有，会自动创建
    QSettings setting(qApp->applicationDirPath()+"/set.ini",QSettings::IniFormat);
    QString ServerIp=setting.value("IP/server_IP").toString();//将读取出的数据进行使用;
    //=========================================================================
    qRedis *redis=new qRedis(ServerIp,6379);
    if (!redis->openConnection())
    {
        QMessageBox::warning(NULL,"错误","连接失败！");
    }
    else
    {
        {
            redis->set("alarmGate",ui->txtAlarmGate->text());


        }
        {

           float num=ui->txtSImGate->text().toFloat()/100.0;
           redis->set("simGate",QString::number(num));
        }
        {
            redis->set("alarmDelay",ui->txtAlarmDelay->text());

        }
        {
            redis->set("simDelay",ui->txtSImDelay->text());

        }
        g->mySql.takeLog(/*日志内容*/QString("修改")+"幅度门限:"+ui->txtAlarmGate->text()
                                            +"幅度延时:"+ui->txtAlarmDelay->text()
                                            +"相似度门限:"+ui->txtSImGate->text()
                                            +"相似度延时:"+ui->txtAlarmDelay->text(),
                         /*表*/"user_log",
                         /*类型*/"user",
                         /*用户名*/g->userName
                         );//用户日志模板
    }
    delete redis;
    hide();
}
