/********************************************************************************
** Form generated from reading UI file 'votingdialogmea.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTINGDIALOGMEA_H
#define UI_VOTINGDIALOGMEA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VotingDialogMEA
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox_3;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLabel *label_4;
    QRadioButton *radioButton_5;
    QDoubleSpinBox *doubleSpinBox;
    QRadioButton *radioButton_4;
    QLabel *label;
    QFrame *line_2;
    QFrame *line;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit;

    void setupUi(QDialog *VotingDialogMEA)
    {
        if (VotingDialogMEA->objectName().isEmpty())
            VotingDialogMEA->setObjectName(QStringLiteral("VotingDialogMEA"));
        VotingDialogMEA->resize(441, 361);
        gridLayoutWidget = new QWidget(VotingDialogMEA);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 421, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        doubleSpinBox_3 = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));

        gridLayout->addWidget(doubleSpinBox_3, 10, 1, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 12, 0, 1, 4);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 10, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 8, 2, 1, 1);

        radioButton_5 = new QRadioButton(gridLayoutWidget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        gridLayout->addWidget(radioButton_5, 1, 0, 1, 4);

        doubleSpinBox = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

        gridLayout->addWidget(doubleSpinBox, 8, 1, 1, 1);

        radioButton_4 = new QRadioButton(gridLayoutWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 2, 0, 1, 4);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(label, 8, 0, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 11, 0, 1, 4);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 7, 0, 1, 4);

        radioButton_6 = new QRadioButton(gridLayoutWidget);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        gridLayout->addWidget(radioButton_6, 5, 0, 1, 4);

        radioButton = new QRadioButton(gridLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout->addWidget(radioButton, 0, 0, 1, 4);

        radioButton_2 = new QRadioButton(gridLayoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 3, 0, 1, 4);

        radioButton_3 = new QRadioButton(gridLayoutWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 4, 0, 1, 4);

        doubleSpinBox_2 = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));

        gridLayout->addWidget(doubleSpinBox_2, 9, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 9, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 9, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 10, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 3, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);

        gridLayout->addWidget(textEdit, 6, 0, 1, 4);


        retranslateUi(VotingDialogMEA);
        QObject::connect(buttonBox, SIGNAL(accepted()), VotingDialogMEA, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VotingDialogMEA, SLOT(reject()));

        QMetaObject::connectSlotsByName(VotingDialogMEA);
    } // setupUi

    void retranslateUi(QDialog *VotingDialogMEA)
    {
        VotingDialogMEA->setWindowTitle(QApplication::translate("VotingDialogMEA", "Dialog", 0));
        label_3->setText(QApplication::translate("VotingDialogMEA", "Enthaltungen:", 0));
        label_4->setText(QApplication::translate("VotingDialogMEA", "MEA", 0));
        radioButton_5->setText(QApplication::translate("VotingDialogMEA", "Beschluss allstimmig angenommen", 0));
        radioButton_4->setText(QApplication::translate("VotingDialogMEA", "Beschluss einstimmig angenommen", 0));
        label->setText(QApplication::translate("VotingDialogMEA", "JA Stimmen:", 0));
        radioButton_6->setText(QApplication::translate("VotingDialogMEA", "manuelle Beschlussformulierung:", 0));
        radioButton->setText(QApplication::translate("VotingDialogMEA", "Beschluss mehrheitlich angenommen", 0));
        radioButton_2->setText(QApplication::translate("VotingDialogMEA", "Beschluss mehrheitlich abgelehnt", 0));
        radioButton_3->setText(QApplication::translate("VotingDialogMEA", "keine Beschlussfassung", 0));
        label_2->setText(QApplication::translate("VotingDialogMEA", "NEIN Stimmen:", 0));
        label_5->setText(QApplication::translate("VotingDialogMEA", "MEA", 0));
        label_6->setText(QApplication::translate("VotingDialogMEA", "MEA", 0));
    } // retranslateUi

};

namespace Ui {
    class VotingDialogMEA: public Ui_VotingDialogMEA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTINGDIALOGMEA_H
