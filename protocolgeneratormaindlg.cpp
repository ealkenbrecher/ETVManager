#include "protocolgeneratormaindlg.h"
#include "ui_protocolgeneratormaindlg.h"
#include "QSqlQueryModelProtocolGeneratorView.h"
#include "agendawizard.h"
#include <QMessageBox>

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

    delete mAgendaWizard;
    mAgendaWizard = 0;
  }
}

void ProtocolGeneratorMainDlg::on_startCoverpageWizard_clicked()
{

}

void ProtocolGeneratorMainDlg::on_moveEntryUp_clicked()
{
  int selectedRow = ui->tableView->selectionModel()->selection().indexes().value(0).row();
  int protocolId = ui->tableView->model()->index(selectedRow,2).data().toInt();

  if (1 == protocolId)
  {
    QMessageBox lMsgBox (this);
    lMsgBox.setText("Der Beschluss kann nicht weiter nach oben verschoben werden.");
    lMsgBox.setWindowTitle("Fehler");
    lMsgBox.exec();
    ui->tableView->setFocus();
    ui->tableView->selectRow(selectedRow);
  }
  else
  {
    mView->moveRowUp(protocolId);
    ui->tableView->setFocus();
    ui->tableView->selectRow(selectedRow - 1);
  }
}

void ProtocolGeneratorMainDlg::on_moveEntryDown_clicked()
{
  int selectedRow = ui->tableView->selectionModel()->selection().indexes().value(0).row();
  int protocolId = ui->tableView->model()->index(selectedRow,2).data().toInt();

  int rows = ui->tableView->model()->rowCount();
  if (rows == selectedRow + 1 || rows == protocolId)
  {
    QMessageBox lMsgBox (this);
    lMsgBox.setText("Der Beschluss kann nicht weiter nach unten verschoben werden.");
    lMsgBox.setWindowTitle("Fehler");
    lMsgBox.exec();
    ui->tableView->setFocus();
    ui->tableView->selectRow(selectedRow);
  }
  else
  {
    mView->moveRowDown(protocolId);
    ui->tableView->setFocus();
    ui->tableView->selectRow(selectedRow + 1);
  }
}
