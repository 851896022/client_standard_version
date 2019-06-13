#include "chmodule.h"
#include "ui_chmodule.h"
#include "QDebug"
ChModule::ChModule(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::ChModule)
{
    ui->setupUi(this);

}

ChModule::~ChModule()
{
    delete ui;
}
void ChModule::initThis()
{
    connect(&refApmTimer,SIGNAL(timeout()),this,SLOT(refApm()));

    QString str=g->chNameList[No];
    ui->chName->setText(str.replace("|","\n"));
    refApmTimer.start(100);

    connect(&refSimTimer,SIGNAL(timeout()),this,SLOT(refSim()));
    refSimTimer.start(1000);
}

void ChModule::on_ChModule_customContextMenuRequested(const QPoint &pos)
{
    QMenu menu;
    //添加菜单项，指定图标、名称、响应函数
    if(g->singlePlayCh==No)
    {
        ui->startListen->setIcon(QIcon(QString(":/image/CycleStopAudio.png")));
        ui->startListen->setText("停止监听");
    }
    else
    {
        ui->startListen->setIcon(QIcon(QString(":/image/CyclePlayAudio.png")));
        ui->startListen->setText("开始监听");
    }
    menu.addAction(ui->startListen);
    {
        int i;
        for(i=0;i<g->cyclePlayList->count();i++)
        {
            if(g->cyclePlayList->at(i)==No)
            {
                break;
            }
        }
        if(i==g->cyclePlayList->count())
        {
            ui->addListenList->setText("添加");
        }
        else
        {
             ui->addListenList->setText("删除");
        }
    }
    menu.addAction(ui->addListenList);
    //menu.addAction(ui->startRepair);
    //在鼠标位置显示
    menu.exec(QCursor::pos());
    int i=pos.x();i=i;//去警告


}


void ChModule::refApm()
{

    if(g->APM[No]<5)
    {
        modeCountLessOf5+=1;
    }
    else
    {
        modeCountLessOf5-=1;
    }
    if(modeCountLessOf5<0)modeCountLessOf5=0;
    if(modeCountLessOf5>100)modeCountLessOf5=100;

    if(modeCountLessOf5>20)return;
    //============判断数据是否不波动了=============

    if(g->APM[No]==apmCahe && g->APM[No]>0)
    {
        apmCount++;
    }
    else
    {
        apmCount=0;
        apmCahe=g->APM[No];
    }
    if(apmCount>=50)
    {


        if(apmCount%10==0)
        {
            ui->progressBar->setValue(0);
            qDebug()<<"ch"<<No<<"数据无波动已"<<apmCount/10.0<<"秒"<<"停止刷新";
        }

        return;
    }


    //==============模拟跳动================
    if(refDelay==0)
    {
        if(g->APM[No]>=(ui->progressBar->value()-5))
        {
            ui->progressBar->setValue(g->APM[No]);
        }
        else
        {
            ui->progressBar->setValue(ui->progressBar->value()-5);
        }

        //ui->progressBar->setFormat(QString::number(g->APM[No])+QString("%"));
        refDelay=qrand()%3+1;
    }
    else
    {
        ui->progressBar->setValue(ui->progressBar->value()-5);
    }
    refDelay--;



    /*
    ui->progressBar->setValue(qrand()%100);
    ui->state->setText(QString::number((qrand()%100+900.0)/10.0)+"%");
    */
}
void ChModule::refSim()
{
    QString str;
    if(g->audioSim[No]<0)
    {
        str=" ";
    }
    else
    {

        //master
        {
            str=QString::number(g->audioSim[No]*100,'f', 2)+"%";
        }

    }

    ui->state->setText(str);
    //报警字变红
    if(g->chState[No]==Normal)
    {
        QString msg=ui->chName->styleSheet();
        msg.remove("color: rgb(255, 0, 0);");
        ui->chName->setStyleSheet(msg);
    }
    else
    {
        QString msg=ui->chName->styleSheet();
        msg.append("color: rgb(255, 0, 0);");
        ui->chName->setStyleSheet(msg);
    }
}
void ChModule::onStarListenThisCH(int type,int ch)
{
    if(ch==No)
    {
        QString msg=ui->chName->styleSheet();
        msg.append("background-color: rgb(102, 255, 37);");
        ui->chName->setStyleSheet(msg);

    }
    else
    {
        QString msg=ui->chName->styleSheet();
        msg.remove("background-color: rgb(102, 255, 37);");
        ui->chName->setStyleSheet(msg);

    }
    type=type;
}
void ChModule::onAlarm(int ch,int type,QDateTime startTime)
{

}
void ChModule::on_startListen_triggered()
{
    emit changeListen(0,No);
}
void ChModule::on_addListenList_triggered()
{
    emit changeListen(1,No);
}

void ChModule::on_startRepair_triggered()
{

}
