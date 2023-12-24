#include "principal.h"
#include "ui_principal.h"
#include "maclasse.h"
#include<QDebug>
principal::principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
    premierInetrface *premier=new premierInetrface();

    setCentralWidget(premier);
}
principal::~principal()
{
    delete ui;
}

void principal::setDifficulty(int valeur)
{
    qDebug()<<"le veleur de difficulty "<<valeur;
    valeurDifficulty=valeur;
}

int principal::getDifficulty()
{
    return valeurDifficulty;
}
