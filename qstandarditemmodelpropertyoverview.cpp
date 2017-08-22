#include "qstandarditemmodelpropertyoverview.h"

QStandardItemModelPropertyOverview::QStandardItemModelPropertyOverview()
{

}

void QStandardItemModelPropertyOverview::setQuery(const QString &query, const QSqlDatabase &db)
{

}

void QStandardItemModelPropertyOverview::populate (int propertyId)
{
  //test
  QStandardItem *parentItem = this->invisibleRootItem();
  for (int i = 0; i < 4; ++i) {
      QStandardItem *item = new QStandardItem(QString("item %0").arg(i));
      parentItem->appendRow(item);
      parentItem = item;
  }
}

QStandardItemModelPropertyOverview::~QStandardItemModelPropertyOverview()
{

}
