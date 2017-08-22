#include "mainview.h"
#include "ui_propertymainview.h"
#include "propertysettings.h"
#include "agendatab.h"
#include "propertyoverview.h"
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

mainView::mainView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::propertyMainView)
{
  ui->setupUi(this);
  mItemModelTree = 0;
}

void mainView::setParameter(settingsType aSetting, const QString value)
{
  switch (aSetting)
  {
    case eDbConnectionName:
      setConnectionName (value);
      StringReplacer::getInstance()->setUser(value);

      break;
  }
}

void mainView::setConnectionName (const QString value)
{
  this->mUser = value;
}

mainView::~mainView()
{
  delete ui;
}

void  mainView::patternSettings ()
{
  PatternEditor editor (this);
  editor.setUser(mUser);
  editor.updatePatternTable();
  editor.exec();
}

void mainView::reportSettings ()
{
  patternEditorReport editor (this);
  editor.setUser(mUser);
  editor.updatePatternTable();
  editor.exec();
}

void mainView::systemSettings()
{
  SystemSettings settings (this);
  settings.exec();
}

void mainView::openProperty()
{
  propertyListDialog dialog (this);
  dialog.setDbConnectionName(mUser);
  dialog.updateDialog();

  if (QDialog::Accepted == dialog.exec())
  {
    mCurrentEstateId = dialog.getSelectedProperty ();

    if (0 != mItemModelTree)
    {
      delete mItemModelTree;
      mItemModelTree = 0;
    }

    mItemModelTree = new QStandardItemModelPropertyOverview ();
    mItemModelTree->populate(mCurrentEstateId);

    if (0 != mItemModelTree)
    {
      ui->treeView->setModel(mItemModelTree);
    }
  }
}

void mainView::addProperty()
{

}

void mainView::updateMainView()
{
}

void mainView::on_treeView_doubleClicked(const QModelIndex &index)
{
}
