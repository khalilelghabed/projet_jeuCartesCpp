#include "VictoryMessage.h"

VictoryMessage::VictoryMessage(QWidget *parent)
    : QWidget{parent}
{
    QLabel *label = new QLabel("Tu as gagné !", this);
                    label->setAlignment(Qt::AlignCenter);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(label);

    setStyleSheet("background-color: lightgreen;");
}
