/********************************************************************************
** Form generated from reading UI file 'orderitemsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERITEMSETTINGS_H
#define UI_ORDERITEMSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderItemSettings
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OrderItemSettings)
    {
        if (OrderItemSettings->objectName().isEmpty())
            OrderItemSettings->setObjectName(QStringLiteral("OrderItemSettings"));
        OrderItemSettings->resize(211, 91);
        verticalLayoutWidget = new QWidget(OrderItemSettings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 191, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(verticalLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(30);

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OrderItemSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), OrderItemSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrderItemSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrderItemSettings);
    } // setupUi

    void retranslateUi(QDialog *OrderItemSettings)
    {
        OrderItemSettings->setWindowTitle(QApplication::translate("OrderItemSettings", "Dialog", 0));
        label->setText(QApplication::translate("OrderItemSettings", "Neuer Wert:", 0));
    } // retranslateUi

};

namespace Ui {
    class OrderItemSettings: public Ui_OrderItemSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERITEMSETTINGS_H
