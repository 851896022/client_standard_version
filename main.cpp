#include "window.h"
#include <QApplication>
#include "data/global.h"
#include "data/APM/receiveapm.h"
#include "data/audio/receiveaudio.h"
#include "data/alarm/receivealarm.h"
#include <QThread>
#include <QObject>
#include <QDesktopWidget>
#include <QDir>
#include <QFile>
#include <QDateTime>
Global *g;
void setDebugOutput(const QString &targetFilePath, const bool &argDateFlag = false);
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    setDebugOutput( qApp->applicationDirPath()+"/log/%1.log", true );
    qDebug()<<"init global";
    g= new Global;
    qDebug()<<"init main window";
    window w;
    QDesktopWidget *desktop = QApplication::desktop();
    //w.setGeometry(desktop->screenGeometry(1));

    qDebug()<<"init receive apm thread";
    //=======================
    QThread *receiveApmThread=new QThread;
    ReceiveAPM *receiveApm=new ReceiveAPM;
    receiveApm->moveToThread(receiveApmThread);
    //g->threadLi
    QObject::connect(receiveApmThread,SIGNAL(started()),receiveApm,SLOT(initThis()));
    receiveApmThread->start();
    qDebug()<<"init receive Audio thread";
    //============================
    ReceiveAudio *receiveAudio=new ReceiveAudio;
    receiveAudio->initThis();


    qDebug()<<"init receive Alarm thread";
    ReceiveAlarm *receiveAlarm=new ReceiveAlarm;
    receiveAlarm->initThis();



    {
        QObject::connect(receiveAlarm,SIGNAL(alarm(int,int,QDateTime)),&w.alarmInfo,SLOT(onReceiveAlarmInfo(int,int,QDateTime)));
    }
    w.show();
    return a.exec();
}
//日志生成
void setDebugOutput(const QString &rawTargetFilePath_, const bool &argDateFlag_)
{
    static QString rawTargetFilePath;
    static bool argDateFlag;

    rawTargetFilePath = rawTargetFilePath_;
    argDateFlag = argDateFlag_;

    class HelperClass
    {
    public:
        static void messageHandler(QtMsgType type, const QMessageLogContext &, const QString &message_)
        {
            QString message;

            switch ( type )
            {
                case QtDebugMsg:
                {
                    message = message_;
                    break;
                }
                case QtWarningMsg:
                {
                    message.append("Warning: ");
                    message.append(message_);
                    break;
                }
                case QtCriticalMsg:
                {
                    message.append("Critical: ");
                    message.append(message_);
                    break;
                }
                case QtFatalMsg:
                {
                    message.append("Fatal: ");
                    message.append(message_);
                    break;
                }
                default: { break; }
            }

            QString currentTargetFilePath;

            if ( argDateFlag )
            {
                currentTargetFilePath = rawTargetFilePath.arg( ( ( argDateFlag ) ? ( QDateTime::currentDateTime().toString("yyyy_MM_dd") ) : ( "" ) ) );
            }
            else
            {
                currentTargetFilePath = rawTargetFilePath;
            }

            if ( !QFileInfo::exists( currentTargetFilePath ) )
            {
                QDir().mkpath( QFileInfo( currentTargetFilePath ).path() );
            }

            QFile file( currentTargetFilePath );
            file.open( QIODevice::WriteOnly | QIODevice::Append );

            QTextStream textStream( &file );
            textStream << QDateTime::currentDateTime().toString( "yyyy-MM-dd hh:mm:ss" ) << ": " << message << "\r"<<endl;
            QTextStream stdStream( stdout );
            stdStream<< QDateTime::currentDateTime().toString( "yyyy-MM-dd hh:mm:ss" ) << ": " << message << "\r"<<endl;
        }
    };

    qInstallMessageHandler( HelperClass::messageHandler );
}