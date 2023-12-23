#ifndef CARTE_H
#define CARTE_H
#include<QString>
#include<QWidget>
#include<QLabel>
#include "MonQlabel.h"
#include<QVBoxLayout>
#include<QPixmap>


class Carte : public MonQlabel
{
    Q_OBJECT
public:
    explicit Carte(int n=0 , QString s="");
    friend void swap(Carte& first, Carte& second) noexcept;

signals:


public:
    void retournerImage();
    void changerimage(const QString &imgPath);
    int getNumber();
    QString getSymbol();
    void setCanPlay(bool);
    bool getCanplay();

private:
    int number;
    QString symbol;
    bool canPlay=true;

};


#endif // CARTE_H
