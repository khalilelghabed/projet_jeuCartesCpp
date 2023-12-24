#ifndef PREMIERINETRFACE_H
#define PREMIERINETRFACE_H
#include<choixtable.h>
#include <QWidget>
#include "principal.h"
#include <QMetaObject>

namespace Ui {
class premierInetrface;
}

class premierInetrface : public QWidget
{
    Q_OBJECT

public:
    explicit premierInetrface(QWidget *parent = nullptr);
    ~premierInetrface();


private slots:
    bool commence();
    void facile();
    void difficile();
    void on_playButton_clicked();
    void on_deficultyButtn_clicked();

private:
    Ui::premierInetrface *ui;
    bool test;
};

#endif // PREMIERINETRFACE_H
