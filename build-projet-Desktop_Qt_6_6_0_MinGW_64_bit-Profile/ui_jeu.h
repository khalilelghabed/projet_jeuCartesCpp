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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaClasse
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *deckLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *joeurLayout;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *IALayout;
    QLabel *labelCount;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *centralLayout;
    QWidget *mywidget;
    QPushButton *PlayButton;
    QLabel *title;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MaClasse)
    {
        if (MaClasse->objectName().isEmpty())
            MaClasse->setObjectName("MaClasse");
        MaClasse->resize(1210, 888);
        MaClasse->setStyleSheet(QString::fromUtf8("background-image: url(:/nfond/fond.jpg);\n"
"color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MaClasse);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-image: url(:/cartes/photos_des_cartes/interface.jpg);"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(900, 340, 101, 151));
        deckLayout = new QVBoxLayout(verticalLayoutWidget);
        deckLayout->setObjectName("deckLayout");
        deckLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(290, 700, 711, 181));
        joeurLayout = new QHBoxLayout(horizontalLayoutWidget);
        joeurLayout->setObjectName("joeurLayout");
        joeurLayout->setSizeConstraint(QLayout::SetFixedSize);
        joeurLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(290, 0, 711, 151));
        IALayout = new QHBoxLayout(horizontalLayoutWidget_2);
        IALayout->setObjectName("IALayout");
        IALayout->setSizeConstraint(QLayout::SetFixedSize);
        IALayout->setContentsMargins(0, 0, 0, 0);
        labelCount = new QLabel(centralwidget);
        labelCount->setObjectName("labelCount");
        labelCount->setGeometry(QRect(920, 510, 71, 41));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        labelCount->setFont(font);
        labelCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-image: url(:/cartes/photos_des_cartes/BOTON.jpg);\n"
""));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(460, 340, 101, 151));
        centralLayout = new QVBoxLayout(verticalLayoutWidget_2);
        centralLayout->setObjectName("centralLayout");
        centralLayout->setContentsMargins(0, 0, 0, 0);
        mywidget = new QWidget(centralwidget);
        mywidget->setObjectName("mywidget");
        mywidget->setGeometry(QRect(0, 0, 1262, 912));
        mywidget->setStyleSheet(QString::fromUtf8("background-image: url(:/cartes/photos_des_cartes/interface.jpg);"));
        PlayButton = new QPushButton(mywidget);
        PlayButton->setObjectName("PlayButton");
        PlayButton->setGeometry(QRect(490, 510, 291, 91));
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
        title = new QLabel(mywidget);
        title->setObjectName("title");
        title->setGeometry(QRect(420, 210, 411, 121));
        title->setStyleSheet(QString::fromUtf8("color: rgb(191, 28, 58);\n"
"border-color: rgb(255, 255, 255);\n"
"\n"
"\n"
"font: 24pt \"Segoe UI\";\n"
"background-image: url(:/photos_des_cartes/mytitle.jpg);"));
        MaClasse->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MaClasse);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1210, 22));
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
        title->setText(QCoreApplication::translate("MaClasse", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; font-style:italic;\">JEU DE CARTES</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MaClasse: public Ui_MaClasse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JEU_H
