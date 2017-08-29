/********************************************************************************
** Form generated from reading UI file 'NetworkAuthDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKAUTHDIALOG_H
#define UI_NETWORKAUTHDIALOG_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NetworkAuthDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *labelSite;
    QFormLayout *formLayout;
    QLabel *labelUsername;
    QLineEdit *username;
    QLabel *labelPassword;
    QLineEdit *password;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NetworkAuthDialog)
    {
        if (NetworkAuthDialog->objectName().isEmpty())
            NetworkAuthDialog->setObjectName(QStringLiteral("NetworkAuthDialog"));
        NetworkAuthDialog->resize(304, 210);
        verticalLayout = new QVBoxLayout(NetworkAuthDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(NetworkAuthDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        labelSite = new QLabel(NetworkAuthDialog);
        labelSite->setObjectName(QStringLiteral("labelSite"));

        verticalLayout->addWidget(labelSite);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelUsername = new QLabel(NetworkAuthDialog);
        labelUsername->setObjectName(QStringLiteral("labelUsername"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelUsername);

        username = new QLineEdit(NetworkAuthDialog);
        username->setObjectName(QStringLiteral("username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, username);

        labelPassword = new QLabel(NetworkAuthDialog);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassword);

        password = new QLineEdit(NetworkAuthDialog);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, password);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(NetworkAuthDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(2, 1);

        retranslateUi(NetworkAuthDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NetworkAuthDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NetworkAuthDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NetworkAuthDialog);
    } // setupUi

    void retranslateUi(QDialog *NetworkAuthDialog)
    {
        NetworkAuthDialog->setWindowTitle(QApplication::translate("NetworkAuthDialog", "Dialog", 0));
        label->setText(QApplication::translate("NetworkAuthDialog", "Authentication Required", 0));
        labelSite->setText(QString());
        labelUsername->setText(QApplication::translate("NetworkAuthDialog", "Username", 0));
        labelPassword->setText(QApplication::translate("NetworkAuthDialog", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class NetworkAuthDialog: public Ui_NetworkAuthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKAUTHDIALOG_H
