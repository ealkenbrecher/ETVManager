/********************************************************************************
** Form generated from reading UI file 'agendaitemcontextmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENDAITEMCONTEXTMENU_H
#define UI_AGENDAITEMCONTEXTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AgendaItemContextMenu
{
public:

    void setupUi(QDialog *AgendaItemContextMenu)
    {
        if (AgendaItemContextMenu->objectName().isEmpty())
            AgendaItemContextMenu->setObjectName(QStringLiteral("AgendaItemContextMenu"));
        AgendaItemContextMenu->resize(231, 171);

        retranslateUi(AgendaItemContextMenu);

        QMetaObject::connectSlotsByName(AgendaItemContextMenu);
    } // setupUi

    void retranslateUi(QDialog *AgendaItemContextMenu)
    {
        AgendaItemContextMenu->setWindowTitle(QApplication::translate("AgendaItemContextMenu", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class AgendaItemContextMenu: public Ui_AgendaItemContextMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENDAITEMCONTEXTMENU_H
