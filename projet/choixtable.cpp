#include "choixtable.h"
#include "ui_choixtable.h"

choixTable::choixTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choixTable)
{
    ui->setupUi(this);

    ui->table1->setFixedSize(600,400);
    QIcon icon(":/cartes/photos_des_cartes/bg.jpg");
    ui->table1->setIcon(icon);
    ui->table1->setIconSize(ui->table1->size());


    ui->table2->setFixedSize(600,400);
    QIcon icon2(":/cartes/photos_des_cartes/bg2.jpg");
    ui->table2->setIcon(icon2);
    ui->table2->setIconSize(ui->table2->size());


    ui->table3->setFixedSize(600,400);
    QIcon icon3(":/cartes/photos_des_cartes/bg3.jpg");
    ui->table3->setIcon(icon3);
    ui->table3->setIconSize(ui->table3->size());

}

choixTable::~choixTable()
{
    delete ui;
}

void choixTable::on_table1_clicked()
{
    this->close();
    MaClasse *gamePlay=new MaClasse();
    QMainWindow     *mainWindow = qobject_cast<QMainWindow*>(this->parentWidget());
    mainWindow->setCentralWidget(gamePlay);
    mainWindow->setStyleSheet("background-size: 900px; border-image: url(:/cartes/photos_des_cartes/bg.jpg) 0 0 0 0 stretch stretch;");
}


void choixTable::on_table2_clicked()
{

    this->close();
    MaClasse *gamePlay=new MaClasse();
    QMainWindow *mainWindow = qobject_cast<QMainWindow*>(this->parentWidget());
    mainWindow->setCentralWidget(gamePlay);
    mainWindow->setStyleSheet("background-size: 900px; border-image: url(:/cartes/photos_des_cartes/bg2.jpg) 0 0 0 0 stretch stretch;");

}


void choixTable::on_table3_clicked()
{

    this->close();
    MaClasse *gamePlay=new MaClasse();
    QMainWindow *mainWindow = qobject_cast<QMainWindow*>(this->parentWidget());
    mainWindow->setCentralWidget(gamePlay);
    mainWindow->setStyleSheet("background-size: 900px; border-image: url(:/cartes/photos_des_cartes/bg3.jpg) 0 0 0 0 stretch stretch;");
}

