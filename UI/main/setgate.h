#ifndef SETGATE_H
#define SETGATE_H

#include <QFrame>
#include "data/global.h"
#include "data/yxt/qRedis.h"
#include <QTableWidgetItem>
#include <QLineEdit>
#include <QInputDialog>
namespace Ui {
class setGate;
}

class setGate : public QFrame
{
    Q_OBJECT

public:
    explicit setGate(QWidget *parent = 0);
    ~setGate();
    QTableWidgetItem *itemAlarmGate[200];
    QLineEdit *txtAlarmGate[200];

    QTableWidgetItem *itemAlarmDelay[200];
    QLineEdit *txtAlarmDelay[200];

    QTableWidgetItem *itemSimGate[200];
    QLineEdit *txtSimGate[200];

    QTableWidgetItem *itemSimDelay[200];
    QLineEdit *txtSimDelay[200];
private slots:
    void on_btnOk_clicked();

    void on_oneKeyAlarmGate_clicked();

    void on_oneKeyAlarmDelay_clicked();

    void on_oneKeySimGate_clicked();

    void on_oneKeySimDelay_clicked();

private:
    Ui::setGate *ui;
};

#endif // SETGATE_H
