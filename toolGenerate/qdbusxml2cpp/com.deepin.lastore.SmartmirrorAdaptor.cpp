/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.lastore.Smartmirror.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.lastore.SmartmirrorAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.lastore.Smartmirror.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.lastore.SmartmirrorAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class SmartmirrorAdaptor
 */

SmartmirrorAdaptor::SmartmirrorAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

SmartmirrorAdaptor::~SmartmirrorAdaptor()
{
    // destructor
}

bool SmartmirrorAdaptor::enable() const
{
    // get the value of property Enable
    return qvariant_cast< bool >(parent()->property("Enable"));
}

QString SmartmirrorAdaptor::Query(const QString &origin, const QString &official)
{
    // handle method call com.deepin.lastore.Smartmirror.Query
    QString url;
    QMetaObject::invokeMethod(parent(), "Query", Q_RETURN_ARG(QString, url), Q_ARG(QString, origin), Q_ARG(QString, official));
    return url;
}

void SmartmirrorAdaptor::SetEnable(bool enable)
{
    // handle method call com.deepin.lastore.Smartmirror.SetEnable
    QMetaObject::invokeMethod(parent(), "SetEnable", Q_ARG(bool, enable));
}

