/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.Timedated.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.TimedatedAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Timedated.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.TimedatedAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class TimedatedAdaptor
 */

TimedatedAdaptor::TimedatedAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

TimedatedAdaptor::~TimedatedAdaptor()
{
    // destructor
}

QString TimedatedAdaptor::nTPServer() const
{
    // get the value of property NTPServer
    return qvariant_cast< QString >(parent()->property("NTPServer"));
}

void TimedatedAdaptor::SetLocalRTC(bool in0, bool in1, const QString &in2)
{
    // handle method call com.deepin.daemon.Timedated.SetLocalRTC
    QMetaObject::invokeMethod(parent(), "SetLocalRTC", Q_ARG(bool, in0), Q_ARG(bool, in1), Q_ARG(QString, in2));
}

void TimedatedAdaptor::SetNTP(bool in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Timedated.SetNTP
    QMetaObject::invokeMethod(parent(), "SetNTP", Q_ARG(bool, in0), Q_ARG(QString, in1));
}

void TimedatedAdaptor::SetNTPServer(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Timedated.SetNTPServer
    QMetaObject::invokeMethod(parent(), "SetNTPServer", Q_ARG(QString, in0), Q_ARG(QString, in1));
}

void TimedatedAdaptor::SetTime(qlonglong in0, bool in1, const QString &in2)
{
    // handle method call com.deepin.daemon.Timedated.SetTime
    QMetaObject::invokeMethod(parent(), "SetTime", Q_ARG(qlonglong, in0), Q_ARG(bool, in1), Q_ARG(QString, in2));
}

void TimedatedAdaptor::SetTimezone(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Timedated.SetTimezone
    QMetaObject::invokeMethod(parent(), "SetTimezone", Q_ARG(QString, in0), Q_ARG(QString, in1));
}

