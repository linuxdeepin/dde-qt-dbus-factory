/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.SessionManager.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.SessionManagerAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.SessionManager.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.SessionManagerAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class SessionManagerAdaptor
 */

SessionManagerAdaptor::SessionManagerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

SessionManagerAdaptor::~SessionManagerAdaptor()
{
    // destructor
}

QString SessionManagerAdaptor::currentUid() const
{
    // get the value of property CurrentUid
    return qvariant_cast< QString >(parent()->property("CurrentUid"));
}

bool SessionManagerAdaptor::locked() const
{
    // get the value of property Locked
    return qvariant_cast< bool >(parent()->property("Locked"));
}

int SessionManagerAdaptor::stage() const
{
    // get the value of property Stage
    return qvariant_cast< int >(parent()->property("Stage"));
}

bool SessionManagerAdaptor::AllowSessionDaemonRun()
{
    // handle method call com.deepin.SessionManager.AllowSessionDaemonRun
    bool out0;
    QMetaObject::invokeMethod(parent(), "AllowSessionDaemonRun", Q_RETURN_ARG(bool, out0));
    return out0;
}

bool SessionManagerAdaptor::CanHibernate()
{
    // handle method call com.deepin.SessionManager.CanHibernate
    bool out0;
    QMetaObject::invokeMethod(parent(), "CanHibernate", Q_RETURN_ARG(bool, out0));
    return out0;
}

bool SessionManagerAdaptor::CanLogout()
{
    // handle method call com.deepin.SessionManager.CanLogout
    bool out0;
    QMetaObject::invokeMethod(parent(), "CanLogout", Q_RETURN_ARG(bool, out0));
    return out0;
}

bool SessionManagerAdaptor::CanReboot()
{
    // handle method call com.deepin.SessionManager.CanReboot
    bool out0;
    QMetaObject::invokeMethod(parent(), "CanReboot", Q_RETURN_ARG(bool, out0));
    return out0;
}

bool SessionManagerAdaptor::CanShutdown()
{
    // handle method call com.deepin.SessionManager.CanShutdown
    bool out0;
    QMetaObject::invokeMethod(parent(), "CanShutdown", Q_RETURN_ARG(bool, out0));
    return out0;
}

bool SessionManagerAdaptor::CanSuspend()
{
    // handle method call com.deepin.SessionManager.CanSuspend
    bool out0;
    QMetaObject::invokeMethod(parent(), "CanSuspend", Q_RETURN_ARG(bool, out0));
    return out0;
}

void SessionManagerAdaptor::ForceLogout()
{
    // handle method call com.deepin.SessionManager.ForceLogout
    QMetaObject::invokeMethod(parent(), "ForceLogout");
}

void SessionManagerAdaptor::ForceReboot()
{
    // handle method call com.deepin.SessionManager.ForceReboot
    QMetaObject::invokeMethod(parent(), "ForceReboot");
}

void SessionManagerAdaptor::ForceShutdown()
{
    // handle method call com.deepin.SessionManager.ForceShutdown
    QMetaObject::invokeMethod(parent(), "ForceShutdown");
}

void SessionManagerAdaptor::Logout()
{
    // handle method call com.deepin.SessionManager.Logout
    QMetaObject::invokeMethod(parent(), "Logout");
}

void SessionManagerAdaptor::PowerOffChoose()
{
    // handle method call com.deepin.SessionManager.PowerOffChoose
    QMetaObject::invokeMethod(parent(), "PowerOffChoose");
}

void SessionManagerAdaptor::Reboot()
{
    // handle method call com.deepin.SessionManager.Reboot
    QMetaObject::invokeMethod(parent(), "Reboot");
}

bool SessionManagerAdaptor::Register(const QString &in0)
{
    // handle method call com.deepin.SessionManager.Register
    bool out0;
    QMetaObject::invokeMethod(parent(), "Register", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

void SessionManagerAdaptor::RequestHibernate()
{
    // handle method call com.deepin.SessionManager.RequestHibernate
    QMetaObject::invokeMethod(parent(), "RequestHibernate");
}

void SessionManagerAdaptor::RequestLock()
{
    // handle method call com.deepin.SessionManager.RequestLock
    QMetaObject::invokeMethod(parent(), "RequestLock");
}

void SessionManagerAdaptor::RequestLogout()
{
    // handle method call com.deepin.SessionManager.RequestLogout
    QMetaObject::invokeMethod(parent(), "RequestLogout");
}

void SessionManagerAdaptor::RequestReboot()
{
    // handle method call com.deepin.SessionManager.RequestReboot
    QMetaObject::invokeMethod(parent(), "RequestReboot");
}

void SessionManagerAdaptor::RequestShutdown()
{
    // handle method call com.deepin.SessionManager.RequestShutdown
    QMetaObject::invokeMethod(parent(), "RequestShutdown");
}

void SessionManagerAdaptor::RequestSuspend()
{
    // handle method call com.deepin.SessionManager.RequestSuspend
    QMetaObject::invokeMethod(parent(), "RequestSuspend");
}

void SessionManagerAdaptor::SetLocked(bool in0)
{
    // handle method call com.deepin.SessionManager.SetLocked
    QMetaObject::invokeMethod(parent(), "SetLocked", Q_ARG(bool, in0));
}

void SessionManagerAdaptor::Shutdown()
{
    // handle method call com.deepin.SessionManager.Shutdown
    QMetaObject::invokeMethod(parent(), "Shutdown");
}

void SessionManagerAdaptor::ToggleDebug()
{
    // handle method call com.deepin.SessionManager.ToggleDebug
    QMetaObject::invokeMethod(parent(), "ToggleDebug");
}

