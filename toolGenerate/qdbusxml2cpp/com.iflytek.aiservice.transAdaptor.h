/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.iflytek.aiservice.trans.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.transAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.trans.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_IFLYTEK_AISERVICE_TRANSADAPTOR_H
#define COM_IFLYTEK_AISERVICE_TRANSADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.trans.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.iflytek.aiservice.trans
 */
class TransAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.iflytek.aiservice.trans")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.iflytek.aiservice.trans\">\n"
"    <method name=\"syncTrans\">\n"
"      <arg direction=\"in\" type=\"a{sv}\" name=\"param\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"result\"/>\n"
"    </method>\n"
"    <method name=\"asyncTrans\">\n"
"      <arg direction=\"in\" type=\"a{sv}\" name=\"param\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
"    </method>\n"
"    <signal name=\"onNotify\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"result\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    TransAdaptor(QObject *parent);
    virtual ~TransAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void asyncTrans(const QVariantMap &param);
    QString syncTrans(const QVariantMap &param);
Q_SIGNALS: // SIGNALS
    void onNotify(const QString &result);
};

#endif
