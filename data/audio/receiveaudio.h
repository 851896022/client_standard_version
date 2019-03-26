#ifndef RECEIVEAUDIO_H
#define RECEIVEAUDIO_H

#include <QObject>
#include <QHostAddress>
#include <QUdpSocket>

#include "data/audio/player.h"
#include "data/global.h"
class ReceiveAudio : public QObject
{
    Q_OBJECT
public:
    explicit ReceiveAudio(QObject *parent = nullptr);
    Player *player;
    QUdpSocket *receiveSocket;
    QTimer *clearBuff;
signals:

public slots:
    void initThis();
    void onReceiveAudio();
    void clearAudioCache();
};

#endif // RECEIVEAUDIO_H
