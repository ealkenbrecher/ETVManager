#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>
#include <QPixmap>
#include "propertylistdialog.h"
#include "patterneditor.h"
#include "patterneditorreport.h"
#include "systemsettings.h"
#include "propertyMainView.h"

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
