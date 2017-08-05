/********************************************************************************
** Form generated from reading UI file 'agendatab.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENDATAB_H
#define UI_AGENDATAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AgendaTab
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *moveAgendaItemUp;
    QPushButton *deleteEntry;
    QPushButton *editEntry;
    QPushButton *addEntry;
    QPushButton *moveAgendaItemDown;
    QLabel *label_6;
    QTableView *tableAgenda;

    void setupUi(QWidget *AgendaTab)
    {
        if (AgendaTab->objectName().isEmpty())
            AgendaTab->setObjectName(QStringLiteral("AgendaTab"));
        AgendaTab->resize(831, 580);
        gridLayoutWidget_2 = new QWidget(AgendaTab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 811, 561));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        moveAgendaItemUp = new QPushButton(gridLayoutWidget_2);
        moveAgendaItemUp->setObjectName(QStringLiteral("moveAgendaItemUp"));
        moveAgendaItemUp->setMaximumSize(QSize(23, 23));
        QFont font;
        font.setFamily(QStringLiteral("Webdings"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        moveAgendaItemUp->setFont(font);

        gridLayout_2->addWidget(moveAgendaItemUp, 3, 2, 1, 1);

        deleteEntry = new QPushButton(gridLayoutWidget_2);
        deleteEntry->setObjectName(QStringLiteral("deleteEntry"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deleteEntry->sizePolicy().hasHeightForWidth());
        deleteEntry->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(deleteEntry, 3, 4, 1, 1);

        editEntry = new QPushButton(gridLayoutWidget_2);
        editEntry->setObjectName(QStringLiteral("editEntry"));
        sizePolicy.setHeightForWidth(editEntry->sizePolicy().hasHeightForWidth());
        editEntry->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(editEntry, 3, 1, 1, 1);

        addEntry = new QPushButton(gridLayoutWidget_2);
        addEntry->setObjectName(QStringLiteral("addEntry"));
        sizePolicy.setHeightForWidth(addEntry->sizePolicy().hasHeightForWidth());
        addEntry->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(addEntry, 3, 0, 1, 1);

        moveAgendaItemDown = new QPushButton(gridLayoutWidget_2);
        moveAgendaItemDown->setObjectName(QStringLiteral("moveAgendaItemDown"));
        moveAgendaItemDown->setMaximumSize(QSize(23, 23));
        moveAgendaItemDown->setFont(font);

        gridLayout_2->addWidget(moveAgendaItemDown, 3, 3, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 5);

        tableAgenda = new QTableView(gridLayoutWidget_2);
        tableAgenda->setObjectName(QStringLiteral("tableAgenda"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableAgenda->sizePolicy().hasHeightForWidth());
        tableAgenda->setSizePolicy(sizePolicy2);
        tableAgenda->setMinimumSize(QSize(0, 250));
        QFont font2;
        font2.setPointSize(10);
        tableAgenda->setFont(font2);
        tableAgenda->setContextMenuPolicy(Qt::CustomContextMenu);
        tableAgenda->setDragEnabled(true);
        tableAgenda->setAlternatingRowColors(true);
        tableAgenda->setSelectionMode(QAbstractItemView::SingleSelection);
        tableAgenda->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableAgenda->horizontalHeader()->setCascadingSectionResizes(true);
        tableAgenda->horizontalHeader()->setStretchLastSection(true);
        tableAgenda->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableAgenda, 1, 0, 2, 5);


        retranslateUi(AgendaTab);

        QMetaObject::connectSlotsByName(AgendaTab);
    } // setupUi

    void retranslateUi(QWidget *AgendaTab)
    {
        AgendaTab->setWindowTitle(QApplication::translate("AgendaTab", "Form", 0));
        moveAgendaItemUp->setText(QApplication::translate("AgendaTab", "5", 0));
        deleteEntry->setText(QApplication::translate("AgendaTab", "selektierten TOP l\303\266schen", 0));
        editEntry->setText(QApplication::translate("AgendaTab", "selektierten TOP bearbeiten", 0));
        addEntry->setText(QApplication::translate("AgendaTab", "Tagespunkt hinzuf\303\274gen", 0));
        moveAgendaItemDown->setText(QApplication::translate("AgendaTab", "6", 0));
        label_6->setText(QApplication::translate("AgendaTab", "Tagesordnungspunkte", 0));
    } // retranslateUi

};

namespace Ui {
    class AgendaTab: public Ui_AgendaTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENDATAB_H
