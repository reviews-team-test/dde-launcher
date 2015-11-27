/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusClientManager -p dbusclientmanager dde.dock.ClientManager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSCLIENTMANAGER_H_1435836676
#define DBUSCLIENTMANAGER_H_1435836676

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface dde.dock.ClientManager
 */
class DBusClientManager: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticServerPath()
    { return "com.deepin.daemon.Dock"; }
    static inline const char *staticInterfacePath()
    { return "/dde/dock/ClientManager"; }
    static inline const char *staticInterfaceName()
    { return "dde.dock.ClientManager"; }

public:
    DBusClientManager(QObject *parent = 0);

    ~DBusClientManager();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> ActiveWindow(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("ActiveWindow"), argumentList);
    }

    inline QDBusPendingReply<bool> CloseWindow(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("CloseWindow"), argumentList);
    }

    inline QDBusPendingReply<uint> CurrentActiveWindow()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("CurrentActiveWindow"), argumentList);
    }

    inline QDBusPendingReply<bool> IsLauncherShown()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsLauncherShown"), argumentList);
    }

    inline QDBusPendingReply<> ToggleShowDesktop()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("ToggleShowDesktop"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void ActiveWindowChanged(uint in0);
    void ShowingDesktopChanged();
};

namespace dde {
  namespace dock {
    typedef ::DBusClientManager ClientManager;
  }
}
#endif
