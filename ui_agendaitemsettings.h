/********************************************************************************
** Form generated from reading UI file 'agendaitemsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENDAITEMSETTINGS_H
#define UI_AGENDAITEMSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AgendaItemSettings
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *suggestion3;
    QLabel *label_3;
    QFrame *line;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_7;
    QComboBox *patterns;
    QLabel *label_4;
    QLabel *label;
    QPushButton *insertPattern;
    QLabel *label_2;
    QTextEdit *description;
    QTextEdit *header;
    QTextEdit *suggestion;
    QTextEdit *suggestion2;
    QDialogButtonBox *buttonBox;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mitBeschlussoption;
    QRadioButton *ohneBeschlussoption;

    void setupUi(QDialog *AgendaItemSettings)
    {
        if (AgendaItemSettings->objectName().isEmpty())
            AgendaItemSettings->setObjectName(QStringLiteral("AgendaItemSettings"));
        AgendaItemSettings->resize(671, 631);
        gridLayoutWidget = new QWidget(AgendaItemSettings);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 650, 611));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        suggestion3 = new QTextEdit(gridLayoutWidget);
        suggestion3->setObjectName(QStringLiteral("suggestion3"));
        suggestion3->setMinimumSize(QSize(0, 100));
        suggestion3->setMaximumSize(QSize(16777215, 100));
        suggestion3->setAcceptRichText(false);

        gridLayout->addWidget(suggestion3, 7, 1, 2, 2);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 9, 0, 1, 3);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 11, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        patterns = new QComboBox(gridLayoutWidget);
        patterns->setObjectName(QStringLiteral("patterns"));

        gridLayout->addWidget(patterns, 11, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        insertPattern = new QPushButton(gridLayoutWidget);
        insertPattern->setObjectName(QStringLiteral("insertPattern"));
        sizePolicy.setHeightForWidth(insertPattern->sizePolicy().hasHeightForWidth());
        insertPattern->setSizePolicy(sizePolicy);

        gridLayout->addWidget(insertPattern, 11, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        description = new QTextEdit(gridLayoutWidget);
        description->setObjectName(QStringLiteral("description"));
        description->setMinimumSize(QSize(0, 100));
        description->setMaximumSize(QSize(16777215, 100));
        description->setAcceptRichText(false);

        gridLayout->addWidget(description, 3, 1, 1, 2);

        header = new QTextEdit(gridLayoutWidget);
        header->setObjectName(QStringLiteral("header"));
        header->setMaximumSize(QSize(16777215, 40));
        header->setAcceptRichText(false);

        gridLayout->addWidget(header, 2, 1, 1, 2);

        suggestion = new QTextEdit(gridLayoutWidget);
        suggestion->setObjectName(QStringLiteral("suggestion"));
        suggestion->setMinimumSize(QSize(0, 100));
        suggestion->setMaximumSize(QSize(16777215, 100));
        suggestion->setAcceptRichText(false);

        gridLayout->addWidget(suggestion, 4, 1, 1, 2);

        suggestion2 = new QTextEdit(gridLayoutWidget);
        suggestion2->setObjectName(QStringLiteral("suggestion2"));
        suggestion2->setMinimumSize(QSize(0, 100));
        suggestion2->setMaximumSize(QSize(16777215, 100));
        suggestion2->setAcceptRichText(false);

        gridLayout->addWidget(suggestion2, 5, 1, 2, 2);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 19, 0, 1, 3);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 18, 0, 1, 3);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 3);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_10, 15, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        mitBeschlussoption = new QRadioButton(gridLayoutWidget);
        mitBeschlussoption->setObjectName(QStringLiteral("mitBeschlussoption"));
        mitBeschlussoption->setChecked(true);

        horizontalLayout->addWidget(mitBeschlussoption);

        ohneBeschlussoption = new QRadioButton(gridLayoutWidget);
        ohneBeschlussoption->setObjectName(QStringLiteral("ohneBeschlussoption"));
        ohneBeschlussoption->setChecked(false);

        horizontalLayout->addWidget(ohneBeschlussoption);


        gridLayout->addLayout(horizontalLayout, 15, 1, 1, 2);

        suggestion->raise();
        suggestion2->raise();
        suggestion3->raise();
        description->raise();
        label_2->raise();
        insertPattern->raise();
        label->raise();
        label_4->raise();
        patterns->raise();
        label_7->raise();
        label_8->raise();
        label_5->raise();
        label_6->raise();
        label_9->raise();
        line->raise();
        label_3->raise();
        header->raise();
        buttonBox->raise();
        line_2->raise();
        line_3->raise();
        label_10->raise();

        retranslateUi(AgendaItemSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), AgendaItemSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AgendaItemSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(AgendaItemSettings);
    } // setupUi

    void retranslateUi(QDialog *AgendaItemSettings)
    {
        AgendaItemSettings->setWindowTitle(QApplication::translate("AgendaItemSettings", "Dialog", 0));
        label_3->setText(QApplication::translate("AgendaItemSettings", "Beschreibung", 0));
        label_9->setText(QApplication::translate("AgendaItemSettings", "Aus Vorlage w\303\244hlen", 0));
        label_6->setText(QApplication::translate("AgendaItemSettings", "Beschlussvorschlag 3", 0));
        label_5->setText(QApplication::translate("AgendaItemSettings", "Beschlussvorschlag 2", 0));
        label_8->setText(QApplication::translate("AgendaItemSettings", "(optional)", 0));
        label_7->setText(QApplication::translate("AgendaItemSettings", "(optional)", 0));
        label_4->setText(QApplication::translate("AgendaItemSettings", "Beschlussvorschlag", 0));
        label->setText(QApplication::translate("AgendaItemSettings", "Tagesordnungspunkt bearbeiten", 0));
        insertPattern->setText(QApplication::translate("AgendaItemSettings", "Vorlage laden", 0));
        label_2->setText(QApplication::translate("AgendaItemSettings", "\303\234berschrift", 0));
        label_10->setText(QApplication::translate("AgendaItemSettings", "Beschlussoption", 0));
        mitBeschlussoption->setText(QApplication::translate("AgendaItemSettings", "Versammlung", 0));
        ohneBeschlussoption->setText(QApplication::translate("AgendaItemSettings", "Ohne (Keine Beschlussfassung m\303\266glich!)", 0));
    } // retranslateUi

};

namespace Ui {
    class AgendaItemSettings: public Ui_AgendaItemSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENDAITEMSETTINGS_H
