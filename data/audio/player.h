#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QAudioOutput>
#include <QByteArray>
#include <QTimer>
#include <QDebug>
class Player : public QObject
{
    Q_OBJECT
public:
    explicit Player(QObject *parent = nullptr);
    QAudioOutput* audioOutput;
    QIODevice * streamOut;
    QByteArray tempBuffer;
    QByteArray audioCache;
    QTimer *timer;
    bool first=true;
    //定义文件指针
    char *fileBuffer;
    int fileLength;
signals:

public slots:
    void slotTimeout();
};

#endif // PLAYER_H
