/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.Mime.Media.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Mime.MediaAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Mime.Media.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_MIME_MEDIAADAPTOR_H
#define COM_DEEPIN_DAEMON_MIME_MEDIAADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Mime.Media.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.Mime.Media
 */
class MediaAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.Mime.Media")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.Mime.Media\">\n"
"    <method name=\"EnableAutoOpen\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"GetDefaultApp\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"ListApps\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"Reset\"/>\n"
"    <method name=\"SetDefaultApp\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <property access=\"read\" type=\"b\" name=\"AutoOpen\"/>\n"
"  </interface>\n"
        "")
public:
    MediaAdaptor(QObject *parent);
    virtual ~MediaAdaptor();

public: // PROPERTIES
    Q_PROPERTY(bool AutoOpen READ autoOpen)
    bool autoOpen() const;

public Q_SLOTS: // METHODS
    void EnableAutoOpen(bool in0);
    QString GetDefaultApp(const QString &in0);
    QString ListApps(const QString &in0);
    void Reset();
    void SetDefaultApp(const QString &in0, const QString &in1);
Q_SIGNALS: // SIGNALS
};

#endif
