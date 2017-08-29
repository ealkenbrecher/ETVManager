/********************************************************************************
** Form generated from reading UI file 'IssueDetailWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUEDETAILWIDGET_H
#define UI_ISSUEDETAILWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IssueDetailWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *author;
    QSpacerItem *horizontalSpacer;
    QLabel *date;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *notes;

    void setupUi(QWidget *IssueDetailWidget)
    {
        if (IssueDetailWidget->objectName().isEmpty())
            IssueDetailWidget->setObjectName(QStringLiteral("IssueDetailWidget"));
        IssueDetailWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(IssueDetailWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 10, 0, -1);
        author = new QLabel(IssueDetailWidget);
        author->setObjectName(QStringLiteral("author"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        author->setFont(font);

        horizontalLayout->addWidget(author);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        date = new QLabel(IssueDetailWidget);
        date->setObjectName(QStringLiteral("date"));

        horizontalLayout->addWidget(date);


        verticalLayout->addLayout(horizontalLayout);

        frame = new QFrame(IssueDetailWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border: 1px solid rgba(0, 0, 0, 80);\n"
"border-radius: 5px;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        notes = new QLabel(frame);
        notes->setObjectName(QStringLiteral("notes"));
        notes->setStyleSheet(QStringLiteral("border: none;"));
        notes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        notes->setWordWrap(true);
        notes->setOpenExternalLinks(true);
        notes->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(notes);


        verticalLayout->addWidget(frame);


        retranslateUi(IssueDetailWidget);

        QMetaObject::connectSlotsByName(IssueDetailWidget);
    } // setupUi

    void retranslateUi(QWidget *IssueDetailWidget)
    {
        IssueDetailWidget->setWindowTitle(QApplication::translate("IssueDetailWidget", "Form", 0));
        author->setText(QApplication::translate("IssueDetailWidget", "Author", 0));
        date->setText(QApplication::translate("IssueDetailWidget", "Date", 0));
        notes->setText(QApplication::translate("IssueDetailWidget", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class IssueDetailWidget: public Ui_IssueDetailWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUEDETAILWIDGET_H
