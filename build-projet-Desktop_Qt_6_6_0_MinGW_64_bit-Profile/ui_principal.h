/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *principal)
    {
        if (principal->objectName().isEmpty())
            principal->setObjectName("principal");
        principal->resize(1104, 784);
        principal->setStyleSheet(QString::fromUtf8("background-size: 900px; \n"
"border-image: url(:/cartes/photos_des_cartes/fond.jpg) 0 0 0 0 stretch stretch;"));
        centralwidget = new QWidget(principal);
        centralwidget->setObjectName("centralwidget");
        principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(principal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1104, 22));
        principal->setMenuBar(menubar);
        statusbar = new QStatusBar(principal);
        statusbar->setObjectName("statusbar");
        principal->setStatusBar(statusbar);

        retranslateUi(principal);

        QMetaObject::connectSlotsByName(principal);
    } // setupUi

    void retranslateUi(QMainWindow *principal)
    {
        principal->setWindowTitle(QCoreApplication::translate("principal", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class principal: public Ui_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
