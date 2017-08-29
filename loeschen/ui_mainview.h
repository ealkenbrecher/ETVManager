/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainView
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabs;

    void setupUi(QWidget *mainView)
    {
        if (mainView->objectName().isEmpty())
            mainView->setObjectName(QStringLiteral("mainView"));
        mainView->resize(951, 662);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainView->sizePolicy().hasHeightForWidth());
        mainView->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(mainView);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 931, 621));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabs = new QTabWidget(gridLayoutWidget);
        tabs->setObjectName(QStringLiteral("tabs"));

        gridLayout->addWidget(tabs, 1, 0, 1, 1);


        retranslateUi(mainView);

        QMetaObject::connectSlotsByName(mainView);
    } // setupUi

    void retranslateUi(QWidget *mainView)
    {
        mainView->setWindowTitle(QApplication::translate("mainView", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class mainView: public Ui_mainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
