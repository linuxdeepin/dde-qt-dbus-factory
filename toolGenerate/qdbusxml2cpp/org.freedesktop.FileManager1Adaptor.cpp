/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/org.freedesktop.FileManager1.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.freedesktop.FileManager1Adaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.freedesktop.FileManager1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.freedesktop.FileManager1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class FileManager1Adaptor
 */

FileManager1Adaptor::FileManager1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

FileManager1Adaptor::~FileManager1Adaptor()
{
    // destructor
}

void FileManager1Adaptor::ShowFolders(const QStringList &URIs, const QString &StartupId)
{
    // handle method call org.freedesktop.FileManager1.ShowFolders
    QMetaObject::invokeMethod(parent(), "ShowFolders", Q_ARG(QStringList, URIs), Q_ARG(QString, StartupId));
}

void FileManager1Adaptor::ShowItemProperties(const QStringList &URIs, const QString &StartupId)
{
    // handle method call org.freedesktop.FileManager1.ShowItemProperties
    QMetaObject::invokeMethod(parent(), "ShowItemProperties", Q_ARG(QStringList, URIs), Q_ARG(QString, StartupId));
}

void FileManager1Adaptor::ShowItems(const QStringList &URIs, const QString &StartupId)
{
    // handle method call org.freedesktop.FileManager1.ShowItems
    QMetaObject::invokeMethod(parent(), "ShowItems", Q_ARG(QStringList, URIs), Q_ARG(QString, StartupId));
}

void FileManager1Adaptor::Trash(const QStringList &URIs)
{
    // handle method call org.freedesktop.FileManager1.Trash
    QMetaObject::invokeMethod(parent(), "Trash", Q_ARG(QStringList, URIs));
}

