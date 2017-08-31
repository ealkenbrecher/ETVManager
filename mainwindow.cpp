#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>
#include <QPixmap>
#include "propertylistdialog.h"
#include "patterneditor.h"
#include "patterneditorreport.h"
#include "systemsettings.h"
#include "propertyMainView.h"
#include "propertysettings.h"
#include "QMessageBox"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  mDbConnectionName = "";
  mPropertyWindow = 0;

  QPixmap pixmap ("icons/property.ico");
  QIcon icon (pixmap);
  ui->openProperty->setIcon(icon);
  ui->openProperty->setIconSize(QSize(80,80));

  QPixmap pixmapSettings ("icons/settings.ico");
  QIcon iconSettings (pixmapSettings);
  ui->systemSettings->setIcon(iconSettings);
  ui->systemSettings->setIconSize(QSize(80,80));

  QPixmap pixmapExit ("icons/exit.ico");
  QIcon iconExit (pixmapExit);
  ui->exitApplication->setIcon(iconExit);
  ui->exitApplication->setIconSize(QSize(80,80));
}

void MainWindow::setDbConnectionName (QString rDbConnectionName)
{
  mDbConnectionName = rDbConnectionName;
}


MainWindow::~MainWindow()
{
  delete ui;

  if (0!= mPropertyWindow)
    delete mPropertyWindow;
}

void MainWindow::patternSettings ()
{
  PatternEditor editor (this);
  editor.setUser(mDbConnectionName);
  editor.updatePatternTable();
  editor.exec();
}

void MainWindow::reportSettings ()
{
  patternEditorReport editor (this);
  editor.setUser(mDbConnectionName);
  editor.updatePatternTable();
  editor.exec();
}

void MainWindow::systemSettings ()
{
  SystemSettings settings (this);
  settings.exec();
}

void MainWindow::openProperty()
{
  propertyListDialog dialog (this);
  dialog.setDbConnectionName(mDbConnectionName);
  dialog.updateDialog();

  if (QDialog::Accepted == dialog.exec())
  {
    int curEstateId = dialog.getSelectedPropertyId ();
    QString estateName = dialog.getSelectedPropertyName();

    if (curEstateId != INVALID)
    {
      mPropertyWindow = new propertyMainView (this, mDbConnectionName, curEstateId);
      mPropertyWindow->setHeader (estateName);

      if (0 != mPropertyWindow)
      {
        connect (mPropertyWindow, SIGNAL (exitPropertyView()), this, SLOT (killPropertyView ()));
        mPropertyWindow->show();
      }
    }
  }
}

void MainWindow::addProperty ()
{

}

void MainWindow::on_systemSettings_clicked()
{
  systemSettings();
}

void MainWindow::on_openProperty_clicked()
{
  this->openProperty();
}

void MainWindow::on_exitApplication_clicked()
{
  QApplication::exit();
}

void MainWindow::killPropertyView ()
{
  if (0 != mPropertyWindow)
  {
    mPropertyWindow->hide();
    delete mPropertyWindow;
    mPropertyWindow = 0;
  }
}

void MainWindow::on_newProperty_clicked()
{
  PropertySettings dialog (this);

  if (QDialog::Accepted == dialog.exec())
  {
    //add property

    //get highest id
    int max_id = 0;
    QString request ("SELECT obj_id FROM Objekt ORDER BY obj_id DESC");
    QSqlQuery query (QSqlDatabase::database(mDbConnectionName));
    query.prepare(request);
    query.exec();

    if (query.next())
    {
      max_id = query.value(0).toInt();
      qDebug () << "max_id: " << max_id;

      if (0 != max_id)
      {
        QString propertyName = dialog.propertyName();
        QString invitationDeadline = dialog.getInvitationDeadline();
        int ownerQuantity = dialog.ownerQuantity();
        QString votingRule = dialog.votingRule();
        float mea = dialog.mea();
        int nextId = ++max_id;

        query.prepare("INSERT INTO Objekt (obj_id, obj_name, obj_mea, obj_stimmrecht, obj_anz_et, obj_inv_deadline) VALUES (:obj_id, :obj_name, :obj_mea, :obj_stimmrecht, :obj_anz_et, :obj_inv_deadline)");
        query.bindValue(":obj_id", nextId);
        query.bindValue(":obj_name", propertyName);
        query.bindValue(":obj_mea", mea);
        query.bindValue(":obj_stimmrecht", votingRule);
        query.bindValue(":obj_anz_et", ownerQuantity);
        query.bindValue(":obj_inv_deadline", invitationDeadline);
        query.exec();
      }
    }
  }
}
