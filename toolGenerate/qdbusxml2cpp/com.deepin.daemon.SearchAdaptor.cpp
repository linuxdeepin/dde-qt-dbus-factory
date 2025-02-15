/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.Search.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.SearchAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Search.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.SearchAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class SearchAdaptor
 */

SearchAdaptor::SearchAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

SearchAdaptor::~SearchAdaptor()
{
    // destructor
}

QString SearchAdaptor::NewSearchWithStrDict(SearchMap in0, bool &out1)
{
    // handle method call com.deepin.daemon.Search.NewSearchWithStrDict
    //return static_cast<YourObjectType *>(parent())->NewSearchWithStrDict(in0, out1);
}

QString SearchAdaptor::NewSearchWithStrList(const QStringList &in0, bool &out1)
{
    // handle method call com.deepin.daemon.Search.NewSearchWithStrList
    //return static_cast<YourObjectType *>(parent())->NewSearchWithStrList(in0, out1);
}

QStringList SearchAdaptor::SearchStartWithString(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Search.SearchStartWithString
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "SearchStartWithString", Q_RETURN_ARG(QStringList, out0), Q_ARG(QString, in0), Q_ARG(QString, in1));
    return out0;
}

QStringList SearchAdaptor::SearchString(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Search.SearchString
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "SearchString", Q_RETURN_ARG(QStringList, out0), Q_ARG(QString, in0), Q_ARG(QString, in1));
    return out0;
}

