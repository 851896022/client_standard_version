#ifndef GPSTIME_H
#define GPSTIME_H

#include <QFrame>
#include <QTimer>
#include <QDateTime>
namespace Ui {
class GpsTime;
}

class GpsTime : public QFrame
{
    Q_OBJECT

public:
    explicit GpsTime(QWidget *parent = 0);
    ~GpsTime();

private:
    Ui::GpsTime *ui;
    QTimer timer;
private slots:
    void reftime();
};

#endif // GPSTIME_H
