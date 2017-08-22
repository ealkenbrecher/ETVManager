#ifndef PROPERTYOVERVIEW_H
#define PROPERTYOVERVIEW_H

#include <QWidget>
#include <QString>
#include "global.h"

class QSqlDatabase;

namespace Ui {
class PropertyOverview;
}

class PropertyOverview : public QWidget
{
    Q_OBJECT

public:
    PropertyOverview(QWidget *parent = 0);
    virtual ~PropertyOverview();
    void refreshView ();
    void setParameter (settingsType aParameter, QString value);

private slots:
    void onOpenPropertyButtonClicked ();
private:
    void disableUi (bool aValue);

    Ui::PropertyOverview *ui;

    QString mUser;
};

#endif // PROPERTYOVERVIEW_H
