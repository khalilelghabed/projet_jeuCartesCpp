#include<MonQlabel.h>

#include "Carte.h"

Carte::Carte(int n , QString s  )
    : MonQlabel(),number(n),symbol(s)
{
}

void Carte::retournerImage()
{
    if (symbol=="D"){
        switch (number){
        case 1:
            changerimage(":/cartes/photos_des_cartes/D1.jpg");
          break;
        case 2:
           changerimage(":/cartes/photos_des_cartes/D2.jpg");
            break;
        case 3:
             changerimage( ":/cartes/photos_des_cartes/D3.jpg");
          break;
        case 4:
           changerimage( ":/cartes/photos_des_cartes/D4.jpg");
            break;
        case 5:
          changerimage( ":/cartes/photos_des_cartes/D5.jpg");
          break;
        case 6:
           changerimage( ":/cartes/photos_des_cartes/D6.jpg");
            break;
        case 7:
             changerimage( ":/cartes/photos_des_cartes/D7.jpg");
          break;
        case 10:
           changerimage( ":/cartes/photos_des_cartes/D10.jpg");
            break;
        case 11:
             changerimage( ":/cartes/photos_des_cartes/D11.jpg");
          break;
        case 12:
           changerimage( ":/cartes/photos_des_cartes/D12.jpg");
            break;

        }

        }

    else if (symbol=="S"){
        switch (number){
        case 1:
            changerimage( ":/cartes/photos_des_cartes/S1.jpg");
            break;
        case 2:
            changerimage( ":/cartes/photos_des_cartes/S2.jpg");
            break;
        case 3:
            changerimage( ":/cartes/photos_des_cartes/S3.jpg");
            break;
        case 4:
            changerimage( ":/cartes/photos_des_cartes/S4.jpg");
            break;
        case 5:
            changerimage( ":/cartes/photos_des_cartes/S5.jpg");
            break;
        case 6:
            changerimage( ":/cartes/photos_des_cartes/S6.jpg");
            break;
        case 7:
            changerimage( ":/cartes/photos_des_cartes/S7.jpg");
            break;
        case 10:
            changerimage( ":/cartes/photos_des_cartes/S10.jpg");
            break;
        case 11:
            changerimage( ":/cartes/photos_des_cartes/S11.jpg");
            break;
        case 12:
            changerimage( ":/cartes/photos_des_cartes/S12.jpg");
            break;


        default:
            break;
        } }
        else if (symbol=="G"){
            switch (number){
            case 1:
                changerimage( ":/cartes/photos_des_cartes/G1.jpg");
                break;
            case 2:
                changerimage( ":/cartes/photos_des_cartes/G2.jpg");
                break;
            case 3:
                changerimage( ":/cartes/photos_des_cartes/G3.jpg");
                break;
            case 4:
                changerimage( ":/cartes/photos_des_cartes/G4.jpg");
                break;
            case 5:
                changerimage( ":/cartes/photos_des_cartes/G5.jpg");
                break;
            case 6:
                changerimage( ":/cartes/photos_des_cartes/G6.jpg");
                break;
            case 7:
                changerimage( ":/cartes/photos_des_cartes/G7.jpg");
                break;
            case 10:
                changerimage( ":/cartes/photos_des_cartes/G10.jpg");
                break;
            case 11:
                changerimage( ":/cartes/photos_des_cartes/G11.jpg");
                break;
            case 12:
                changerimage( ":/cartes/photos_des_cartes/G12.jpg");
                break;


            default:
                break;
            } }
            else if(symbol=="Z"){
                switch (number){
                case 1:
                    changerimage( ":/cartes/photos_des_cartes/Z1.jpg");
                    break;
                case 2:
                    changerimage( ":/cartes/photos_des_cartes/Z2.jpg");
                    break;
                case 3:
                    changerimage( ":/cartes/photos_des_cartes/Z3.jpg");
                    break;
                case 4:
                    changerimage( ":/cartes/photos_des_cartes/Z4.jpg");
                    break;
                case 5:
                    changerimage( ":/cartes/photos_des_cartes/Z5.jpg");
                    break;
                case 6:
                    changerimage( ":/cartes/photos_des_cartes/Z6.jpg");
                    break;
                case 7:
                    changerimage( ":/cartes/photos_des_cartes/Z7.jpg");
                    break;
                case 10:
                    changerimage( ":/cartes/photos_des_cartes/Z10.jpg");
                    break;
                case 11:
                    changerimage( ":/cartes/photos_des_cartes/Z11.jpg");
                    break;
                case 12:
                    changerimage( ":/cartes/photos_des_cartes/Z12.jpg");
                    break;


                default:
                    break;

                     }
                }
}


void swap(Carte& first, Carte& second) noexcept {
    using std::swap;
    swap(first.number, second.number);
    swap(first.symbol, second.symbol);

}
void Carte::changerimage(const QString &imgPath){
    QPixmap image(imgPath) ;
    QPixmap resizedImage = image.scaled(100, 150, Qt::KeepAspectRatio);

    this->setPixmap(resizedImage);

   this->setFixedSize(100, 150);
}

int Carte::getNumber()
{
    return number;
}

QString Carte::getSymbol()
{
    return symbol;
}

void Carte::setCanPlay(bool valeur)
{
    canPlay=valeur;
}
bool Carte::getCanplay()
{
    return canPlay;
}
