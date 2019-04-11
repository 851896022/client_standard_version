#ifndef LOGIN_H
#define LOGIN_H

#include <QFrame>
#include <QMessageBox>
#include "data/global.h"
#include "data/yxt/qRedis.h"
#include <QSettings>
#include <QMessageBox>
namespace Ui {
class LogIn;
}

class LogIn : public QFrame
{
    Q_OBJECT

public:
    explicit LogIn(QWidget *parent = 0);
    ~LogIn();

private slots:
    void on_btnCancel_clicked();

    void on_btnOk_clicked();

private:
    Ui::LogIn *ui;
signals:
    void onLogIn(QString);
};

#endif // LOGIN_H
