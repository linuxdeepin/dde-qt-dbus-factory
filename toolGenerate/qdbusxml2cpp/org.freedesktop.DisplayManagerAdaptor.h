/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/org.freedesktop.DisplayManager.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.freedesktop.DisplayManagerAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.freedesktop.DisplayManager.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_FREEDESKTOP_DISPLAYMANAGERADAPTOR_H
#define ORG_FREEDESKTOP_DISPLAYMANAGERADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.freedesktop.DisplayManager.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.freedesktop.DisplayManager
 */
class DisplayManagerAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.freedesktop.DisplayManager")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.freedesktop.DisplayManager\">\n"
"    <method name=\"AddSeat\">\n"
"      <annotation value=\"PropertyList\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"type\"/>\n"
"      <arg direction=\"in\" type=\"a(ss)\" name=\"properties\"/>\n"
"      <arg direction=\"out\" type=\"o\" name=\"seat\"/>\n"
"    </method>\n"
"    <method name=\"AddLocalXSeat\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"display-number\"/>\n"
"      <arg direction=\"out\" type=\"o\" name=\"seat\"/>\n"
"    </method>\n"
"    <signal name=\"SeatAdded\">\n"
"      <arg type=\"o\" name=\"seat\"/>\n"
"    </signal>\n"
"    <signal name=\"SeatRemoved\">\n"
"      <arg type=\"o\" name=\"seat\"/>\n"
"    </signal>\n"
"    <signal name=\"SessionAdded\">\n"
"      <arg type=\"o\" name=\"session\"/>\n"
"    </signal>\n"
"    <signal name=\"SessionRemoved\">\n"
"      <arg type=\"o\" name=\"session\"/>\n"
"    </signal>\n"
"    <property access=\"read\" type=\"ao\" name=\"Seats\"/>\n"
"    <property access=\"read\" type=\"ao\" name=\"Sessions\"/>\n"
"  </interface>\n"
        "")
public:
    DisplayManagerAdaptor(QObject *parent);
    virtual ~DisplayManagerAdaptor();

public: // PROPERTIES
    Q_PROPERTY(QList<QDBusObjectPath> Seats READ seats)
    QList<QDBusObjectPath> seats() const;

    Q_PROPERTY(QList<QDBusObjectPath> Sessions READ sessions)
    QList<QDBusObjectPath> sessions() const;

public Q_SLOTS: // METHODS
    QDBusObjectPath AddLocalXSeat(int display_number);
    QDBusObjectPath AddSeat(const QString &type, PropertyList properties);
Q_SIGNALS: // SIGNALS
    void SeatAdded(const QDBusObjectPath &seat);
    void SeatRemoved(const QDBusObjectPath &seat);
    void SessionAdded(const QDBusObjectPath &session);
    void SessionRemoved(const QDBusObjectPath &session);
};

#endif
