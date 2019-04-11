#include "usermanagement.h"
#include "ui_usermanagement.h"

UserManagement::UserManagement(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::UserManagement)
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
}

UserManagement::~UserManagement()
{
    delete ui;
}

void UserManagement::on_txtUser_textChanged(const QString &arg1)
{
    //QString info;
    for(int i=0;i<userList.count();i++)
    {
        if(userList[i].userName==arg1)//已有用户
        {
            if(g->userType<userList[i].userType)//权限大，可以修改
            {
                 ui->labState->setText( QString("用户已存在\r\n可修改"));
                 ui->btnSave->setEnabled(true);
                 return;

            }
            else
            {
                ui->labState->setText( QString("用户已存在\r\n权限不足"));
                ui->btnSave->setEnabled(false);
                return;
            }
        }
    }
    ui->labState->setText(QString("用户不存在\r\n可添加"));
    ui->btnSave->setEnabled(true);
}

void UserManagement::on_btnSave_clicked()
{
    if(ui->txtUser->text().contains("|",Qt::CaseSensitive))
    {
        ui->labInfo->setText("用户名不能包含“|”");
        return;
    }
    if(ui->txtUser->text().contains("!",Qt::CaseSensitive))
    {
        ui->labInfo->setText("用户名不能为空“!”");
        return;
    }
    if(ui->txtPsw1->text().isEmpty())
    {
        ui->labInfo->setText("密码不能为空");
        return;
    }
    if(ui->txtPsw1->text().contains("|",Qt::CaseSensitive))
    {
        ui->labInfo->setText("密码不能包含“|”");
        return;
    }
    if(ui->txtPsw1->text().contains("!",Qt::CaseSensitive))
    {
        ui->labInfo->setText("密码不能为空“!”");
        return;
    }

    if(!(ui->txtPsw1->text()==ui->txtPsw2->text()))
    {
        ui->labInfo->setText("两次密码\n输入不同");
        return;
    }
    if(ui->comboBoxType->currentIndex()<=int(g->userType))
    {
        ui->labInfo->setText("权限不足");
        return;
    }
    changeUserInfo();
    QString data;
    for(int i=0;i<userList.count();i++)
    {
        data+=userList[i].userName+"|";
        data+=QString::number( userList[i].userType)+"|";
        data+=userList[i].passWord+"!";
    }
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
          if(redis->set("UserList",data))
          {
              QMessageBox::warning(NULL,"成功","修改成功");
              hide();
              g->mySql.takeLog(/*日志内容*/QString("修改用户:")+ui->txtUser->text(),
                               /*表*/"user_log",
                               /*类型*/"user",
                               /*用户名*/g->userName
                               );//用户日志模板

          }
        }
    }
    delete redis;
}
void UserManagement::changeUserInfo()
{
    for(int i=0;i<userList.count();i++)
    {
        if(userList[i].userName==ui->txtUser->text())//已有用户
        {
            if(g->userType<userList[i].userType)//权限大，可以修改
            {
                 userList[i].userType=(UserType)ui->comboBoxType->currentIndex();
                 userList[i].passWord=ui->txtPsw1->text();
                 return;
            }
            else
            {
                return;
            }
        }
    }
    User user;
    user.userName=ui->txtUser->text();
    user.userType=(UserType)ui->comboBoxType->currentIndex();
    user.passWord=ui->txtPsw1->text();
    userList.append(user);


}
