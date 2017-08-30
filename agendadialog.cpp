#include "agendadialog.h"
#include "ui_agendadialog.h"
#include "QSqlQueryModelAgendaView.h"
#include "AgendaItemSettings.h"
#include <QMessageBox>

AgendaDialog::AgendaDialog(QWidget *parent, QString &rDbConnName, int estateId, int agendaYear, int agendaNum) :
  QWidget(parent),
  ui(new Ui::AgendaDialog)
{
  ui->setupUi(this);
  ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Zurück zur Übersicht");
  mQueryModelAgendaView = 0;
  mDbConnName = rDbConnName;
  mEstateId = estateId;
  mAgendaYear = agendaYear;
  mAgendaNum = agendaNum;

  initAgendaTable();
  updateAgendaTable();
}

AgendaDialog::~AgendaDialog()
{
  if (0 != mQueryModelAgendaView)
      delete mQueryModelAgendaView;

  delete ui;
}

void AgendaDialog::initAgendaTable ()
{
  if (0 == mQueryModelAgendaView)
  {
    mQueryModelAgendaView = new QSqlQueryModelAgendaView ();
    ui->tableAgenda->setModel(mQueryModelAgendaView);
    ui->tableAgenda->horizontalHeader()->resizeSection(0, 50);
    ui->tableAgenda->show();
  }
}

void AgendaDialog::updateAgendaTable()
{
  if (0 != mQueryModelAgendaView)
  {
    mQueryModelAgendaView->setDbConnectionName(mDbConnName);
    mQueryModelAgendaView->setPropertyId(mEstateId);
    mQueryModelAgendaView->setYear(mAgendaYear);
    mQueryModelAgendaView->setAgendaNum(mAgendaNum);
    mQueryModelAgendaView->updateData ();
  }
}

void AgendaDialog::changeAgendaItemSettings (int aTopId)
{
  AgendaItemSettings itemSettings (this);
  itemSettings.setWindowModality(Qt::WindowModal);
  itemSettings.setdialogMode(AgendaItemDialogMode::update);
  itemSettings.setDbConnectionName(mDbConnName);
  itemSettings.setPropertyId(mEstateId);
  itemSettings.setYear(mAgendaYear);
  itemSettings.setAgendaNum(mAgendaNum);
  itemSettings.setAgendaItemId(aTopId);

  itemSettings.update();
  itemSettings.show();

  if (itemSettings.exec() != QDialog::Rejected)
    updateAgendaTable();
}

void AgendaDialog::on_tableAgenda_doubleClicked(const QModelIndex &index)
{
  if (ui->tableAgenda->selectionModel()->selectedRows().count() == 1)
  {
    int top_id = ui->tableAgenda->model()->index(index.row(),0).data().toInt();
    changeAgendaItemSettings(top_id);
  }
}

void AgendaDialog::on_addEntry_clicked()
{
  AgendaItemSettings itemSettings (this);
  itemSettings.setdialogMode(AgendaItemDialogMode::insert);
  itemSettings.setDbConnectionName(mDbConnName);
  itemSettings.setPropertyId(mEstateId);
  itemSettings.setYear(mAgendaYear);
  itemSettings.setAgendaNum(mAgendaNum);

  //set next id for new entry
  if (0 != ui->tableAgenda->model())
    itemSettings.setAgendaItemId(ui->tableAgenda->model()->rowCount() + 1);

  itemSettings.update();
  itemSettings.show();

  if (itemSettings.exec() != QDialog::Rejected)
    updateAgendaTable();
}

void AgendaDialog::on_editEntry_clicked()
{
  //check if selection in tableview is valid
  if (ui->tableAgenda->selectionModel()->selectedRows().count() == 1)
  {
    int selectedRow = ui->tableAgenda->selectionModel()->selection().indexes().value(0).row();
    int top_id = ui->tableAgenda->model()->index(selectedRow,0).data().toInt();

    changeAgendaItemSettings(top_id);
  }
  else if (ui->tableAgenda->selectionModel()->selection().indexes().count() == 0)
    QMessageBox::information(this, "Fehler", "Bitte eine Zeile auswählen.");
}

void AgendaDialog::on_deleteEntry_clicked()
{
  if (ui->tableAgenda->selectionModel()->selectedRows().count() == 1)
  {
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Achtung", "Tagesordnungspunkt wirklich löschen?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
      int selectedRow = ui->tableAgenda->selectionModel()->selection().indexes().value(0).row();
      int top_id = ui->tableAgenda->model()->index(selectedRow,0).data().toInt();

      mQueryModelAgendaView->removeRow(top_id);

      updateAgendaTable();
      ui->tableAgenda->setFocus();

      //set focussed item
      int newRowSelection = 0;
      if (ui->tableAgenda->model()->rowCount() > selectedRow)
        newRowSelection = selectedRow;
      else
        newRowSelection = ui->tableAgenda->model()->rowCount();

      ui->tableAgenda->selectRow(newRowSelection);
    }
  }
  else
  QMessageBox::information(this, "Fehler", "Es wurde kein Eintrag zum Löschen ausgewählt.");
}

void AgendaDialog::on_moveAgendaItemUp_clicked()
{
  int selectedRow = ui->tableAgenda->selectionModel()->selection().indexes().value(0).row();
  int top_id = ui->tableAgenda->model()->index(selectedRow,0).data().toInt();

  if (1 == top_id)
  {
    QMessageBox::information(this, "Fehler", "Tagesordnungspunkt kann nicht nach oben verschoben werden.");
  }
  else
  {
    mQueryModelAgendaView->moveRowUp(top_id);
    ui->tableAgenda->setFocus();
    ui->tableAgenda->selectRow(top_id - 2);
  }
}

void AgendaDialog::on_moveAgendaItemDown_clicked()
{
  int selectedRow = ui->tableAgenda->selectionModel()->selection().indexes().value(0).row();
  int top_id = ui->tableAgenda->model()->index(selectedRow,0).data().toInt();

  int rows = ui->tableAgenda->model()->rowCount();
  if (rows == selectedRow + 1 || rows == top_id)
  {
    QMessageBox::information(this, "Fehler", "Tagesordnungspunkt kann nicht nach unten verschoben werden.");
  }
  else
  {
    mQueryModelAgendaView->moveRowDown(top_id);
    ui->tableAgenda->setFocus();
    ui->tableAgenda->selectRow(top_id);
  }
}

void AgendaDialog::on_buttonBox_accepted()
{
  emit exitView();
}
