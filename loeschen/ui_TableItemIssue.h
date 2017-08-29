/********************************************************************************
** Form generated from reading UI file 'TableItemIssue.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEITEMISSUE_H
#define UI_TABLEITEMISSUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableItemIssue
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *tableWidgetIssue;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *subject;
    QLabel *status;
    QHBoxLayout *horizontalLayout_2;
    QLabel *issueId;
    QSpacerItem *horizontalSpacer;
    QLabel *assignedTo;
    QLabel *due;
    QLabel *updated;

    void setupUi(QWidget *TableItemIssue)
    {
        if (TableItemIssue->objectName().isEmpty())
            TableItemIssue->setObjectName(QStringLiteral("TableItemIssue"));
        TableItemIssue->resize(400, 300);
        TableItemIssue->setStyleSheet(QLatin1String("#tableWidgetIssue {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border: 1px solid rgba(0, 0, 0, 80);\n"
"	border-radius: 10px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(TableItemIssue);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 4, 0, 4);
        tableWidgetIssue = new QWidget(TableItemIssue);
        tableWidgetIssue->setObjectName(QStringLiteral("tableWidgetIssue"));
        verticalLayout = new QVBoxLayout(tableWidgetIssue);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(8, 6, 8, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        subject = new QLabel(tableWidgetIssue);
        subject->setObjectName(QStringLiteral("subject"));

        horizontalLayout->addWidget(subject);

        status = new QLabel(tableWidgetIssue);
        status->setObjectName(QStringLiteral("status"));
        status->setStyleSheet(QStringLiteral("color: rgb(38, 139, 210);"));
        status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(status);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        issueId = new QLabel(tableWidgetIssue);
        issueId->setObjectName(QStringLiteral("issueId"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        issueId->setFont(font);
        issueId->setStyleSheet(QStringLiteral("color: rgb(255, 160, 35);"));

        horizontalLayout_2->addWidget(issueId);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        assignedTo = new QLabel(tableWidgetIssue);
        assignedTo->setObjectName(QStringLiteral("assignedTo"));
        assignedTo->setStyleSheet(QLatin1String("color: rgb(170, 170, 170);\n"
""));
        assignedTo->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(assignedTo);

        due = new QLabel(tableWidgetIssue);
        due->setObjectName(QStringLiteral("due"));
        due->setStyleSheet(QStringLiteral("color: rgb(170, 170, 170);"));
        due->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        due->setIndent(10);

        horizontalLayout_2->addWidget(due);

        updated = new QLabel(tableWidgetIssue);
        updated->setObjectName(QStringLiteral("updated"));
        updated->setStyleSheet(QStringLiteral("color: rgb(170, 170, 170);"));
        updated->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(updated);

        horizontalLayout_2->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(tableWidgetIssue);


        retranslateUi(TableItemIssue);

        QMetaObject::connectSlotsByName(TableItemIssue);
    } // setupUi

    void retranslateUi(QWidget *TableItemIssue)
    {
        TableItemIssue->setWindowTitle(QApplication::translate("TableItemIssue", "Form", 0));
        subject->setText(QApplication::translate("TableItemIssue", "Subject", 0));
        status->setText(QApplication::translate("TableItemIssue", "Status", 0));
        issueId->setText(QApplication::translate("TableItemIssue", "#123", 0));
#ifndef QT_NO_TOOLTIP
        assignedTo->setToolTip(QApplication::translate("TableItemIssue", "Assigned to", 0));
#endif // QT_NO_TOOLTIP
        assignedTo->setText(QApplication::translate("TableItemIssue", "Assigned To", 0));
        due->setText(QApplication::translate("TableItemIssue", "due", 0));
#ifndef QT_NO_TOOLTIP
        updated->setToolTip(QApplication::translate("TableItemIssue", "Updated On", 0));
#endif // QT_NO_TOOLTIP
        updated->setText(QApplication::translate("TableItemIssue", "Updated", 0));
    } // retranslateUi

};

namespace Ui {
    class TableItemIssue: public Ui_TableItemIssue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEITEMISSUE_H
