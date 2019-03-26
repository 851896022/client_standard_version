#ifndef USERINFO_H
#define USERINFO_H

#include <QFrame>
#include "data/global.h"
#include "UI/main/login.h"
namespace Ui {
class UserInfo;
}

class UserInfo : public QFrame
{
    Q_OBJECT

public:
    explicit UserInfo(QWidget *parent = 0);
    ~UserInfo();
    LogIn *logIn;
public slots:
    void onLogin(QString user);
private slots:


    void on_btnLogin_clicked();

private:
    Ui::UserInfo *ui;
};

#endif // USERINFO_H
