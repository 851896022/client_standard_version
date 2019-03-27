
#include "window.h"
#include "ui_window.h"
#include <QDebug>
#include "QMessageBox"
#include "QSettings"
window::window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::window)
{
    ui->setupUi(this);
    qDebug()<<"init main window left";
    //-------left-----------




    leftVboxLayout.addWidget(&userInfo);
    leftVboxLayout.addWidget(&listen);
    leftVboxLayout.addWidget(&alarmInfo);
    connect(&alarmInfo,SIGNAL(onSetClicked()),this,SLOT(on_actSetGate_triggered()));
    connect(&alarmInfo,SIGNAL(onResetClicked()),this,SLOT(on_actSetGate_triggered()));
    leftVboxLayout.addWidget(&gpsTime);
    leftVboxLayout.setMargin(3);
    leftVboxLayout.setSpacing(0);
    ui->leftWidget->setLayout(&leftVboxLayout);


    qDebug()<<"init main window top";
    //------top------------
    topVboxLayout.addWidget(&topBar);
    topVboxLayout.setMargin(0);
    ui->topWidget->setLayout(&topVboxLayout);
    //定义台站
    QSettings setting(qApp->applicationDirPath()+"/set.ini",QSettings::IniFormat);//设置配置文件的目录和位置，如果有，则不动，没有，会自动创建
    QString station=setting.value("Station/station").toString();//将读取出的数据进行使用;
    g->stationLabel=station;
    //------main----------
    if(station==QString(554))
    {
        qDebug()<<"init main window mian 554";
        g->equCount=2;
        QList<int> modleList[2];
        modleList[0]<<0<<2<<4<<6<<8<<10<<18<<20<<22<<24<<26;
        modleList[1]<<36<<37<<38<<39<<40<<41<<54<<55<<56<<57<<58;
        for(int i=0;i<g->equCount;i++)
        {
            for(int j=0;j<11;j++)
            {
                mainHboxLayout[i].addWidget(&chModules[modleList[i].at(j)]);
                chModules[modleList[i].at(j)].No=modleList[i].at(j);
                chModules[modleList[i].at(j)].initThis();
                connect(&chModules[modleList[i].at(j)],SIGNAL(changeListen(int,int)),&listen,SLOT(onChangeListen(int,int)));
                connect(&listen,SIGNAL(listenInfo(int,int)),&chModules[modleList[i].at(j)],SLOT(onStarListenThisCH(int,int)));

            }

            mainVboxLayout.addLayout(&mainHboxLayout[i]);
        }
        ui->mainTabWidgetTab_0->setLayout(&mainVboxLayout);
        ui->mainTabWidget->setTabText(0,"554台");
    }
    else if(station==QString(564))
    {
        qDebug()<<"init main window mian 564";
        g->equCount=2;
        QList<int> modleList[2];
        modleList[0]<<0<<1<<2<<3<<18<<19<<20<<21<<36<<37<<38;
        modleList[1]<<54<<55<<56<<57<<58<<59<<60<<61<<62<<63<<64;
        for(int i=0;i<g->equCount;i++)
        {
            for(int j=0;j<11;j++)
            {
                mainHboxLayout[i].addWidget(&chModules[modleList[i].at(j)]);
                chModules[modleList[i].at(j)].No=modleList[i].at(j);
                chModules[modleList[i].at(j)].initThis();
                connect(&chModules[modleList[i].at(j)],SIGNAL(changeListen(int,int)),&listen,SLOT(onChangeListen(int,int)));
                connect(&listen,SIGNAL(listenInfo(int,int)),&chModules[modleList[i].at(j)],SLOT(onStarListenThisCH(int,int)));

            }

            mainVboxLayout.addLayout(&mainHboxLayout[i]);
        }
        ui->mainTabWidgetTab_0->setLayout(&mainVboxLayout);
        ui->mainTabWidget->setTabText(0,"564台");
    }

    else if(station==QString(2024))
    {
        qDebug()<<"init main window mian 2024";
        g->equCount=2;
        QList<int> modleList[2];
        modleList[0]<<0<<1<<2<<3<<4<<5<<6<<7<<8<<9<<10<<11;
        modleList[1]<<18<<19<<20<<21<<22<<23<<24<<25<<26<<27<<28<<29;
        for(int i=0;i<g->equCount;i++)
        {
            for(int j=0;j<modleList[i].count();j++)
            {
                mainHboxLayout[i].addWidget(&chModules[modleList[i].at(j)]);
                chModules[modleList[i].at(j)].No=modleList[i].at(j);
                chModules[modleList[i].at(j)].initThis();
                connect(&chModules[modleList[i].at(j)],SIGNAL(changeListen(int,int)),&listen,SLOT(onChangeListen(int,int)));
                connect(&listen,SIGNAL(listenInfo(int,int)),&chModules[modleList[i].at(j)],SLOT(onStarListenThisCH(int,int)));

            }

            mainVboxLayout.addLayout(&mainHboxLayout[i]);
        }
        ui->mainTabWidgetTab_0->setLayout(&mainVboxLayout);
        ui->mainTabWidget->setTabText(0,"2024台");
    }
    else if(station==QString(641))
    {
        qDebug()<<"init main window mian 641";
        g->equCount=2;
        QList<int> modleList[2];
        modleList[0]<<18<<20<<22<<24<<26<<28<<30<<0<<2<<4<<6<<8<<10<<12<<54;
        modleList[1]<<36<<37<<38<<39<<40<<41<<42<<44<<45<<46<<47<<48<<49<<50<<43;
        for(int i=0;i<g->equCount;i++)
        {
            for(int j=0;j<modleList[i].count();j++)
            {
                mainHboxLayout[i].addWidget(&chModules[modleList[i].at(j)]);
                chModules[modleList[i].at(j)].No=modleList[i].at(j);
                chModules[modleList[i].at(j)].initThis();
                connect(&chModules[modleList[i].at(j)],SIGNAL(changeListen(int,int)),&listen,SLOT(onChangeListen(int,int)));
                connect(&listen,SIGNAL(listenInfo(int,int)),&chModules[modleList[i].at(j)],SLOT(onStarListenThisCH(int,int)));

            }

            mainVboxLayout.addLayout(&mainHboxLayout[i]);
        }
        ui->mainTabWidgetTab_0->setLayout(&mainVboxLayout);
        ui->mainTabWidget->setTabText(0,"641台");
    }
    else if(station==QString("yt"))
    {
        qDebug()<<"init main window mian yt";
        g->equCount=1;
        QList<int> modleList[1];
        modleList[0]<<0<<2<<1<<3<<4<<6<<5<<7<<8<<10<<9<<11;
        for(int i=0;i<g->equCount;i++)
        {
            for(int j=0;j<modleList[i].count();j++)
            {
                mainHboxLayout[i].addWidget(&chModules[modleList[i].at(j)]);
                chModules[modleList[i].at(j)].No=modleList[i].at(j);
                chModules[modleList[i].at(j)].initThis();
                connect(&chModules[modleList[i].at(j)],SIGNAL(changeListen(int,int)),&listen,SLOT(onChangeListen(int,int)));
                connect(&listen,SIGNAL(listenInfo(int,int)),&chModules[modleList[i].at(j)],SLOT(onStarListenThisCH(int,int)));

            }

            mainVboxLayout.addLayout(&mainHboxLayout[i]);
        }
        ui->mainTabWidgetTab_0->setLayout(&mainVboxLayout);
        ui->mainTabWidget->setTabText(0,"月坛台");
    }
    else
    {
        qDebug()<<"init main window mian std";

        for(int i=0;i<g->equCount;i++)
        {
            for(int j=0;j<18;j++)
            {
                mainHboxLayout[i].addWidget(&chModules[i*18+j]);
                chModules[i*18+j].No=i*18+j;
                chModules[i*18+j].initThis();
                if(j>11) chModules[i*18+j].setVisible(false);
                connect(&chModules[i*18+j],SIGNAL(changeListen(int,int)),&listen,SLOT(onChangeListen(int,int)));
                connect(&listen,SIGNAL(listenInfo(int,int)),&chModules[i*18+j],SLOT(onStarListenThisCH(int,int)));

            }

            mainVboxLayout.addLayout(&mainHboxLayout[i]);
        }
        ui->mainTabWidgetTab_0->setLayout(&mainVboxLayout);
    }




    qDebug()<<"init main window menu";
    //-----menu-----------
    ui->menu_2->addAction(ui->actFindOld);

    connect(&listen,SIGNAL(listenInfo(int,int)),&topBar,SLOT(refListenInfo(int,int)));
    qDebug()<<"init main window statusBar";
    //-----statusBar------
    dataLinkState.setText("幅度数据通道");
    audioLinkState.setText("音频数据通道");
    alarmLinkState.setText("报警数据通道");
    ui->statusBar->addPermanentWidget(&dataLinkState);
    ui->statusBar->addPermanentWidget(&audioLinkState);
    ui->statusBar->addPermanentWidget(&alarmLinkState);
    connect(&refLinkStateTimer,SIGNAL(timeout()),this,SLOT(refLinkState()));
    connect(&topBar,SIGNAL(toFullScreen()),this,SLOT(switchFullScreen()));
    refLinkStateTimer.start(3000);
}

