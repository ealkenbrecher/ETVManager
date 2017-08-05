/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "IssueDetailWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelIssues;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tableIssues;
    QSpacerItem *verticalSpacer;
    QPushButton *buttonReloadProjects;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelLoading;
    QWidget *page_2;
    QVBoxLayout *verticalLayoutIssue;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayoutScrollArea;
    QLabel *subject;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QDateEdit *dateDueTo;
    QDateEdit *dateStarted;
    QComboBox *comboDoneRatio;
    QComboBox *comboStatus;
    QComboBox *comboPriority;
    QComboBox *comboAssignedTo;
    QComboBox *comboCategory;
    QLabel *label_5;
    QComboBox *comboTracker;
    IssueDetailWidget *issueDescription;
    QVBoxLayout *verticalLayoutDetails;
    QSpacerItem *verticalSpacer_3;
    QTextBrowser *comment;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonSave;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelProjects;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *tableProjects;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1012, 683);
        MainWindow->setStyleSheet(QLatin1String("#widget {\n"
"	background-image: url(:/img/pattern.png);\n"
"}\n"
"\n"
"#tableIssues, #tableProjects {\n"
"	background-color: transparent;\n"
"}\n"
""));
        verticalLayout_2 = new QVBoxLayout(MainWindow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(MainWindow);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelIssues = new QLabel(layoutWidget);
        labelIssues->setObjectName(QStringLiteral("labelIssues"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelIssues->setFont(font);
        labelIssues->setIndent(10);

        verticalLayout->addWidget(labelIssues);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tableIssues = new QTableWidget(groupBox_2);
        if (tableIssues->columnCount() < 1)
            tableIssues->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableIssues->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableIssues->setObjectName(QStringLiteral("tableIssues"));
        tableIssues->setStyleSheet(QLatin1String("selection-background-color: rgb(0, 0, 0, 0);\n"
""));
        tableIssues->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableIssues->setSelectionMode(QAbstractItemView::SingleSelection);
        tableIssues->setShowGrid(false);
        tableIssues->setRowCount(0);
        tableIssues->horizontalHeader()->setVisible(false);
        tableIssues->horizontalHeader()->setStretchLastSection(true);
        tableIssues->verticalHeader()->setVisible(false);

        verticalLayout_6->addWidget(tableIssues);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        buttonReloadProjects = new QPushButton(layoutWidget);
        buttonReloadProjects->setObjectName(QStringLiteral("buttonReloadProjects"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/view-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonReloadProjects->setIcon(icon);

        verticalLayout->addWidget(buttonReloadProjects);

        verticalLayout->setStretch(1, 1);
        splitter->addWidget(layoutWidget);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: transparent"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelLoading = new QLabel(page_3);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelLoading);

        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayoutIssue = new QVBoxLayout(page_2);
        verticalLayoutIssue->setContentsMargins(0, 0, 0, 0);
        verticalLayoutIssue->setObjectName(QStringLiteral("verticalLayoutIssue"));
        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMaximumSize(QSize(1000, 16777215));
        scrollArea->setStyleSheet(QLatin1String("QScrollBar {\n"
"	background: none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 445, 657));
        verticalLayoutScrollArea = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayoutScrollArea->setSpacing(2);
        verticalLayoutScrollArea->setObjectName(QStringLiteral("verticalLayoutScrollArea"));
        verticalLayoutScrollArea->setContentsMargins(-1, 0, -1, -1);
        subject = new QLabel(scrollAreaWidgetContents_2);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setFont(font);
        subject->setWordWrap(true);
        subject->setIndent(10);

        verticalLayoutScrollArea->addWidget(subject);

        groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 2, 2, 1, 1);

        dateDueTo = new QDateEdit(groupBox);
        dateDueTo->setObjectName(QStringLiteral("dateDueTo"));
        dateDueTo->setStyleSheet(QStringLiteral("background: none;"));

        gridLayout->addWidget(dateDueTo, 1, 3, 1, 1);

        dateStarted = new QDateEdit(groupBox);
        dateStarted->setObjectName(QStringLiteral("dateStarted"));
        dateStarted->setStyleSheet(QStringLiteral("background: none;"));

        gridLayout->addWidget(dateStarted, 0, 3, 1, 1);

        comboDoneRatio = new QComboBox(groupBox);
        comboDoneRatio->setObjectName(QStringLiteral("comboDoneRatio"));
        comboDoneRatio->setStyleSheet(QStringLiteral("background: none;"));

        gridLayout->addWidget(comboDoneRatio, 2, 3, 1, 1);

        comboStatus = new QComboBox(groupBox);
        comboStatus->setObjectName(QStringLiteral("comboStatus"));
        comboStatus->setStyleSheet(QStringLiteral("background: none;"));

        gridLayout->addWidget(comboStatus, 0, 1, 1, 1);

        comboPriority = new QComboBox(groupBox);
        comboPriority->setObjectName(QStringLiteral("comboPriority"));
        comboPriority->setEnabled(false);
        comboPriority->setStyleSheet(QStringLiteral("background: none;"));

        gridLayout->addWidget(comboPriority, 1, 1, 1, 1);

        comboAssignedTo = new QComboBox(groupBox);
        comboAssignedTo->setObjectName(QStringLiteral("comboAssignedTo"));
        comboAssignedTo->setStyleSheet(QStringLiteral("background: none;"));

        gridLayout->addWidget(comboAssignedTo, 2, 1, 1, 1);

        comboCategory = new QComboBox(groupBox);
        comboCategory->setObjectName(QStringLiteral("comboCategory"));
        comboCategory->setStyleSheet(QStringLiteral("background: none;"));

        gridLayout->addWidget(comboCategory, 4, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        comboTracker = new QComboBox(groupBox);
        comboTracker->setObjectName(QStringLiteral("comboTracker"));
        comboTracker->setStyleSheet(QStringLiteral("background: none;"));

        gridLayout->addWidget(comboTracker, 3, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        issueDescription = new IssueDetailWidget(groupBox);
        issueDescription->setObjectName(QStringLiteral("issueDescription"));

        verticalLayout_5->addWidget(issueDescription);

        verticalLayoutDetails = new QVBoxLayout();
        verticalLayoutDetails->setObjectName(QStringLiteral("verticalLayoutDetails"));

        verticalLayout_5->addLayout(verticalLayoutDetails);


        verticalLayoutScrollArea->addWidget(groupBox);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutScrollArea->addItem(verticalSpacer_3);

        comment = new QTextBrowser(scrollAreaWidgetContents_2);
        comment->setObjectName(QStringLiteral("comment"));
        comment->setMaximumSize(QSize(16777215, 100));
        comment->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 1px solid rgba(0, 0, 0, 80);\n"
"border-radius: 5px;"));
        comment->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayoutScrollArea->addWidget(comment);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 10, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonSave = new QPushButton(scrollAreaWidgetContents_2);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));

        horizontalLayout_2->addWidget(buttonSave);


        verticalLayoutScrollArea->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutScrollArea->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayoutIssue->addWidget(scrollArea);

        stackedWidget->addWidget(page_2);
        splitter->addWidget(stackedWidget);

        horizontalLayout->addWidget(splitter);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        labelProjects = new QLabel(widget);
        labelProjects->setObjectName(QStringLiteral("labelProjects"));
        labelProjects->setFont(font);
        labelProjects->setIndent(10);

        verticalLayout_8->addWidget(labelProjects);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tableProjects = new QTableWidget(groupBox_3);
        if (tableProjects->columnCount() < 1)
            tableProjects->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableProjects->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        tableProjects->setObjectName(QStringLiteral("tableProjects"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableProjects->sizePolicy().hasHeightForWidth());
        tableProjects->setSizePolicy(sizePolicy);
        tableProjects->setStyleSheet(QStringLiteral("selection-background-color: rgb(0, 0, 0, 0);"));
        tableProjects->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableProjects->setSelectionMode(QAbstractItemView::SingleSelection);
        tableProjects->setShowGrid(false);
        tableProjects->horizontalHeader()->setVisible(false);
        tableProjects->horizontalHeader()->setStretchLastSection(true);
        tableProjects->verticalHeader()->setVisible(false);

        verticalLayout_7->addWidget(tableProjects);


        verticalLayout_8->addWidget(groupBox_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout_8);


        verticalLayout_2->addWidget(widget);


        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", 0));
        labelIssues->setText(QApplication::translate("MainWindow", "Issues", 0));
        groupBox_2->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tableIssues->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Issues", 0));
#ifndef QT_NO_TOOLTIP
        buttonReloadProjects->setToolTip(QApplication::translate("MainWindow", "Aktualisieren", 0));
#endif // QT_NO_TOOLTIP
        buttonReloadProjects->setText(QApplication::translate("MainWindow", "Refresh", 0));
        labelLoading->setText(QApplication::translate("MainWindow", "Loading...", 0));
        subject->setText(QApplication::translate("MainWindow", "Subject", 0));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "Status", 0));
        label_2->setText(QApplication::translate("MainWindow", "Priority", 0));
        label_4->setText(QApplication::translate("MainWindow", "Assignee", 0));
        label_3->setText(QApplication::translate("MainWindow", "Category", 0));
        label_6->setText(QApplication::translate("MainWindow", "Start Date", 0));
        label_7->setText(QApplication::translate("MainWindow", "Due Date", 0));
        label_8->setText(QApplication::translate("MainWindow", "% Done", 0));
        comboDoneRatio->clear();
        comboDoneRatio->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0%", 0)
         << QApplication::translate("MainWindow", "10%", 0)
         << QApplication::translate("MainWindow", "20%", 0)
         << QApplication::translate("MainWindow", "30%", 0)
         << QApplication::translate("MainWindow", "40%", 0)
         << QApplication::translate("MainWindow", "50%", 0)
         << QApplication::translate("MainWindow", "60%", 0)
         << QApplication::translate("MainWindow", "70%", 0)
         << QApplication::translate("MainWindow", "80%", 0)
         << QApplication::translate("MainWindow", "90%", 0)
         << QApplication::translate("MainWindow", "100%", 0)
        );
        label_5->setText(QApplication::translate("MainWindow", "Tracker", 0));
        buttonSave->setText(QApplication::translate("MainWindow", "Save", 0));
        labelProjects->setText(QApplication::translate("MainWindow", "Projects", 0));
        groupBox_3->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem1 = tableProjects->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Project", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
