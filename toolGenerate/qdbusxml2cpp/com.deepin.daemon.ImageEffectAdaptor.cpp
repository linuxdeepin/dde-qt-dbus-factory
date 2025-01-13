/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.ImageEffect.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.ImageEffectAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.ImageEffect.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.ImageEffectAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ImageEffectAdaptor
 */

ImageEffectAdaptor::ImageEffectAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ImageEffectAdaptor::~ImageEffectAdaptor()
{
    // destructor
}

void ImageEffectAdaptor::Delete(const QString &effect, const QString &filename)
{
    // handle method call com.deepin.daemon.ImageEffect.Delete
    QMetaObject::invokeMethod(parent(), "Delete", Q_ARG(QString, effect), Q_ARG(QString, filename));
}

QString ImageEffectAdaptor::Get(const QString &effect, const QString &filename)
{
    // handle method call com.deepin.daemon.ImageEffect.Get
    QString outputFile;
    QMetaObject::invokeMethod(parent(), "Get", Q_RETURN_ARG(QString, outputFile), Q_ARG(QString, effect), Q_ARG(QString, filename));
    return outputFile;
}

