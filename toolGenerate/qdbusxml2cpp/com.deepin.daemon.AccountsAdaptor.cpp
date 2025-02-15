/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.Accounts.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.AccountsAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Accounts.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.AccountsAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class AccountsAdaptor
 */

AccountsAdaptor::AccountsAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

AccountsAdaptor::~AccountsAdaptor()
{
    // destructor
}

bool AccountsAdaptor::allowGuest() const
{
    // get the value of property AllowGuest
    return qvariant_cast< bool >(parent()->property("AllowGuest"));
}

QString AccountsAdaptor::guestIcon() const
{
    // get the value of property GuestIcon
    return qvariant_cast< QString >(parent()->property("GuestIcon"));
}

QStringList AccountsAdaptor::userList() const
{
    // get the value of property UserList
    return qvariant_cast< QStringList >(parent()->property("UserList"));
}

void AccountsAdaptor::AllowGuestAccount(bool in0)
{
    // handle method call com.deepin.daemon.Accounts.AllowGuestAccount
    QMetaObject::invokeMethod(parent(), "AllowGuestAccount", Q_ARG(bool, in0));
}

QString AccountsAdaptor::CreateGuestAccount()
{
    // handle method call com.deepin.daemon.Accounts.CreateGuestAccount
    QString out0;
    QMetaObject::invokeMethod(parent(), "CreateGuestAccount", Q_RETURN_ARG(QString, out0));
    return out0;
}

QDBusObjectPath AccountsAdaptor::CreateUser(const QString &in0, const QString &in1, int in2)
{
    // handle method call com.deepin.daemon.Accounts.CreateUser
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "CreateUser", Q_RETURN_ARG(QDBusObjectPath, out0), Q_ARG(QString, in0), Q_ARG(QString, in1), Q_ARG(int, in2));
    return out0;
}

void AccountsAdaptor::DeleteUser(const QString &in0, bool in1)
{
    // handle method call com.deepin.daemon.Accounts.DeleteUser
    QMetaObject::invokeMethod(parent(), "DeleteUser", Q_ARG(QString, in0), Q_ARG(bool, in1));
}

QString AccountsAdaptor::FindUserById(const QString &in0)
{
    // handle method call com.deepin.daemon.Accounts.FindUserById
    QString out0;
    QMetaObject::invokeMethod(parent(), "FindUserById", Q_RETURN_ARG(QString, out0), Q_ARG(QString, in0));
    return out0;
}

QString AccountsAdaptor::FindUserByName(const QString &in0)
{
    // handle method call com.deepin.daemon.Accounts.FindUserByName
    QString out0;
    QMetaObject::invokeMethod(parent(), "FindUserByName", Q_RETURN_ARG(QString, out0), Q_ARG(QString, in0));
    return out0;
}

QStringList AccountsAdaptor::GetGroups()
{
    // handle method call com.deepin.daemon.Accounts.GetGroups
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "GetGroups", Q_RETURN_ARG(QStringList, out0));
    return out0;
}

QStringList AccountsAdaptor::GetPresetGroups(int in0)
{
    // handle method call com.deepin.daemon.Accounts.GetPresetGroups
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "GetPresetGroups", Q_RETURN_ARG(QStringList, out0), Q_ARG(int, in0));
    return out0;
}

bool AccountsAdaptor::IsPasswordValid(const QString &in0, QString &out1, int &out2)
{
    // handle method call com.deepin.daemon.Accounts.IsPasswordValid
    //return static_cast<YourObjectType *>(parent())->IsPasswordValid(in0, out1, out2);
}

bool AccountsAdaptor::IsUsernameValid(const QString &in0, QString &out1, int &out2)
{
    // handle method call com.deepin.daemon.Accounts.IsUsernameValid
    //return static_cast<YourObjectType *>(parent())->IsUsernameValid(in0, out1, out2);
}

QString AccountsAdaptor::RandUserIcon()
{
    // handle method call com.deepin.daemon.Accounts.RandUserIcon
    QString out0;
    QMetaObject::invokeMethod(parent(), "RandUserIcon", Q_RETURN_ARG(QString, out0));
    return out0;
}

