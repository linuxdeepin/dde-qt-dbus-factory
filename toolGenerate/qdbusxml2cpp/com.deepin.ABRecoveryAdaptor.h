/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.ABRecovery.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.ABRecoveryAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.ABRecovery.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_ABRECOVERYADAPTOR_H
#define COM_DEEPIN_ABRECOVERYADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.ABRecovery.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.ABRecovery
 */
class ABRecoveryAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.ABRecovery")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.ABRecovery\">\n"
"    <method name=\"CanBackup\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"can\"/>\n"
"    </method>\n"
"    <method name=\"CanRestore\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"can\"/>\n"
"    </method>\n"
"    <method name=\"StartBackup\"/>\n"
"    <method name=\"StartRestore\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"BackingUp\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"ConfigValid\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"HasBackedUp\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"Restoring\"/>\n"
"    <property access=\"read\" type=\"x\" name=\"BackupTime\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"BackupVersion\"/>\n"
"    <signal name=\"JobEnd\">\n"
"      <arg type=\"s\" name=\"kind\"/>\n"
"      <arg type=\"b\" name=\"success\"/>\n"
"      <arg type=\"s\" name=\"errMsg\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    ABRecoveryAdaptor(QObject *parent);
    virtual ~ABRecoveryAdaptor();

public: // PROPERTIES
    Q_PROPERTY(bool BackingUp READ backingUp)
    bool backingUp() const;

    Q_PROPERTY(qlonglong BackupTime READ backupTime)
    qlonglong backupTime() const;

    Q_PROPERTY(QString BackupVersion READ backupVersion)
    QString backupVersion() const;

    Q_PROPERTY(bool ConfigValid READ configValid)
    bool configValid() const;

    Q_PROPERTY(bool HasBackedUp READ hasBackedUp)
    bool hasBackedUp() const;

    Q_PROPERTY(bool Restoring READ restoring)
    bool restoring() const;

public Q_SLOTS: // METHODS
    bool CanBackup();
    bool CanRestore();
    void StartBackup();
    void StartRestore();
Q_SIGNALS: // SIGNALS
    void JobEnd(const QString &kind, bool success, const QString &errMsg);
};

#endif
