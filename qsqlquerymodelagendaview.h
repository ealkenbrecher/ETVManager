#ifndef QSQLQUERYMODELAGENDAVIEW_H
#define QSQLQUERYMODELAGENDAVIEW_H

#include "QSqlQueryModelRichtext.h"

class QSqlQueryModelAgendaView : public QSqlQueryModelRichtext
{
  Q_OBJECT
public:
  explicit QSqlQueryModelAgendaView(QObject *parent = 0);
  void updateData ();

signals:

public slots:

};

#endif // QSQLQUERYMODELAGENDAVIEW_H
