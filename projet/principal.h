#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "premierInetrface.h"
#include "jeu.h"
#include <QMainWindow>

namespace Ui {
class principal;
}

class principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = nullptr);
    ~principal();
    void setDifficulty(int valeur);
    int getDifficulty();

private:
    Ui::principal *ui;
    int valeurDifficulty;
};

#endif // PRINCIPAL_H
