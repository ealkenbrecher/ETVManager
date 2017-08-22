#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QWidget>
#include <QtSql>
#include "qsqlconnectiondialog.h"
#include <QString>
#include "global.h"

class AgendaTab;
class PropertyOverview;
class OrderTab;
class GeneratorTab;
class ReportGeneratorTab;
class DecissionLibraryTab;

namespace Ui {
class propertyMainView;
}

QT_FORWARD_DECLARE_CLASS(QSqlError)

class ConnectionWidget;
class QStandardItemModelPropertyOverview;

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
    void patternSettings ();
    void reportSettings ();
    void systemSettings ();
    void openProperty();
    void addProperty ();

private slots:
    void on_treeView_doubleClicked(const QModelIndex &index);

private:
    bool dbIsOk();
    void setCurrentEstateId ();
    void setConnectionName (QString value);
    void updateMainView();

    Ui::propertyMainView *ui;
    QSqlDatabase db;

    int mCurrentEstateId;
    PropertyOverview* mPropertyOverview;
    QString mUser;
    QStandardItemModelPropertyOverview* mItemModelTree;
};

#endif // MAINVIEW_H