window::~window()
{
    delete ui;
}

void window::on_actFindOld_triggered()
{
    if(g->islogIn)
    {
        if(historyAudio) historyAudio->deleteLater();
        historyAudio=new HistoryAudio;
        historyAudio->show();
    }
    else
    {
        QMessageBox::information(this,"信息","请登录");
    }


}
void window::on_actSetGate_triggered()
{
    if(g->islogIn)
    {
        if(settingData) settingData->deleteLater();
        settingData=new setGate;
        settingData->show();
    }
    else
    {
        QMessageBox::information(this,"信息","请登录");
    }

}

void window::refLinkState()
{
    if(g->dataLinkState)
    {

        dataLinkState.setStyleSheet("background-color: rgb(114, 255, 20);");


    }
    else
    {
        dataLinkState.setStyleSheet("background-color: rgb(255, 41, 41);");
    }

    if(g->alarmLinkState)
    {
        alarmLinkState.setStyleSheet("background-color: rgb(114, 255, 20);");
    }
    else
    {
        alarmLinkState.setStyleSheet("background-color: rgb(255, 41, 41);");
    }

    if(g->audioLinkState)
    {
        audioLinkState.setStyleSheet("background-color: rgb(114, 255, 20);");
    }
    else
    {
        audioLinkState.setStyleSheet("background-color: rgb(255, 41, 41);");
    }
}
void window::switchFullScreen()
{
    if(ui->centralWidget->isFullScreen())
    {

        ui->centralWidget->setWindowFlags (Qt::SubWindow);
        ui->centralWidget->showNormal ();
    }
    else
    {
        ui->centralWidget->setWindowFlags (Qt::Window);
        ui->centralWidget->showFullScreen ();
    }

}
