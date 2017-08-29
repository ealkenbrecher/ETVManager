/********************************************************************************
** Form generated from reading UI file 'ordertab.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERTAB_H
#define UI_ORDERTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderTab
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_3;
    QFrame *line_2;
    QLabel *label_6;
    QListView *tableReportTemplate;
    QFrame *line;
    QLabel *label_2;
    QTableView *tableAgenda;
    QPushButton *editButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *OrderTab)
    {
        if (OrderTab->objectName().isEmpty())
            OrderTab->setObjectName(QStringLiteral("OrderTab"));
        OrderTab->resize(831, 581);
        gridLayoutWidget_2 = new QWidget(OrderTab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 811, 561));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setUnderline(false);
        label->setFont(font);

        gridLayout_2->addWidget(label, 2, 0, 1, 2);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 6, 0, 1, 2);

        line_2 = new QFrame(gridLayoutWidget_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 1, 0, 1, 2);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 2);

        tableReportTemplate = new QListView(gridLayoutWidget_2);
        tableReportTemplate->setObjectName(QStringLiteral("tableReportTemplate"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableReportTemplate->sizePolicy().hasHeightForWidth());
        tableReportTemplate->setSizePolicy(sizePolicy1);
        tableReportTemplate->setMinimumSize(QSize(0, 30));
        tableReportTemplate->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setPointSize(10);
        tableReportTemplate->setFont(font2);
        tableReportTemplate->setResizeMode(QListView::Fixed);
        tableReportTemplate->setSpacing(5);
        tableReportTemplate->setGridSize(QSize(0, 30));

        gridLayout_2->addWidget(tableReportTemplate, 5, 0, 1, 2);

        line = new QFrame(gridLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 3, 0, 1, 2);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font2);

        gridLayout_2->addWidget(label_2, 4, 0, 1, 2);

        tableAgenda = new QTableView(gridLayoutWidget_2);
        tableAgenda->setObjectName(QStringLiteral("tableAgenda"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableAgenda->sizePolicy().hasHeightForWidth());
        tableAgenda->setSizePolicy(sizePolicy2);
        tableAgenda->setMinimumSize(QSize(0, 250));
        tableAgenda->setFont(font2);
        tableAgenda->setContextMenuPolicy(Qt::CustomContextMenu);
        tableAgenda->setDragEnabled(true);
        tableAgenda->setAlternatingRowColors(true);
        tableAgenda->setSelectionMode(QAbstractItemView::SingleSelection);
        tableAgenda->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableAgenda->horizontalHeader()->setCascadingSectionResizes(true);
        tableAgenda->horizontalHeader()->setStretchLastSection(true);
        tableAgenda->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableAgenda, 7, 0, 2, 2);

        editButton = new QPushButton(gridLayoutWidget_2);
        editButton->setObjectName(QStringLiteral("editButton"));

        gridLayout_2->addWidget(editButton, 9, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 9, 1, 1, 1);


        retranslateUi(OrderTab);

        QMetaObject::connectSlotsByName(OrderTab);
    } // setupUi

    void retranslateUi(QWidget *OrderTab)
    {
        OrderTab->setWindowTitle(QApplication::translate("OrderTab", "Form", 0));
        label->setText(QApplication::translate("OrderTab", "Hinweis: Zum Bearbeiten Doppelklick auf das gew\303\274nschte Element ausf\303\274hren.", 0));
        label_3->setText(QApplication::translate("OrderTab", "Tagesordnungspunkte", 0));
        label_6->setText(QApplication::translate("OrderTab", "Tagesordnungspunkte - Einstellungen Protokollvordruck", 0));
        label_2->setText(QApplication::translate("OrderTab", "Deckblattvorlage", 0));
        editButton->setText(QApplication::translate("OrderTab", "Bearbeiten", 0));
    } // retranslateUi

};

namespace Ui {
    class OrderTab: public Ui_OrderTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERTAB_H
