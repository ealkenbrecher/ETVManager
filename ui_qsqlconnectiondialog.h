/********************************************************************************
** Form generated from reading UI file 'qsqlconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSQLCONNECTIONDIALOG_H
#define UI_QSQLCONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QSqlConnectionDialogUi
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *connGroupBox;
    QGridLayout *gridLayout;
    QSpinBox *portSpinBox;
    QLabel *textLabel4;
    QLineEdit *editDatabase;
    QLineEdit *editUsername;
    QLineEdit *editPassword;
    QLineEdit *editHostname;
    QLabel *textLabel3;
    QLabel *textLabel5;
    QLabel *textLabel4_2;
    QLabel *textLabel5_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *QSqlConnectionDialogUi)
    {
        if (QSqlConnectionDialogUi->objectName().isEmpty())
            QSqlConnectionDialogUi->setObjectName(QStringLiteral("QSqlConnectionDialogUi"));
        QSqlConnectionDialogUi->resize(315, 228);
        vboxLayout = new QVBoxLayout(QSqlConnectionDialogUi);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        connGroupBox = new QGroupBox(QSqlConnectionDialogUi);
        connGroupBox->setObjectName(QStringLiteral("connGroupBox"));
        gridLayout = new QGridLayout(connGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(8, 8, 8, 8);
        portSpinBox = new QSpinBox(connGroupBox);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));
        portSpinBox->setMinimum(-1);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(-1);

        gridLayout->addWidget(portSpinBox, 4, 1, 1, 1);

        textLabel4 = new QLabel(connGroupBox);
        textLabel4->setObjectName(QStringLiteral("textLabel4"));

        gridLayout->addWidget(textLabel4, 1, 0, 1, 1);

        editDatabase = new QLineEdit(connGroupBox);
        editDatabase->setObjectName(QStringLiteral("editDatabase"));

        gridLayout->addWidget(editDatabase, 0, 1, 1, 1);

        editUsername = new QLineEdit(connGroupBox);
        editUsername->setObjectName(QStringLiteral("editUsername"));

        gridLayout->addWidget(editUsername, 1, 1, 1, 1);

        editPassword = new QLineEdit(connGroupBox);
        editPassword->setObjectName(QStringLiteral("editPassword"));
        editPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(editPassword, 2, 1, 1, 1);

        editHostname = new QLineEdit(connGroupBox);
        editHostname->setObjectName(QStringLiteral("editHostname"));

        gridLayout->addWidget(editHostname, 3, 1, 1, 1);

        textLabel3 = new QLabel(connGroupBox);
        textLabel3->setObjectName(QStringLiteral("textLabel3"));

        gridLayout->addWidget(textLabel3, 0, 0, 1, 1);

        textLabel5 = new QLabel(connGroupBox);
        textLabel5->setObjectName(QStringLiteral("textLabel5"));

        gridLayout->addWidget(textLabel5, 3, 0, 1, 1);

        textLabel4_2 = new QLabel(connGroupBox);
        textLabel4_2->setObjectName(QStringLiteral("textLabel4_2"));

        gridLayout->addWidget(textLabel4_2, 2, 0, 1, 1);

        textLabel5_2 = new QLabel(connGroupBox);
        textLabel5_2->setObjectName(QStringLiteral("textLabel5_2"));

        gridLayout->addWidget(textLabel5_2, 4, 0, 1, 1);


        vboxLayout->addWidget(connGroupBox);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(QSqlConnectionDialogUi);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setDefault(true);

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(QSqlConnectionDialogUi);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);

#ifndef QT_NO_SHORTCUT
        textLabel4->setBuddy(editUsername);
        textLabel3->setBuddy(editDatabase);
        textLabel5->setBuddy(editHostname);
        textLabel4_2->setBuddy(editPassword);
        textLabel5_2->setBuddy(portSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editDatabase, editUsername);
        QWidget::setTabOrder(editUsername, editPassword);
        QWidget::setTabOrder(editPassword, editHostname);
        QWidget::setTabOrder(editHostname, portSpinBox);
        QWidget::setTabOrder(portSpinBox, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(QSqlConnectionDialogUi);

        QMetaObject::connectSlotsByName(QSqlConnectionDialogUi);
    } // setupUi

    void retranslateUi(QDialog *QSqlConnectionDialogUi)
    {
        QSqlConnectionDialogUi->setWindowTitle(QApplication::translate("QSqlConnectionDialogUi", "Connect...", 0));
        connGroupBox->setTitle(QApplication::translate("QSqlConnectionDialogUi", "Verbindung manuell herstellen", 0));
        portSpinBox->setSpecialValueText(QApplication::translate("QSqlConnectionDialogUi", "Default", 0));
        textLabel4->setText(QApplication::translate("QSqlConnectionDialogUi", "Login", 0));
        textLabel3->setText(QApplication::translate("QSqlConnectionDialogUi", "Pfad", 0));
        textLabel5->setText(QApplication::translate("QSqlConnectionDialogUi", "Host", 0));
        textLabel4_2->setText(QApplication::translate("QSqlConnectionDialogUi", "Passwort", 0));
        textLabel5_2->setText(QApplication::translate("QSqlConnectionDialogUi", "P&ort:", 0));
        okButton->setText(QApplication::translate("QSqlConnectionDialogUi", "&OK", 0));
        cancelButton->setText(QApplication::translate("QSqlConnectionDialogUi", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class QSqlConnectionDialogUi: public Ui_QSqlConnectionDialogUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSQLCONNECTIONDIALOG_H
