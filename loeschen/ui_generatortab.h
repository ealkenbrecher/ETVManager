/********************************************************************************
** Form generated from reading UI file 'generatortab.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATORTAB_H
#define UI_GENERATORTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneratorTab
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *doHtml;
    QPushButton *doPdf;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *beschlusssammlung;
    QCheckBox *agenda;
    QCheckBox *protokollabschrift;
    QCheckBox *procuration;
    QCheckBox *protokollvorlage;
    QCheckBox *exportIssues;
    QPushButton *doOdt;

    void setupUi(QWidget *GeneratorTab)
    {
        if (GeneratorTab->objectName().isEmpty())
            GeneratorTab->setObjectName(QStringLiteral("GeneratorTab"));
        GeneratorTab->resize(400, 359);
        gridLayoutWidget = new QWidget(GeneratorTab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 381, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        doHtml = new QPushButton(gridLayoutWidget);
        doHtml->setObjectName(QStringLiteral("doHtml"));
        doHtml->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doHtml->sizePolicy().hasHeightForWidth());
        doHtml->setSizePolicy(sizePolicy);

        gridLayout->addWidget(doHtml, 4, 0, 1, 1);

        doPdf = new QPushButton(gridLayoutWidget);
        doPdf->setObjectName(QStringLiteral("doPdf"));
        sizePolicy.setHeightForWidth(doPdf->sizePolicy().hasHeightForWidth());
        doPdf->setSizePolicy(sizePolicy);

        gridLayout->addWidget(doPdf, 1, 0, 2, 1);

        groupBox_2 = new QGroupBox(gridLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(0, 0));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 361, 201));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        beschlusssammlung = new QCheckBox(gridLayoutWidget_2);
        beschlusssammlung->setObjectName(QStringLiteral("beschlusssammlung"));
        sizePolicy1.setHeightForWidth(beschlusssammlung->sizePolicy().hasHeightForWidth());
        beschlusssammlung->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(beschlusssammlung, 4, 0, 1, 2);

        agenda = new QCheckBox(gridLayoutWidget_2);
        agenda->setObjectName(QStringLiteral("agenda"));
        sizePolicy1.setHeightForWidth(agenda->sizePolicy().hasHeightForWidth());
        agenda->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(agenda, 0, 0, 1, 2);

        protokollabschrift = new QCheckBox(gridLayoutWidget_2);
        protokollabschrift->setObjectName(QStringLiteral("protokollabschrift"));
        sizePolicy1.setHeightForWidth(protokollabschrift->sizePolicy().hasHeightForWidth());
        protokollabschrift->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(protokollabschrift, 3, 0, 1, 2);

        procuration = new QCheckBox(gridLayoutWidget_2);
        procuration->setObjectName(QStringLiteral("procuration"));
        sizePolicy1.setHeightForWidth(procuration->sizePolicy().hasHeightForWidth());
        procuration->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(procuration, 2, 0, 1, 2);

        protokollvorlage = new QCheckBox(gridLayoutWidget_2);
        protokollvorlage->setObjectName(QStringLiteral("protokollvorlage"));
        sizePolicy1.setHeightForWidth(protokollvorlage->sizePolicy().hasHeightForWidth());
        protokollvorlage->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(protokollvorlage, 1, 0, 1, 2);

        exportIssues = new QCheckBox(gridLayoutWidget_2);
        exportIssues->setObjectName(QStringLiteral("exportIssues"));
        exportIssues->setEnabled(false);
        sizePolicy1.setHeightForWidth(exportIssues->sizePolicy().hasHeightForWidth());
        exportIssues->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(exportIssues, 5, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        doOdt = new QPushButton(gridLayoutWidget);
        doOdt->setObjectName(QStringLiteral("doOdt"));
        doOdt->setEnabled(false);
        sizePolicy.setHeightForWidth(doOdt->sizePolicy().hasHeightForWidth());
        doOdt->setSizePolicy(sizePolicy);

        gridLayout->addWidget(doOdt, 3, 0, 1, 1);


        retranslateUi(GeneratorTab);

        QMetaObject::connectSlotsByName(GeneratorTab);
    } // setupUi

    void retranslateUi(QWidget *GeneratorTab)
    {
        GeneratorTab->setWindowTitle(QApplication::translate("GeneratorTab", "Form", 0));
        doHtml->setText(QApplication::translate("GeneratorTab", "als HTML erstellen", 0));
        doPdf->setText(QApplication::translate("GeneratorTab", "als PDF erstellen", 0));
        groupBox_2->setTitle(QApplication::translate("GeneratorTab", "Dokument Auswahl", 0));
        beschlusssammlung->setText(QApplication::translate("GeneratorTab", "Beschlusssammlung", 0));
        agenda->setText(QApplication::translate("GeneratorTab", "Tagesordnung", 0));
        protokollabschrift->setText(QApplication::translate("GeneratorTab", "Protokollabschrift", 0));
        procuration->setText(QApplication::translate("GeneratorTab", "Vollmacht", 0));
        protokollvorlage->setText(QApplication::translate("GeneratorTab", "Protokollvorlage", 0));
        exportIssues->setText(QApplication::translate("GeneratorTab", "Als Aufgaben In Projektplanungstool exportieren", 0));
        doOdt->setText(QApplication::translate("GeneratorTab", "als ODT erstellen", 0));
    } // retranslateUi

};

namespace Ui {
    class GeneratorTab: public Ui_GeneratorTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATORTAB_H
