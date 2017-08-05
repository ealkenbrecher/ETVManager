/********************************************************************************
** Form generated from reading UI file 'editadvisersdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITADVISERSDIALOG_H
#define UI_EDITADVISERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditAdvisersDialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_7;
    QLineEdit *adviserPresident;
    QLabel *label_8;
    QLineEdit *adviser1;
    QLabel *label_9;
    QLineEdit *adviser2;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *EditAdvisersDialog)
    {
        if (EditAdvisersDialog->objectName().isEmpty())
            EditAdvisersDialog->setObjectName(QStringLiteral("EditAdvisersDialog"));
        EditAdvisersDialog->resize(391, 161);
        formLayoutWidget = new QWidget(EditAdvisersDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 371, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setPointSize(10);
        label_7->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        adviserPresident = new QLineEdit(formLayoutWidget);
        adviserPresident->setObjectName(QStringLiteral("adviserPresident"));
        adviserPresident->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, adviserPresident);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        adviser1 = new QLineEdit(formLayoutWidget);
        adviser1->setObjectName(QStringLiteral("adviser1"));
        adviser1->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, adviser1);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_9);

        adviser2 = new QLineEdit(formLayoutWidget);
        adviser2->setObjectName(QStringLiteral("adviser2"));
        adviser2->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, adviser2);

        buttonBox = new QDialogButtonBox(formLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(4, QFormLayout::FieldRole, buttonBox);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);


        retranslateUi(EditAdvisersDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditAdvisersDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditAdvisersDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditAdvisersDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAdvisersDialog)
    {
        EditAdvisersDialog->setWindowTitle(QApplication::translate("EditAdvisersDialog", "Dialog", 0));
        label_7->setText(QApplication::translate("EditAdvisersDialog", "Beirat Vorsitz", 0));
        label_8->setText(QApplication::translate("EditAdvisersDialog", "Beirat Mitglied 1", 0));
        label_9->setText(QApplication::translate("EditAdvisersDialog", "Beirat Mitglied 2", 0));
        label->setText(QApplication::translate("EditAdvisersDialog", "Beirat editieren", 0));
    } // retranslateUi

};

namespace Ui {
    class EditAdvisersDialog: public Ui_EditAdvisersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITADVISERSDIALOG_H
