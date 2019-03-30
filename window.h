#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include "UI/left/alarminfo.h"
#include "UI/left/gpstime.h"
#include "UI/left/listen.h"
#include "UI/left/userinfo.h"
#include "UI/main/chmodule.h"
#include "UI/top/topbar.h"
#include "UI/main/historyaudio.h"
#include "UI/main/setgate.h"
#include "UI/main/logquery.h"
#include <QApplication>
namespace Ui {
class window;
}

class window : public QMainWindow
{
    Q_OBJECT

public:
    explicit window(QWidget *parent = 0);
    ~window();
    UserInfo userInfo;
    Listen listen;
    AlarmInfo alarmInfo;
    GpsTime gpsTime;
    TopBar topBar;
    ChModule chModules[200];
    QVBoxLayout leftVboxLayout;
    QVBoxLayout topVboxLayout;
    QVBoxLayout mainVboxLayout;
    QHBoxLayout mainHboxLayout[10];
    HistoryAudio *historyAudio=NULL;
    setGate *settingData=NULL;
    LogQuery *logQuery=NULL;
    //====================
    QLabel dataLinkState;
    QLabel audioLinkState;
    QLabel alarmLinkState;
    QTimer refLinkStateTimer;
private slots:
    void on_actFindOld_triggered();
    void refLinkState();
    void on_actSetGate_triggered();
    void switchFullScreen();
    void on_actQuery_triggered();

private:
    Ui::window *ui;
};

#endif // WINDOW_H
