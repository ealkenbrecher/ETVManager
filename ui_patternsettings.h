/********************************************************************************
** Form generated from reading UI file 'patternsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATTERNSETTINGS_H
#define UI_PATTERNSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patternSettings
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QFrame *line_2;
    QTextEdit *suggestion2;
    QLabel *label_6;
    QTextEdit *description;
    QTextEdit *suggestion3;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_9;
    QTextEdit *suggestion;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_3;
    QComboBox *wildcards;
    QPushButton *pushButton;
    QLabel *label_10;
    QTextEdit *header;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *patternSettings)
    {
        if (patternSettings->objectName().isEmpty())
            patternSettings->setObjectName(QStringLiteral("patternSettings"));
        patternSettings->resize(641, 591);
        gridLayoutWidget_2 = new QWidget(patternSettings);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 621, 571));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        line_2 = new QFrame(gridLayoutWidget_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 11, 0, 1, 3);

        suggestion2 = new QTextEdit(gridLayoutWidget_2);
        suggestion2->setObjectName(QStringLiteral("suggestion2"));
        suggestion2->setMinimumSize(QSize(0, 100));
        suggestion2->setMaximumSize(QSize(16777215, 100));

        gridLayout_2->addWidget(suggestion2, 4, 1, 2, 2);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        description = new QTextEdit(gridLayoutWidget_2);
        description->setObjectName(QStringLiteral("description"));
        description->setMinimumSize(QSize(0, 100));
        description->setMaximumSize(QSize(16777215, 100));

        gridLayout_2->addWidget(description, 2, 1, 1, 2);

        suggestion3 = new QTextEdit(gridLayoutWidget_2);
        suggestion3->setObjectName(QStringLiteral("suggestion3"));
        suggestion3->setMinimumSize(QSize(0, 100));
        suggestion3->setMaximumSize(QSize(16777215, 100));

        gridLayout_2->addWidget(suggestion3, 6, 1, 2, 2);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 9, 0, 1, 1);

        line = new QFrame(gridLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 8, 0, 1, 3);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        suggestion = new QTextEdit(gridLayoutWidget_2);
        suggestion->setObjectName(QStringLiteral("suggestion"));
        suggestion->setMinimumSize(QSize(0, 100));
        suggestion->setMaximumSize(QSize(16777215, 100));

        gridLayout_2->addWidget(suggestion, 3, 1, 1, 2);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_8, 7, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        wildcards = new QComboBox(gridLayoutWidget_2);
        wildcards->setObjectName(QStringLiteral("wildcards"));

        gridLayout_2->addWidget(wildcards, 9, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton, 9, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 0, 0, 1, 3);

        header = new QTextEdit(gridLayoutWidget_2);
        header->setObjectName(QStringLiteral("header"));
        header->setMaximumSize(QSize(16777215, 40));

        gridLayout_2->addWidget(header, 1, 1, 1, 2);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 10, 0, 1, 3);


        retranslateUi(patternSettings);

        QMetaObject::connectSlotsByName(patternSettings);
    } // setupUi

    void retranslateUi(QDialog *patternSettings)
    {
        patternSettings->setWindowTitle(QApplication::translate("patternSettings", "Dialog", 0));
        label_5->setText(QApplication::translate("patternSettings", "Beschlussvorschlag 2", 0));
        label_6->setText(QApplication::translate("patternSettings", "Beschlussvorschlag 3", 0));
        label_2->setText(QApplication::translate("patternSettings", "Platzhalter einf\303\274gen:", 0));
        label_9->setText(QApplication::translate("patternSettings", "Beschlussvorschlag", 0));
        label_8->setText(QApplication::translate("patternSettings", "(optional)", 0));
        label_7->setText(QApplication::translate("patternSettings", "(optional)", 0));
        label_3->setText(QApplication::translate("patternSettings", "\303\234berschrift", 0));
        pushButton->setText(QApplication::translate("patternSettings", "Platzhalter Einf\303\274gen", 0));
        label_10->setText(QApplication::translate("patternSettings", "Textvorlage Tagesordnungspunkt - bearbeiten", 0));
        label_4->setText(QApplication::translate("patternSettings", "Beschreibung", 0));
    } // retranslateUi

};

namespace Ui {
    class patternSettings: public Ui_patternSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATTERNSETTINGS_H
