#include "qsqlquerymodelprotocolgeneratorview.h"

QSqlQueryModelProtocolGeneratorView::QSqlQueryModelProtocolGeneratorView(QObject *parent) :
  QSqlQueryModelImpl(parent)
{

}

bool QSqlQueryModelProtocolGeneratorView::updateData ()
{
  QString request ("SELECT top_id, header, protokoll_id FROM Beschluesse WHERE obj_id = :id AND wi_jahr = :year AND etv_nr = :etvnr ORDER BY protokoll_id ASC");
  QSqlQuery query (QSqlDatabase::database(this->getDbConnectionName()));
  query.prepare(request);
  query.bindValue(":id", this->getPropertyId());
  query.bindValue(":year", this->getYear());
  query.bindValue(":etvnr", this->getAgendaNum());
  query.exec();

  bool result = runSqlQuery(query);

  this->setQuery(query);
  this->setHeaderData(0, Qt::Horizontal, tr("TOP"));
  this->setHeaderData(1, Qt::Horizontal, tr("Beschreibung"));
  this->setHeaderData(1, Qt::Horizontal, tr("Protokoll ID"));

  return result;
}
