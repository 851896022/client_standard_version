#ifndef CHMODULE_H
#define CHMODULE_H

#include <QFrame>
#include <QMenu>
#include "data/global.h"
namespace Ui {
class ChModule;
}

class ChModule : public QFrame
{
    Q_OBJECT

public:
    explicit ChModule(QWidget *parent = 0);
    ~ChModule();
    QTimer refApmTimer;
    QTimer refSimTimer;
    int refDelay=0;
    int No=0;
private slots:


    void on_ChModule_customContextMenuRequested(const QPoint &pos);

    void on_startListen_triggered();

    void refApm();

    void refSim();

    void on_addListenList_triggered();

    void on_startRepair_triggered();
signals:
    void changeListen(int type,int ch);
private:
    Ui::ChModule *ui;
    int apmCahe=0;
    int apmCount=0;
public slots:
    void initThis();
    void onStarListenThisCH(int type,int ch);
    void onAlarm(int ch,int type,QDateTime startTime);
};

#endif // CHMODULE_H
