#ifndef PROTOCOLGENERATORMAINDLG_H
#define PROTOCOLGENERATORMAINDLG_H

#include <QDialog>
#include <QWidget>

class QSqlQueryModelProtocolGeneratorView;
class AgendaWizard;

namespace Ui {
  class protocolGeneratorMainDlg;
}

class ProtocolGeneratorMainDlg : public QWidget
{
  Q_OBJECT

public:
  explicit ProtocolGeneratorMainDlg(QWidget *parent, QString &rDbConnectionName, int curEstateId, int agendaYear, int agendaNum);
  ~ProtocolGeneratorMainDlg();

signals:
  void exitView ();

private slots:
  void on_startAgendaWizard_clicked();
  void on_startCoverpageWizard_clicked();

  void on_moveEntryUp_clicked();

  void on_moveEntryDown_clicked();

  void on_addChangeRules_clicked();

  void on_addChangePresence_clicked();

  void on_buttonBox_accepted();

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
