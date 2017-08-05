#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QWidget>
#include <QtSql>
#include "qsqlconnectiondialog.h"
#include <QString>
#include "global.h"

class AgendaTab;
class PropertyTab;
class OrderTab;
class GeneratorTab;
class ReportGeneratorTab;
class DecissionLibraryTab;

namespace Ui {
class mainView;
}

QT_FORWARD_DECLARE_CLASS(QSqlError)
class ConnectionWidget;

enum tabSelection
{
    ePropertySelectionTab = 0,
    eAgendaTab = 1,
    eOrderTab = 2,
    eReportGeneratorTab = 3,
    eDecissionLibraryTab = 4,
    eGeneratorTab = 5
};

class mainView : public QWidget
{
    Q_OBJECT

public:
    explicit mainView(QWidget *parent = 0);
    void setCurrentTab (int aTab);
    void setParameter(settingsType aSetting, const QString value);
    ~mainView();

public slots:
    void slotRefreshOnChangedTab (int aIndex);
    void refreshView();
    void patternSettings ();
    void reportSettings ();
    void systemSettings ();
    void addProperty ();
    void etvSelectionValid (bool aValid);

private:
    void enableTabsOnValidData (bool aEnable);
    bool dbIsOk();
    void setCurrentEstateId ();
    void setObjectList();
    void setConnectionName (QString value);
    //void setYearsCurrentObject();
    Ui::mainView *ui;
    QSqlDatabase db;

    int mCurrentEstateId;
    AgendaTab* mAgendaTab;
    PropertyTab* mPropertyTab;
    OrderTab* mOrderTab;
    GeneratorTab* mGeneratorTab;
    ReportGeneratorTab* mReportGeneratorTab;
    DecissionLibraryTab* mDecissionLibraryTab;
    QString mUser;
};

#endif // MAINVIEW_H
