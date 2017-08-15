#ifndef QSQLQUERYMODELRICHTEXT_H
#define QSQLQUERYMODELRICHTEXT_H

#include <QSqlQueryModel>
#include <QString>

class QSqlQueryModelRichtext : public QSqlQueryModel
{
public:
  QSqlQueryModelRichtext (QObject *parent = 0);
  QVariant data(const QModelIndex &index, int role) const;
  void setDbConnectionName (QString &dbName);
  void setPropertyId (int propId);
  void setYear (int year);
  void setAgendaNum (int agendaNum);

  QString getDbConnectionName () {return mDbConnectionName;};
  int getPropertyId () {return mPropertyId;}
  int getYear () {return mYear;}
  int getAgendaNum () {return mAgendaNum;}

private:
  QString mDbConnectionName;
  int mPropertyId;
  int mYear;
  int mAgendaNum;
};

#endif // QSQLQUERYMODELRICHTEXT_H
