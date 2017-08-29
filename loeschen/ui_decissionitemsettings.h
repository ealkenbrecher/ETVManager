/********************************************************************************
** Form generated from reading UI file 'decissionitemsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECISSIONITEMSETTINGS_H
#define UI_DECISSIONITEMSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DecissionItemSettings
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QFrame *line_2;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line;
    QTextEdit *description;
    QTextEdit *header;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;
    QTextEdit *decissionText;
    QLabel *label_4;
    QTextEdit *decissionProclamation;
    QDoubleSpinBox *yes;
    QDoubleSpinBox *no;
    QDoubleSpinBox *abstention;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mitBeschlussoption;
    QRadioButton *schriftlicherBeschluss;
    QRadioButton *ohneBeschlussoption;
    QFrame *line_6;
    QLabel *label_9;

    void setupUi(QDialog *DecissionItemSettings)
    {
        if (DecissionItemSettings->objectName().isEmpty())
            DecissionItemSettings->setObjectName(QStringLiteral("DecissionItemSettings"));
        DecissionItemSettings->resize(751, 511);
        gridLayoutWidget = new QWidget(DecissionItemSettings);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 731, 491));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 5, 0, 1, 2);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 9, 0, 1, 2);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 13, 0, 1, 2);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 2);

        description = new QTextEdit(gridLayoutWidget);
        description->setObjectName(QStringLiteral("description"));
        description->setAcceptRichText(false);

        gridLayout->addWidget(description, 4, 1, 1, 1);

        header = new QTextEdit(gridLayoutWidget);
        header->setObjectName(QStringLiteral("header"));
        header->setMaximumSize(QSize(16777215, 40));
        header->setAcceptRichText(false);

        gridLayout->addWidget(header, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 11, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 12, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 10, 0, 1, 1);

        decissionText = new QTextEdit(gridLayoutWidget);
        decissionText->setObjectName(QStringLiteral("decissionText"));
        decissionText->setAcceptRichText(false);

        gridLayout->addWidget(decissionText, 6, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        decissionProclamation = new QTextEdit(gridLayoutWidget);
        decissionProclamation->setObjectName(QStringLiteral("decissionProclamation"));
        decissionProclamation->setAcceptRichText(false);

        gridLayout->addWidget(decissionProclamation, 8, 1, 1, 1);

        yes = new QDoubleSpinBox(gridLayoutWidget);
        yes->setObjectName(QStringLiteral("yes"));
        yes->setMaximum(99999);

        gridLayout->addWidget(yes, 10, 1, 1, 1);

        no = new QDoubleSpinBox(gridLayoutWidget);
        no->setObjectName(QStringLiteral("no"));
        no->setMaximum(99999);

        gridLayout->addWidget(no, 11, 1, 1, 1);

        abstention = new QDoubleSpinBox(gridLayoutWidget);
        abstention->setObjectName(QStringLiteral("abstention"));
        abstention->setMaximum(99999);

        gridLayout->addWidget(abstention, 12, 1, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 16, 0, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 7, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        mitBeschlussoption = new QRadioButton(gridLayoutWidget);
        mitBeschlussoption->setObjectName(QStringLiteral("mitBeschlussoption"));
        mitBeschlussoption->setEnabled(false);
        mitBeschlussoption->setFont(font);

        horizontalLayout->addWidget(mitBeschlussoption);

        schriftlicherBeschluss = new QRadioButton(gridLayoutWidget);
        schriftlicherBeschluss->setObjectName(QStringLiteral("schriftlicherBeschluss"));
        schriftlicherBeschluss->setEnabled(false);
        schriftlicherBeschluss->setFont(font);

        horizontalLayout->addWidget(schriftlicherBeschluss);

        ohneBeschlussoption = new QRadioButton(gridLayoutWidget);
        ohneBeschlussoption->setObjectName(QStringLiteral("ohneBeschlussoption"));
        ohneBeschlussoption->setEnabled(false);
        ohneBeschlussoption->setFont(font);

        horizontalLayout->addWidget(ohneBeschlussoption);


        gridLayout->addLayout(horizontalLayout, 14, 1, 1, 1);

        line_6 = new QFrame(gridLayoutWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 1, 0, 1, 2);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 14, 0, 1, 1);


        retranslateUi(DecissionItemSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), DecissionItemSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DecissionItemSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(DecissionItemSettings);
    } // setupUi

    void retranslateUi(QDialog *DecissionItemSettings)
    {
        DecissionItemSettings->setWindowTitle(QApplication::translate("DecissionItemSettings", "Dialog", 0));
        label_2->setText(QApplication::translate("DecissionItemSettings", "\303\234berschrift", 0));
        label_3->setText(QApplication::translate("DecissionItemSettings", "Beschreibung", 0));
        label_7->setText(QApplication::translate("DecissionItemSettings", "Stimmen/MEA Nein", 0));
        label_5->setText(QApplication::translate("DecissionItemSettings", "Beschlussverk\303\274ndung", 0));
        label_8->setText(QApplication::translate("DecissionItemSettings", "Stimmen/MEA Enthaltung", 0));
        label_6->setText(QApplication::translate("DecissionItemSettings", "Stimmen/MEA Ja", 0));
        label_4->setText(QApplication::translate("DecissionItemSettings", "Beschlussformulierung", 0));
        label->setText(QApplication::translate("DecissionItemSettings", "Beschluss editieren", 0));
        mitBeschlussoption->setText(QApplication::translate("DecissionItemSettings", "Versammlung", 0));
        schriftlicherBeschluss->setText(QApplication::translate("DecissionItemSettings", "Schriflticher Beschluss", 0));
        ohneBeschlussoption->setText(QApplication::translate("DecissionItemSettings", "Ohne beschluss", 0));
        label_9->setText(QApplication::translate("DecissionItemSettings", "Beschlussart", 0));
    } // retranslateUi

};

namespace Ui {
    class DecissionItemSettings: public Ui_DecissionItemSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECISSIONITEMSETTINGS_H
