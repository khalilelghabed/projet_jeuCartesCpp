#ifndef MACLASSE_H
#define MACLASSE_H
#include "Group.h"
#include <QMainWindow>
#include "Carte.h"
#include<QListWidget>
#include<QTimer>
#include<QScrollBar>
#include<QScrollArea>
#include <QHBoxLayout>
#include<QApplication>
#include<QVBoxLayout>
#include<QWidget>
#include "principal.h"
#include <QResizeEvent>
#include <QWidget>
#include<QDialog>
#include <QFont>
#include<QPushButton>
#include"premierInetrface.h"
namespace Ui {
class MaClasse;
}

class MaClasse : public QWidget
{
    Q_OBJECT

public:
    explicit MaClasse(QWidget *parent = nullptr);
    ~MaClasse();

    void ajouterMainJoueur(Carte* A);
    Carte *creer_carte(int number, const QString& symbol, const QPixmap& imagePath);
    Group *creer_deck();
    void distribuerJoeur();
    void distribuerComputer();
    void ajouterComputer(Carte *A);
    void carteCentrale(Carte *A);
    void distrubtionCartes();
    bool computerJouer();
    bool jouerC(Carte *A);
    void Double(Carte *A);
    void ajouterDeuxCarte();
    void ajouterMoiDeuxCarte();
    void doubleComputer();
    bool  haveCarte();
    bool haveComputerCarte();
    void ajouterCarteAcentral(Carte *A);
    void finTour();
    void viderLyoutJoueur();
    void viderLayout(QLayout *layout);
    void afficherFenetreVictoire();
    void joueurWin();
    void ComputerWin();
    void confirmSortir();

public slots:
    void donnerCarte();
    bool jouer(Carte *A);
     void commencerJouer();
    void retournerPagePrincipale();
     void replay();
private slots:
    void on_QUITTER_clicked();

private:
    Ui::MaClasse *ui;
    Carte *macarte;
    QListWidget *cartesList;
    Group *MaDeck;

    int nbr_tour=0;
    Group *secendDeck=new Group();
    int pointJoueur=0;
    int pointComputer=0;
    static int count;
    static Carte *center;
    static int J;
    static int C;
    static int test; //tester si on a a la premier etape de double pour joueur
    static int test2;  //test si on a à la deuxime etape de double pour joueur
    static int test3; // meme chose mais pour le double qui commence par lordinateur
    static int test4;
    static int test5;
    static int test6;
};

#endif // MACLASSE_H
