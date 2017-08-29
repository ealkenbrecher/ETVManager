/********************************************************************************
** Form generated from reading UI file 'systemsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSETTINGS_H
#define UI_SYSTEMSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemSettings
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QPushButton *pushButton;
    QFrame *line;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *line_2;
    QLabel *label_7;

    void setupUi(QDialog *SystemSettings)
    {
        if (SystemSettings->objectName().isEmpty())
            SystemSettings->setObjectName(QStringLiteral("SystemSettings"));
        SystemSettings->resize(520, 321);
        formLayoutWidget = new QWidget(SystemSettings);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 501, 301));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton);

        line = new QFrame(formLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(2, QFormLayout::SpanningRole, line);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit);

        buttonBox = new QDialogButtonBox(formLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(10, QFormLayout::SpanningRole, buttonBox);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(8);
        font1.setUnderline(true);
        label_3->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setPointSize(8);
        label_4->setFont(font2);

        formLayout->setWidget(6, QFormLayout::SpanningRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        formLayout->setWidget(7, QFormLayout::SpanningRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        formLayout->setWidget(8, QFormLayout::SpanningRole, label_6);

        line_2 = new QFrame(formLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setMinimumSize(QSize(0, 0));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(9, QFormLayout::SpanningRole, line_2);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_7);


        retranslateUi(SystemSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), SystemSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SystemSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(SystemSettings);
    } // setupUi

    void retranslateUi(QDialog *SystemSettings)
    {
        SystemSettings->setWindowTitle(QApplication::translate("SystemSettings", "Dialog", 0));
        label->setText(QApplication::translate("SystemSettings", "Standardpfad zum Speichern von Dateien:", 0));
        pushButton->setText(QApplication::translate("SystemSettings", "Durchsuchen...", 0));
        label_2->setText(QApplication::translate("SystemSettings", "Dateiname Tagesordnung:", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("SystemSettings", "Tipp: M\303\266gliche Platzhalter f\303\274r Dateinamen:", 0));
        label_4->setText(QApplication::translate("SystemSettings", "%Wirtschaftsjahr% - f\303\274gt Wirtschaftsjahr der ETV hinzu", 0));
        label_5->setText(QApplication::translate("SystemSettings", "%DatumETV% - f\303\274gt Datum der ETV hinzu", 0));
        label_6->setText(QApplication::translate("SystemSettings", "%Datum% - f\303\274gt Datum der Dateierstellung hinzu", 0));
        label_7->setText(QApplication::translate("SystemSettings", "Optionen", 0));
    } // retranslateUi

};

namespace Ui {
    class SystemSettings: public Ui_SystemSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSETTINGS_H
