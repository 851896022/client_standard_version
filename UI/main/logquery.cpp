#include "logquery.h"
#include "ui_logquery.h"
#include "QMessageBox"
LogQuery::LogQuery(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::LogQuery)
{
    ui->setupUi(this);
    model=new QSqlQueryModel;
    typeList<<"user_log"<<"sec_log"<<"alarm_log";
    QDateTime t=QDateTime::currentDateTime();
    ui->dateTimeEditStart->setDateTime(t.addDays(0-1));
    ui->dateTimeEditEnd->setDateTime(t);


}


LogQuery::~LogQuery()
{
    delete ui;
}

void LogQuery::on_BtnFind_clicked()
{
    if(!g->mySql.db.isOpen())
    {
        QMessageBox::information(this,"连接失败","数据库连接失败！");
        return;
    }
    model->deleteLater();
    model = new QSqlQueryModel;
    //qWarning()<<"查询日志";
    QString type=typeList.at(ui->type->currentIndex());
    QString startTime=ui->dateTimeEditStart->dateTime().toString("yyyy-MM-dd hh:mm:ss");
    QString endTime=ui->dateTimeEditEnd->dateTime().toString("yyyy-MM-dd hh:mm:ss");

    QString msg;
    msg+="select time,user,log from "
            +type+
            +" where dt>'"
            +startTime
            +"' and dt<'"
            +endTime
            +"';　",
    //qDebug()<<msg;
    model->setQuery(msg);//这里直接设置SQL语句，忽略最后一个参数

    while(model->canFetchMore())
    {
        model->fetchMore();
    }
    ui->tableView->setModel(model);
    
    //以下是视觉方面的效果，不加也没影响
    
    //隔行变色
    ui->tableView->setAlternatingRowColors(true);
    //ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    //设置行高
    int row_count = model->rowCount();
    for(int i =0; i < row_count; i++)
    {
      ui->tableView->setRowHeight(i, 20);
    }
}


