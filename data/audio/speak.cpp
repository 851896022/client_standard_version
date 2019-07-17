#include "speak.h"
#include <QDebug>
Speak::Speak(QObject *parent) : QObject(parent)
{

}
Speak::~Speak()
{
    OleUninitialize();
}
void Speak::initThis()
{
    HRESULT r = OleInitialize(0);
    if (r != S_OK && r != S_FALSE)
    {
        qWarning("Qt:初始化Ole失败（error %x）",(unsigned int)r);
    }

    voiceObj=new QAxObject("Sapi.SpVoice");
}
void Speak::speak(QString str)
{
    qDebug()<<"speak start"<<str;
    voiceObj->dynamicCall("Speak(QString, SpeechVoiceSpeakFlags)", QString(), 2);//打断当前朗读，执行新的
    voiceObj->dynamicCall("Speak(QString, SpeechVoiceSpeakFlags)", str, 1);
    qDebug()<<"speak end";
}
