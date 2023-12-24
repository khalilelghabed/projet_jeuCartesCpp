#ifndef PREMIERINETRFACE_H
#define PREMIERINETRFACE_H
#include<choixtable.h>
#include <QWidget>

namespace Ui {
class premierInetrface;
}

class premierInetrface : public QWidget
{
    Q_OBJECT

public:
    explicit premierInetrface(QWidget *parent = nullptr);
    ~premierInetrface();
    bool commence();

private slots:


    void on_playButton_clicked();

private:
    Ui::premierInetrface *ui;
    bool test;
};

#endif // PREMIERINETRFACE_H
