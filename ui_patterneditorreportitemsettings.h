/********************************************************************************
** Form generated from reading UI file 'patterneditorreportitemsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATTERNEDITORREPORTITEMSETTINGS_H
#define UI_PATTERNEDITORREPORTITEMSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatternEditorReportItemSettings
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *PatternName;
    QTextEdit *textBody;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *wildcards;
    QPushButton *insertWildcard;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PatternEditorReportItemSettings)
    {
        if (PatternEditorReportItemSettings->objectName().isEmpty())
            PatternEditorReportItemSettings->setObjectName(QStringLiteral("PatternEditorReportItemSettings"));
        PatternEditorReportItemSettings->resize(972, 631);
        verticalLayoutWidget = new QWidget(PatternEditorReportItemSettings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 951, 611));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        PatternName = new QLineEdit(verticalLayoutWidget);
        PatternName->setObjectName(QStringLiteral("PatternName"));
        PatternName->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PatternName->sizePolicy().hasHeightForWidth());
        PatternName->setSizePolicy(sizePolicy1);
        PatternName->setFont(font1);

        horizontalLayout_2->addWidget(PatternName);


        verticalLayout->addLayout(horizontalLayout_2);

        textBody = new QTextEdit(verticalLayoutWidget);
        textBody->setObjectName(QStringLiteral("textBody"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBody->sizePolicy().hasHeightForWidth());
        textBody->setSizePolicy(sizePolicy2);
        textBody->setAcceptRichText(false);

        verticalLayout->addWidget(textBody);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        wildcards = new QComboBox(verticalLayoutWidget);
        wildcards->setObjectName(QStringLiteral("wildcards"));

        horizontalLayout_3->addWidget(wildcards);

        insertWildcard = new QPushButton(verticalLayoutWidget);
        insertWildcard->setObjectName(QStringLiteral("insertWildcard"));
        sizePolicy3.setHeightForWidth(insertWildcard->sizePolicy().hasHeightForWidth());
        insertWildcard->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(insertWildcard);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PatternEditorReportItemSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), PatternEditorReportItemSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PatternEditorReportItemSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(PatternEditorReportItemSettings);
    } // setupUi

    void retranslateUi(QDialog *PatternEditorReportItemSettings)
    {
        PatternEditorReportItemSettings->setWindowTitle(QApplication::translate("PatternEditorReportItemSettings", "Dialog", 0));
        label->setText(QApplication::translate("PatternEditorReportItemSettings", "Protokoll - Deckblatt bearbeiten", 0));
        label_2->setText(QApplication::translate("PatternEditorReportItemSettings", "Vorlage:", 0));
        label_3->setText(QApplication::translate("PatternEditorReportItemSettings", "Platzhalter einf\303\274gen:", 0));
        insertWildcard->setText(QApplication::translate("PatternEditorReportItemSettings", "Platzhalter Einf\303\274gen", 0));
    } // retranslateUi

};

namespace Ui {
    class PatternEditorReportItemSettings: public Ui_PatternEditorReportItemSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATTERNEDITORREPORTITEMSETTINGS_H
