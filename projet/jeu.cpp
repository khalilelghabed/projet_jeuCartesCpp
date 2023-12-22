#include "jeu.h"
#include "ui_jeu.h"
#include<QDebug>


MaClasse::MaClasse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MaClasse)
{
    ui->setupUi(this);
   ui->deckLayout->parentWidget()->setStyleSheet("background-image: url(:/dekp/dek.jpg);");


}




MaClasse::~MaClasse()
{
    delete ui;
}

int MaClasse::test2=0;
int MaClasse::test=0;
int MaClasse::test3=0;
int MaClasse::test4=0;
int MaClasse::test5=0;
int MaClasse::J=0;
int MaClasse::C=0;
int MaClasse::count=0;
Carte *MaClasse::center=nullptr;




void MaClasse::on_PlayButton_clicked()
{
    ui->PlayButton->hide();

     MaDeck=this->creer_deck();


    MaDeck->initImage(":/cartes/photos_des_cartes/images.png");
    ui->deckLayout->addWidget(MaDeck->getqlabel());


    ui->deckLayout->parentWidget()->setStyleSheet("background-image: url(:/dekp/dek.jpg);");

    distribuerJoeur();
    distribuerComputer();
    carteCentrale(MaDeck->getCarte());

    connect(MaDeck->getqlabel(), &MonQlabel::clicked, [=]() {
        if(test==0){
            donnerCarte();}
        if (MaDeck->getCartes().isEmpty()) {
           MaDeck->getqlabel()->hide();
            ui->deckLayout->addWidget(MaDeck->getqlabel());



        }
        QTimer::singleShot(400, [=]() {
            if(test==0){
            computerJouer();
            }
        });
       });


}
void MaClasse::ajouterCarteAcentral(Carte *A)
{

    Carte* B =this->creer_carte(center->getNumber(),center->getSymbol(),QPixmap(":/cartes/photos_des_cartes/D1.jpg"));
    B->retournerImage();// Créez un pointeur Carte* B initialisé à nullptr

    QLayoutItem *item;

    while ((item = ui->centralLayout->takeAt(0)) != nullptr) {

        delete item->widget();  // Supprime l'objet associé au widget
        delete item;  // Supprime l'objet de mise en page

    }
    secendDeck->ajoutCarte(B);
    qDebug()<<"ici la solution "<<B->getNumber()<<B->getSymbol();

    // Ajouter le nouveau widget au layout
    ui->centralLayout->addWidget(A);
    center=A;
    center->setCanPlay(false);
    J--;


}




Carte *MaClasse::creer_carte(int number, const QString &symbol, const QPixmap& image)
{
    QPixmap resizedImage=image.scaled(100, 150, Qt::KeepAspectRatio);
     Carte *nouvelleCarte = new Carte(number, symbol);
    nouvelleCarte->setPixmap(resizedImage);
     nouvelleCarte->setFixedSize(100,150);
    nouvelleCarte->setScaledContents(true); ;

    // Chargez l'image à partir du chemin


     // Créez un QLabel pour afficher l'image redimensionnée
   QLabel *labelImage = new QLabel(this);
     labelImage->setPixmap(resizedImage);

     // Fixez la taille du QLabel à 150x50
     labelImage->setFixedSize(100, 150);

     connect(nouvelleCarte, &MonQlabel::clicked, [=]() {
         jouer(nouvelleCarte);



         });
     return nouvelleCarte;

}






