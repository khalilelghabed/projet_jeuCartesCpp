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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaClasse
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *IALayout;
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
    QHBoxLayout *joeurLayout;

    void setupUi(QWidget *MaClasse)
    {
        if (MaClasse->objectName().isEmpty())
            MaClasse->setObjectName("MaClasse");
        MaClasse->setEnabled(true);
        MaClasse->resize(735, 651);
        MaClasse->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MaClasse);
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
        labelCount->setStyleSheet(QString::fromUtf8(""));

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

        joeurLayout = new QHBoxLayout();
        joeurLayout->setObjectName("joeurLayout");
        joeurLayout->setSizeConstraint(QLayout::SetFixedSize);

        verticalLayout->addLayout(joeurLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 1);

        retranslateUi(MaClasse);

        QMetaObject::connectSlotsByName(MaClasse);
    } // setupUi

    void retranslateUi(QWidget *MaClasse)
    {
        MaClasse->setWindowTitle(QCoreApplication::translate("MaClasse", "Form", nullptr));
        labelCount->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MaClasse: public Ui_MaClasse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACLASSE_H
