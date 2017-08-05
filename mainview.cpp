#include "mainview.h"
#include "ui_mainview.h"
#include "propertysettings.h"
#include "agendatab.h"
#include "propertytab.h"
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

mainView::mainView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainView)
{
  ui->setupUi(this);

  mAgendaTab = 0;
  mPropertyTab = 0;
  mOrderTab = 0;
  mGeneratorTab = 0;
  mReportGeneratorTab = 0;
  mDecissionLibraryTab = 0;

  //generate tab classes
  mAgendaTab = new AgendaTab (this);
  mPropertyTab = new PropertyTab (this);
  mOrderTab = new OrderTab (this);
  mGeneratorTab = new GeneratorTab (this);
  mReportGeneratorTab = new ReportGeneratorTab (this);
  mDecissionLibraryTab = new DecissionLibraryTab (this);

  if (0 != mPropertyTab)
    ui->tabs->addTab(mPropertyTab, "ETV planen");
  if (0 != mAgendaTab)
    ui->tabs->addTab(mAgendaTab, "Tagesordnung");
  if (0 != mOrderTab)
    ui->tabs->addTab(mOrderTab, "Protokollvorlage");
  if (0 != mReportGeneratorTab)
    ui->tabs->addTab(mReportGeneratorTab, "Protokollabschrift");
  if (0 != mDecissionLibraryTab)
    ui->tabs->addTab(mDecissionLibraryTab, "Beschlusssammlung");
  if (0 != mGeneratorTab)
    ui->tabs->addTab(mGeneratorTab, "Dokumente ausgeben");

  ui->tabs->setCurrentWidget(mPropertyTab);

  connect (ui->tabs, SIGNAL(currentChanged(int)), this, SLOT(slotRefreshOnChangedTab (int)));

  mCurrentEstateId = 0;
  enableTabsOnValidData(false);
}

void mainView::setParameter(settingsType aSetting, const QString value)
{
  switch (aSetting)
  {
    case eDbConnectionName:
      setConnectionName (value);
      mPropertyTab->setParameter(aSetting, value);
      mAgendaTab->setParameter(aSetting, value);
      mOrderTab->setParameter(aSetting, value);
      mGeneratorTab->setParameter(aSetting, value);
      mReportGeneratorTab->setParameter(aSetting, value);
      mDecissionLibraryTab->setParameter(aSetting, value);
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
  /*delete mAgendaTab;
  delete mPropertyTab;
  delete mOrderTab;
  delete mReportGeneratorTab;
  delete mGeneratorTab;
  delete mDecissionLibraryTab;*/
  delete ui;
}

void mainView::etvSelectionValid (bool aValid)
{
  enableTabsOnValidData(aValid);
}

void mainView::enableTabsOnValidData (bool aEnable)
{
  if (0 != mAgendaTab)
    mAgendaTab->setEnabled(aEnable);

  if (0 != mOrderTab)
    mOrderTab->setEnabled(aEnable);

  if (0 != mGeneratorTab)
    mGeneratorTab->setEnabled(aEnable);

  if (0 != mReportGeneratorTab)
    mReportGeneratorTab->setEnabled(aEnable);

  if (0 != mDecissionLibraryTab)
    mDecissionLibraryTab->setEnabled(aEnable);
}

void mainView::slotRefreshOnChangedTab (int aIndex)
{
  switch (aIndex)
  {
    case ePropertySelectionTab:
      if (0 != mPropertyTab)
        mPropertyTab->refreshOnSelected ();
      break;
    case eAgendaTab:
      if (0 != mAgendaTab)
          mAgendaTab->refreshOnSelected();
      break;
    case eOrderTab:
      if (0 != mOrderTab)
          mOrderTab->refreshOnSelected();
      break;
    case eReportGeneratorTab:
      if (0 != mReportGeneratorTab)
        mReportGeneratorTab->refreshOnSelected();
      break;
    case eGeneratorTab:
      if (0 != mGeneratorTab)
        mGeneratorTab->refreshOnSelected();
      break;
    case eDecissionLibraryTab:
      if (0 != mDecissionLibraryTab)
        mDecissionLibraryTab->refreshOnSelected();
    default:
          break;
  }
}

void mainView::setCurrentTab (int aTab)
{
  switch (aTab)
  {
    case ePropertySelectionTab:
      if (0 != mPropertyTab)
          ui->tabs->setCurrentIndex(0);
      break;
    default:
      break;
  }
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

void mainView::addProperty()
{
  PropertySettings dialog (this);
  dialog.setVotingRule(StringReplacer::getInstance()->getReplacementString("%stimmrechtVorlageWEG%"));
  dialog.setInvitationDeadline(StringReplacer::getInstance()->getReplacementString("%einladungsfristVorlageWEG%"));
  dialog.setpropertyId(-99);

  //abort -> do not save settings
  if (dialog.exec() != QDialog::Accepted)
  {
    return;
  }
  else
  {
    QSqlQuery query (QSqlDatabase::database(mUser));
    //set values
    query.prepare("INSERT INTO Objekt (obj_name, obj_mea, obj_stimmrecht, obj_anz_et, obj_inv_deadline) VALUES (:name, :mea, :stimmrecht, :anz_et, :deadline)");
    query.bindValue(":name", dialog.propertyName());
    query.bindValue(":mea", QString::number(dialog.mea()));
    query.bindValue(":stimmrecht", dialog.votingRule());
    query.bindValue(":anz_et", QString::number(dialog.ownerQuantity()));
    query.bindValue(":deadline", dialog.getInvitationDeadline());
    query.exec();

    if (0 != mPropertyTab)
    {
      mPropertyTab->refreshView();
      mPropertyTab->refreshRealEstateSelector(false);
    }
  }
}

void mainView::refreshView()
{
  mPropertyTab->refreshView();
  mPropertyTab->refreshRealEstateSelector(false);
}
