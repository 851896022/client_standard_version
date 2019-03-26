#ifndef SETGATE_H
#define SETGATE_H

#include <QFrame>
#include "data/global.h"
#include "data/yxt/qRedis.h"
namespace Ui {
class setGate;
}

class setGate : public QFrame
{
    Q_OBJECT

public:
    explicit setGate(QWidget *parent = 0);
    ~setGate();

private slots:
    void on_btnOk_clicked();

private:
    Ui::setGate *ui;
};

#endif // SETGATE_H
