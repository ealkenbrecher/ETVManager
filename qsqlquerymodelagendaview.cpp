#include "qsqlquerymodelagendaview.h"
#include <QSqlQuery>
#include "global.h"

QSqlQueryModelAgendaView::QSqlQueryModelAgendaView(QObject *parent) :
  QSqlQueryModelImpl(parent)
{

}

bool QSqlQueryModelAgendaView::updateData ()
{
  QSqlQuery query (QSqlDatabase::database(this->getDbConnectionName()));
  query.prepare("SELECT top_id, top_header FROM Tagesordnungspunkte WHERE obj_id = :id AND wi_jahr = :year AND etv_nr = :etvnr");
  query.bindValue(":id", this->getPropertyId());
  query.bindValue(":year", this->getYear());
  query.bindValue(":etvnr", this->getAgendaNum());

  bool result = query.exec();
  this->setQuery(query);
  this->setHeaderData(0, Qt::Horizontal, tr("TOP"));
  this->setHeaderData(1, Qt::Horizontal, tr("Bezeichnung"));

  return result;
}

bool QSqlQueryModelAgendaView::removeRow (int aItemId)
{
  QSqlQuery query (QSqlDatabase::database(this->getDbConnectionName()));
  query.prepare("DELETE FROM Tagesordnungspunkte WHERE obj_id = :id AND wi_jahr = :year AND etv_nr = :etvnr AND top_id = :topid");
  query.bindValue(":id", this->getPropertyId());
  query.bindValue(":year", this->getYear());
  query.bindValue(":etvnr", this->getAgendaNum());
  query.bindValue(":topid", aItemId);

  bool retVal = query.exec();
  updateData();

  if (true == retVal)
    reorganizeIds();

  return retVal;
}

bool QSqlQueryModelAgendaView::reorganizeIds ()
{
  int count = this->rowCount();

  QSqlQuery query (QSqlDatabase::database(this->getDbConnectionName()));
  QSqlRecord record;

  int topId = 0;

  //update top ids
  for (int i = 0; i < count; i++)
  {
    topId++;
    record = this->record(i);
    query.prepare("UPDATE Tagesordnungspunkte SET top_id = :newid WHERE obj_id = :id AND wi_jahr = :year AND etv_nr = :etvnr AND top_id = :oldid");
    query.bindValue(":id", Global::getInstance()->getCurrentPropertyId());
    query.bindValue(":year", Global::getInstance()->getCurrentYear());
    query.bindValue(":etvnr", Global::getInstance()->getCurrentEtvNumber());
    query.bindValue(":oldid", record.value(0).toInt());
    query.bindValue(":newid", topId);
    query.exec();
  }
}
