/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.iflytek.aiservice.trans.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.transAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.trans.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.transAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class TransAdaptor
 */

TransAdaptor::TransAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

TransAdaptor::~TransAdaptor()
{
    // destructor
}

void TransAdaptor::asyncTrans(const QVariantMap &param)
{
    // handle method call com.iflytek.aiservice.trans.asyncTrans
    QMetaObject::invokeMethod(parent(), "asyncTrans", Q_ARG(QVariantMap, param));
}

QString TransAdaptor::syncTrans(const QVariantMap &param)
{
    // handle method call com.iflytek.aiservice.trans.syncTrans
    QString result;
    QMetaObject::invokeMethod(parent(), "syncTrans", Q_RETURN_ARG(QString, result), Q_ARG(QVariantMap, param));
    return result;
}

