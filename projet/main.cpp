#include "jeu.h"
#include "Carte.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MaClasse w;

    w.show();

    return a.exec();
}