Group *MaClasse::creer_deck(){
     Carte *D1=this->creer_carte(1, "D", QPixmap(":/cartes/photos_des_cartes/D1.jpg"));
         Carte *D2=this->creer_carte(2, "D", QPixmap(":/cartes/photos_des_cartes/D2.jpg"));
       Carte *D3=this->creer_carte(3, "D", QPixmap(":/cartes/photos_des_cartes/D3.jpg"));
       Carte *D4=this->creer_carte(4, "D", QPixmap(":/cartes/photos_des_cartes/D4.jpg" ));
       Carte *D5=this->creer_carte(5, "D", QPixmap(":/cartes/photos_des_cartes/D5.jpg"));
       Carte *D6=this->creer_carte(6, "D", QPixmap(":/cartes/photos_des_cartes/D6.jpg"));
       Carte *D7=this->creer_carte(7, "D", QPixmap(":/cartes/photos_des_cartes/D7.jpg"));
       Carte *D10=this->creer_carte(10, "D", QPixmap(":/cartes/photos_des_cartes/D10.jpg"));
       Carte *D11=this->creer_carte(11, "D",QPixmap( ":/cartes/photos_des_cartes/D11.jpg"));
       Carte *D12=this->creer_carte(12, "D", QPixmap(":/cartes/photos_des_cartes/D12.jpg"));

       Carte *G1=this->creer_carte(1, "G", QPixmap(":/cartes/photos_des_cartes/G1.jpg"));
       Carte *G2=this->creer_carte(2, "G", QPixmap(":/cartes/photos_des_cartes/G2.jpg"));
       Carte *G3=this->creer_carte(3, "G", QPixmap(":/cartes/photos_des_cartes/G3.jpg"));
       Carte *G4=this->creer_carte(4, "G", QPixmap(":/cartes/photos_des_cartes/G4.jpg"));
       Carte *G5=this->creer_carte(5, "G", QPixmap(":/cartes/photos_des_cartes/G5.jpg"));
       Carte *G6=this->creer_carte(6, "G", QPixmap(":/cartes/photos_des_cartes/G6.jpg"));
       Carte *G7=this->creer_carte(7, "G", QPixmap(":/cartes/photos_des_cartes/G7.jpg"));
       Carte *G10=this->creer_carte(10, "G",QPixmap (":/cartes/photos_des_cartes/G10.jpg"));
       Carte *G11=this->creer_carte(11, "G",QPixmap (":/cartes/photos_des_cartes/G11.jpg"));
       Carte *G12=this->creer_carte(12, "G",QPixmap(":/cartes/photos_des_cartes/G12.jpg"));

       Carte *S1=this->creer_carte(1, "S", QPixmap(":/cartes/photos_des_cartes/S1.jpg"));
       Carte *S2=this->creer_carte(2, "S", QPixmap(":/cartes/photos_des_cartes/S2.jpg"));
       Carte *S3=this->creer_carte(3, "S", QPixmap(":/cartes/photos_des_cartes/S3.jpg"));
       Carte *S4=this->creer_carte(4, "S", QPixmap(":/cartes/photos_des_cartes/S4.jpg"));
       Carte *S5=this->creer_carte(5, "S", QPixmap(":/cartes/photos_des_cartes/S5.jpg"));
       Carte *S6=this->creer_carte(6, "S", QPixmap(":/cartes/photos_des_cartes/S6.jpg"));
       Carte *S7=this->creer_carte(7, "S", QPixmap(":/cartes/photos_des_cartes/S7.jpg"));
       Carte *S10=this->creer_carte(10, "S", QPixmap(":/cartes/photos_des_cartes/S10.jpg"));
       Carte *S11=this->creer_carte(11, "S", QPixmap(":/cartes/photos_des_cartes/S11.jpg"));
       Carte *S12=this->creer_carte(12, "S",QPixmap(":/cartes/photos_des_cartes/S12.jpg"));

       Carte *Z1=this->creer_carte(1, "Z", QPixmap(":/cartes/photos_des_cartes/Z1.jpg"));
       Carte *Z2=this->creer_carte(2, "Z", QPixmap(":/cartes/photos_des_cartes/Z2.jpg"));
       Carte *Z3=this->creer_carte(3, "Z", QPixmap(":/cartes/photos_des_cartes/Z3.jpg"));
       Carte *Z4=this->creer_carte(4, "Z", QPixmap(":/cartes/photos_des_cartes/Z4.jpg"));
       Carte *Z5=this->creer_carte(5, "Z", QPixmap(":/cartes/photos_des_cartes/Z5.jpg"));
       Carte *Z6=this->creer_carte(6, "Z", QPixmap(":/cartes/photos_des_cartes/Z6.jpg"));
       Carte *Z7=this->creer_carte(7, "Z", QPixmap(":/cartes/photos_des_cartes/Z7.jpg"));
       Carte *Z10=this->creer_carte(10, "Z",QPixmap(":/cartes/photos_des_cartes/Z10.jpg"));
       Carte *Z11=this->creer_carte(11, "Z", QPixmap(":/cartes/photos_des_cartes/Z11.jpg"));
       Carte *Z12=this->creer_carte(12, "Z", QPixmap(":/cartes/photos_des_cartes/Z12.jpg"));

     Group *deck=new Group();

     deck->ajoutCarte(D1);
     deck->ajoutCarte(D2);
     deck->ajoutCarte(D3);
     deck->ajoutCarte(D4);
 deck->ajoutCarte(D5);
     deck->ajoutCarte(D6);
     deck->ajoutCarte(D7);
     deck->ajoutCarte(D10);
     deck->ajoutCarte(D11);
     deck->ajoutCarte(D12);

    deck->ajoutCarte(G1);
    deck->ajoutCarte(G2);
     deck->ajoutCarte(G3);
     deck->ajoutCarte(G4);
     deck->ajoutCarte(G5);
     deck->ajoutCarte(G6);
     deck->ajoutCarte(G7);
     deck->ajoutCarte(G10);
     deck->ajoutCarte(G11);
     deck->ajoutCarte(G12);

     deck->ajoutCarte(S1);
     deck->ajoutCarte(S2);
     deck->ajoutCarte(S3);
     deck->ajoutCarte(S4);
     deck->ajoutCarte(S5);
     deck->ajoutCarte(S6);
     deck->ajoutCarte(S7);
     deck->ajoutCarte(S10);
     deck->ajoutCarte(S11);
     deck->ajoutCarte(S12);

     deck->ajoutCarte(Z1);
     deck->ajoutCarte(Z2);
     deck->ajoutCarte(Z3);
     deck->ajoutCarte(Z4);
     deck->ajoutCarte(Z5);
     deck->ajoutCarte(Z6);
     deck->ajoutCarte(Z7);
     deck->ajoutCarte(Z10);
     deck->ajoutCarte(Z11);
     deck->ajoutCarte(Z12);
   deck->melangerCartes();
     qDebug()<<"methode correct";
     count=40;
     return deck;

}





