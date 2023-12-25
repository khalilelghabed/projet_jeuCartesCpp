/********************************************************************************
** Form generated from reading UI file 'maclasse.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACLASSE_H
#define UI_MACLASSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaClasse
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_12;
    QLabel *LabelPoinC;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *QUITTER;
    QHBoxLayout *IALayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *computerLabel;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *centralLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *deckLayout;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelCount;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *joeuLabel;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *joeurLayout;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_14;
    QLabel *LabelPointJ;
    QSpacerItem *horizontalSpacer_13;

    void setupUi(QWidget *MaClasse)
    {
        if (MaClasse->objectName().isEmpty())
            MaClasse->setObjectName("MaClasse");
        MaClasse->setEnabled(true);
        MaClasse->resize(735, 651);
        MaClasse->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MaClasse);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        LabelPoinC = new QLabel(MaClasse);
        LabelPoinC->setObjectName("LabelPoinC");
        LabelPoinC->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Agency FB\";\n"
"color: rgb(47, 61, 255);"));

        horizontalLayout_6->addWidget(LabelPoinC);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        QUITTER = new QPushButton(MaClasse);
        QUITTER->setObjectName("QUITTER");

        horizontalLayout_6->addWidget(QUITTER);

        horizontalLayout_6->setStretch(0, 3);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 3);

        verticalLayout_4->addLayout(horizontalLayout_6);

        IALayout = new QHBoxLayout();
        IALayout->setObjectName("IALayout");
        IALayout->setSizeConstraint(QLayout::SetFixedSize);

        verticalLayout_4->addLayout(IALayout);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 3);

        verticalLayout->addLayout(verticalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        computerLabel = new QLabel(MaClasse);
        computerLabel->setObjectName("computerLabel");

        horizontalLayout_5->addWidget(computerLabel);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        centralLayout = new QVBoxLayout();
        centralLayout->setObjectName("centralLayout");

        horizontalLayout_2->addLayout(centralLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        deckLayout = new QVBoxLayout();
        deckLayout->setObjectName("deckLayout");

        horizontalLayout_3->addLayout(deckLayout);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        labelCount = new QLabel(MaClasse);
        labelCount->setObjectName("labelCount");
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        labelCount->setFont(font);
        labelCount->setStyleSheet(QString::fromUtf8("color:white ;"));
        labelCount->setTextFormat(Qt::RichText);

        horizontalLayout->addWidget(labelCount);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 4);
        verticalLayout_2->setStretch(2, 1);
        verticalLayout_2->setStretch(3, 2);

        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        joeuLabel = new QLabel(MaClasse);
        joeuLabel->setObjectName("joeuLabel");
        joeuLabel->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Agency FB\";\n"
"color: rgb(47, 61, 255);"));
        joeuLabel->setTextFormat(Qt::RichText);

        horizontalLayout_4->addWidget(joeuLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalLayout_4->setStretch(0, 6);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 6);

        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        joeurLayout = new QHBoxLayout();
        joeurLayout->setObjectName("joeurLayout");
        joeurLayout->setSizeConstraint(QLayout::SetFixedSize);

        verticalLayout_5->addLayout(joeurLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);

        LabelPointJ = new QLabel(MaClasse);
        LabelPointJ->setObjectName("LabelPointJ");
        LabelPointJ->setStyleSheet(QString::fromUtf8("color: rgb(255, 55, 82);\n"
"font: 48pt \"Segoe UI\";\n"
"font: 700 48pt \"Bahnschrift\";\n"
"font: 9pt \"Segoe UI\";\n"
"background-image:initial;\n"
"background-color: rgb(170, 0, 255);"));

        horizontalLayout_7->addWidget(LabelPointJ);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        horizontalLayout_7->setStretch(0, 2);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalLayout_5->setStretch(0, 3);
        verticalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(verticalLayout_5);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 6);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 3);

        retranslateUi(MaClasse);

        QMetaObject::connectSlotsByName(MaClasse);
    } // setupUi

    void retranslateUi(QWidget *MaClasse)
    {
        MaClasse->setWindowTitle(QCoreApplication::translate("MaClasse", "Form", nullptr));
        LabelPoinC->setText(QCoreApplication::translate("MaClasse", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; font-style:italic;\">COMPUTER</span></p></body></html>", nullptr));
        QUITTER->setText(QString());
        computerLabel->setText(QCoreApplication::translate("MaClasse", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        joeuLabel->setToolTip(QCoreApplication::translate("MaClasse", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        joeuLabel->setWhatsThis(QCoreApplication::translate("MaClasse", "<html><head/><body><p><span style=\" font-style:italic;\"/><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        joeuLabel->setText(QCoreApplication::translate("MaClasse", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        LabelPointJ->setText(QCoreApplication::translate("MaClasse", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; font-style:italic;\">JOUEUR</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MaClasse: public Ui_MaClasse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACLASSE_H
