/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the demonstration applications of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "mainview.h"

#include <QtCore>
#include <QtWidgets>
#include <QtSql>
#include "global.h"
#include "databaseimpl.h"
#include "stringreplacer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    DatabaseImpl database;
    database.connect();

    QMainWindow mainWin;
    mainWin.setWindowTitle(QObject::tr("ETV Planer"));
    mainWin.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    mainView view (&mainWin);
    view.setParameter(eDbConnectionName, database.getConnectionName());

    mainWin.setCentralWidget(&view);
    mainWin.setFixedSize(view.size());

    StringReplacer::getInstance()->setUser(database.getConnectionName());

    QMetaObject::invokeMethod(&view, "refreshView", Qt::QueuedConnection);

    QMenu *fileMenu = mainWin.menuBar()->addMenu(QObject::tr("&Programm"));
    fileMenu->addSeparator();
    fileMenu->addAction(QObject::tr("&Beenden"), &app, SLOT(quit()));

    QMenu *propertyMenu = mainWin.menuBar()->addMenu(QObject::tr("&Liegenschaften"));
    propertyMenu->addAction (QObject::tr("Liegenschaft öffnen"), &view, SLOT(openProperty()));
    propertyMenu->addAction (QObject::tr("Liegenschaft hinzufügen"), &view, SLOT(addProperty()));

    QMenu *templateMenu = mainWin.menuBar()->addMenu(QObject::tr("&Vorlagen"));
    templateMenu->addAction (QObject::tr("Tagesordnungspunktvorlagen verwalten"), &view, SLOT(patternSettings()));
    templateMenu->addAction (QObject::tr("Protokollvorlagen verwalten"), &view, SLOT(reportSettings()));

    QMenu *optionsMenu = mainWin.menuBar()->addMenu(QObject::tr("&Administration"));
    optionsMenu->addAction (QObject::tr("Systemeinstellungen"), &view, SLOT(systemSettings ()));
    optionsMenu->addAction (QObject::tr("Liegenschaften verwalten"), &view, SLOT(systemSettings ()));

    QMenu *helpMenu = mainWin.menuBar()->addMenu(QObject::tr("&Hilfe"));
    helpMenu->addAction(QObject::tr("Über Qt"), qApp, SLOT(aboutQt()));

    mainWin.show();

    return app.exec();
}
