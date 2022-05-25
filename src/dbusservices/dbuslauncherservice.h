/*
 * This file was generated by qdbusxml2cpp version 0.8
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DBUSLAUNCHERSERVICE_H_1458107102
#define DBUSLAUNCHERSERVICE_H_1458107102

#include "launchersys.h"

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.Launcher1
 */
class DBusLauncherService: public QDBusAbstractAdaptor
{
    Q_OBJECT
#ifdef USE_AM_API
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.Launcher1")
#else
    Q_CLASSINFO("D-Bus Interface", "com.deepin.dde.Launcher")
#endif

public:
    explicit DBusLauncherService(LauncherSys *parent);
    virtual ~DBusLauncherService();

    inline LauncherSys *parent() const
    { return static_cast<LauncherSys *>(QObject::parent()); }

public:
    Q_PROPERTY(bool Visible READ IsVisible NOTIFY VisibleChanged)

public Q_SLOTS:
    void Exit();
    void Hide();
    void Show();
    void ShowByMode(qlonglong in0);
#ifndef WITHOUT_UNINSTALL_APP
    void UninstallApp(const QString &appKey);
#endif
    void Toggle();
    bool IsVisible();

Q_SIGNALS:
    void Closed();
    void Shown();
    void VisibleChanged(bool visible);
};

#endif
