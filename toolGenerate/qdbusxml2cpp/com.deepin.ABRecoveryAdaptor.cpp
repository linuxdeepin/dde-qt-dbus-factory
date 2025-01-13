/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.ABRecovery.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.ABRecoveryAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.ABRecovery.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.ABRecoveryAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ABRecoveryAdaptor
 */

ABRecoveryAdaptor::ABRecoveryAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ABRecoveryAdaptor::~ABRecoveryAdaptor()
{
    // destructor
}

bool ABRecoveryAdaptor::backingUp() const
{
    // get the value of property BackingUp
    return qvariant_cast< bool >(parent()->property("BackingUp"));
}

qlonglong ABRecoveryAdaptor::backupTime() const
{
    // get the value of property BackupTime
    return qvariant_cast< qlonglong >(parent()->property("BackupTime"));
}

QString ABRecoveryAdaptor::backupVersion() const
{
    // get the value of property BackupVersion
    return qvariant_cast< QString >(parent()->property("BackupVersion"));
}

bool ABRecoveryAdaptor::configValid() const
{
    // get the value of property ConfigValid
    return qvariant_cast< bool >(parent()->property("ConfigValid"));
}

bool ABRecoveryAdaptor::hasBackedUp() const
{
    // get the value of property HasBackedUp
    return qvariant_cast< bool >(parent()->property("HasBackedUp"));
}

bool ABRecoveryAdaptor::restoring() const
{
    // get the value of property Restoring
    return qvariant_cast< bool >(parent()->property("Restoring"));
}

bool ABRecoveryAdaptor::CanBackup()
{
    // handle method call com.deepin.ABRecovery.CanBackup
    bool can;
    QMetaObject::invokeMethod(parent(), "CanBackup", Q_RETURN_ARG(bool, can));
    return can;
}

bool ABRecoveryAdaptor::CanRestore()
{
    // handle method call com.deepin.ABRecovery.CanRestore
    bool can;
    QMetaObject::invokeMethod(parent(), "CanRestore", Q_RETURN_ARG(bool, can));
    return can;
}

void ABRecoveryAdaptor::StartBackup()
{
    // handle method call com.deepin.ABRecovery.StartBackup
    QMetaObject::invokeMethod(parent(), "StartBackup");
}

void ABRecoveryAdaptor::StartRestore()
{
    // handle method call com.deepin.ABRecovery.StartRestore
    QMetaObject::invokeMethod(parent(), "StartRestore");
}

