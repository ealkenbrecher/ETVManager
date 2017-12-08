TEMPLATE        = app
TARGET          = etvmanager

QT              += sql widgets network
QT              += printsupport

HEADERS         = connectionwidget.h qsqlconnectiondialog.h \
    propertysettings.h \
    agendatab.h \
    propertytab.h \
    agendasettings.h \
    agendaitemsettings.h \
    QSqlQueryModelImpl.h \
    agendatablecontextmenu.h \
    ordertab.h \
    patterneditor.h \
    patternitemsettings.h \
    orderitemsettings.h \
    patterneditorreport.h \
    patterneditorreportitemsettings.h \
    systemsettings.h \
    editadvisersdialog.h \
    wizarddialogbox.h \
    votingdialog.h \
    stringreplacer.h \
    decissionitemsettings.h \
    decissionlibrarytab.h \
    decissionlibraryeditdialog.h \
    global.h \
    databaseimpl.h \
    qsqlquerymodelagendaview.h \
    qsqlquerymodelpropertyview.h \
    propertylistdialog.h \
    qstandarditemmodelpropertyoverview.h \
    agendaoptionsdialog.h \
    agendadialog.h \
    mainwindow.h \
    propertyMainView.h \
    qsqlquerymodelprotocolgeneratorview.h \
    agendawizard.h \
    protocolDecissionGenerator.h \
    presencechangedialog.h \
    generatorWidget.h
SOURCES         = main.cpp connectionwidget.cpp qsqlconnectiondialog.cpp \
    propertysettings.cpp \
    agendatab.cpp \
    propertytab.cpp \
    agendasettings.cpp \
    agendaitemsettings.cpp \
    QSqlQueryModelImpl.cpp \
    agendatablecontextmenu.cpp \
    ordertab.cpp \
    patterneditor.cpp \
    patternitemsettings.cpp \
    orderitemsettings.cpp \
    patterneditorreport.cpp \
    patterneditorreportitemsettings.cpp \
    systemsettings.cpp \
    editadvisersdialog.cpp \
    wizarddialogbox.cpp \
    votingdialog.cpp \
    stringreplacer.cpp \
    decissionitemsettings.cpp \
    decissionlibrarytab.cpp \
    decissionlibraryeditdialog.cpp \
    global.cpp \
    databaseimpl.cpp \
    qsqlquerymodelagendaview.cpp \
    qsqlquerymodelpropertyview.cpp \
    propertylistdialog.cpp \
    qstandarditemmodelpropertyoverview.cpp \
    agendaoptionsdialog.cpp \
    agendadialog.cpp \
    mainwindow.cpp \
    propertyMainView.cpp \
    qsqlquerymodelprotocolgeneratorview.cpp \
    agendawizard.cpp \
    protocolDecissionGenerator.cpp \
    presencechangedialog.cpp \
    generatorWidget.cpp

FORMS           = qsqlconnectiondialog.ui \
    propertysettings.ui \
    agendatab.ui \
    propertytab.ui \
    agendasettings.ui \
    agendaitemsettings.ui \
    agendaitemcontextmenu.ui \
    ordertab.ui \
    patterneditor.ui \
    patternitemsettings.ui \
    orderitemsettings.ui \
    patterneditorreport.ui \
    patterneditorreportitemsettings.ui \
    systemsettings.ui \
    editadvisersdialog.ui \
    votingdialog.ui \
    decissionitemsettings.ui \
    decissionlibrarytab.ui \
    decissionlibraryeditdialog.ui \
    simpleListDialog.ui \
    propertymainview.ui \
    agendaoptionsdialog.ui \
    agendadialog.ui \
    mainwindow.ui \
    protocolDecissionGenerator.ui \
    presencechangedialog.ui \
    generatorwidget.ui

build_all:!build_pass {
    CONFIG -= build_all
    CONFIG += release
}

wince*: {
    DEPLOYMENT_PLUGIN += qsqlite
}

OTHER_FILES += \
    cfg/config.ini \
    .gitignore
