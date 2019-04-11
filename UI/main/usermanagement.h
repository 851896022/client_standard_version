#ifndef USERMANAGEMENT_H
#define USERMANAGEMENT_H

#include <QFrame>
#include <data/global.h>
#include "data/yxt/qRedis.h"
#include <QSettings>
#include <QMessageBox>
namespace Ui {
class UserManagement;
}

class UserManagement : public QFrame
{
    Q_OBJECT

public:
    explicit UserManagement(QWidget *parent = 0);
    ~UserManagement();
    QList<User> userList;
private slots:
    void on_txtUser_textChanged(const QString &arg1);

    void on_btnSave_clicked();

private:
    Ui::UserManagement *ui;
public slots:
    void changeUserInfo();
};

#endif // USERMANAGEMENT_H
