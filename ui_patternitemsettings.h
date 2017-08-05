/********************************************************************************
** Form generated from reading UI file 'patternitemsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATTERNITEMSETTINGS_H
#define UI_PATTERNITEMSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatternItemSettings
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QSpinBox *numberOfLines;
    QLabel *label_7;
    QComboBox *wildcards;
    QPushButton *insertWildcard;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mitBeschlussoption;
    QRadioButton *ohneBeschlussoption;
    QLabel *label_11;
    QFormLayout *formLayout;
    QLabel *label;
    QTextEdit *patternName;
    QFrame *line_8;
    QLabel *label_3;
    QTextEdit *header;
    QFrame *line_7;
    QLabel *label_4;
    QTextEdit *description;
    QFrame *line_6;
    QLabel *label_9;
    QTextEdit *suggestion;
    QFrame *line_5;
    QLabel *label_5;
    QTextEdit *suggestion2;
    QFrame *line_4;
    QLabel *label_6;
    QTextEdit *suggestion3;
    QFrame *line_2;
    QDialogButtonBox *buttonBox;
    QLabel *label_10;
    QFrame *line_3;
    QFrame *line;

    void setupUi(QDialog *PatternItemSettings)
    {
        if (PatternItemSettings->objectName().isEmpty())
            PatternItemSettings->setObjectName(QStringLiteral("PatternItemSettings"));
        PatternItemSettings->resize(791, 611);
        gridLayoutWidget = new QWidget(PatternItemSettings);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 771, 591));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        numberOfLines = new QSpinBox(gridLayoutWidget);
        numberOfLines->setObjectName(QStringLiteral("numberOfLines"));
        numberOfLines->setFont(font);
        numberOfLines->setMinimum(1);
        numberOfLines->setValue(5);

        gridLayout_2->addWidget(numberOfLines, 3, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        wildcards = new QComboBox(gridLayoutWidget);
        wildcards->setObjectName(QStringLiteral("wildcards"));

        gridLayout_2->addWidget(wildcards, 1, 1, 1, 1);

        insertWildcard = new QPushButton(gridLayoutWidget);
        insertWildcard->setObjectName(QStringLiteral("insertWildcard"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(insertWildcard->sizePolicy().hasHeightForWidth());
        insertWildcard->setSizePolicy(sizePolicy1);
        insertWildcard->setFont(font);

        gridLayout_2->addWidget(insertWildcard, 1, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        mitBeschlussoption = new QRadioButton(gridLayoutWidget);
        mitBeschlussoption->setObjectName(QStringLiteral("mitBeschlussoption"));
        mitBeschlussoption->setFont(font);

        horizontalLayout->addWidget(mitBeschlussoption);

        ohneBeschlussoption = new QRadioButton(gridLayoutWidget);
        ohneBeschlussoption->setObjectName(QStringLiteral("ohneBeschlussoption"));
        ohneBeschlussoption->setFont(font);

        horizontalLayout->addWidget(ohneBeschlussoption);


        gridLayout_2->addLayout(horizontalLayout, 2, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 3);


        gridLayout->addLayout(gridLayout_2, 4, 0, 1, 2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        patternName = new QTextEdit(gridLayoutWidget);
        patternName->setObjectName(QStringLiteral("patternName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(patternName->sizePolicy().hasHeightForWidth());
        patternName->setSizePolicy(sizePolicy2);
        patternName->setMinimumSize(QSize(300, 0));
        patternName->setMaximumSize(QSize(16777215, 30));
        patternName->setFont(font);
        patternName->setAcceptRichText(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, patternName);

        line_8 = new QFrame(gridLayoutWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(1, QFormLayout::SpanningRole, line_8);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        header = new QTextEdit(gridLayoutWidget);
        header->setObjectName(QStringLiteral("header"));
        sizePolicy2.setHeightForWidth(header->sizePolicy().hasHeightForWidth());
        header->setSizePolicy(sizePolicy2);
        header->setMinimumSize(QSize(300, 0));
        header->setMaximumSize(QSize(16777215, 30));
        header->setFont(font);
        header->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        header->setAcceptRichText(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, header);

        line_7 = new QFrame(gridLayoutWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(3, QFormLayout::SpanningRole, line_7);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        description = new QTextEdit(gridLayoutWidget);
        description->setObjectName(QStringLiteral("description"));
        sizePolicy2.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy2);
        description->setMinimumSize(QSize(300, 60));
        description->setMaximumSize(QSize(16777215, 60));
        description->setFont(font);
        description->setAcceptRichText(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, description);

        line_6 = new QFrame(gridLayoutWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(5, QFormLayout::SpanningRole, line_6);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_9);

        suggestion = new QTextEdit(gridLayoutWidget);
        suggestion->setObjectName(QStringLiteral("suggestion"));
        sizePolicy2.setHeightForWidth(suggestion->sizePolicy().hasHeightForWidth());
        suggestion->setSizePolicy(sizePolicy2);
        suggestion->setMinimumSize(QSize(300, 60));
        suggestion->setMaximumSize(QSize(16777215, 60));
        suggestion->setFont(font);
        suggestion->setAcceptRichText(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, suggestion);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(7, QFormLayout::SpanningRole, line_5);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_5);

        suggestion2 = new QTextEdit(gridLayoutWidget);
        suggestion2->setObjectName(QStringLiteral("suggestion2"));
        sizePolicy2.setHeightForWidth(suggestion2->sizePolicy().hasHeightForWidth());
        suggestion2->setSizePolicy(sizePolicy2);
        suggestion2->setMinimumSize(QSize(300, 60));
        suggestion2->setMaximumSize(QSize(16777215, 60));
        suggestion2->setFont(font);
        suggestion2->setAcceptRichText(false);

        formLayout->setWidget(8, QFormLayout::FieldRole, suggestion2);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(9, QFormLayout::SpanningRole, line_4);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_6);

        suggestion3 = new QTextEdit(gridLayoutWidget);
        suggestion3->setObjectName(QStringLiteral("suggestion3"));
        sizePolicy2.setHeightForWidth(suggestion3->sizePolicy().hasHeightForWidth());
        suggestion3->setSizePolicy(sizePolicy2);
        suggestion3->setMinimumSize(QSize(300, 60));
        suggestion3->setMaximumSize(QSize(16777215, 60));
        suggestion3->setFont(font);
        suggestion3->setAcceptRichText(false);

        formLayout->setWidget(10, QFormLayout::FieldRole, suggestion3);


        gridLayout->addLayout(formLayout, 2, 0, 1, 2);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 0, 1, 2);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 2);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 2);


        retranslateUi(PatternItemSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), PatternItemSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PatternItemSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(PatternItemSettings);
    } // setupUi

    void retranslateUi(QDialog *PatternItemSettings)
    {
        PatternItemSettings->setWindowTitle(QApplication::translate("PatternItemSettings", "Dialog", 0));
        label_8->setText(QApplication::translate("PatternItemSettings", "Beschlussart", 0));
        label_7->setText(QApplication::translate("PatternItemSettings", "Anzahl Leerzeilen Protkollvordruck", 0));
        insertWildcard->setText(QApplication::translate("PatternItemSettings", "Platzhalter Einf\303\274gen", 0));
        label_2->setText(QApplication::translate("PatternItemSettings", "Platzhalter einf\303\274gen:", 0));
        mitBeschlussoption->setText(QApplication::translate("PatternItemSettings", "Versammlung", 0));
        ohneBeschlussoption->setText(QApplication::translate("PatternItemSettings", "Ohne (Keine Beschlussfassung m\303\266glich!)", 0));
        label_11->setText(QApplication::translate("PatternItemSettings", "Zus\303\244tzliche Optionen", 0));
        label->setText(QApplication::translate("PatternItemSettings", "Vorlagenbezeichnung", 0));
        label_3->setText(QApplication::translate("PatternItemSettings", "\303\234berschrift", 0));
        label_4->setText(QApplication::translate("PatternItemSettings", "Beschreibung", 0));
        label_9->setText(QApplication::translate("PatternItemSettings", "Beschlussvorschlag", 0));
        label_5->setText(QApplication::translate("PatternItemSettings", "Beschlussvorschlag 2", 0));
        label_6->setText(QApplication::translate("PatternItemSettings", "Beschlussvorschlag 3", 0));
        label_10->setText(QApplication::translate("PatternItemSettings", "Textvorlage Tagesordnungspunkt - bearbeiten", 0));
    } // retranslateUi

};

namespace Ui {
    class PatternItemSettings: public Ui_PatternItemSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATTERNITEMSETTINGS_H
