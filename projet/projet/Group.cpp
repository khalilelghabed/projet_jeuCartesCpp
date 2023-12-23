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



int Group::transformer(Group *autreGroup)
{
        int num=0;
         qDebug()<<"les nombres des cartes dans la deck est"<<num;
        while(!autreGroup->getCartes().isEmpty()){
         qDebug()<<"les nombres des cartes dans la deck est"<<num;
        this->ajoutCarte(autreGroup->getCarte());
        num++;
        }

        return num;
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
