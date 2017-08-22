#include "propertylistdialog.h"
#include "ui_simpleListDialog.h"
#include <QWidget>
#include <QDebug>
#include "qsqlquerymodelpropertyview.h"

propertyListDialog::propertyListDialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::simpleListDialog)
{
  ui->setupUi(this);
  mView = 0;
  mUser ="";

  //prevent dialog from blocking application
  this->setWindowModality(Qt::NonModal);
  initDialog ();
}

void propertyListDialog::setDbConnectionName (QString &user)
{
  mUser = user;
}

void propertyListDialog::initDialog ()
{
  mView = new QSqlQueryModelPropertyView ();

  if (0 != mView)
    ui->tableView->setModel(mView);
}

void propertyListDialog::updateDialog ()
{
  if (0 != mView)
  {
    mView->setDbConnectionName(mUser);
    mView->updateData ();
  }
}

//return sql id of selected property
int propertyListDialog::getSelectedProperty ()
{
  return mSelectedProperty;
}

propertyListDialog::~propertyListDialog()
{
  if (0!= mView)
    delete mView;
}

//update sql id of selected property
void propertyListDialog::on_tableView_clicked(const QModelIndex &index)
{
  mSelectedProperty = ui->tableView->model()->index(index.row(),1).data().toInt();
}
