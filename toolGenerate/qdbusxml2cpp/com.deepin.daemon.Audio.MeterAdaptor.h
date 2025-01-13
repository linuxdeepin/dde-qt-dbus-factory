/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.Audio.Meter.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Audio.MeterAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Audio.Meter.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_AUDIO_METERADAPTOR_H
#define COM_DEEPIN_DAEMON_AUDIO_METERADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Audio.Meter.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.Audio.Meter
 */
class MeterAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.Audio.Meter")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.Audio.Meter\">\n"
"    <method name=\"Tick\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"Volume\"/>\n"
"  </interface>\n"
        "")
public:
    MeterAdaptor(QObject *parent);
    virtual ~MeterAdaptor();

public: // PROPERTIES
    Q_PROPERTY(double Volume READ volume)
    double volume() const;

public Q_SLOTS: // METHODS
    void Tick();
Q_SIGNALS: // SIGNALS
};

#endif