void MaClasse::ajouterMainJoueur(Carte *A)
{
     A->setCanPlay(true);
     ui->joeurLayout->setAlignment(Qt::AlignCenter) ;
     ui->joeurLayout->addWidget(A,0,Qt::AlignCenter);
     count--;
     J++;
     if (count==0){
         qDebug()<<"ici est le grande problem "<< secendDeck->getCarte()->getNumber();
         qDebug()<<"les cartes dans la deuxime decke est : ";
         count=MaDeck->transformer(secendDeck);
         QString textLabel=QString::number(count);
         ui->labelCount->setText(textLabel);


     }

}



void MaClasse::ajouterComputer(Carte *A)
{     A->setCanPlay(false);
     ui->IALayout->setAlignment(Qt::AlignCenter) ;
     ui->IALayout-> addWidget(A,0,Qt::AlignCenter);
     A->changerimage(":/cartes/photos_des_cartes/images.png");
     count--;
      qDebug()<<"valeur de j"<<J;
     C++;
      if (count==0){
         qDebug()<<"ici est le grande problem "<< secendDeck->getCarte()->getNumber();
         count=MaDeck->transformer(secendDeck);

         qDebug()<<"les cartes dans la deuxime decke est : ";
         QString textLabel=QString::number(count);
         ui->labelCount->setText(textLabel);




      }}




void MaClasse::carteCentrale(Carte *A){
     ui->centralLayout->addWidget(A);
      A->setCanPlay(false);
     center=A;
     count--;


}


void MaClasse::donnerCarte(){
     if (!MaDeck){
         qDebug()<<"deck vide";
         exit(0);
     }
     qDebug() << "slot";

     Carte *carte =MaDeck->getCarte();


     if (carte) {
         ajouterMainJoueur(carte);
         QString textLabel=QString::number(count);
         ui->labelCount->setText(textLabel);

     } else {
         qDebug() << "Le deck est vide.";
         // Gérer le cas où le deck est vide
     }
}




void MaClasse::distribuerJoeur(){
     QTimer::singleShot(200, [=]() {
         Carte *C1=MaDeck->getCarte();
         ajouterMainJoueur(C1);


     });


     QTimer::singleShot(400, [=]() {
         Carte *C2=MaDeck->getCarte();
         ajouterMainJoueur(C2);
         QString textLabel=QString::number(count);
         ui->labelCount->setText(textLabel);

     });

     QTimer::singleShot(600, [=]() {
         Carte *C3=MaDeck->getCarte();
         ajouterMainJoueur(C3);
         QString textLabel=QString::number(count);
         ui->labelCount->setText(textLabel);

     });

     QTimer::singleShot(800, [=]() {
         Carte *C4=MaDeck->getCarte();
         ajouterMainJoueur(C4);
         QString textLabel=QString::number(count);
         ui->labelCount->setText(textLabel);

     });

}




