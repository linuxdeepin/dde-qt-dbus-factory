/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.Authenticate.Session2.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Authenticate.Session2Adaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Authenticate.Session2.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Authenticate.Session2Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class SessionAdaptor
 */

SessionAdaptor::SessionAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

SessionAdaptor::~SessionAdaptor()
{
    // destructor
}

MFAInfoList SessionAdaptor::factorsInfo() const
{
    // get the value of property FactorsInfo
    return qvariant_cast< MFAInfoList >(parent()->property("FactorsInfo"));
}

bool SessionAdaptor::isFuzzyMFA() const
{
    // get the value of property IsFuzzyMFA
    return qvariant_cast< bool >(parent()->property("IsFuzzyMFA"));
}

bool SessionAdaptor::isMFA() const
{
    // get the value of property IsMFA
    return qvariant_cast< bool >(parent()->property("IsMFA"));
}

int SessionAdaptor::pINLen() const
{
    // get the value of property PINLen
    return qvariant_cast< int >(parent()->property("PINLen"));
}

QString SessionAdaptor::prompt() const
{
    // get the value of property Prompt
    return qvariant_cast< QString >(parent()->property("Prompt"));
}

QString SessionAdaptor::username() const
{
    // get the value of property Username
    return qvariant_cast< QString >(parent()->property("Username"));
}

int SessionAdaptor::EncryptKey(int encryptType, ArrayInt encryptMethod, ArrayInt &encryptMethod_, QString &publicKey)
{
    // handle method call com.deepin.daemon.Authenticate.Session.EncryptKey
    //return static_cast<YourObjectType *>(parent())->EncryptKey(encryptType, encryptMethod, encryptMethod_, publicKey);
}

int SessionAdaptor::End(int flag)
{
    // handle method call com.deepin.daemon.Authenticate.Session.End
    int failNum;
    QMetaObject::invokeMethod(parent(), "End", Q_RETURN_ARG(int, failNum), Q_ARG(int, flag));
    return failNum;
}

int SessionAdaptor::GetResult()
{
    // handle method call com.deepin.daemon.Authenticate.Session.GetResult
    int result;
    QMetaObject::invokeMethod(parent(), "GetResult", Q_RETURN_ARG(int, result));
    return result;
}

void SessionAdaptor::PrivilegesDisable()
{
    // handle method call com.deepin.daemon.Authenticate.Session.PrivilegesDisable
    QMetaObject::invokeMethod(parent(), "PrivilegesDisable");
}

bool SessionAdaptor::PrivilegesEnable(const QString &path)
{
    // handle method call com.deepin.daemon.Authenticate.Session.PrivilegesEnable
    bool enabled;
    QMetaObject::invokeMethod(parent(), "PrivilegesEnable", Q_RETURN_ARG(bool, enabled), Q_ARG(QString, path));
    return enabled;
}

void SessionAdaptor::Quit()
{
    // handle method call com.deepin.daemon.Authenticate.Session.Quit
    QMetaObject::invokeMethod(parent(), "Quit");
}

void SessionAdaptor::SetQuitFlag(int flag)
{
    // handle method call com.deepin.daemon.Authenticate.Session.SetQuitFlag
    QMetaObject::invokeMethod(parent(), "SetQuitFlag", Q_ARG(int, flag));
}

void SessionAdaptor::SetSymmetricKey(const QByteArray &key)
{
    // handle method call com.deepin.daemon.Authenticate.Session.SetSymmetricKey
    QMetaObject::invokeMethod(parent(), "SetSymmetricKey", Q_ARG(QByteArray, key));
}

void SessionAdaptor::SetToken(int flag, const QByteArray &token)
{
    // handle method call com.deepin.daemon.Authenticate.Session.SetToken
    QMetaObject::invokeMethod(parent(), "SetToken", Q_ARG(int, flag), Q_ARG(QByteArray, token));
}

int SessionAdaptor::Start(int flag, int timeout)
{
    // handle method call com.deepin.daemon.Authenticate.Session.Start
    int state;
    QMetaObject::invokeMethod(parent(), "Start", Q_RETURN_ARG(int, state), Q_ARG(int, flag), Q_ARG(int, timeout));
    return state;
}

