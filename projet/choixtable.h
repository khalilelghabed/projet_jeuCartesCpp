#ifndef CHOIXTABLE_H
#define CHOIXTABLE_H
#include<QMainWindow>
#include <QWidget>
#include<maclasse.h>
#include "principal.h"

namespace Ui {
class choixTable;
}

class choixTable : public QWidget
{
    Q_OBJECT

public:
    explicit choixTable(QWidget *parent = nullptr);
    ~choixTable();

private slots:
    void on_table1_clicked();

    void on_table2_clicked();

    void on_table3_clicked();

private:
    Ui::choixTable *ui;
};

#endif // CHOIXTABLE_H
