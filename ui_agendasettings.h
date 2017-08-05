/********************************************************************************
** Form generated from reading UI file 'agendasettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENDASETTINGS_H
#define UI_AGENDASETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AgendaSettings
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QTextEdit *etvLoc;
    QLabel *label;
    QSpinBox *year;
    QSpinBox *etvNum;
    QDateEdit *etvDate;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_2;
    QTimeEdit *etvTime;
    QLabel *label_4;

    void setupUi(QDialog *AgendaSettings)
    {
        if (AgendaSettings->objectName().isEmpty())
            AgendaSettings->setObjectName(QStringLiteral("AgendaSettings"));
        AgendaSettings->resize(371, 301);
        gridLayoutWidget = new QWidget(AgendaSettings);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(11, 9, 351, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        etvLoc = new QTextEdit(gridLayoutWidget);
        etvLoc->setObjectName(QStringLiteral("etvLoc"));

        gridLayout->addWidget(etvLoc, 5, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        year = new QSpinBox(gridLayoutWidget);
        year->setObjectName(QStringLiteral("year"));
        year->setFont(font);
        year->setMinimum(2000);
        year->setMaximum(2500);

        gridLayout->addWidget(year, 1, 1, 1, 1);

        etvNum = new QSpinBox(gridLayoutWidget);
        etvNum->setObjectName(QStringLiteral("etvNum"));
        etvNum->setFont(font);
        etvNum->setMinimum(1);

        gridLayout->addWidget(etvNum, 2, 1, 1, 1);

        etvDate = new QDateEdit(gridLayoutWidget);
        etvDate->setObjectName(QStringLiteral("etvDate"));
        etvDate->setFont(font);
        etvDate->setCalendarPopup(true);

        gridLayout->addWidget(etvDate, 3, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        etvTime = new QTimeEdit(gridLayoutWidget);
        etvTime->setObjectName(QStringLiteral("etvTime"));
        etvTime->setFont(font);

        gridLayout->addWidget(etvTime, 4, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);


        retranslateUi(AgendaSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), AgendaSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AgendaSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(AgendaSettings);
    } // setupUi

    void retranslateUi(QDialog *AgendaSettings)
    {
        AgendaSettings->setWindowTitle(QApplication::translate("AgendaSettings", "Dialog", 0));
        label_5->setText(QApplication::translate("AgendaSettings", "ETV Uhrzeit", 0));
        label->setText(QApplication::translate("AgendaSettings", "Eigentuemerversammlung Einstellungen", 0));
        etvDate->setDisplayFormat(QApplication::translate("AgendaSettings", "dd.MM", 0));
        label_6->setText(QApplication::translate("AgendaSettings", "ETV Ort", 0));
        label_3->setText(QApplication::translate("AgendaSettings", "ETV Nummer", 0));
        label_2->setText(QApplication::translate("AgendaSettings", "Wirtschaftsjahr", 0));
        label_4->setText(QApplication::translate("AgendaSettings", "ETV Datum", 0));
    } // retranslateUi

};

namespace Ui {
    class AgendaSettings: public Ui_AgendaSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENDASETTINGS_H
