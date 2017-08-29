/********************************************************************************
** Form generated from reading UI file 'propertysettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYSETTINGS_H
#define UI_PROPERTYSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertySettings
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_2;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label;
    QTextEdit *votingType;
    QRadioButton *radioButton;
    QDoubleSpinBox *mea;
    QLineEdit *propertyId;
    QLineEdit *propertyName;
    QSpinBox *ownerQuantity;
    QTextEdit *deadline;
    QLabel *label_8;

    void setupUi(QDialog *PropertySettings)
    {
        if (PropertySettings->objectName().isEmpty())
            PropertySettings->setObjectName(QStringLiteral("PropertySettings"));
        PropertySettings->resize(501, 451);
        gridLayoutWidget = new QWidget(PropertySettings);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 481, 431));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(gridLayoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        QFont font;
        font.setPointSize(10);
        radioButton_2->setFont(font);

        gridLayout->addWidget(radioButton_2, 5, 2, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 0, 1, 3);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 0, 1, 3);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 7, 0, 2, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        votingType = new QTextEdit(gridLayoutWidget);
        votingType->setObjectName(QStringLiteral("votingType"));
        votingType->setMinimumSize(QSize(0, 120));
        votingType->setMaximumSize(QSize(16777215, 120));
        votingType->setAcceptRichText(false);

        gridLayout->addWidget(votingType, 4, 1, 1, 2);

        radioButton = new QRadioButton(gridLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font);

        gridLayout->addWidget(radioButton, 5, 1, 1, 1);

        mea = new QDoubleSpinBox(gridLayoutWidget);
        mea->setObjectName(QStringLiteral("mea"));
        mea->setMaximum(100000);

        gridLayout->addWidget(mea, 3, 1, 1, 2);

        propertyId = new QLineEdit(gridLayoutWidget);
        propertyId->setObjectName(QStringLiteral("propertyId"));
        propertyId->setEnabled(false);
        propertyId->setReadOnly(true);

        gridLayout->addWidget(propertyId, 2, 1, 1, 2);

        propertyName = new QLineEdit(gridLayoutWidget);
        propertyName->setObjectName(QStringLiteral("propertyName"));

        gridLayout->addWidget(propertyName, 1, 1, 1, 2);

        ownerQuantity = new QSpinBox(gridLayoutWidget);
        ownerQuantity->setObjectName(QStringLiteral("ownerQuantity"));
        ownerQuantity->setMaximum(999);

        gridLayout->addWidget(ownerQuantity, 6, 1, 1, 2);

        deadline = new QTextEdit(gridLayoutWidget);
        deadline->setObjectName(QStringLiteral("deadline"));
        deadline->setMinimumSize(QSize(0, 120));
        deadline->setMaximumSize(QSize(16777215, 120));
        deadline->setAcceptRichText(false);

        gridLayout->addWidget(deadline, 7, 1, 2, 2);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 5, 0, 1, 1);


        retranslateUi(PropertySettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), PropertySettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PropertySettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(PropertySettings);
    } // setupUi

    void retranslateUi(QDialog *PropertySettings)
    {
        PropertySettings->setWindowTitle(QApplication::translate("PropertySettings", "Dialog", 0));
        radioButton_2->setText(QApplication::translate("PropertySettings", "MEA", 0));
        label_2->setText(QApplication::translate("PropertySettings", "Stimmrecht\n"
" (Text in der\n"
" Protokollvorlage)", 0));
        label_4->setText(QApplication::translate("PropertySettings", "Objektname", 0));
        label_6->setText(QApplication::translate("PropertySettings", "Editiere Liegenschaft", 0));
        label_3->setText(QApplication::translate("PropertySettings", "Anzahl Eigent\303\274mer", 0));
        label_5->setText(QApplication::translate("PropertySettings", "Interne ID", 0));
        label_7->setText(QApplication::translate("PropertySettings", "Einladungsfrist ETV\n"
"(Text in der\n"
"Protokollvorlage)", 0));
        label->setText(QApplication::translate("PropertySettings", "MEA", 0));
        radioButton->setText(QApplication::translate("PropertySettings", "Stimmen", 0));
        label_8->setText(QApplication::translate("PropertySettings", "Abstimmung", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertySettings: public Ui_PropertySettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYSETTINGS_H
