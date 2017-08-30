#ifndef PROTOCOLGENERATORMAINDLG_H
#define PROTOCOLGENERATORMAINDLG_H

#include <QDialog>
#include <QWidget>

class QSqlQueryModelProtocolGeneratorView;
class AgendaWizard;

namespace Ui {
  class protocolGeneratorMainDlg;
}

class ProtocolGeneratorMainDlg : public QDialog
{
  Q_OBJECT

public:
  explicit ProtocolGeneratorMainDlg(QWidget *parent, QString &rDbConnectionName, int curEstateId, int agendaYear, int agendaNum);
  ~ProtocolGeneratorMainDlg();

private slots:
  void on_startAgendaWizard_clicked();
  void on_startCoverpageWizard_clicked();

  void on_moveEntryUp_clicked();

private:
  void initTableView();
  void updateTableView ();
  Ui::protocolGeneratorMainDlg *ui;
  QSqlQueryModelProtocolGeneratorView* mView;
  QString mDbConnectionName;
  int mEstateId;
  int mAgendaYear;
  int mAgendaNum;

  AgendaWizard* mAgendaWizard;
};

#endif // PROTOCOLGENERATORMAINDLG_H
