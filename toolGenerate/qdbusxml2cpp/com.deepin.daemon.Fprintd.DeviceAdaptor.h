/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.Fprintd.Device.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Fprintd.DeviceAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Fprintd.Device.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_FPRINTD_DEVICEADAPTOR_H
#define COM_DEEPIN_DAEMON_FPRINTD_DEVICEADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Fprintd.Device.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.Fprintd.Device
 */
class DeviceAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.Fprintd.Device")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.Fprintd.Device\">\n"
"    <method name=\"Claim\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"DeleteEnrolledFingers\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"EnrollStart\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"EnrollStop\"/>\n"
"    <method name=\"ListEnrolledFingers\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"as\"/>\n"
"    </method>\n"
"    <method name=\"Release\"/>\n"
"    <method name=\"VerifyStart\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"VerifyStop\"/>\n"
"    <signal name=\"EnrollStatus\">\n"
"      <arg type=\"s\"/>\n"
"      <arg type=\"b\"/>\n"
"    </signal>\n"
"    <signal name=\"VerifyStatus\">\n"
"      <arg type=\"s\"/>\n"
"      <arg type=\"b\"/>\n"
"    </signal>\n"
"    <signal name=\"VerifyFingerSelected\">\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    DeviceAdaptor(QObject *parent);
    virtual ~DeviceAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Claim(const QString &in0);
    void DeleteEnrolledFingers(const QString &in0);
    void EnrollStart(const QString &in0);
    void EnrollStop();
    QStringList ListEnrolledFingers(const QString &in0);
    void Release();
    void VerifyStart(const QString &in0);
    void VerifyStop();
Q_SIGNALS: // SIGNALS
    void EnrollStatus(const QString &in0, bool in1);
    void VerifyFingerSelected(const QString &in0);
    void VerifyStatus(const QString &in0, bool in1);
};

#endif
