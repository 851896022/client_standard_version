#include "setgate.h"
#include "ui_setgate.h"
#include <QSettings>
#include <QMessageBox>
setGate::setGate(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::setGate)
{
    ui->setupUi(this);
//        ui->tableView->setAlternatingRowColors(true);
//    setHorizontalHeaderLabels;
//    ui->tableView->horizontalHeader()->
//    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

//    ui->tableView->horizontalHeader()->setStretchLastSection(true);

//    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    //======================================
    for(int i=0;i<200;i++)
    {
        itemAlarmGate[i]=new QTableWidgetItem(g->chNameList.at(i));
        ui->twAlarmGate->setItem(i,0,itemAlarmGate[i]);
        txtAlarmGate[i]=new QLineEdit("加载失败");
        ui->twAlarmGate->setCellWidget(i,1,txtAlarmGate[i]);

        itemAlarmDelay[i]=new QTableWidgetItem(g->chNameList.at(i));
        ui->twAlarmDelay->setItem(i,0,itemAlarmDelay[i]);
        txtAlarmDelay[i]=new QLineEdit("加载失败");
        ui->twAlarmDelay->setCellWidget(i,1,txtAlarmDelay[i]);

        itemSimGate[i]=new QTableWidgetItem(g->chNameList.at(i));
        ui->twSimGate->setItem(i,0,itemSimGate[i]);
        txtSimGate[i]=new QLineEdit("加载失败");
        ui->twSimGate->setCellWidget(i,1,txtSimGate[i]);

        itemSimDelay[i]=new QTableWidgetItem(g->chNameList.at(i));
        ui->twSimDelay->setItem(i,0,itemSimDelay[i]);
        txtSimDelay[i]=new QLineEdit("加载失败");
        ui->twSimDelay->setCellWidget(i,1,txtSimDelay[i]);
    }
    ui->twAlarmGate->setAlternatingRowColors(true);
    ui->twAlarmGate->horizontalHeader()->setStretchLastSection(true);
    ui->twAlarmGate->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);

    ui->twAlarmDelay->setAlternatingRowColors(true);
    ui->twAlarmDelay->horizontalHeader()->setStretchLastSection(true);
    ui->twAlarmDelay->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);

    ui->twSimGate->setAlternatingRowColors(true);
    ui->twSimGate->horizontalHeader()->setStretchLastSection(true);
    ui->twSimGate->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);

    ui->twSimDelay->setAlternatingRowColors(true);
    ui->twSimDelay->horizontalHeader()->setStretchLastSection(true);
    ui->twSimDelay->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);



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
           QStringList msgList=msg.split("|");
           if(msgList.count()>=200)
           {
               for(int i=0;i<200;i++)
               {
                   txtAlarmGate[i]->setText(QString::number(msgList.at(i).toInt()));
               }
           }
           else
           {
                for(int i=0;i<200;i++)
                {
                    txtAlarmGate[i]->setText(QString::number(-1));
                }
           }
           //ui->txtAlarmGate->setText(msg);
        }
        {
           QString msg=redis->get("simGate");
           QStringList msgList=msg.split("|");
           if(msgList.count()>=200)
           {
               for(int i=0;i<200;i++)
               {
                   txtSimGate[i]->setText(QString::number(msgList.at(i).toFloat()*100.0));
               }
           }
           else
           {
                for(int i=0;i<200;i++)
                {
                    txtSimGate[i]->setText(QString::number(-1));
                }
           }
           //float num=msg.toFloat()*100.0;
           //ui->txtSImGate->setText(QString::number(num));
        }
        {
            QString msg=redis->get("alarmDelay");
            QStringList msgList=msg.split("|");
            if(msgList.count()>=200)
            {
                for(int i=0;i<200;i++)
                {
                    txtAlarmDelay[i]->setText(QString::number(msgList.at(i).toInt()));
                }
            }
            else
            {
                 for(int i=0;i<200;i++)
                 {
                     txtAlarmDelay[i]->setText(QString::number(-1));
                 }
            }
            //ui->txtAlarmDelay->setText(msg);
        }
        {
            QString msg=redis->get("simDelay");
            QStringList msgList=msg.split("|");
            if(msgList.count()>=200)
            {
                for(int i=0;i<200;i++)
                {
                    txtSimDelay[i]->setText(QString::number(msgList.at(i).toInt()));
                }
            }
            else
            {
                 for(int i=0;i<200;i++)
                 {
                     txtSimDelay[i]->setText(QString::number(-1));
                 }
            }
            //ui->txtSImDelay->setText(msg);
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
            QString msg;
            for(int i=0;i<200;i++)
            {
                msg.append(txtAlarmGate[i]->text());
                msg.append("|");
            }

            redis->set("alarmGate",msg);


        }
        {
            QString msg;
            for(int i=0;i<200;i++)
            {
                msg.append(QString::number( txtSimGate[i]->text().toFloat()/100.0));
                msg.append("|");
            }
           //float num=ui->txtSImGate->text().toFloat()/100.0;
           redis->set("simGate",msg);
        }
        {
            QString msg;
            for(int i=0;i<200;i++)
            {
                msg.append(txtAlarmDelay[i]->text());
                msg.append("|");
            }
            redis->set("alarmDelay",msg);

        }
        {
            QString msg;
            for(int i=0;i<200;i++)
            {
                msg.append(txtSimDelay[i]->text());
                msg.append("|");
            }
            redis->set("simDelay",msg);

        }
        g->mySql.takeLog(/*日志内容*/QString("修改门限"),
                         /*表*/"user_log",
                         /*类型*/"user",
                         /*用户名*/g->userName
                         );//用户日志模板
    }
    delete redis;
    hide();
}

void setGate::on_oneKeyAlarmGate_clicked()
{
    bool ok;
    int input = QInputDialog::getInt(this,tr("请输入"),tr("音频幅度报警门限(0~10000)"),300,-1,10000,1,&ok);
    if(ok)
    {
        for(int i=0;i<200;i++)
        {
            txtAlarmGate[i]->setText(QString::number(input));
        }
    }
}

void setGate::on_oneKeyAlarmDelay_clicked()
{
    bool ok;
    int input = QInputDialog::getInt(this,tr("请输入"),tr("音频幅度报警延时(0~100秒)"),20,1,100,1,&ok);
    if(ok)
    {
        for(int i=0;i<200;i++)
        {
            txtAlarmDelay[i]->setText(QString::number(input));
        }
    }
}

void setGate::on_oneKeySimGate_clicked()
{
    bool ok;
    float input = QInputDialog::getDouble(this,tr("请输入"),tr("音频相似度报警门限(0~100%)"),20.0,-1,100.0,0.1,&ok);
    if(ok)
    {
        for(int i=0;i<200;i++)
        {
            txtSimGate[i]->setText(QString::number(input));
        }
    }
}

void setGate::on_oneKeySimDelay_clicked()
{
    bool ok;
    int input = QInputDialog::getInt(this,tr("请输入"),tr("音频相似度报警延时(0~100秒)"),20,1,100,1,&ok);
    if(ok)
    {
        for(int i=0;i<200;i++)
        {
            txtSimDelay[i]->setText(QString::number(input));
        }
    }
}
