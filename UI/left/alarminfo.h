#ifndef ALARMINFO_H
#define ALARMINFO_H

#include <QFrame>
#include "data/global.h"
namespace Ui {
class AlarmInfo;
}

class AlarmInfo : public QFrame
{
    Q_OBJECT

public:
    explicit AlarmInfo(QWidget *parent = 0);
    ~AlarmInfo();
    QTimer timer;
private:
    Ui::AlarmInfo *ui;
public slots:
    void initThis();
    void alarmTest();
    void onReceiveAlarmInfo(int,int,QDateTime);
private slots:
    void on_btnReset_clicked();
    void on_btnSet_clicked();
signals:
    void onSetClicked();
    void onResetClicked();
};

#endif // ALARMINFO_H
