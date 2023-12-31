// Group.h
#ifndef GROUP_H
#define GROUP_H
#include <QWidget>
#include "MonQlabel.h"
#include "Carte.h"
#include <QList>
#include<QVBoxLayout>
#include <QVector>
class Group : public QWidget
{
public:
    Group();

    void ajoutCarte( Carte *carte);  // Passer la carte par référence constante

    void melangerCartes();
    Carte *getCarte() ;
    void viderGroup();
    int transformer(Group *autreGroup);
     void melangerCartesAvecPourcentage();


    MonQlabel *getqlabel();
     void initImage(const QString &imagePath);
    const QList<Carte*>& getCartes() const;

private:
    MonQlabel *labeldeck;
    QList<Carte*> cartes;  // Utiliser un objet QList directement
     QHBoxLayout   *mainLayout;
};

#endif // GROUP_H
