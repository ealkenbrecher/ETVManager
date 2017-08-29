/********************************************************************************
** Form generated from reading UI file 'reportgeneratortab.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTGENERATORTAB_H
#define UI_REPORTGENERATORTAB_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportGeneratorTab
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QFrame *line;
    QPushButton *addDecission;
    QLabel *label;
    QLabel *label_2;
    QPushButton *startWizard;
    QPushButton *deleteEntry;
    QPushButton *addEntry;
    QPushButton *editEntry;
    QPushButton *moveAgendaItemUp;
    QLabel *label_6;
    QPushButton *moveAgendaItemDown;
    QTableView *tableAgenda;
    QPushButton *startAgendaWizard;
    QListView *tableReportTemplate;

    void setupUi(QWidget *ReportGeneratorTab)
    {
        if (ReportGeneratorTab->objectName().isEmpty())
            ReportGeneratorTab->setObjectName(QStringLiteral("ReportGeneratorTab"));
        ReportGeneratorTab->resize(993, 580);
        gridLayoutWidget_2 = new QWidget(ReportGeneratorTab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 975, 561));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(gridLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 3, 0, 1, 6);

        addDecission = new QPushButton(gridLayoutWidget_2);
        addDecission->setObjectName(QStringLiteral("addDecission"));
        addDecission->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addDecission->sizePolicy().hasHeightForWidth());
        addDecission->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(addDecission, 9, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 6);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 4, 0, 1, 1);

        startWizard = new QPushButton(gridLayoutWidget_2);
        startWizard->setObjectName(QStringLiteral("startWizard"));

        gridLayout_2->addWidget(startWizard, 1, 0, 1, 1);

        deleteEntry = new QPushButton(gridLayoutWidget_2);
        deleteEntry->setObjectName(QStringLiteral("deleteEntry"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(deleteEntry->sizePolicy().hasHeightForWidth());
        deleteEntry->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(deleteEntry, 9, 5, 1, 1);

        addEntry = new QPushButton(gridLayoutWidget_2);
        addEntry->setObjectName(QStringLiteral("addEntry"));
        addEntry->setEnabled(false);
        sizePolicy2.setHeightForWidth(addEntry->sizePolicy().hasHeightForWidth());
        addEntry->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(addEntry, 9, 0, 1, 1);

        editEntry = new QPushButton(gridLayoutWidget_2);
        editEntry->setObjectName(QStringLiteral("editEntry"));
        sizePolicy2.setHeightForWidth(editEntry->sizePolicy().hasHeightForWidth());
        editEntry->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(editEntry, 9, 2, 1, 1);

        moveAgendaItemUp = new QPushButton(gridLayoutWidget_2);
        moveAgendaItemUp->setObjectName(QStringLiteral("moveAgendaItemUp"));
        moveAgendaItemUp->setMaximumSize(QSize(23, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Webdings"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        moveAgendaItemUp->setFont(font1);

        gridLayout_2->addWidget(moveAgendaItemUp, 9, 3, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 6, 0, 1, 6);

        moveAgendaItemDown = new QPushButton(gridLayoutWidget_2);
        moveAgendaItemDown->setObjectName(QStringLiteral("moveAgendaItemDown"));
        moveAgendaItemDown->setMaximumSize(QSize(23, 23));
        moveAgendaItemDown->setFont(font1);

        gridLayout_2->addWidget(moveAgendaItemDown, 9, 4, 1, 1);

        tableAgenda = new QTableView(gridLayoutWidget_2);
        tableAgenda->setObjectName(QStringLiteral("tableAgenda"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableAgenda->sizePolicy().hasHeightForWidth());
        tableAgenda->setSizePolicy(sizePolicy3);
        tableAgenda->setMinimumSize(QSize(0, 250));
        QFont font2;
        font2.setPointSize(10);
        tableAgenda->setFont(font2);
        tableAgenda->setContextMenuPolicy(Qt::CustomContextMenu);
        tableAgenda->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableAgenda->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableAgenda->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableAgenda->setDragEnabled(true);
        tableAgenda->setAlternatingRowColors(true);
        tableAgenda->setSelectionMode(QAbstractItemView::SingleSelection);
        tableAgenda->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableAgenda->horizontalHeader()->setCascadingSectionResizes(true);
        tableAgenda->horizontalHeader()->setStretchLastSection(true);
        tableAgenda->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableAgenda, 7, 0, 2, 6);

        startAgendaWizard = new QPushButton(gridLayoutWidget_2);
        startAgendaWizard->setObjectName(QStringLiteral("startAgendaWizard"));

        gridLayout_2->addWidget(startAgendaWizard, 2, 0, 1, 1);

        tableReportTemplate = new QListView(gridLayoutWidget_2);
        tableReportTemplate->setObjectName(QStringLiteral("tableReportTemplate"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableReportTemplate->sizePolicy().hasHeightForWidth());
        tableReportTemplate->setSizePolicy(sizePolicy4);
        tableReportTemplate->setMinimumSize(QSize(0, 30));
        tableReportTemplate->setMaximumSize(QSize(16777215, 30));
        tableReportTemplate->setFont(font2);
        tableReportTemplate->setResizeMode(QListView::Fixed);
        tableReportTemplate->setSpacing(5);
        tableReportTemplate->setGridSize(QSize(0, 30));

        gridLayout_2->addWidget(tableReportTemplate, 5, 0, 1, 6);


        retranslateUi(ReportGeneratorTab);

        QMetaObject::connectSlotsByName(ReportGeneratorTab);
    } // setupUi

    void retranslateUi(QWidget *ReportGeneratorTab)
    {
        ReportGeneratorTab->setWindowTitle(QApplication::translate("ReportGeneratorTab", "Form", 0));
        addDecission->setText(QApplication::translate("ReportGeneratorTab", "Schriftlichen Beschluss hinzuf\303\274gen", 0));
        label->setText(QApplication::translate("ReportGeneratorTab", "Erstellung der Protokollabschrift", 0));
        label_2->setText(QApplication::translate("ReportGeneratorTab", "Protokollniederschrift / Deckblatt", 0));
        startWizard->setText(QApplication::translate("ReportGeneratorTab", "Protokolldeckblatt generieren", 0));
        deleteEntry->setText(QApplication::translate("ReportGeneratorTab", "selektierten Beschluss l\303\266schen", 0));
        addEntry->setText(QApplication::translate("ReportGeneratorTab", "\303\204nderung Gesch\303\244ftsordnung hinzuf\303\274gen", 0));
        editEntry->setText(QApplication::translate("ReportGeneratorTab", "selektierten Beschluss bearbeiten", 0));
        moveAgendaItemUp->setText(QApplication::translate("ReportGeneratorTab", "5", 0));
        label_6->setText(QApplication::translate("ReportGeneratorTab", "Protokollniederschrift / Beschl\303\274sse", 0));
        moveAgendaItemDown->setText(QApplication::translate("ReportGeneratorTab", "6", 0));
        startAgendaWizard->setText(QApplication::translate("ReportGeneratorTab", "Beschl\303\274sse generieren", 0));
    } // retranslateUi

};

namespace Ui {
    class ReportGeneratorTab: public Ui_ReportGeneratorTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTGENERATORTAB_H
