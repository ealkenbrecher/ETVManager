/********************************************************************************
** Form generated from reading UI file 'patterneditor.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATTERNEDITOR_H
#define UI_PATTERNEDITOR_H

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

class Ui_PatternEditor
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QFrame *line_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *deleteEntry;
    QPushButton *editEntry;
    QPushButton *addEntry;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QDialogButtonBox *buttonBox;
    QTableView *tablePatterns;
    QFrame *line;

    void setupUi(QDialog *PatternEditor)
    {
        if (PatternEditor->objectName().isEmpty())
            PatternEditor->setObjectName(QStringLiteral("PatternEditor"));
        PatternEditor->resize(830, 580);
        gridLayoutWidget_2 = new QWidget(PatternEditor);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 811, 561));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        line_3 = new QFrame(gridLayoutWidget_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 1, 0, 1, 2);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        deleteEntry = new QPushButton(gridLayoutWidget_2);
        deleteEntry->setObjectName(QStringLiteral("deleteEntry"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deleteEntry->sizePolicy().hasHeightForWidth());
        deleteEntry->setSizePolicy(sizePolicy1);
        deleteEntry->setFont(font);

        horizontalLayout->addWidget(deleteEntry);

        editEntry = new QPushButton(gridLayoutWidget_2);
        editEntry->setObjectName(QStringLiteral("editEntry"));
        sizePolicy1.setHeightForWidth(editEntry->sizePolicy().hasHeightForWidth());
        editEntry->setSizePolicy(sizePolicy1);
        editEntry->setFont(font);

        horizontalLayout->addWidget(editEntry);

        addEntry = new QPushButton(gridLayoutWidget_2);
        addEntry->setObjectName(QStringLiteral("addEntry"));
        sizePolicy1.setHeightForWidth(addEntry->sizePolicy().hasHeightForWidth());
        addEntry->setSizePolicy(sizePolicy1);
        addEntry->setFont(font);

        horizontalLayout->addWidget(addEntry);

        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 5, 0, 1, 2);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(gridLayoutWidget_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 7, 0, 1, 2);

        tablePatterns = new QTableView(gridLayoutWidget_2);
        tablePatterns->setObjectName(QStringLiteral("tablePatterns"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tablePatterns->sizePolicy().hasHeightForWidth());
        tablePatterns->setSizePolicy(sizePolicy2);
        tablePatterns->setMinimumSize(QSize(0, 420));
        tablePatterns->setFont(font);
        tablePatterns->setContextMenuPolicy(Qt::CustomContextMenu);
        tablePatterns->setDragEnabled(true);
        tablePatterns->setAlternatingRowColors(true);
        tablePatterns->horizontalHeader()->setCascadingSectionResizes(true);
        tablePatterns->horizontalHeader()->setStretchLastSection(true);
        tablePatterns->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tablePatterns, 3, 0, 2, 2);

        line = new QFrame(gridLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 6, 0, 1, 2);


        retranslateUi(PatternEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), PatternEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PatternEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(PatternEditor);
    } // setupUi

    void retranslateUi(QDialog *PatternEditor)
    {
        PatternEditor->setWindowTitle(QApplication::translate("PatternEditor", "Dialog", 0));
        label_2->setText(QApplication::translate("PatternEditor", "Verf\303\274gbare Vorlagen:", 0));
        deleteEntry->setText(QApplication::translate("PatternEditor", "Vorlage l\303\266schen", 0));
        editEntry->setText(QApplication::translate("PatternEditor", "Vorlage bearbeiten", 0));
        addEntry->setText(QApplication::translate("PatternEditor", "Vorlage hinzuf\303\274gen", 0));
        label_6->setText(QApplication::translate("PatternEditor", "Vorlagen Editor", 0));
    } // retranslateUi

};

namespace Ui {
    class PatternEditor: public Ui_PatternEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATTERNEDITOR_H