void MaClasse::distribuerComputer(){
     QTimer::singleShot(1000, [=]() {
         Carte *C1=MaDeck->getCarte();
         ajouterComputer(C1);
         QString textLabel=QString::number(count);
         ui->labelCount->setText(textLabel);

     });

     QTimer::singleShot(1200, [=]() {
         Carte *C2=MaDeck->getCarte();

         ajouterComputer(C2);
         QString textLabel=QString::number(count);
         ui->labelCount->setText(textLabel);

     });

     QTimer::singleShot(1400, [=]() {
         Carte *C3=MaDeck->getCarte();

         ajouterComputer(C3);
         QString textLabel=QString::number(count);
         ui->labelCount->setText(textLabel);

     });

     QTimer::singleShot(1600, [=]() {
         Carte *C4=MaDeck->getCarte();

         ajouterComputer(C4);
         QString textLabel=QString::number(count);
         ui->labelCount->setText(textLabel);

     });
     }

bool MaClasse::jouerC(Carte *A){

     if(A->getNumber()==center->getNumber()||A->getSymbol()==center->getSymbol()){
         Carte* B =this->creer_carte(center->getNumber(),center->getSymbol(),QPixmap(":/cartes/photos_des_cartes/D1.jpg"));
         B->retournerImage();
         secendDeck->ajoutCarte(B);
         A->retournerImage();
         QLayoutItem *item;
         while ((item = ui->centralLayout->takeAt(0)) != nullptr) {
             delete item->widget();  // Supprime l'objet associé au widget
             delete item;  // Supprime l'objet de mise en page

         }

         // Ajouter le nouveau widget au layout
         ui->centralLayout->addWidget(A);
         center=A;

         return true;
     }
     else{

         qDebug()<<"can't play";

         return false;

     }
}





bool MaClasse::jouer(Carte *A){

     if((A->getNumber()==center->getNumber()||A->getSymbol()==center->getSymbol())&& A->getCanplay()==true ){
         if(test==0 &&test3==0){
             ajouterCarteAcentral(A);
             if(A->getNumber()!=1 && A->getNumber()!=2 ){
                 QTimer::singleShot(400, [=]() {

                     computerJouer();

                 });
             }

             Double(A);

             return true;}
         else if(test3==1){

             if(A->getNumber()==2){
                ajouterCarteAcentral(A);

                 if (test4==0){
                     ajouterDeuxCarte();
                     ajouterDeuxCarte();
                 }
                 else if (test4==1){

                     for (int var = 0; var < ui->IALayout->count(); ++var) {
                         QWidget *widget = ui->IALayout->itemAt(var)->widget();
                         // Utilisez qobject_cast pour convertir le widget en une instance de la classe Carte
                         Carte *carteWidget = qobject_cast<Carte*>(widget);
                         if(carteWidget->getNumber()==2){
                             QEventLoop loope;
                             QTimer::singleShot(400, &loope, &QEventLoop::quit);
                             loope.exec();
                             jouerC(carteWidget);


                         }}
                     if(test5==0){
                     ajouterMoiDeuxCarte();ajouterMoiDeuxCarte();ajouterMoiDeuxCarte();
                     }
                     test4=0;
                 }

             }
             test3=0;
         }

         else if(test==1){

             if(A->getNumber()==2){
               ajouterCarteAcentral(A);

                 if(test2==0){
               ajouterDeuxCarte();
                     ajouterDeuxCarte();
                 }
                 else if(test2==1) {

                     for (int var = 0; var < ui->IALayout->count(); ++var) {
                         QWidget *widget = ui->IALayout->itemAt(var)->widget();
                         // Utilisez qobject_cast pour convertir le widget en une instance de la classe Carte
                         Carte *carteWidget = qobject_cast<Carte*>(widget);
                         if(carteWidget->getNumber()==2){

                             test2=1;
                             QEventLoop loope;
                             QTimer::singleShot(400, &loope, &QEventLoop::quit);
                             loope.exec();
                            jouerC(carteWidget);
                             ajouterMoiDeuxCarte();
                             ajouterMoiDeuxCarte();
                             ajouterMoiDeuxCarte();
                             ajouterMoiDeuxCarte();

                         }
                     }
                     test2=0;
                 }


               test=0;

             Double(A);
             qDebug()<<"bien jouer"<<J;
             test=0;
             return true;
         }
             test=0;
         }

     }

     else{

         qDebug()<<"can't play";



     }
     qDebug()<<"valeur de j"<<J;
     return false;
     }






    bool MaClasse:: computerJouer()   {
     bool cond=false;
   do {
          cond=false;

        for (int var = 0; var < ui->IALayout->count(); ++var) {
            QWidget *widget = ui->IALayout->itemAt(var)->widget();
            // Utilisez qobject_cast pour convertir le widget en une instance de la classe Carte
            Carte *carteWidget = qobject_cast<Carte*>(widget);

            bool i = jouerC(carteWidget);
            if(carteWidget->getNumber()==2 && i==true){
             doubleComputer();



            }

            qDebug() << "Type réel du widget à la position" << var << ":" << carteWidget->metaObject()->className();
            qDebug() << carteWidget->getNumber();

            if (i) {
                if (carteWidget->getNumber() == 1) {
                    cond = true;
                    QEventLoop loop;
                    QTimer::singleShot(800, &loop, &QEventLoop::quit);
                    loop.exec();

                } else {
                    cond = false;

                    return true;
                }

            }

        }
    } while (cond);


    ajouterComputer(MaDeck->getCarte());
    QString textLabel = QString::number(count);
    ui->labelCount->setText(textLabel);

    return false;}



    void MaClasse::Double(Carte *A)
    {
if(A->getNumber()==2){
        bool v=haveComputerCarte();
        if(v==false){
            ajouterDeuxCarte();
        }
        else {
            bool v2=haveCarte();


            if(v2==false){

              ajouterMoiDeuxCarte();
                ajouterMoiDeuxCarte();
            }
            else if(v2==true){
                test=1;
                bool v3=haveComputerCarte();
                if (v3==true){
                    test2=1;
                }

            }


        }}
    }

    void MaClasse::ajouterDeuxCarte()
    {
QEventLoop loop0;
QTimer::singleShot(400, &loop0, &QEventLoop::quit);
loop0.exec();
ajouterComputer(MaDeck->getCarte());
QEventLoop loop1;
QTimer::singleShot(400, &loop1, &QEventLoop::quit);
loop1.exec();
ajouterComputer(MaDeck->getCarte());

    }

    void MaClasse::ajouterMoiDeuxCarte() {
QEventLoop loop2;
QTimer::singleShot(400, &loop2, &QEventLoop::quit);
loop2.exec();
ajouterMainJoueur(MaDeck->getCarte());

QEventLoop loop3;
QTimer::singleShot(400, &loop3, &QEventLoop::quit);
loop3.exec();
ajouterMainJoueur(MaDeck->getCarte());

    }




