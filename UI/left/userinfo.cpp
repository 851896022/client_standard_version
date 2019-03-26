#include "userinfo.h"
#include "ui_userinfo.h"

UserInfo::UserInfo(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::UserInfo)
{
    ui->setupUi(this);
    logIn=new LogIn;
}

UserInfo::~UserInfo()
{
    delete ui;
}


void UserInfo::on_btnLogin_clicked()
{
    if(g->islogIn)
    {
        return;
    }
    logIn->disconnect();
    logIn->deleteLater();
    logIn=new LogIn;
    connect(logIn,SIGNAL(onLogIn(QString)),this,SLOT(onLogin(QString)));
    logIn->show();
}
void UserInfo::onLogin(QString user)
{
    g->islogIn=true;
    g->userName=user;
    ui->userName->setText(user);
    ui->btnLogin->setText("已登录");

}
