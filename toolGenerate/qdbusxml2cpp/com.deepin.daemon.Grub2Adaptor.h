/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.Grub2.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Grub2Adaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Grub2.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_GRUB2ADAPTOR_H
#define COM_DEEPIN_DAEMON_GRUB2ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Grub2.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.Grub2
 */
class Grub2Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.Grub2")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.Grub2\">\n"
"    <method name=\"GetAvailableResolutions\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"modeJSON\"/>\n"
"    </method>\n"
"    <method name=\"GetSimpleEntryTitles\">\n"
"      <arg direction=\"out\" type=\"as\" name=\"titles\"/>\n"
"    </method>\n"
"    <method name=\"GetThemes\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"themes\"/>\n"
"    </method>\n"
"    <method name=\"Reset\"/>\n"
"    <method name=\"SetDefaultEntry\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"entry\"/>\n"
"    </method>\n"
"    <method name=\"SetEnableTheme\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"enabled\"/>\n"
"    </method>\n"
"    <method name=\"SetResolution\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"resolution\"/>\n"
"    </method>\n"
"    <method name=\"SetTheme\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"themeId\"/>\n"
"    </method>\n"
"    <method name=\"SetTimeout\">\n"
"      <arg direction=\"in\" type=\"u\" name=\"timeout\"/>\n"
"    </method>\n"
"    <property access=\"read\" type=\"b\" name=\"EnableTheme\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Theme\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Resolution\"/>\n"
"    <property access=\"read\" type=\"u\" name=\"Timeout\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"Updating\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"DefaultEntry\"/>\n"
"  </interface>\n"
        "")
public:
    Grub2Adaptor(QObject *parent);
    virtual ~Grub2Adaptor();

public: // PROPERTIES
    Q_PROPERTY(QString DefaultEntry READ defaultEntry)
    QString defaultEntry() const;

    Q_PROPERTY(bool EnableTheme READ enableTheme)
    bool enableTheme() const;

    Q_PROPERTY(QString Resolution READ resolution)
    QString resolution() const;

    Q_PROPERTY(QString Theme READ theme)
    QString theme() const;

    Q_PROPERTY(uint Timeout READ timeout)
    uint timeout() const;

    Q_PROPERTY(bool Updating READ updating)
    bool updating() const;

public Q_SLOTS: // METHODS
    QString GetAvailableResolutions();
    QStringList GetSimpleEntryTitles();
    QString GetThemes();
    void Reset();
    void SetDefaultEntry(const QString &entry);
    void SetEnableTheme(bool enabled);
    void SetResolution(const QString &resolution);
    void SetTheme(const QString &themeId);
    void SetTimeout(uint timeout);
Q_SIGNALS: // SIGNALS
};

#endif
