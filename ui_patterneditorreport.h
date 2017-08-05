/********************************************************************************
** Form generated from reading UI file 'patterneditorreport.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATTERNEDITORREPORT_H
#define UI_PATTERNEDITORREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patternEditorReport
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *editEntry;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QTableView *tablePatterns;
    QFrame *line_3;
    QLabel *label_2;
    QFrame *line;

    void setupUi(QDialog *patternEditorReport)
    {
        if (patternEditorReport->objectName().isEmpty())
            patternEditorReport->setObjectName(QStringLiteral("patternEditorReport"));
        patternEditorReport->resize(761, 401);
        gridLayoutWidget_2 = new QWidget(patternEditorReport);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 741, 381));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        editEntry = new QPushButton(gridLayoutWidget_2);
        editEntry->setObjectName(QStringLiteral("editEntry"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editEntry->sizePolicy().hasHeightForWidth());
        editEntry->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(10);
        editEntry->setFont(font1);

        horizontalLayout->addWidget(editEntry);

        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 5, 0, 1, 2);

        buttonBox = new QDialogButtonBox(gridLayoutWidget_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 7, 0, 1, 1);

        tablePatterns = new QTableView(gridLayoutWidget_2);
        tablePatterns->setObjectName(QStringLiteral("tablePatterns"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tablePatterns->sizePolicy().hasHeightForWidth());
        tablePatterns->setSizePolicy(sizePolicy2);
        tablePatterns->setMinimumSize(QSize(0, 250));
        tablePatterns->setFont(font1);
        tablePatterns->setContextMenuPolicy(Qt::CustomContextMenu);
        tablePatterns->setDragEnabled(true);
        tablePatterns->setAlternatingRowColors(true);
        tablePatterns->setSelectionMode(QAbstractItemView::SingleSelection);
        tablePatterns->setSelectionBehavior(QAbstractItemView::SelectRows);
        tablePatterns->horizontalHeader()->setCascadingSectionResizes(true);
        tablePatterns->horizontalHeader()->setStretchLastSection(true);
        tablePatterns->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tablePatterns, 3, 0, 2, 2);

        line_3 = new QFrame(gridLayoutWidget_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 1, 0, 1, 2);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font1);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        line = new QFrame(gridLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 6, 0, 1, 1);


        retranslateUi(patternEditorReport);
        QObject::connect(buttonBox, SIGNAL(accepted()), patternEditorReport, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), patternEditorReport, SLOT(reject()));

        QMetaObject::connectSlotsByName(patternEditorReport);
    } // setupUi

    void retranslateUi(QDialog *patternEditorReport)
    {
        patternEditorReport->setWindowTitle(QApplication::translate("patternEditorReport", "Dialog", 0));
        label_6->setText(QApplication::translate("patternEditorReport", "Vorlagen Editor", 0));
        editEntry->setText(QApplication::translate("patternEditorReport", "Vorlage bearbeiten", 0));
        label_2->setText(QApplication::translate("patternEditorReport", "Verf\303\274gbare Vorlagen:", 0));
    } // retranslateUi

};

namespace Ui {
    class patternEditorReport: public Ui_patternEditorReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATTERNEDITORREPORT_H
