#include "propertyMainView.h"
#include "ui_propertymainview.h"
#include "propertysettings.h"
#include "agendadialog.h"
#include <QSqlTableModel>
#include <QtWidgets>
#include <QtSql>
#include "ordertab.h"
#include "generatortab.h"
#include "patterneditor.h"
#include "patterneditorreport.h"
#include "systemsettings.h"
#include "reportgeneratortab.h"
#include "stringreplacer.h"
#include "decissionlibrarytab.h"
#include "propertylistdialog.h"
#include "qstandarditemmodelpropertyoverview.h"
#include "agendaoptionsdialog.h"
#include <QDebug>
#include "global.h"
#include "protocolgeneratormaindlg.h"


propertyMainView::propertyMainView(QWidget *parent, QString &rDbConnectionName, int curEstateId) :
    QWidget(parent),
    ui(new Ui::propertyMainView)
{
  ui->setupUi(this);
  setConnectionName(rDbConnectionName);
  setCurrentEstateId(curEstateId);

  setFixedSize(WINDOW_WIDTH, WINDOW_HEIGHT);

  mItemModelTree = 0;
  mProtocolGeneratorMainDlg = 0;

  openProperty();
}

void propertyMainView::setHeader (const QString &header)
{
  this->ui->label->setText(header);
}

void propertyMainView::setConnectionName (const QString value)
{
  this->mDbConnectionName = value;
}

void propertyMainView::setCurrentEstateId (const int value)
{
  this->mCurrentEstateId = value;
}

propertyMainView::~propertyMainView()
{
  delete ui;

  if (0 != mProtocolGeneratorMainDlg)
    delete mProtocolGeneratorMainDlg;

  if (0 != mItemModelTree)
    delete mItemModelTree;
}

void propertyMainView::openProperty()
{
  if (0 != mItemModelTree)
  {
    delete mItemModelTree;
    mItemModelTree = 0;
  }

  mItemModelTree = new QStandardItemModelPropertyOverview ();
  if (0 != mItemModelTree)
  {
    if (true == mItemModelTree->populate(mDbConnectionName, mCurrentEstateId))
    {
      ui->treeView->setModel(mItemModelTree);
    }
  }
}

void propertyMainView::on_treeView_doubleClicked(const QModelIndex &index)
{
  showAgendaOptionsDialog ();
}

void propertyMainView::showAgendaOptionsDialog ()
{
  AgendaOptionsDialog dlg;
  if (QDialog::Accepted == dlg.exec())
  {
    AgendaOptionsDialog::returnValue retVal = AgendaOptionsDialog::undefined;
    retVal = (AgendaOptionsDialog::returnValue) dlg.result();

    switch (retVal)
    {
      case AgendaOptionsDialog::editAgenda:
        showAgendaView ();
        break;
      case AgendaOptionsDialog::editProtocolTranscript:
        showProtocolTranscriptEditor ();
        break;
      case AgendaOptionsDialog::generateProtocol:
        showProtocolGenerator ();
        break;
      case AgendaOptionsDialog::generateDocuments:
        showDocumentGenerator ();
        break;
      default:
        break;
    };
  }
}

void propertyMainView::showAgendaView ()
{
  int selectedYear = ui->treeView->selectionModel()->selectedRows(0).value(0).data().toInt();
  int selectedAgendaNum = ui->treeView->selectionModel()->selectedRows(1).value(0).data().toInt();

  AgendaDialog dlg (this, mDbConnectionName, mCurrentEstateId, selectedYear, selectedAgendaNum);
  dlg.exec();
}

void propertyMainView::showProtocolTranscriptEditor ()
{
// todo
}

void propertyMainView::showProtocolGenerator ()
{
  int selectedYear = ui->treeView->selectionModel()->selectedRows(0).value(0).data().toInt();
  int selectedAgendaNum = ui->treeView->selectionModel()->selectedRows(1).value(0).data().toInt();

  mProtocolGeneratorMainDlg = new ProtocolGeneratorMainDlg (this, mDbConnectionName, mCurrentEstateId, selectedYear, selectedAgendaNum);
  if (0 != mProtocolGeneratorMainDlg)
  {
    connect (mProtocolGeneratorMainDlg, SIGNAL (exitView()), this, SLOT (killProtocolGeneratorView ()));
    mProtocolGeneratorMainDlg->show ();
  }
}

void propertyMainView::killProtocolGeneratorView ()
{
  if (0 != mProtocolGeneratorMainDlg)
  {
    delete mProtocolGeneratorMainDlg;
    mProtocolGeneratorMainDlg = 0;
  }
}

void propertyMainView::showDocumentGenerator()
{

}

void propertyMainView::on_exitButton_clicked()
{
  emit exitPropertyView ();
}

void propertyMainView::on_editButton_clicked()
{
  showAgendaOptionsDialog ();
}
