/********************************************************************************
** Form generated from reading UI file 'votingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTINGDIALOG_H
#define UI_VOTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VotingDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QRadioButton *voteManual;
    QTextEdit *voteManualTextEdit;
    QRadioButton *voteNoVote;
    QRadioButton *voteMajorityAccepted;
    QRadioButton *voteMajorityAll;
    QRadioButton *voteMajorityConcordant;
    QVBoxLayout *spinBoxLabelLayout;
    QLabel *label_2;
    QRadioButton *voteMajorityRejected;
    QVBoxLayout *spinBoxLayout;

    void setupUi(QDialog *VotingDialog)
    {
        if (VotingDialog->objectName().isEmpty())
            VotingDialog->setObjectName(QStringLiteral("VotingDialog"));
        VotingDialog->resize(915, 718);
        gridLayoutWidget = new QWidget(VotingDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 891, 691));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 20, 0, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 23, 0, 1, 3);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(label, 19, 0, 1, 1);

        voteManual = new QRadioButton(gridLayoutWidget);
        voteManual->setObjectName(QStringLiteral("voteManual"));
        sizePolicy1.setHeightForWidth(voteManual->sizePolicy().hasHeightForWidth());
        voteManual->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(voteManual, 5, 0, 1, 1);

        voteManualTextEdit = new QTextEdit(gridLayoutWidget);
        voteManualTextEdit->setObjectName(QStringLiteral("voteManualTextEdit"));
        voteManualTextEdit->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(voteManualTextEdit->sizePolicy().hasHeightForWidth());
        voteManualTextEdit->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(voteManualTextEdit, 6, 0, 1, 3);

        voteNoVote = new QRadioButton(gridLayoutWidget);
        voteNoVote->setObjectName(QStringLiteral("voteNoVote"));
        sizePolicy1.setHeightForWidth(voteNoVote->sizePolicy().hasHeightForWidth());
        voteNoVote->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(voteNoVote, 4, 0, 1, 1);

        voteMajorityAccepted = new QRadioButton(gridLayoutWidget);
        voteMajorityAccepted->setObjectName(QStringLiteral("voteMajorityAccepted"));
        sizePolicy1.setHeightForWidth(voteMajorityAccepted->sizePolicy().hasHeightForWidth());
        voteMajorityAccepted->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(voteMajorityAccepted, 1, 0, 1, 1);

        voteMajorityAll = new QRadioButton(gridLayoutWidget);
        voteMajorityAll->setObjectName(QStringLiteral("voteMajorityAll"));
        sizePolicy1.setHeightForWidth(voteMajorityAll->sizePolicy().hasHeightForWidth());
        voteMajorityAll->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(voteMajorityAll, 3, 0, 1, 1);

        voteMajorityConcordant = new QRadioButton(gridLayoutWidget);
        voteMajorityConcordant->setObjectName(QStringLiteral("voteMajorityConcordant"));
        sizePolicy1.setHeightForWidth(voteMajorityConcordant->sizePolicy().hasHeightForWidth());
        voteMajorityConcordant->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(voteMajorityConcordant, 0, 0, 1, 1);

        spinBoxLabelLayout = new QVBoxLayout();
        spinBoxLabelLayout->setObjectName(QStringLiteral("spinBoxLabelLayout"));

        gridLayout_2->addLayout(spinBoxLabelLayout, 18, 1, 3, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 18, 0, 1, 1);

        voteMajorityRejected = new QRadioButton(gridLayoutWidget);
        voteMajorityRejected->setObjectName(QStringLiteral("voteMajorityRejected"));
        sizePolicy1.setHeightForWidth(voteMajorityRejected->sizePolicy().hasHeightForWidth());
        voteMajorityRejected->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(voteMajorityRejected, 2, 0, 1, 1);

        spinBoxLayout = new QVBoxLayout();
        spinBoxLayout->setObjectName(QStringLiteral("spinBoxLayout"));

        gridLayout_2->addLayout(spinBoxLayout, 18, 2, 3, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(VotingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VotingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VotingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(VotingDialog);
    } // setupUi

    void retranslateUi(QDialog *VotingDialog)
    {
        VotingDialog->setWindowTitle(QApplication::translate("VotingDialog", "Dialog", 0));
        label_3->setText(QApplication::translate("VotingDialog", "Enthaltungen:", 0));
        label->setText(QApplication::translate("VotingDialog", "JA Stimmen:", 0));
        voteManual->setText(QApplication::translate("VotingDialog", "manuelle Beschlussformulierung:", 0));
        voteNoVote->setText(QApplication::translate("VotingDialog", "keine Beschlussfassung", 0));
        voteMajorityAccepted->setText(QApplication::translate("VotingDialog", "Beschluss mehrheitlich angenommen", 0));
        voteMajorityAll->setText(QApplication::translate("VotingDialog", "Beschluss allstimmig angenommen", 0));
        voteMajorityConcordant->setText(QApplication::translate("VotingDialog", "Beschluss einstimmig angenommen", 0));
        label_2->setText(QApplication::translate("VotingDialog", "NEIN Stimmen:", 0));
        voteMajorityRejected->setText(QApplication::translate("VotingDialog", "Beschluss mehrheitlich abgelehnt", 0));
    } // retranslateUi

};

namespace Ui {
    class VotingDialog: public Ui_VotingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTINGDIALOG_H
