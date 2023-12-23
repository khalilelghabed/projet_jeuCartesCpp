/********************************************************************************
** Form generated from reading UI file 'premierinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREMIERINTERFACE_H
#define UI_PREMIERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PremierInterface
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PremierInterface)
    {
        if (PremierInterface->objectName().isEmpty())
            PremierInterface->setObjectName("PremierInterface");
        PremierInterface->resize(800, 600);
        centralwidget = new QWidget(PremierInterface);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 250, 75, 24));
        PremierInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PremierInterface);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        PremierInterface->setMenuBar(menubar);
        statusbar = new QStatusBar(PremierInterface);
        statusbar->setObjectName("statusbar");
        PremierInterface->setStatusBar(statusbar);

        retranslateUi(PremierInterface);

        QMetaObject::connectSlotsByName(PremierInterface);
    } // setupUi

    void retranslateUi(QMainWindow *PremierInterface)
    {
        PremierInterface->setWindowTitle(QCoreApplication::translate("PremierInterface", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("PremierInterface", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PremierInterface: public Ui_PremierInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREMIERINTERFACE_H
