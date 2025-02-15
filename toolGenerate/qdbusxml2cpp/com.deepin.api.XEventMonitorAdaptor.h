/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.api.XEventMonitor.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.api.XEventMonitorAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.api.XEventMonitor.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_API_XEVENTMONITORADAPTOR_H
#define COM_DEEPIN_API_XEVENTMONITORADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.api.XEventMonitor.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.api.XEventMonitor
 */
class XEventMonitorAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.api.XEventMonitor")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.api.XEventMonitor\">\n"
"    <method name=\"RegisterArea\">\n"
"      <arg direction=\"in\" type=\"i\"/>\n"
"      <arg direction=\"in\" type=\"i\"/>\n"
"      <arg direction=\"in\" type=\"i\"/>\n"
"      <arg direction=\"in\" type=\"i\"/>\n"
"      <arg direction=\"in\" type=\"i\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"RegisterAreas\">\n"
"      <arg direction=\"in\" type=\"a(iiii)\"/>\n"
"      <arg direction=\"in\" type=\"i\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"      <annotation value=\"AreaList\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
"    </method>\n"
"    <method name=\"RegisterFullScreen\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"UnregisterArea\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <signal name=\"CursorInto\">\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"CursorOut\">\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"CursorMove\">\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"ButtonPress\">\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"ButtonRelease\">\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"KeyPress\">\n"
"      <arg type=\"s\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"KeyRelease\">\n"
"      <arg type=\"s\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"i\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"CancelAllArea\"/>\n"
"  </interface>\n"
        "")
public:
    XEventMonitorAdaptor(QObject *parent);
    virtual ~XEventMonitorAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    QString RegisterArea(int in0, int in1, int in2, int in3, int in4);
    QString RegisterAreas(AreaList in0, int in1);
    QString RegisterFullScreen();
    bool UnregisterArea(const QString &in0);
Q_SIGNALS: // SIGNALS
    void ButtonPress(int in0, int in1, int in2, const QString &in3);
    void ButtonRelease(int in0, int in1, int in2, const QString &in3);
    void CancelAllArea();
    void CursorInto(int in0, int in1, const QString &in2);
    void CursorMove(int in0, int in1, const QString &in2);
    void CursorOut(int in0, int in1, const QString &in2);
    void KeyPress(const QString &in0, int in1, int in2, const QString &in3);
    void KeyRelease(const QString &in0, int in1, int in2, const QString &in3);
};

#endif
