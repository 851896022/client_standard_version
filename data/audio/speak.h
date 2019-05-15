#ifndef SPEAK_H
#define SPEAK_H

#include <QObject>
#include <QAxObject>
#include <windows.h>
class Speak : public QObject
{
    Q_OBJECT
public:
    explicit Speak(QObject *parent = nullptr);
    //====SAPI=============
    QAxObject *voiceObj;
    ~Speak();
signals:

public slots:
    void initThis();
    void speak(QString str);
};

#endif // SPEAK_H
