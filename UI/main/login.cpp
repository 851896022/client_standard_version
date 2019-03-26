#include "login.h"
#include "ui_login.h"

LogIn::LogIn(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_btnCancel_clicked()
{
    hide();
}

void LogIn::on_btnOk_clicked()
{
    if(ui->txtPass->text()==ui->txtUser->text())
    {
        //登录成功
        emit onLogIn(ui->txtUser->text());
        hide();
    }
    else
    {
        //登录失败
        QMessageBox::warning(NULL,"登录失败","用户名或者密码错误");
    }
}
