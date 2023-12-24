#include "premierInetrface.h"
#include "ui_premierInetrface.h"
#include "maclasse.h"
#include "principal.h"
#include <QMainWindow>
#include<QDebug>
premierInetrface::premierInetrface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::premierInetrface),test(false)
{
    ui->setupUi(this);
    ui->playButton->setFixedSize(300,70);
    ui->deficultyButtn->setFixedSize(300,70);
    ui->quitButton->setFixedSize(300,70);


    QIcon icon(":/cartes/photos_des_cartes/butt2 .png");
    ui->playButton->setIcon(icon);
    ui->playButton->setIconSize(ui->playButton->size());


    QIcon icon2(":/cartes/photos_des_cartes/butt1.png");
    ui->deficultyButtn->setIcon(icon2);
    ui->deficultyButtn->setIconSize(ui->deficultyButtn->size());

    QIcon icon3(":/cartes/photos_des_cartes/butt3.png");
    ui->quitButton->setIcon(icon3);
    ui->quitButton->setIconSize(ui->quitButton->size());


}

premierInetrface::~premierInetrface()
{
    delete ui;
}

bool premierInetrface::commence()
{
    return test;
}

void premierInetrface::facile()
{
    principal *mainWindow = qobject_cast<principal*>(this->parentWidget());
    mainWindow->setDifficulty(0);
}

void premierInetrface::difficile()
{
    principal *mainWindow = qobject_cast<principal*>(this->parentWidget());
    mainWindow->setDifficulty(1);
}





void premierInetrface::on_playButton_clicked()
{
    this->close();
    choixTable *choix=new choixTable();
    QMainWindow *mainWindow = qobject_cast<QMainWindow*>(this->parentWidget());
    mainWindow->setCentralWidget(choix);
    mainWindow->setStyleSheet("background-size: 900px; border-image: url(:/cartes/photos_des_cartes/bg4.jpg) 0 0 0 0 stretch stretch;");
}


void premierInetrface::on_deficultyButtn_clicked()
{
    QDialog *quitDialog = new QDialog(this);
    quitDialog->setWindowTitle("defficulty !");
    quitDialog->setFixedSize(700,400);

    // Ajouter un QLabel pour le message
    QLabel *messageLabel = new QLabel("", quitDialog);
    QPixmap pixmap(":/cartes/photos_des_cartes/message.png");
    messageLabel->setPixmap(pixmap);
    messageLabel->setScaledContents(true);
    QFont font;
    font.setPointSize(16);
    font.setBold(true);
    messageLabel->setFont(font);
    messageLabel->setStyleSheet("color: white");
    messageLabel->setAlignment(Qt::AlignCenter);

    // Ajouter un bouton "Quitter"
    QPushButton *facileButton = new QPushButton("", quitDialog);
    facileButton->setStyleSheet("QPushButton {"
                              "background-color: #e74c3c;"
                              "border: none;"
                              "color: white;"               // Couleur du texte
                              "font-size: 16px;"            // Taille du texte
                              "}"
                              "QPushButton:hover {"
                              "background-color: #c0392b;"  // Couleur de fond au survol
                              "}");
    facileButton->setFixedSize(180,40);
    QIcon icon(":/cartes/photos_des_cartes/facile.png");
    facileButton->setIcon(icon);
    facileButton->setIconSize(facileButton->size());




    // Ajouter un bouton "Annuler"
    QPushButton *difficileButton = new QPushButton("", quitDialog);
    difficileButton->setStyleSheet("QPushButton {"
                                "background-color: #3498db;"
                                "border: none;"
                                "color: white;"               // Couleur du texte
                                "font-size: 16px;"            // Taille du texte
                                "}"
                                "QPushButton:hover {"
                                "background-color: #2980b9;"  // Couleur de fond au survol
                                "}");
    difficileButton->setFixedSize(180,40);
    QIcon icon2(":/cartes/photos_des_cartes/difficile.png");
    difficileButton->setIcon(icon2);
    difficileButton->setIconSize(difficileButton->size());
    // Créer une mise en page horizontale pour les boutons
    QHBoxLayout *L=new QHBoxLayout();
    QVBoxLayout *buttonLayout = new QVBoxLayout;

    buttonLayout->addWidget(facileButton);
    buttonLayout->addWidget(difficileButton);

    connect(facileButton, &QPushButton::clicked, this, &premierInetrface::facile);
    connect(difficileButton, &QPushButton::clicked, this, &premierInetrface::difficile);

    // Créer une mise en page verticale pour la boîte de dialogue
    QVBoxLayout *mainLayout = new QVBoxLayout(quitDialog);
    mainLayout->addWidget(messageLabel);
    mainLayout->addStretch();
    mainLayout->addLayout(L);
    mainLayout->addStretch();
    L->addStretch();
    L->addLayout(buttonLayout);
    L->addStretch();

    // Connecter les signaux et les slots pour les boutons


    // Afficher la boîte de dialogue
    quitDialog->exec();

}

