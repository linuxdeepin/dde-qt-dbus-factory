/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.AirplaneMode.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.AirplaneModeAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.AirplaneMode.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.AirplaneModeAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class AirplaneModeAdaptor
 */

AirplaneModeAdaptor::AirplaneModeAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

AirplaneModeAdaptor::~AirplaneModeAdaptor()
{
    // destructor
}

bool AirplaneModeAdaptor::bluetoothEnabled() const
{
    // get the value of property BluetoothEnabled
    return qvariant_cast< bool >(parent()->property("BluetoothEnabled"));
}

bool AirplaneModeAdaptor::enabled() const
{
    // get the value of property Enabled
    return qvariant_cast< bool >(parent()->property("Enabled"));
}

bool AirplaneModeAdaptor::wifiEnabled() const
{
    // get the value of property WifiEnabled
    return qvariant_cast< bool >(parent()->property("WifiEnabled"));
}

void AirplaneModeAdaptor::DumpState()
{
    // handle method call com.deepin.daemon.AirplaneMode.DumpState
    QMetaObject::invokeMethod(parent(), "DumpState");
}

void AirplaneModeAdaptor::Enable(bool enabled)
{
    // handle method call com.deepin.daemon.AirplaneMode.Enable
    QMetaObject::invokeMethod(parent(), "Enable", Q_ARG(bool, enabled));
}

void AirplaneModeAdaptor::EnableBluetooth(bool enabled)
{
    // handle method call com.deepin.daemon.AirplaneMode.EnableBluetooth
    QMetaObject::invokeMethod(parent(), "EnableBluetooth", Q_ARG(bool, enabled));
}

void AirplaneModeAdaptor::EnableWifi(bool enabled)
{
    // handle method call com.deepin.daemon.AirplaneMode.EnableWifi
    QMetaObject::invokeMethod(parent(), "EnableWifi", Q_ARG(bool, enabled));
}

