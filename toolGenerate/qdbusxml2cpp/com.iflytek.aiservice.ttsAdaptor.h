/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.iflytek.aiservice.tts.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.ttsAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.tts.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_IFLYTEK_AISERVICE_TTSADAPTOR_H
#define COM_IFLYTEK_AISERVICE_TTSADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.tts.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.iflytek.aiservice.tts
 */
class TtsAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.iflytek.aiservice.tts")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.iflytek.aiservice.tts\">\n"
"    <method name=\"startCompose\">\n"
"      <arg direction=\"in\" type=\"a{sv}\" name=\"params\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"sessionId\"/>\n"
"    </method>\n"
"    <method name=\"stopCompose\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"code\"/>\n"
"    </method>\n"
"    <method name=\"putText\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"text\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"code\"/>\n"
"    </method>\n"
"    <signal name=\"onNotify\">\n"
"      <arg direction=\"out\" type=\"ay\" name=\"data\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"code\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    TtsAdaptor(QObject *parent);
    virtual ~TtsAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    QString putText(const QString &text);
    QString startCompose(const QVariantMap &params);
    QString stopCompose();
Q_SIGNALS: // SIGNALS
    void onNotify(const QByteArray &data, const QString &code);
};

#endif
