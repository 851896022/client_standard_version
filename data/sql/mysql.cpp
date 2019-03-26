#include "mysql.h"
#include <QMessageBox>
MySQL::MySQL(QObject *parent) : QObject(parent)
{

}
void MySQL::initThis(QString HostName,QString DataBaseName,QString UserName,QString PassWord)
{
    SqlHostName=HostName;
    SqlDataBaseName=DataBaseName;
    SqlUserName=UserName;
    SqlPassWord=PassWord;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(SqlHostName);
    db.setDatabaseName(SqlDataBaseName);       //这里输入你的数据库名
    db.setUserName(SqlUserName);
    db.setPassword(SqlPassWord);   //这里输入你的密码
    if (!db.open())
    {
        QMessageBox::critical(0, QObject::tr("无法打开数据库"), "无法创建数据库连接！ ", QMessageBox::Cancel);
    }
    else
    {
        query=QSqlQuery(db);
    }
}
bool MySQL::command(QString cmd)
{
    return query.exec(cmd);
}
