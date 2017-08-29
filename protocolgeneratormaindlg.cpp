#include "protocolgeneratormaindlg.h"
#include "ui_protocolgeneratormaindlg.h"
#include "QSqlQueryModelProtocolGeneratorView.h"
#include "agendawizard.h"

ProtocolGeneratorMainDlg::ProtocolGeneratorMainDlg(QWidget *parent, QString &rDbConnectionName, int curEstateId, int agendaYear, int agendaNum) :
  QDialog(parent),
  ui(new Ui::protocolGeneratorMainDlg)
{
  ui->setupUi(this);
  ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Zurück zur Übersicht");
  mView = 0;
  mAgendaWizard = 0;

  mDbConnectionName = rDbConnectionName;
  mEstateId = curEstateId;
  mAgendaYear = agendaYear;
  mAgendaNum = agendaNum;

  initTableView();
  updateTableView();
}

ProtocolGeneratorMainDlg::~ProtocolGeneratorMainDlg()
{
  if (0 != mView)
    delete mView;

  if (0 != mAgendaWizard)
    delete mAgendaWizard;

  delete ui;
}

void ProtocolGeneratorMainDlg::initTableView ()
{
  if (0 == mView)
  {
    mView = new QSqlQueryModelProtocolGeneratorView ();
    ui->tableView->setModel(mView);
    ui->tableView->show();
  }
}

void ProtocolGeneratorMainDlg::updateTableView ()
{
  if (0 != mView)
  {
    mView->setDbConnectionName(mDbConnectionName);
    mView->setPropertyId(mEstateId);
    mView->setYear(mAgendaYear);
    mView->setAgendaNum(mAgendaNum);
    mView->updateData ();
  }
}

void ProtocolGeneratorMainDlg::on_startAgendaWizard_clicked()
{
  mAgendaWizard = new AgendaWizard (mDbConnectionName, mEstateId, mAgendaYear, mAgendaNum);

  if (0 != mAgendaWizard)
  {
    mAgendaWizard->process();
    updateTableView();

    // do stuff
    delete mAgendaWizard;
    mAgendaWizard = 0;
  }
}

void ProtocolGeneratorMainDlg::on_startCoverpageWizard_clicked()
{

}
