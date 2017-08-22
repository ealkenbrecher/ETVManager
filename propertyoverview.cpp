#include "PropertyOverview.h"
#include "ui_Propertyoverview.h"
#include <QtSql>
#include "propertysettings.h"
#include "agendasettings.h"
#include "editadvisersdialog.h"
#include <QMessageBox>
#include "stringreplacer.h"
#include "propertylistdialog.h"

PropertyOverview::PropertyOverview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PropertyOverview)
{
  ui->setupUi(this);
  connect (ui->openPropertyButton, SIGNAL (clicked ()), this, SLOT (onOpenPropertyButtonClicked ()));
}

PropertyOverview::~PropertyOverview()
{
  delete ui;
}

void PropertyOverview::onOpenPropertyButtonClicked ()
{
  propertyListDialog dialog;
  dialog.setDbConnectionName (mUser);
  dialog.updateDialog();
  dialog.exec();
}

void PropertyOverview::disableUi (bool aValue)
{
}

void PropertyOverview::setParameter (settingsType aParameter, QString aSetting)
{
  switch (aParameter)
  {
    case eDbConnectionName:
      mUser = aSetting;
      break;
  }
}

void PropertyOverview::refreshView ()
{
}
