#ifndef TOPBAR_H
#define TOPBAR_H

#include <QFrame>

namespace Ui {
class TopBar;
}

class TopBar : public QFrame
{
    Q_OBJECT

public:
    explicit TopBar(QWidget *parent = 0);
    ~TopBar();
    bool isFull=false;
private:
    Ui::TopBar *ui;

public slots:
    void refListenInfo(QString msg);
    void refListenInfo(int type,int ch);
    void refListenInfo(int ch);
    void on_escKey_clicked();
private slots:
    void on_fullScreen_clicked();
signals:
    void toFullScreen();
};

#endif // TOPBAR_H
