#include "principal.h"
#include "ui_principal.h"
#include "maclasse.h"
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
