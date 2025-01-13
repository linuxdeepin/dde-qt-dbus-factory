/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.Miracast.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.MiracastAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Miracast.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_MIRACASTADAPTOR_H
#define COM_DEEPIN_DAEMON_MIRACASTADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Miracast.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.Miracast
 */
class MiracastAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.Miracast")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.Miracast\">\n"
"    <method name=\"Connect\">\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"    </method>\n"
"    <method name=\"Disconnect\">\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"    </method>\n"
"    <method name=\"Enable\">\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"ListLinks\">\n"
"      <arg direction=\"out\" type=\"a(sssbbo)\"/>\n"
"      <annotation value=\"LinkInfoList\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"ListSinks\">\n"
"      <arg direction=\"out\" type=\"a(sssboo)\"/>\n"
"      <annotation value=\"SinkInfoList\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"Scanning\">\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <signal name=\"Added\">\n"
"      <arg type=\"o\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"Removed\">\n"
"      <arg type=\"o\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"Event\">\n"
"      <arg type=\"y\"/>\n"
"      <arg type=\"o\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    MiracastAdaptor(QObject *parent);
    virtual ~MiracastAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Connect(const QDBusObjectPath &in0, uint in1, uint in2, uint in3, uint in4);
    void Disconnect(const QDBusObjectPath &in0);
    void Enable(const QDBusObjectPath &in0, bool in1);
    LinkInfoList ListLinks();
    SinkInfoList ListSinks();
    void Scanning(const QDBusObjectPath &in0, bool in1);
Q_SIGNALS: // SIGNALS
    void Added(const QDBusObjectPath &in0, const QString &in1);
    void Event(uchar in0, const QDBusObjectPath &in1);
    void Removed(const QDBusObjectPath &in0, const QString &in1);
};

#endif