bool MaClasse::haveComputerCarte()
{
for (int var = 0; var < ui->IALayout->count(); ++var) {
        QWidget *widget = ui->IALayout->itemAt(var)->widget();
        // Utilisez qobject_cast pour convertir le widget en une instance de la classe Carte
        Carte *carteWidget = qobject_cast<Carte*>(widget);
        if(carteWidget->getNumber()==2){
            QEventLoop loope;
            QTimer::singleShot(400, &loope, &QEventLoop::quit);
            loope.exec();
            jouerC(carteWidget);
            return true;
        }

}
return false ; }


bool MaClasse::haveCarte()
{
for (int var = 0; var < ui->joeurLayout->count(); ++var) {
        QWidget *widget = ui->joeurLayout->itemAt(var)->widget();

        // Utilisez qobject_cast pour convertir le widget en une instance de la classe Carte
        Carte *carteWidget = qobject_cast<Carte*>(widget);



        if(carteWidget->getNumber()==2){

             return true;


        }}

    return false;
}
void MaClasse::doubleComputer()
{
bool a =haveCarte();
if(a==false){
        ajouterMoiDeuxCarte();
        QEventLoop loope;
        QTimer::singleShot(400, &loope, &QEventLoop::quit);
        loope.exec();
        computerJouer();

        }
else if(a==true){
        test3=1;
        bool b=false;
        for (int var = 0; var < ui->IALayout->count(); ++var) {
             QWidget *widget = ui->IALayout->itemAt(var)->widget();
             // Utilisez qobject_cast pour convertir le widget en une instance de la classe Carte
             Carte *carteWidget = qobject_cast<Carte*>(widget);
             if(carteWidget->getNumber()==2){
                b=true;


             }}
        if(b==false){
             test4=0;
             test5=0;
        }
        else{
             test4=1;


}
        }}
