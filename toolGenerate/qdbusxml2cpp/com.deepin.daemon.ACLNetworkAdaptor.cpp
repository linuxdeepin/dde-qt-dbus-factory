/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.ACLNetwork.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.ACLNetworkAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.ACLNetwork.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.ACLNetworkAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class NetworkAdaptor
 */

NetworkAdaptor::NetworkAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

NetworkAdaptor::~NetworkAdaptor()
{
    // destructor
}

void NetworkAdaptor::Enable(const QString &id, bool enabled)
{
    // handle method call com.deepin.daemon.ACL.Network.Enable
    QMetaObject::invokeMethod(parent(), "Enable", Q_ARG(QString, id), Q_ARG(bool, enabled));
}

bool NetworkAdaptor::Register(const QString &handler, int pid, uint timeout)
{
    // handle method call com.deepin.daemon.ACL.Network.Register
    bool result;
    QMetaObject::invokeMethod(parent(), "Register", Q_RETURN_ARG(bool, result), Q_ARG(QString, handler), Q_ARG(int, pid), Q_ARG(uint, timeout));
    return result;
}

bool NetworkAdaptor::Unregister(const QString &handler, int pid)
{
    // handle method call com.deepin.daemon.ACL.Network.Unregister
    bool result;
    QMetaObject::invokeMethod(parent(), "Unregister", Q_RETURN_ARG(bool, result), Q_ARG(QString, handler), Q_ARG(int, pid));
    return result;
}

