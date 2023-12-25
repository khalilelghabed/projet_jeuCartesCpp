/********************************************************************************
** Form generated from reading UI file 'premierInetrface.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREMIERINETRFACE_H
#define UI_PREMIERINETRFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_premierInetrface
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_7;
    QPushButton *playButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *deficultyButtn;
    QSpacerItem *verticalSpacer_6;
    QPushButton *quitButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *premierInetrface)
    {
        if (premierInetrface->objectName().isEmpty())
            premierInetrface->setObjectName("premierInetrface");
        premierInetrface->resize(796, 557);
        premierInetrface->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(premierInetrface);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(premierInetrface);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/cartes/photos_des_cartes/TITLEPRINCIPALE.png")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        playButton = new QPushButton(premierInetrface);
        playButton->setObjectName("playButton");
        playButton->setBaseSize(QSize(20, 202));
        playButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(playButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        deficultyButtn = new QPushButton(premierInetrface);
        deficultyButtn->setObjectName("deficultyButtn");
        deficultyButtn->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(deficultyButtn);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        quitButton = new QPushButton(premierInetrface);
        quitButton->setObjectName("quitButton");
        quitButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(quitButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(3, 1);
        verticalLayout_2->setStretch(5, 1);
        verticalLayout_2->setStretch(6, 1);

        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 6);
        verticalLayout->setStretch(3, 20);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        retranslateUi(premierInetrface);

        QMetaObject::connectSlotsByName(premierInetrface);
    } // setupUi

    void retranslateUi(QWidget *premierInetrface)
    {
        premierInetrface->setWindowTitle(QCoreApplication::translate("premierInetrface", "Form", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        playButton->setToolTip(QCoreApplication::translate("premierInetrface", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; font-style:italic;\">play</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        playButton->setText(QString());
        deficultyButtn->setText(QString());
        quitButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class premierInetrface: public Ui_premierInetrface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREMIERINETRFACE_H
