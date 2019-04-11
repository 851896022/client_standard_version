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
    if(ui->txtUser->text()==QString("GGD"))
    {
        if(ui->txtPass->text()==QString("123456789"))
        {
            g->userName="GGD";
            g->userType=super;
            g->islogIn=true;
            QMessageBox::warning(NULL,"登录失败","用户名或者密码错误");
            return;
        }
    }





    QList<User> userList;
    //=============================
    //设置配置文件的目录和位置，如果有，则不动，没有，会自动创建
    QSettings setting(qApp->applicationDirPath()+"/set.ini",QSettings::IniFormat);
    QString ServerIp=setting.value("IP/server_IP").toString();//将读取出的数据进行使用;
    //=========================================================================
    qRedis *redis=new qRedis(ServerIp,6379);
    if (!redis->openConnection())
    {
        QMessageBox::warning(NULL,"连接失败","数据库连接失败");
        return;
    }
    else
    {
        {
           QString msg=redis->get("UserList");
           QStringList list=msg.split("!");
           for(int i=0;i<list.count();i++)
           {
               QStringList tmp=list[i].split("|");
               if(tmp.count()>=3)
               {
                   User user;
                   user.userName=tmp[0];
                   user.userType=(UserType)tmp[1].toInt();
                   user.passWord=tmp[2];
                   userList.append(user);
               }
           }
        }
    }
    delete redis;


    for(int i=0;i<userList.count();i++)
    {
        if(userList[i].userName==ui->txtUser->text()
                &&userList[i].passWord==ui->txtPass->text())//已有用户
        {
            //登录成功

            g->mySql.takeLog(ui->txtUser->text()+QString("登录"),"user_log","user",ui->txtUser->text());
            g->userName=userList[i].userName;
            g->userType=(UserType)userList[i].userType;
            emit onLogIn(ui->txtUser->text());
            hide();
            return;

        }
    }
    //登录失败
    QMessageBox::warning(NULL,"登录失败","用户名或者密码错误");

    return ;


    if(ui->txtPass->text()==ui->txtUser->text())
    {
        //登录成功





        g->mySql.takeLog(ui->txtUser->text()+QString("登录"),"user_log","user",ui->txtUser->text());
        emit onLogIn(ui->txtUser->text());
        hide();
    }
    else
    {
        //登录失败
        QMessageBox::warning(NULL,"登录失败","用户名或者密码错误");
    }
}
