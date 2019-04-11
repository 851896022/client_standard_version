#ifndef USERMANAGEMENT_H
#define USERMANAGEMENT_H

#include <QFrame>

namespace Ui {
class UserManagement;
}

class UserManagement : public QFrame
{
    Q_OBJECT

public:
    explicit UserManagement(QWidget *parent = 0);
    ~UserManagement();

private:
    Ui::UserManagement *ui;
};

#endif // USERMANAGEMENT_H
