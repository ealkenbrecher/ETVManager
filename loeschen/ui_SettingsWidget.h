/********************************************************************************
** Form generated from reading UI file 'SettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGET_H
#define UI_SETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupRepos;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QGroupBox *groupSettings;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *repoName;
    QLineEdit *repoServer;
    QLineEdit *repoUser;
    QLineEdit *repoPassword;
    QCheckBox *repoSavePassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonDelete;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonAddRepo;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SettingsWidget)
    {
        if (SettingsWidget->objectName().isEmpty())
            SettingsWidget->setObjectName(QStringLiteral("SettingsWidget"));
        SettingsWidget->resize(936, 659);
        horizontalLayout_2 = new QHBoxLayout(SettingsWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupRepos = new QGroupBox(SettingsWidget);
        groupRepos->setObjectName(QStringLiteral("groupRepos"));
        verticalLayout_2 = new QVBoxLayout(groupRepos);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        listWidget = new QListWidget(groupRepos);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_2->addWidget(listWidget);


        horizontalLayout_2->addWidget(groupRepos);

        groupSettings = new QGroupBox(SettingsWidget);
        groupSettings->setObjectName(QStringLiteral("groupSettings"));
        verticalLayout_3 = new QVBoxLayout(groupSettings);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupSettings);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(groupSettings);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(groupSettings);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_4 = new QLabel(groupSettings);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        repoName = new QLineEdit(groupSettings);
        repoName->setObjectName(QStringLiteral("repoName"));

        gridLayout->addWidget(repoName, 0, 1, 1, 1);

        repoServer = new QLineEdit(groupSettings);
        repoServer->setObjectName(QStringLiteral("repoServer"));

        gridLayout->addWidget(repoServer, 1, 1, 1, 1);

        repoUser = new QLineEdit(groupSettings);
        repoUser->setObjectName(QStringLiteral("repoUser"));

        gridLayout->addWidget(repoUser, 2, 1, 1, 1);

        repoPassword = new QLineEdit(groupSettings);
        repoPassword->setObjectName(QStringLiteral("repoPassword"));
        repoPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(repoPassword, 3, 1, 1, 1);

        repoSavePassword = new QCheckBox(groupSettings);
        repoSavePassword->setObjectName(QStringLiteral("repoSavePassword"));

        gridLayout->addWidget(repoSavePassword, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonDelete = new QPushButton(groupSettings);
        buttonDelete->setObjectName(QStringLiteral("buttonDelete"));

        horizontalLayout->addWidget(buttonDelete);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonAddRepo = new QPushButton(groupSettings);
        buttonAddRepo->setObjectName(QStringLiteral("buttonAddRepo"));

        horizontalLayout->addWidget(buttonAddRepo);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout_2->addWidget(groupSettings);

        horizontalLayout_2->setStretch(1, 1);

        retranslateUi(SettingsWidget);

        QMetaObject::connectSlotsByName(SettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidget)
    {
        SettingsWidget->setWindowTitle(QApplication::translate("SettingsWidget", "Form", 0));
        groupRepos->setTitle(QApplication::translate("SettingsWidget", "Repository", 0));
        groupSettings->setTitle(QApplication::translate("SettingsWidget", "Settings", 0));
        label_2->setText(QApplication::translate("SettingsWidget", "Repository Name", 0));
        label_3->setText(QApplication::translate("SettingsWidget", "Server", 0));
        label->setText(QApplication::translate("SettingsWidget", "Username", 0));
        label_4->setText(QApplication::translate("SettingsWidget", "Password", 0));
        repoSavePassword->setText(QApplication::translate("SettingsWidget", "Save Password", 0));
        buttonDelete->setText(QApplication::translate("SettingsWidget", "Delete Repository", 0));
        buttonAddRepo->setText(QApplication::translate("SettingsWidget", "Add Repository", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsWidget: public Ui_SettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGET_H
