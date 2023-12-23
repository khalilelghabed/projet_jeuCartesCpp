#ifndef PREMIERINTERFACE_H
#define PREMIERINTERFACE_H
#include "jeu.h"
#include <QMainWindow>

namespace Ui {
class PremierInterface;
}

class PremierInterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit PremierInterface(QWidget *parent = nullptr);
    ~PremierInterface();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PremierInterface *ui;
};

#endif // PREMIERINTERFACE_H
