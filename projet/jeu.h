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
#include"VictoryMessage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MaClasse; }
QT_END_NAMESPACE

class MaClasse : public QMainWindow
{
    Q_OBJECT

public:
    MaClasse(QWidget *parent = nullptr);
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


public slots:
    void donnerCarte();
    bool jouer(Carte *A);
private slots:


    void on_PlayButton_clicked();


    void on_p_clicked();

private:
    Ui::MaClasse *ui;
    Carte *macarte;
    QListWidget *cartesList;
    Group *MaDeck;
    Group *secendDeck=new Group();

    static int count;
      static Carte *center;
    static int J;
      static int C;
    static int test;
      static int test2;




};


#endif // MACLASSE_H
