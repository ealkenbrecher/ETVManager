/********************************************************************************
** Form generated from reading UI file 'decissionlibrarytab.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECISSIONLIBRARYTAB_H
#define UI_DECISSIONLIBRARYTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DecissionLibraryTab
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *editEntry;
    QTableView *tableAgenda;
    QLabel *label_6;
    QFrame *line;

    void setupUi(QWidget *DecissionLibraryTab)
    {
        if (DecissionLibraryTab->objectName().isEmpty())
            DecissionLibraryTab->setObjectName(QStringLiteral("DecissionLibraryTab"));
        DecissionLibraryTab->resize(831, 581);
        gridLayoutWidget_2 = new QWidget(DecissionLibraryTab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 812, 561));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 2);

        editEntry = new QPushButton(gridLayoutWidget_2);
        editEntry->setObjectName(QStringLiteral("editEntry"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editEntry->sizePolicy().hasHeightForWidth());
        editEntry->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(editEntry, 5, 0, 1, 2);

        tableAgenda = new QTableView(gridLayoutWidget_2);
        tableAgenda->setObjectName(QStringLiteral("tableAgenda"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableAgenda->sizePolicy().hasHeightForWidth());
        tableAgenda->setSizePolicy(sizePolicy2);
        tableAgenda->setMinimumSize(QSize(0, 250));
        tableAgenda->setFont(font);
        tableAgenda->setContextMenuPolicy(Qt::CustomContextMenu);
        tableAgenda->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableAgenda->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableAgenda->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableAgenda->setDragEnabled(true);
        tableAgenda->setAlternatingRowColors(true);
        tableAgenda->setSelectionMode(QAbstractItemView::SingleSelection);
        tableAgenda->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableAgenda->horizontalHeader()->setCascadingSectionResizes(true);
        tableAgenda->horizontalHeader()->setStretchLastSection(true);
        tableAgenda->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableAgenda, 3, 0, 2, 2);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 2);

        line = new QFrame(gridLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 2);


        retranslateUi(DecissionLibraryTab);

        QMetaObject::connectSlotsByName(DecissionLibraryTab);
    } // setupUi

    void retranslateUi(QWidget *DecissionLibraryTab)
    {
        DecissionLibraryTab->setWindowTitle(QApplication::translate("DecissionLibraryTab", "Form", 0));
        label_3->setText(QApplication::translate("DecissionLibraryTab", "Hinweis: Eintr\303\244ge zum Nachbearbeiten doppelklicken", 0));
        editEntry->setText(QApplication::translate("DecissionLibraryTab", "Selektierten Beschluss bearbeiten", 0));
        label_6->setText(QApplication::translate("DecissionLibraryTab", "Beschluss\303\274bersicht", 0));
    } // retranslateUi

};

namespace Ui {
    class DecissionLibraryTab: public Ui_DecissionLibraryTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECISSIONLIBRARYTAB_H
