#include "jeu.h"
#include "Carte.h"
#include <QApplication>
#include "premierinterface.h"
#include <QScreen>
#include "principal.h"
#include "maclasse.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   principal w;

      w.show();

    return a.exec();
}
