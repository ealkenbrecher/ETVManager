#ifndef QSQLQUERYMODELAGENDAVIEW_H
#define QSQLQUERYMODELAGENDAVIEW_H

#include "QSqlQueryModelRichtext.h"

class QSqlQueryModelAgendaView : public QSqlQueryModelRichtext
{
  Q_OBJECT
public:
  explicit QSqlQueryModelAgendaView(QObject *parent = 0);
  bool updateData ();
  bool deleteEntry (int aItemId);

signals:

public slots:

private:
  bool reorganizeIds ();

};

#endif // QSQLQUERYMODELAGENDAVIEW_H
