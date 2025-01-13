/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.LastoreSessionHelper.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.LastoreSessionHelperAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.LastoreSessionHelper.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.LastoreSessionHelperAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class LastoreSessionHelperAdaptor
 */

LastoreSessionHelperAdaptor::LastoreSessionHelperAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

LastoreSessionHelperAdaptor::~LastoreSessionHelperAdaptor()
{
    // destructor
}

bool LastoreSessionHelperAdaptor::sourceCheckEnabled() const
{
    // get the value of property SourceCheckEnabled
    return qvariant_cast< bool >(parent()->property("SourceCheckEnabled"));
}

bool LastoreSessionHelperAdaptor::CheckPrepareDistUpgradeJob(QDBusObjectPath &out1)
{
    // handle method call com.deepin.LastoreSessionHelper.CheckPrepareDistUpgradeJob
    //return static_cast<YourObjectType *>(parent())->CheckPrepareDistUpgradeJob(out1);
}

bool LastoreSessionHelperAdaptor::IsDiskSpaceSufficient()
{
    // handle method call com.deepin.LastoreSessionHelper.IsDiskSpaceSufficient
    bool out0;
    QMetaObject::invokeMethod(parent(), "IsDiskSpaceSufficient", Q_RETURN_ARG(bool, out0));
    return out0;
}

void LastoreSessionHelperAdaptor::SetSourceCheckEnabled(bool in0)
{
    // handle method call com.deepin.LastoreSessionHelper.SetSourceCheckEnabled
    QMetaObject::invokeMethod(parent(), "SetSourceCheckEnabled", Q_ARG(bool, in0));
}

