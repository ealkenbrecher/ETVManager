/********************************************************************************
** Form generated from reading UI file 'propertytab.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYTAB_H
#define UI_PROPERTYTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertyTab
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *years;
    QComboBox *etvs;
    QLabel *label_9;
    QTextEdit *infoBox;
    QPushButton *editPropertySettings;
    QLabel *label_7;
    QLabel *label_4;
    QFrame *line;
    QPushButton *changeAgendaSettings;
    QComboBox *liegenschaftSelector;
    QLabel *label_6;
    QPushButton *newAgenda;
    QPushButton *editAdvisers;
    QPushButton *deleteAgenda;

    void setupUi(QWidget *PropertyTab)
    {
        if (PropertyTab->objectName().isEmpty())
            PropertyTab->setObjectName(QStringLiteral("PropertyTab"));
        PropertyTab->resize(830, 580);
        gridLayoutWidget = new QWidget(PropertyTab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 811, 561));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        years = new QComboBox(gridLayoutWidget);
        years->setObjectName(QStringLiteral("years"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(years->sizePolicy().hasHeightForWidth());
        years->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(years, 4, 1, 1, 1);

        etvs = new QComboBox(gridLayoutWidget);
        etvs->setObjectName(QStringLiteral("etvs"));

        gridLayout->addWidget(etvs, 5, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 5, 0, 1, 1);

        infoBox = new QTextEdit(gridLayoutWidget);
        infoBox->setObjectName(QStringLiteral("infoBox"));
        infoBox->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(infoBox->sizePolicy().hasHeightForWidth());
        infoBox->setSizePolicy(sizePolicy2);
        infoBox->setMinimumSize(QSize(0, 90));
        infoBox->setMaximumSize(QSize(16777215, 100000));

        gridLayout->addWidget(infoBox, 11, 0, 1, 2);

        editPropertySettings = new QPushButton(gridLayoutWidget);
        editPropertySettings->setObjectName(QStringLiteral("editPropertySettings"));
        sizePolicy.setHeightForWidth(editPropertySettings->sizePolicy().hasHeightForWidth());
        editPropertySettings->setSizePolicy(sizePolicy);

        gridLayout->addWidget(editPropertySettings, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 10, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 2);

        changeAgendaSettings = new QPushButton(gridLayoutWidget);
        changeAgendaSettings->setObjectName(QStringLiteral("changeAgendaSettings"));
        sizePolicy1.setHeightForWidth(changeAgendaSettings->sizePolicy().hasHeightForWidth());
        changeAgendaSettings->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(changeAgendaSettings, 7, 0, 1, 1);

        liegenschaftSelector = new QComboBox(gridLayoutWidget);
        liegenschaftSelector->setObjectName(QStringLiteral("liegenschaftSelector"));
        sizePolicy.setHeightForWidth(liegenschaftSelector->sizePolicy().hasHeightForWidth());
        liegenschaftSelector->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(10);
        liegenschaftSelector->setFont(font2);

        gridLayout->addWidget(liegenschaftSelector, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        newAgenda = new QPushButton(gridLayoutWidget);
        newAgenda->setObjectName(QStringLiteral("newAgenda"));
        sizePolicy1.setHeightForWidth(newAgenda->sizePolicy().hasHeightForWidth());
        newAgenda->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(newAgenda, 7, 1, 1, 1);

        editAdvisers = new QPushButton(gridLayoutWidget);
        editAdvisers->setObjectName(QStringLiteral("editAdvisers"));

        gridLayout->addWidget(editAdvisers, 8, 0, 1, 1);

        deleteAgenda = new QPushButton(gridLayoutWidget);
        deleteAgenda->setObjectName(QStringLiteral("deleteAgenda"));
        sizePolicy1.setHeightForWidth(deleteAgenda->sizePolicy().hasHeightForWidth());
        deleteAgenda->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(deleteAgenda, 8, 1, 1, 1);


        retranslateUi(PropertyTab);

        QMetaObject::connectSlotsByName(PropertyTab);
    } // setupUi

    void retranslateUi(QWidget *PropertyTab)
    {
        PropertyTab->setWindowTitle(QApplication::translate("PropertyTab", "Form", 0));
        label->setText(QApplication::translate("PropertyTab", "Liegenschaft w\303\244hlen", 0));
        label_9->setText(QApplication::translate("PropertyTab", "ETV w\303\244hlen #", 0));
        editPropertySettings->setText(QApplication::translate("PropertyTab", "Liegenschaft Optionen bearbeiten", 0));
        label_7->setText(QApplication::translate("PropertyTab", "Zusammenfassung", 0));
        label_4->setText(QApplication::translate("PropertyTab", "Optionen ETV", 0));
        changeAgendaSettings->setText(QApplication::translate("PropertyTab", "Ort, Datum, Uhrzeit \303\244ndern", 0));
        label_6->setText(QApplication::translate("PropertyTab", "Wirtschaftsjahr w\303\244hlen", 0));
        newAgenda->setText(QApplication::translate("PropertyTab", "Neues Wirtschaftsjahr / Neue ETV anlegen", 0));
        editAdvisers->setText(QApplication::translate("PropertyTab", "Beiratsmitglieder festlegen/\303\244ndern", 0));
        deleteAgenda->setText(QApplication::translate("PropertyTab", "Gew\303\244hlte ETV l\303\266schen", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertyTab: public Ui_PropertyTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYTAB_H
