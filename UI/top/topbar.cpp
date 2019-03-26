#include "topbar.h"
#include "ui_topbar.h"
#include "data/global.h"
TopBar::TopBar(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::TopBar)
{
    ui->setupUi(this);
}

TopBar::~TopBar()
{
    delete ui;
}
void TopBar::refListenInfo(QString msg)
{
    ui->listenInfo->setText(msg);
}
void TopBar::refListenInfo(int type,int ch)
{
    QString msg;
    if(type==0)
    {
        msg+="单路监听 ";
    }
    else if(type==1)
    {
        msg+="循环监听 ";
    }
    if(ch<200)
    {
        msg+=g->chNameList.at(ch);
    }
    else
    {
        msg=" ";
    }
    ui->listenInfo->setText(msg);

}
void TopBar::refListenInfo(int ch)
{
    QString msg;
    if(ch<200)
    {
        msg+=g->chNameList.at(ch);
    }
    else
    {
        msg=" ";
    }
    ui->listenInfo->setText(msg);

}

void TopBar::on_fullScreen_clicked()
{
    if(isFull)
    {
        ui->fullScreen->setIcon(QIcon(":/image/exitFull.png"));
        isFull=false;
    }
    else
    {
        ui->fullScreen->setIcon(QIcon(":/image/toFull.png"));
        isFull=true;
    }
    emit toFullScreen();
}
