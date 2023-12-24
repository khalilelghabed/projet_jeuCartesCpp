#include "Group.h"
#include <algorithm>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include "jeu.h"
Group::Group():QWidget(), labeldeck(new MonQlabel()), mainLayout(new QHBoxLayout(this))
{
    mainLayout->addWidget(labeldeck, 0, Qt::AlignRight);

}

void Group::ajoutCarte( Carte *carte)
{
     cartes.append(carte);
    mainLayout->addWidget(carte);
    carte->setFixedSize(100, 150);
}

void Group::melangerCartes()
{
    std::random_shuffle(cartes.begin(), cartes.end());
}
Carte *Group::getCarte() {
    if(!cartes.isEmpty()){
        return this->cartes.takeFirst();

        }
    else
        qDebug()<<"la group est vide";
        return nullptr;


}

void Group::viderGroup()
{
cartes.clear();
}



int Group::transformer(Group *autreGroup)
{
        int num=0;

        while(!autreGroup->getCartes().isEmpty()){
         qDebug()<<"les nombres des cartes dans la deck est"<<num;
        this->ajoutCarte(autreGroup->getCarte());
        num++;
        }
        this->melangerCartes();
        return num;
}

void Group::melangerCartesAvecPourcentage()
{
        QVector<Carte*> cartesSpeciales;
        for (int i = 5; i <= 9; ++i) {
        cartesSpeciales.append(cartes[i]);
        }

        // Mélangez les cartes spéciales
        std::random_shuffle(cartesSpeciales.begin(), cartesSpeciales.end());

        // Calculez le nombre de cartes à inclure en fonction des pourcentages
        int nombreCartes1 = qCeil(cartesSpeciales.size() * 0.75);
        int nombreCartes2 = cartesSpeciales.size() - nombreCartes1;

        // Réinitialisez la liste des cartes aux indices 5 à 9
        for (int i = 5; i <= 9; ++i) {
        cartes[i] = nullptr;
        }

        // Ajoutez les cartes sélectionnées avec les pourcentages requis
        for (int i = 0; i < nombreCartes1; ++i) {
        cartes[5 + i] = new Carte(1); // Créez une nouvelle carte de numéro 1
        }
        for (int i = 0; i < nombreCartes2; ++i) {
        cartes[5 + nombreCartes1 + i] = new Carte(2); // Créez une nouvelle carte de numéro 2
        }

        // Mélangez la liste complète des cartes
        std::random_shuffle(cartes.begin(), cartes.end());
}

MonQlabel *Group::getqlabel(){
        return labeldeck;

}


void Group::initImage(const QString &imagePath)
{
    // Chargez l'image à partir du chemin
    QPixmap image(imagePath);

    // Redimensionnez l'image de manière proportionnelle à la taille souhaitée (200x150)
    QPixmap resizedImage = image.scaled(200, 150, Qt::KeepAspectRatio);

    // Appliquez l'image redimensionnée à votre objet MonQlabel
    labeldeck->setPixmap(resizedImage);

    // Fixez la taille du MonQlabel à 200x150
    labeldeck->setFixedSize(100, 150);

    // Ajoutez votre labeldeck au layout existant plutôt que d'en créer un nouveau

}
const QList<Carte*>& Group::getCartes() const {
    return cartes;
}
