/********************************************************************************
** Form generated from reading UI file 'TableItemProject.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEITEMPROJECT_H
#define UI_TABLEITEMPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableItemProject
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *tableWidgetProject;
    QHBoxLayout *horizontalLayout;
    QLabel *labelProject;
    QLabel *labelIssues;

    void setupUi(QWidget *TableItemProject)
    {
        if (TableItemProject->objectName().isEmpty())
            TableItemProject->setObjectName(QStringLiteral("TableItemProject"));
        TableItemProject->resize(264, 68);
        TableItemProject->setStyleSheet(QLatin1String("#tableWidgetProject {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border: 1px solid rgba(0, 0, 0, 80);\n"
"	border-radius: 10px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(TableItemProject);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 4, 0, 4);
        tableWidgetProject = new QWidget(TableItemProject);
        tableWidgetProject->setObjectName(QStringLiteral("tableWidgetProject"));
        horizontalLayout = new QHBoxLayout(tableWidgetProject);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(8, 8, 8, 8);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelProject = new QLabel(tableWidgetProject);
        labelProject->setObjectName(QStringLiteral("labelProject"));

        horizontalLayout->addWidget(labelProject);

        labelIssues = new QLabel(tableWidgetProject);
        labelIssues->setObjectName(QStringLiteral("labelIssues"));
        labelIssues->setStyleSheet(QStringLiteral("color: rgb(170, 170, 170);"));
        labelIssues->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelIssues);


        verticalLayout_2->addWidget(tableWidgetProject);


        retranslateUi(TableItemProject);

        QMetaObject::connectSlotsByName(TableItemProject);
    } // setupUi

    void retranslateUi(QWidget *TableItemProject)
    {
        TableItemProject->setWindowTitle(QApplication::translate("TableItemProject", "Form", 0));
        labelProject->setText(QApplication::translate("TableItemProject", "Project", 0));
        labelIssues->setText(QApplication::translate("TableItemProject", "Issues", 0));
    } // retranslateUi

};

namespace Ui {
    class TableItemProject: public Ui_TableItemProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEITEMPROJECT_H
