#include "systemsettings.h"
#include "ui_systemsettings.h"

SystemSettings::SystemSettings(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::SystemSettings)
{
  ui->setupUi(this);

  //prevent dialog from blocking application
  this->setWindowModality(Qt::NonModal);
}

SystemSettings::~SystemSettings()
{
  delete ui;
}
