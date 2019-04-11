#include "logquery.h"
#include "ui_logquery.h"
#include "QMessageBox"

LogQuery::LogQuery(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::LogQuery)
{
    ui->setupUi(this);
    model=new QSqlQueryModel;
    typeList<<"user_log"<<"second_log"<<"alarm_log";
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
    g->mySql.takeLog(/*日志内容*/"查询"+ui->type->currentText(),
                     /*表*/"user_log",
                     /*类型*/"user",
                     /*用户名*/g->userName
                     );//用户日志模板
    model->deleteLater();
    model = new QSqlQueryModel;
    //qWarning()<<"查询日志";



    QString type=typeList.at(ui->type->currentIndex());
    QString startTime=ui->dateTimeEditStart->dateTime().toString("yyyy-MM-dd hh:mm:ss");
    QString endTime=ui->dateTimeEditEnd->dateTime().toString("yyyy-MM-dd hh:mm:ss");
    QStringList strHeader;
    QString msg;

        if(ui->type->currentIndex()==1)//如果是秒数据
        {
            msg+="select ";
            msg+="time,";
            strHeader<<"时间";
            for(int i=0;i<200;i++)
            {
                if(g->chNameList.at(i)==QString("")
                        ||g->chNameList.at(i)==(QString("通道")+QString::number(i+1)))
                {
                    continue;
                }


                QString n=QString("%1").arg((i),3,10,QLatin1Char('0'));
                msg+="ch"+n+"apm,";
                strHeader<<(g->chNameList[i]+"幅度");
                msg+="ch"+n+"sim,";
                strHeader<<(g->chNameList[i]+"相似度");

            }
            msg.chop(1);
            msg+=" from ";
            msg+=type+" where dt>'"+startTime+"' and dt<'"+endTime+"';　";

        }
        else
        {
            strHeader<<"时间"<<"用户"<<"日志";
            msg+="select time,user,log from "
                    +type
                    +" where dt>'"
                    +startTime
                    +"' and dt<'"
                    +endTime
                +"';　";
        }

    //qDebug()<<msg;
    model->setQuery(msg);//这里直接设置SQL语句，忽略最后一个参数

    while(model->canFetchMore())
    {
        model->fetchMore();

    }
    for(int i=0;i<strHeader.count();i++)
    {
        model->setHeaderData(i,Qt::Horizontal,strHeader[i]);
    }

    ui->tableView->setModel(model);

    //qDebug()<< model->query().size();
    //以下是视觉方面的效果，不加也没影响
    
    //隔行变色
    ui->tableView->setAlternatingRowColors(true);
    //setHorizontalHeaderLabels;
    //ui->tableView->horizontalHeader()->
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


#include <QFileDialog>
#include <QTextEdit>

void LogQuery::on_btnSaveToFile_clicked()
{
   QTableView *table=ui->tableView;
    QString filepath = QFileDialog::getSaveFileName(this, tr("Save as..."),
                QString(), tr("EXCEL 文档 (*.csv );;文本文件 (*.txt);;"));

    if(filepath.isEmpty())return;
    if(table->model()==NULL)return;
        int row = table->model()->rowCount();
        int col = table->model()->columnCount();
        QList<QString> list;
        //添加列标题
        QString HeaderRow;
        for(int i=0;i<col;i++)
        {
            HeaderRow.append(table->model()->headerData(i,Qt::Horizontal).toString()+",");
        }
        list.push_back(HeaderRow);
        for(int i=0;i<row;i++)
        {
            QString rowStr = "";
            for(int j=0;j<col;j++){

                rowStr += table->model()->data(table->model()->index(i,j)).toString() + ",";
            }
            list.push_back(rowStr);
        }
        QTextEdit textEdit;
        for(int i=0;i<list.size();i++)
        {
            textEdit.append(list.at(i));
        }

        QFile file(filepath);
        if(file.open(QFile::WriteOnly | QIODevice::Text))
        {
            QTextStream ts(&file);
            //ts.setCodec("UTF-8");
            ts<<textEdit.document()->toPlainText();
            file.close();
        }
}
