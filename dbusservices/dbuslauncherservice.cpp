/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a dbuslauncherservice -c DBusLauncherService -l DBusLauncherService com.deepin.dde.Launcher.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "dbuslauncherservice.h"

#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DBusLauncherService
 */

DBusLauncherService::DBusLauncherService(MainFrame *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DBusLauncherService::~DBusLauncherService()
{
    // destructor
}

void DBusLauncherService::Exit()
{
    // handle method call com.deepin.dde.Launcher.Exit
//    parent()->Exit();
    parent()->exit();
}

void DBusLauncherService::Hide()
{
    // handle method call com.deepin.dde.Launcher.Hide
//    parent()->Hide();
    parent()->hide();
    emit Closed();
}

void DBusLauncherService::Show()
{
    // handle method call com.deepin.dde.Launcher.Show
//    parent()->Show();
    parent()->show();
    emit Shown();
}

void DBusLauncherService::ShowByMode(qlonglong in0)
{
    // handle method call com.deepin.dde.Launcher.ShowByMode
//    parent()->ShowByMode(in0);
    parent()->showByMode(in0);
}

void DBusLauncherService::Toggle()
{
    // handle method call com.deepin.dde.Launcher.Toggle
//    parent()->Toggle();
    if (parent()->isVisible())
    {
        parent()->hide();
        emit Closed();
    }
    else
    {
        parent()->show();
        emit Shown();
    }
}

