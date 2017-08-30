#ifndef QSQLQUERYMODELPROTOCOLGENERATORVIEW_H
#define QSQLQUERYMODELPROTOCOLGENERATORVIEW_H

#include "QSqlQueryModelImpl.h"

class QSqlQueryModelProtocolGeneratorView : public QSqlQueryModelImpl
{
public:
  explicit QSqlQueryModelProtocolGeneratorView (QObject *parent = 0);
  bool updateData ();
  bool moveRowUp(int aSourceRow);
  bool moveRowDown(int aSourceRow);
};

#endif // QSQLQUERYMODELPROTOCOLGENERATORVIEW_H
