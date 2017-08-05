/********************************************************************************
** Form generated from reading UI file 'addyear.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDYEAR_H
#define UI_ADDYEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addYear
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *year;
    QLabel *label_2;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addYear)
    {
        if (addYear->objectName().isEmpty())
            addYear->setObjectName(QStringLiteral("addYear"));
        addYear->resize(397, 99);
        gridLayoutWidget = new QWidget(addYear);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 379, 78));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        year = new QSpinBox(gridLayoutWidget);
        year->setObjectName(QStringLiteral("year"));
        year->setMinimum(1900);
        year->setMaximum(2999);

        gridLayout->addWidget(year, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(addYear);

        QMetaObject::connectSlotsByName(addYear);
    } // setupUi

    void retranslateUi(QDialog *addYear)
    {
        addYear->setWindowTitle(QApplication::translate("addYear", "Dialog", 0));
        label_2->setText(QApplication::translate("addYear", "Eingabe", 0));
        label->setText(QApplication::translate("addYear", "Neues Wirtschaftsjahr hinzuf\303\274gen", 0));
    } // retranslateUi

};

namespace Ui {
    class addYear: public Ui_addYear {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDYEAR_H
