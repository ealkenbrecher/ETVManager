/********************************************************************************
** Form generated from reading UI file 'decissionlibraryeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECISSIONLIBRARYEDITDIALOG_H
#define UI_DECISSIONLIBRARYEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DecissionLibraryEditDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QTextEdit *courtOrder;
    QLabel *label;
    QCheckBox *addDescription;
    QDialogButtonBox *buttonBox;
    QTextEdit *annotation;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mitBeschlussoption;
    QRadioButton *schriftlicherBeschluss;
    QRadioButton *ohneBeschlussoption;

    void setupUi(QDialog *DecissionLibraryEditDialog)
    {
        if (DecissionLibraryEditDialog->objectName().isEmpty())
            DecissionLibraryEditDialog->setObjectName(QStringLiteral("DecissionLibraryEditDialog"));
        DecissionLibraryEditDialog->resize(441, 311);
        gridLayoutWidget = new QWidget(DecissionLibraryEditDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 421, 291));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(10);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        courtOrder = new QTextEdit(gridLayoutWidget);
        courtOrder->setObjectName(QStringLiteral("courtOrder"));
        courtOrder->setAcceptRichText(false);

        gridLayout->addWidget(courtOrder, 6, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        addDescription = new QCheckBox(gridLayoutWidget);
        addDescription->setObjectName(QStringLiteral("addDescription"));
        addDescription->setFont(font);

        gridLayout->addWidget(addDescription, 7, 0, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 11, 0, 1, 1);

        annotation = new QTextEdit(gridLayoutWidget);
        annotation->setObjectName(QStringLiteral("annotation"));
        annotation->setMaximumSize(QSize(16777215, 40));
        annotation->setAcceptRichText(false);

        gridLayout->addWidget(annotation, 4, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

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


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 1);


        retranslateUi(DecissionLibraryEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DecissionLibraryEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DecissionLibraryEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DecissionLibraryEditDialog);
    } // setupUi

    void retranslateUi(QDialog *DecissionLibraryEditDialog)
    {
        DecissionLibraryEditDialog->setWindowTitle(QApplication::translate("DecissionLibraryEditDialog", "Dialog", 0));
        label_3->setText(QApplication::translate("DecissionLibraryEditDialog", "Vermerke", 0));
        label->setText(QApplication::translate("DecissionLibraryEditDialog", "Eintrag Beschlusssammlung editieren", 0));
        addDescription->setText(QApplication::translate("DecissionLibraryEditDialog", "Beschlussvorwort zu Beschlusssammlung hinzuf\303\274gen", 0));
        label_2->setText(QApplication::translate("DecissionLibraryEditDialog", "Gerichtsentscheidung", 0));
        mitBeschlussoption->setText(QApplication::translate("DecissionLibraryEditDialog", "Versammlung", 0));
        schriftlicherBeschluss->setText(QApplication::translate("DecissionLibraryEditDialog", "Schriflticher Beschluss", 0));
        ohneBeschlussoption->setText(QApplication::translate("DecissionLibraryEditDialog", "Ohne Beschluss", 0));
    } // retranslateUi

};

namespace Ui {
    class DecissionLibraryEditDialog: public Ui_DecissionLibraryEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECISSIONLIBRARYEDITDIALOG_H
