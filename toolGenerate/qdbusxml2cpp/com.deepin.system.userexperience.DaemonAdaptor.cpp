/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.system.userexperience.Daemon.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.system.userexperience.DaemonAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.system.userexperience.Daemon.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.system.userexperience.DaemonAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DaemonAdaptor
 */

DaemonAdaptor::DaemonAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DaemonAdaptor::~DaemonAdaptor()
{
    // destructor
}

void DaemonAdaptor::Enable(bool enabled)
{
    // handle method call com.deepin.userexperience.Daemon.Enable
    QMetaObject::invokeMethod(parent(), "Enable", Q_ARG(bool, enabled));
}

bool DaemonAdaptor::IsEnabled()
{
    // handle method call com.deepin.userexperience.Daemon.IsEnabled
    bool enabled;
    QMetaObject::invokeMethod(parent(), "IsEnabled", Q_RETURN_ARG(bool, enabled));
    return enabled;
}

