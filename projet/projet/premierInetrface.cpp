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
    ui->playButton->setFixedSize(320,100);
    ui->deficultyButtn->setFixedSize(320,100);
    ui->quitButton->setFixedSize(320,100);
    QIcon icon(":/photos_des_cartes/button.jpg");

    // Appliquer l'icône au bouton
    ui->playButton->setIcon(icon);

    // Redimensionner automatiquement l'icône pour qu'elle remplisse le bouton
    ui->playButton->setIconSize(ui->playButton->size());


    // Appliquer l'icône au bouton

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
    choixTable *choix=new choixTable();
    QMainWindow *mainWindow = qobject_cast<QMainWindow*>(this->parentWidget());
    mainWindow->setCentralWidget(choix);
    mainWindow->setStyleSheet("background-size: 900px; border-image: url(:/cartes/photos_des_cartes/fond.jpg) 0 0 0 0 stretch stretch;");
}

