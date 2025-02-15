/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/org.bluez.obex.Session1.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.bluez.obex.Session1Adaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.bluez.obex.Session1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_BLUEZ_OBEX_SESSION1ADAPTOR_H
#define ORG_BLUEZ_OBEX_SESSION1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.bluez.obex.Session1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.bluez.obex.Session1
 */
class Session1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.bluez.obex.Session1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.bluez.obex.Session1\">\n"
"    <method name=\"GetCapabilities\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"capabilities\"/>\n"
"    </method>\n"
"    <property access=\"read\" type=\"s\" name=\"Source\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Destination\"/>\n"
"    <property access=\"read\" type=\"y\" name=\"Channel\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Target\"/>\n"
"  </interface>\n"
        "")
public:
    Session1Adaptor(QObject *parent);
    virtual ~Session1Adaptor();

public: // PROPERTIES
    Q_PROPERTY(uchar Channel READ channel)
    uchar channel() const;

    Q_PROPERTY(QString Destination READ destination)
    QString destination() const;

    Q_PROPERTY(QString Source READ source)
    QString source() const;

    Q_PROPERTY(QString Target READ target)
    QString target() const;

public Q_SLOTS: // METHODS
    QString GetCapabilities();
Q_SIGNALS: // SIGNALS
};

#endif
