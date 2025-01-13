/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.iflytek.aiservice.iat.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.iatAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.iat.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.iflytek.aiservice.iatAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class IatAdaptor
 */

IatAdaptor::IatAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

IatAdaptor::~IatAdaptor()
{
    // destructor
}

void IatAdaptor::putAudio(const QByteArray &audio_buf, bool finish)
{
    // handle method call com.iflytek.aiservice.iat.putAudio
    QMetaObject::invokeMethod(parent(), "putAudio", Q_ARG(QByteArray, audio_buf), Q_ARG(bool, finish));
}

QString IatAdaptor::startIat(const QVariantMap &param)
{
    // handle method call com.iflytek.aiservice.iat.startIat
    QString status;
    QMetaObject::invokeMethod(parent(), "startIat", Q_RETURN_ARG(QString, status), Q_ARG(QVariantMap, param));
    return status;
}

void IatAdaptor::stopIat()
{
    // handle method call com.iflytek.aiservice.iat.stopIat
    QMetaObject::invokeMethod(parent(), "stopIat");
}

