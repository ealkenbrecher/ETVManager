/********************************************************************************
** Form generated from reading UI file 'editpatterndialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPATTERNDIALOG_H
#define UI_EDITPATTERNDIALOG_H

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

class Ui_EditPatternDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *suggestion3;
    QLabel *label_9;
    QTextEdit *suggestion;
    QLabel *label_5;
    QTextEdit *description;
    QLabel *label_6;
    QTextEdit *header;
    QTextEdit *suggestion2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;
    QComboBox *wildcards;
    QPushButton *pushButton;
    QLabel *label;
    QFrame *line;

    void setupUi(QDialog *EditPatternDialog)
    {
        if (EditPatternDialog->objectName().isEmpty())
            EditPatternDialog->setObjectName(QStringLiteral("EditPatternDialog"));
        EditPatternDialog->resize(751, 721);
        gridLayoutWidget = new QWidget(EditPatternDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 731, 701));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        suggestion3 = new QTextEdit(gridLayoutWidget);
        suggestion3->setObjectName(QStringLiteral("suggestion3"));
        suggestion3->setMinimumSize(QSize(0, 100));
        suggestion3->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(suggestion3, 8, 0, 1, 2);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        suggestion = new QTextEdit(gridLayoutWidget);
        suggestion->setObjectName(QStringLiteral("suggestion"));
        suggestion->setMinimumSize(QSize(0, 100));
        suggestion->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(suggestion, 4, 0, 1, 2);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        description = new QTextEdit(gridLayoutWidget);
        description->setObjectName(QStringLiteral("description"));
        description->setMinimumSize(QSize(0, 100));
        description->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(description, 6, 0, 1, 2);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 0, 1, 2);

        header = new QTextEdit(gridLayoutWidget);
        header->setObjectName(QStringLiteral("header"));
        header->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(header, 2, 0, 1, 2);

        suggestion2 = new QTextEdit(gridLayoutWidget);
        suggestion2->setObjectName(QStringLiteral("suggestion2"));
        suggestion2->setMinimumSize(QSize(0, 100));
        suggestion2->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(suggestion2, 10, 0, 1, 2);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 14, 0, 1, 2);

        wildcards = new QComboBox(gridLayoutWidget);
        wildcards->setObjectName(QStringLiteral("wildcards"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(wildcards->sizePolicy().hasHeightForWidth());
        wildcards->setSizePolicy(sizePolicy2);
        wildcards->setFont(font);

        gridLayout->addWidget(wildcards, 12, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 12, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        gridLayout->addWidget(label, 11, 0, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 13, 0, 1, 2);


        retranslateUi(EditPatternDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditPatternDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditPatternDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditPatternDialog);
    } // setupUi

    void retranslateUi(QDialog *EditPatternDialog)
    {
        EditPatternDialog->setWindowTitle(QApplication::translate("EditPatternDialog", "Dialog", 0));
        label_9->setText(QApplication::translate("EditPatternDialog", "Beschlussvorschlag 2", 0));
        label_5->setText(QApplication::translate("EditPatternDialog", "Beschlussvorschlag 3", 0));
        label_6->setText(QApplication::translate("EditPatternDialog", "Vorlage Tagesordnungspunkt bearbeiten", 0));
        label_2->setText(QApplication::translate("EditPatternDialog", "\303\234berschrift", 0));
        label_3->setText(QApplication::translate("EditPatternDialog", "Beschreibung", 0));
        label_4->setText(QApplication::translate("EditPatternDialog", "Beschlussvorschlag", 0));
        pushButton->setText(QApplication::translate("EditPatternDialog", "Platzhalter Einf\303\274gen", 0));
        label->setText(QApplication::translate("EditPatternDialog", "Platzhalter einf\303\274gen", 0));
    } // retranslateUi

};

namespace Ui {
    class EditPatternDialog: public Ui_EditPatternDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPATTERNDIALOG_H
