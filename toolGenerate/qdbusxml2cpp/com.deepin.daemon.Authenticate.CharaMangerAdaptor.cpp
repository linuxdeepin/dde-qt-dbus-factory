/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.Authenticate.CharaManger.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Authenticate.CharaMangerAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Authenticate.CharaManger.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Authenticate.CharaMangerAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class CharaMangerAdaptor
 */

CharaMangerAdaptor::CharaMangerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

CharaMangerAdaptor::~CharaMangerAdaptor()
{
    // destructor
}

QString CharaMangerAdaptor::driverInfo() const
{
    // get the value of property DriverInfo
    return qvariant_cast< QString >(parent()->property("DriverInfo"));
}

void CharaMangerAdaptor::Delete(int charaType, const QString &charaName)
{
    // handle method call com.deepin.daemon.Authenticate.CharaManger.Delete
    QMetaObject::invokeMethod(parent(), "Delete", Q_ARG(int, charaType), Q_ARG(QString, charaName));
}

QDBusUnixFileDescriptor CharaMangerAdaptor::EnrollStart(const QString &driverName, int charaType, const QString &charaName)
{
    // handle method call com.deepin.daemon.Authenticate.CharaManger.EnrollStart
    QDBusUnixFileDescriptor fileDescriptor;
    QMetaObject::invokeMethod(parent(), "EnrollStart", Q_RETURN_ARG(QDBusUnixFileDescriptor, fileDescriptor), Q_ARG(QString, driverName), Q_ARG(int, charaType), Q_ARG(QString, charaName));
    return fileDescriptor;
}

void CharaMangerAdaptor::EnrollStop()
{
    // handle method call com.deepin.daemon.Authenticate.CharaManger.EnrollStop
    QMetaObject::invokeMethod(parent(), "EnrollStop");
}

QString CharaMangerAdaptor::List(const QString &driverName, int charaType)
{
    // handle method call com.deepin.daemon.Authenticate.CharaManger.List
    QString faces;
    QMetaObject::invokeMethod(parent(), "List", Q_RETURN_ARG(QString, faces), Q_ARG(QString, driverName), Q_ARG(int, charaType));
    return faces;
}

void CharaMangerAdaptor::Rename(int charaType, const QString &oldName, const QString &newName)
{
    // handle method call com.deepin.daemon.Authenticate.CharaManger.Rename
    QMetaObject::invokeMethod(parent(), "Rename", Q_ARG(int, charaType), Q_ARG(QString, oldName), Q_ARG(QString, newName));
}

