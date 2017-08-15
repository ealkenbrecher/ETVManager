#include "qsqlquerymodelagendaview.h"
#include <QSqlQuery>
#include "global.h"

QSqlQueryModelAgendaView::QSqlQueryModelAgendaView(QObject *parent) :
  QSqlQueryModelRichtext(parent)
{
}

void QSqlQueryModelAgendaView::updateData ()
{
  QSqlQuery query (QSqlDatabase::database(this->getDbConnectionName()));
  query.prepare("SELECT top_id, top_header FROM Tagesordnungspunkte WHERE obj_id = :id AND wi_jahr = :year AND etv_nr = :etvnr");
  query.bindValue(":id", this->getPropertyId());
  query.bindValue(":year", this->getYear());
  query.bindValue(":etvnr", this->getAgendaNum());
  query.exec();

  this->setQuery(query);
  this->setHeaderData(0, Qt::Horizontal, tr("Nr."));
  this->setHeaderData(1, Qt::Horizontal, tr("Bezeichnung"));
}
