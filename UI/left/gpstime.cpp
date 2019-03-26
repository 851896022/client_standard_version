#include "gpstime.h"
#include "ui_gpstime.h"

GpsTime::GpsTime(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::GpsTime)
{
    ui->setupUi(this);
    connect(&timer,SIGNAL(timeout()),this,SLOT(reftime()));
    timer.start(500);
}

GpsTime::~GpsTime()
{
    delete ui;
}
void GpsTime::reftime()
{
    ui->lcdNumber->display(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
}
