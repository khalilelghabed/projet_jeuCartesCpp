/********************************************************************************
** Form generated from reading UI file 'jeu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JEU_H
#define UI_JEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaClasse
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *IALayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *centralLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QLabel *labelCount;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *deckLayout;
    QPushButton *PlayButton;
    QHBoxLayout *joeurLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MaClasse)
    {
        if (MaClasse->objectName().isEmpty())
            MaClasse->setObjectName("MaClasse");
        MaClasse->resize(1135, 636);
        MaClasse->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MaClasse);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(" background-image: url(:/photos_des_cartes/interface.jpg);\n"
"        background-repeat: no-repeat; /* Emp\303\252che la r\303\251p\303\251tition */\n"
"        background-position: center center; /* Centre l'image */\n"
"        background-attachment: fixed; /* Fixe l'image pendant le d\303\251filement */\n"
"        background-size: cover; /* Ajuste la taille de l'image pour couvrir compl\303\250tement */"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        IALayout = new QHBoxLayout();
        IALayout->setObjectName("IALayout");
        IALayout->setSizeConstraint(QLayout::SetFixedSize);

        verticalLayout->addLayout(IALayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        centralLayout = new QVBoxLayout();
        centralLayout->setObjectName("centralLayout");

        horizontalLayout_2->addLayout(centralLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        labelCount = new QLabel(frame_2);
        labelCount->setObjectName("labelCount");
        labelCount->setGeometry(QRect(60, 380, 71, 41));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        labelCount->setFont(font);
        labelCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-image: url(:/cartes/photos_des_cartes/BOTON.jpg);\n"
""));
        verticalLayoutWidget = new QWidget(frame_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(60, 180, 101, 151));
        deckLayout = new QVBoxLayout(verticalLayoutWidget);
        deckLayout->setObjectName("deckLayout");
        deckLayout->setContentsMargins(0, 0, 0, 0);
        PlayButton = new QPushButton(frame_2);
        PlayButton->setObjectName("PlayButton");
        PlayButton->setGeometry(QRect(-10, 100, 191, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setItalic(false);
        PlayButton->setFont(font1);
        PlayButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"background-image: url(:/photos_des_cartes/play.jpg);\n"
"font: 900 24pt \"Segoe UI\";\n"
"border:none;"));

        horizontalLayout_2->addWidget(frame_2);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        joeurLayout = new QHBoxLayout();
        joeurLayout->setObjectName("joeurLayout");
        joeurLayout->setSizeConstraint(QLayout::SetFixedSize);

        verticalLayout->addLayout(joeurLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        MaClasse->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MaClasse);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1135, 22));
        MaClasse->setMenuBar(menubar);
        statusbar = new QStatusBar(MaClasse);
        statusbar->setObjectName("statusbar");
        MaClasse->setStatusBar(statusbar);

        retranslateUi(MaClasse);

        QMetaObject::connectSlotsByName(MaClasse);
    } // setupUi

    void retranslateUi(QMainWindow *MaClasse)
    {
        MaClasse->setWindowTitle(QCoreApplication::translate("MaClasse", "MaClasse", nullptr));
        labelCount->setText(QString());
        PlayButton->setText(QCoreApplication::translate("MaClasse", "PLAY", nullptr));
#if QT_CONFIG(shortcut)
        PlayButton->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class MaClasse: public Ui_MaClasse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JEU_H
