/********************************************************************************
** Form generated from reading UI file 'choixtable.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOIXTABLE_H
#define UI_CHOIXTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choixTable
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *table1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *table2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *table3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *choixTable)
    {
        if (choixTable->objectName().isEmpty())
            choixTable->setObjectName("choixTable");
        choixTable->resize(924, 427);
        verticalLayout = new QVBoxLayout(choixTable);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label = new QLabel(choixTable);
        label->setObjectName("label");
        label->setAcceptDrops(false);
        label->setPixmap(QPixmap(QString::fromUtf8(":/cartes/photos_des_cartes/choisirTable.png")));
        label->setScaledContents(true);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        table1 = new QPushButton(choixTable);
        table1->setObjectName("table1");

        horizontalLayout->addWidget(table1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        table2 = new QPushButton(choixTable);
        table2->setObjectName("table2");

        horizontalLayout->addWidget(table2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        table3 = new QPushButton(choixTable);
        table3->setObjectName("table3");

        horizontalLayout->addWidget(table3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 2);
        horizontalLayout->setStretch(6, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 8);
        verticalLayout->setStretch(4, 1);

        retranslateUi(choixTable);

        QMetaObject::connectSlotsByName(choixTable);
    } // setupUi

    void retranslateUi(QWidget *choixTable)
    {
        choixTable->setWindowTitle(QCoreApplication::translate("choixTable", "Form", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("choixTable", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">Choisir une table</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label->setWhatsThis(QCoreApplication::translate("choixTable", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; font-style:italic;\">choisir une table</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QString());
        table1->setText(QString());
        table2->setText(QString());
        table3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class choixTable: public Ui_choixTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOIXTABLE_H
