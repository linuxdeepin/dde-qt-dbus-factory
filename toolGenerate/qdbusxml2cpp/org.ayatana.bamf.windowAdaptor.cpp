/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/org.ayatana.bamf.window.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.ayatana.bamf.windowAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.ayatana.bamf.window.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.ayatana.bamf.windowAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class WindowAdaptor
 */

WindowAdaptor::WindowAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

WindowAdaptor::~WindowAdaptor()
{
    // destructor
}

uint WindowAdaptor::GetPid()
{
    // handle method call org.ayatana.bamf.window.GetPid
    uint pid;
    QMetaObject::invokeMethod(parent(), "GetPid", Q_RETURN_ARG(uint, pid));
    return pid;
}

uint WindowAdaptor::GetXid()
{
    // handle method call org.ayatana.bamf.window.GetXid
    uint xid;
    QMetaObject::invokeMethod(parent(), "GetXid", Q_RETURN_ARG(uint, xid));
    return xid;
}

int WindowAdaptor::Maximized()
{
    // handle method call org.ayatana.bamf.window.Maximized
    int maximized;
    QMetaObject::invokeMethod(parent(), "Maximized", Q_RETURN_ARG(int, maximized));
    return maximized;
}

int WindowAdaptor::Monitor()
{
    // handle method call org.ayatana.bamf.window.Monitor
    int monitor_number;
    QMetaObject::invokeMethod(parent(), "Monitor", Q_RETURN_ARG(int, monitor_number));
    return monitor_number;
}

QString WindowAdaptor::Transient()
{
    // handle method call org.ayatana.bamf.window.Transient
    QString path;
    QMetaObject::invokeMethod(parent(), "Transient", Q_RETURN_ARG(QString, path));
    return path;
}

uint WindowAdaptor::WindowType()
{
    // handle method call org.ayatana.bamf.window.WindowType
    uint type;
    QMetaObject::invokeMethod(parent(), "WindowType", Q_RETURN_ARG(uint, type));
    return type;
}

QString WindowAdaptor::Xprop(const QString &xprop)
{
    // handle method call org.ayatana.bamf.window.Xprop
    QString name;
    QMetaObject::invokeMethod(parent(), "Xprop", Q_RETURN_ARG(QString, name), Q_ARG(QString, xprop));
    return name;
}

