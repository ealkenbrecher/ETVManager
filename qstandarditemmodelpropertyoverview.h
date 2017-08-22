#ifndef QSTANDARDITEMMODELPROPERTYOVERVIEW_H
#define QSTANDARDITEMMODELPROPERTYOVERVIEW_H

#include <QStandardItemModel>

class QStandardItemModelPropertyOverview : public QStandardItemModel
{
public:
  QStandardItemModelPropertyOverview();
  ~QStandardItemModelPropertyOverview();
  void populate (int propertyId);
};

#endif // QSTANDARDITEMMODELPROPERTYOVERVIEW_H
