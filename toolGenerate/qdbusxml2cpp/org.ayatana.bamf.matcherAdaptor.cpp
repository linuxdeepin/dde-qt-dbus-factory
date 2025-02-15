/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/org.ayatana.bamf.matcher.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.ayatana.bamf.matcherAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.ayatana.bamf.matcher.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/org.ayatana.bamf.matcherAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class MatcherAdaptor
 */

MatcherAdaptor::MatcherAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

MatcherAdaptor::~MatcherAdaptor()
{
    // destructor
}

QString MatcherAdaptor::ActiveApplication()
{
    // handle method call org.ayatana.bamf.matcher.ActiveApplication
    QString application;
    QMetaObject::invokeMethod(parent(), "ActiveApplication", Q_RETURN_ARG(QString, application));
    return application;
}

QString MatcherAdaptor::ActiveWindow()
{
    // handle method call org.ayatana.bamf.matcher.ActiveWindow
    QString window;
    QMetaObject::invokeMethod(parent(), "ActiveWindow", Q_RETURN_ARG(QString, window));
    return window;
}

QString MatcherAdaptor::ApplicationForXid(uint xid)
{
    // handle method call org.ayatana.bamf.matcher.ApplicationForXid
    QString application;
    QMetaObject::invokeMethod(parent(), "ApplicationForXid", Q_RETURN_ARG(QString, application), Q_ARG(uint, xid));
    return application;
}

bool MatcherAdaptor::ApplicationIsRunning(const QString &desktop_file)
{
    // handle method call org.ayatana.bamf.matcher.ApplicationIsRunning
    bool running;
    QMetaObject::invokeMethod(parent(), "ApplicationIsRunning", Q_RETURN_ARG(bool, running), Q_ARG(QString, desktop_file));
    return running;
}

QStringList MatcherAdaptor::ApplicationPaths()
{
    // handle method call org.ayatana.bamf.matcher.ApplicationPaths
    QStringList paths;
    QMetaObject::invokeMethod(parent(), "ApplicationPaths", Q_RETURN_ARG(QStringList, paths));
    return paths;
}

QString MatcherAdaptor::PathForApplication(const QString &desktop_file)
{
    // handle method call org.ayatana.bamf.matcher.PathForApplication
    QString path;
    QMetaObject::invokeMethod(parent(), "PathForApplication", Q_RETURN_ARG(QString, path), Q_ARG(QString, desktop_file));
    return path;
}

void MatcherAdaptor::RegisterFavorites(const QStringList &favorites)
{
    // handle method call org.ayatana.bamf.matcher.RegisterFavorites
    QMetaObject::invokeMethod(parent(), "RegisterFavorites", Q_ARG(QStringList, favorites));
}

QStringList MatcherAdaptor::RunningApplications()
{
    // handle method call org.ayatana.bamf.matcher.RunningApplications
    QStringList paths;
    QMetaObject::invokeMethod(parent(), "RunningApplications", Q_RETURN_ARG(QStringList, paths));
    return paths;
}

QStringList MatcherAdaptor::RunningApplicationsDesktopFiles()
{
    // handle method call org.ayatana.bamf.matcher.RunningApplicationsDesktopFiles
    QStringList paths;
    QMetaObject::invokeMethod(parent(), "RunningApplicationsDesktopFiles", Q_RETURN_ARG(QStringList, paths));
    return paths;
}

QStringList MatcherAdaptor::TabPaths()
{
    // handle method call org.ayatana.bamf.matcher.TabPaths
    QStringList paths;
    QMetaObject::invokeMethod(parent(), "TabPaths", Q_RETURN_ARG(QStringList, paths));
    return paths;
}

QStringList MatcherAdaptor::WindowPaths()
{
    // handle method call org.ayatana.bamf.matcher.WindowPaths
    QStringList paths;
    QMetaObject::invokeMethod(parent(), "WindowPaths", Q_RETURN_ARG(QStringList, paths));
    return paths;
}

QStringList MatcherAdaptor::WindowStackForMonitor(int monitor_id)
{
    // handle method call org.ayatana.bamf.matcher.WindowStackForMonitor
    QStringList window_list;
    QMetaObject::invokeMethod(parent(), "WindowStackForMonitor", Q_RETURN_ARG(QStringList, window_list), Q_ARG(int, monitor_id));
    return window_list;
}

