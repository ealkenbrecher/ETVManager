#include "QSqlQueryModelImpl.h"
#include <QTextDocument>

#define INVALID -1

QSqlQueryModelImpl::QSqlQueryModelImpl(QObject *parent)
{
  mDbConnectionName = "";
  mPropertyId = INVALID;
  mYear = INVALID;
  mAgendaNum = INVALID;
}

void QSqlQueryModelImpl::setDbConnectionName (QString &dbName)
{
  mDbConnectionName = dbName;
}

void QSqlQueryModelImpl::setPropertyId (int propId)
{
  mPropertyId = propId;
}

void QSqlQueryModelImpl::setYear (int year)
{
  mYear = year;
}

void QSqlQueryModelImpl::setAgendaNum (int agendaNum)
{
  mAgendaNum = agendaNum;
}

void QSqlQueryModelImpl::moveRowUp (int aSourceRow)
{

}

void QSqlQueryModelImpl::moveRowDown (int aSourceRow)
{

}

QVariant QSqlQueryModelImpl::data(const QModelIndex &index, int role) const
{
  //remove html syntax from database entry
  //return as plain string
  // - just for tableview purpose

  QVariant value = QSqlQueryModel::data(index, role);

  if (value.isValid() && role == Qt::DisplayRole)
  {
    QTextDocument doc;
    doc.setHtml(value.toString());

    return doc.toPlainText();
  }
  return value;
}
