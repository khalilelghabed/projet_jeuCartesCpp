#include "premierInetrface.h"
#include "ui_premierInetrface.h"
#include "maclasse.h"
#include "principal.h"
#include <QMainWindow>
premierInetrface::premierInetrface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::premierInetrface),test(false)
{
    ui->setupUi(this);
    ui->playButton->setFixedSize(300,90);
    ui->deficultyButtn->setFixedSize(300,90);
    ui->quitButton->setFixedSize(300,90);
    QIcon icon(":/cartes/photos_des_cartes/PLAYBUT.png");

    // Appliquer l'icône au bouton
    ui->playButton->setIcon(icon);

    // Redimensionner automatiquement l'icône pour qu'elle remplisse le bouton
    ui->playButton->setIconSize(ui->playButton->size());
}

premierInetrface::~premierInetrface()
{
    delete ui;
}

bool premierInetrface::commence()
{
    return test;
}





void premierInetrface::on_playButton_clicked()
{
    this->close();
    MaClasse *gamePlay=new MaClasse();
    QMainWindow *mainWindow = qobject_cast<QMainWindow*>(this->parentWidget());
    mainWindow->setCentralWidget(gamePlay);
    mainWindow->setStyleSheet("background-size: 900px; border-image: url(:/cartes/photos_des_cartes/bg.jpg) 0 0 0 0 stretch stretch;");
}

