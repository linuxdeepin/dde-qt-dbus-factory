/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.system.userexperience.Daemon.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.system.userexperience.DaemonAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.system.userexperience.Daemon.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_SYSTEM_USEREXPERIENCE_DAEMONADAPTOR_H
#define COM_DEEPIN_SYSTEM_USEREXPERIENCE_DAEMONADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.system.userexperience.Daemon.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.userexperience.Daemon
 */
class DaemonAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.userexperience.Daemon")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.userexperience.Daemon\">\n"
"    <method name=\"Enable\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"enabled\"/>\n"
"    </method>\n"
"    <method name=\"IsEnabled\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"enabled\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    DaemonAdaptor(QObject *parent);
    virtual ~DaemonAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Enable(bool enabled);
    bool IsEnabled();
Q_SIGNALS: // SIGNALS
};

#endif
