#include "MonQlabel.h"
#include<Qdebug>
MonQlabel::MonQlabel():QLabel(){

}

void MonQlabel::mousePressEvent(QMouseEvent *event)
{
    qDebug() <<"clecked";
    emit clicked();
}


