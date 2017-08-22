#ifndef QSTANDARDITEMMODELPROPERTYOVERVIEW_H
#define QSTANDARDITEMMODELPROPERTYOVERVIEW_H

#include <QStandardItemModel>
#include <QSqlDatabase>

class QStandardItemModelPropertyOverview : public QStandardItemModel
{
public:
  QStandardItemModelPropertyOverview();
  ~QStandardItemModelPropertyOverview();
  void setQuery(const QString &query, const QSqlDatabase &db = QSqlDatabase());
  void populate (int propertyId);
};

#endif // QSTANDARDITEMMODELPROPERTYOVERVIEW_H
