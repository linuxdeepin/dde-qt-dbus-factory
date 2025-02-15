/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.lastore.JobManager.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.lastore.JobManagerAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.lastore.JobManager.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.lastore.JobManagerAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ManagerAdaptor
 */

ManagerAdaptor::ManagerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ManagerAdaptor::~ManagerAdaptor()
{
    // destructor
}

bool ManagerAdaptor::autoClean() const
{
    // get the value of property AutoClean
    return qvariant_cast< bool >(parent()->property("AutoClean"));
}

QList<QDBusObjectPath> ManagerAdaptor::jobList() const
{
    // get the value of property JobList
    return qvariant_cast< QList<QDBusObjectPath> >(parent()->property("JobList"));
}

QStringList ManagerAdaptor::systemArchitectures() const
{
    // get the value of property SystemArchitectures
    return qvariant_cast< QStringList >(parent()->property("SystemArchitectures"));
}

bool ManagerAdaptor::systemOnChanging() const
{
    // get the value of property SystemOnChanging
    return qvariant_cast< bool >(parent()->property("SystemOnChanging"));
}

qulonglong ManagerAdaptor::updateMode() const
{
    // get the value of property UpdateMode
    return qvariant_cast< qulonglong >(parent()->property("UpdateMode"));
}

void ManagerAdaptor::setUpdateMode(qulonglong value)
{
    // set the value of property UpdateMode
    parent()->setProperty("UpdateMode", QVariant::fromValue(value));
}

QStringList ManagerAdaptor::upgradableApps() const
{
    // get the value of property UpgradableApps
    return qvariant_cast< QStringList >(parent()->property("UpgradableApps"));
}

QList<QDBusObjectPath> ManagerAdaptor::ClassifiedUpgrade(qulonglong in0)
{
    // handle method call com.deepin.lastore.Manager.ClassifiedUpgrade
    QList<QDBusObjectPath> out0;
    QMetaObject::invokeMethod(parent(), "ClassifiedUpgrade", Q_RETURN_ARG(QList<QDBusObjectPath>, out0), Q_ARG(qulonglong, in0));
    return out0;
}

QDBusObjectPath ManagerAdaptor::CleanArchives()
{
    // handle method call com.deepin.lastore.Manager.CleanArchives
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "CleanArchives", Q_RETURN_ARG(QDBusObjectPath, out0));
    return out0;
}

void ManagerAdaptor::CleanJob(const QString &in0)
{
    // handle method call com.deepin.lastore.Manager.CleanJob
    QMetaObject::invokeMethod(parent(), "CleanJob", Q_ARG(QString, in0));
}

QDBusObjectPath ManagerAdaptor::DistUpgrade()
{
    // handle method call com.deepin.lastore.Manager.DistUpgrade
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "DistUpgrade", Q_RETURN_ARG(QDBusObjectPath, out0));
    return out0;
}

QString ManagerAdaptor::GetArchivesInfo()
{
    // handle method call com.deepin.lastore.Manager.GetArchivesInfo
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetArchivesInfo", Q_RETURN_ARG(QString, out0));
    return out0;
}

QDBusObjectPath ManagerAdaptor::InstallPackage(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.lastore.Manager.InstallPackage
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "InstallPackage", Q_RETURN_ARG(QDBusObjectPath, out0), Q_ARG(QString, in0), Q_ARG(QString, in1));
    return out0;
}

QString ManagerAdaptor::PackageDesktopPath(const QString &in0)
{
    // handle method call com.deepin.lastore.Manager.PackageDesktopPath
    QString out0;
    QMetaObject::invokeMethod(parent(), "PackageDesktopPath", Q_RETURN_ARG(QString, out0), Q_ARG(QString, in0));
    return out0;
}

bool ManagerAdaptor::PackageExists(const QString &in0)
{
    // handle method call com.deepin.lastore.Manager.PackageExists
    bool out0;
    QMetaObject::invokeMethod(parent(), "PackageExists", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

bool ManagerAdaptor::PackageInstallable(const QString &in0)
{
    // handle method call com.deepin.lastore.Manager.PackageInstallable
    bool out0;
    QMetaObject::invokeMethod(parent(), "PackageInstallable", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

qlonglong ManagerAdaptor::PackagesDownloadSize(const QStringList &in0)
{
    // handle method call com.deepin.lastore.Manager.PackagesDownloadSize
    qlonglong out0;
    QMetaObject::invokeMethod(parent(), "PackagesDownloadSize", Q_RETURN_ARG(qlonglong, out0), Q_ARG(QStringList, in0));
    return out0;
}

void ManagerAdaptor::PauseJob(const QString &in0)
{
    // handle method call com.deepin.lastore.Manager.PauseJob
    QMetaObject::invokeMethod(parent(), "PauseJob", Q_ARG(QString, in0));
}

QDBusObjectPath ManagerAdaptor::PrepareDistUpgrade()
{
    // handle method call com.deepin.lastore.Manager.PrepareDistUpgrade
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "PrepareDistUpgrade", Q_RETURN_ARG(QDBusObjectPath, out0));
    return out0;
}

void ManagerAdaptor::RecordLocaleInfo(const QString &in0)
{
    // handle method call com.deepin.lastore.Manager.RecordLocaleInfo
    QMetaObject::invokeMethod(parent(), "RecordLocaleInfo", Q_ARG(QString, in0));
}

QDBusObjectPath ManagerAdaptor::RemovePackage(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.lastore.Manager.RemovePackage
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "RemovePackage", Q_RETURN_ARG(QDBusObjectPath, out0), Q_ARG(QString, in0), Q_ARG(QString, in1));
    return out0;
}

void ManagerAdaptor::SetAutoClean(bool in0)
{
    // handle method call com.deepin.lastore.Manager.SetAutoClean
    QMetaObject::invokeMethod(parent(), "SetAutoClean", Q_ARG(bool, in0));
}

void ManagerAdaptor::SetLogger(const QString &in0, const QString &in1, const QString &in2)
{
    // handle method call com.deepin.lastore.Manager.SetLogger
    QMetaObject::invokeMethod(parent(), "SetLogger", Q_ARG(QString, in0), Q_ARG(QString, in1), Q_ARG(QString, in2));
}

void ManagerAdaptor::SetRegion(const QString &in0)
{
    // handle method call com.deepin.lastore.Manager.SetRegion
    QMetaObject::invokeMethod(parent(), "SetRegion", Q_ARG(QString, in0));
}

void ManagerAdaptor::StartJob(const QString &in0)
{
    // handle method call com.deepin.lastore.Manager.StartJob
    QMetaObject::invokeMethod(parent(), "StartJob", Q_ARG(QString, in0));
}

QDBusObjectPath ManagerAdaptor::UpdatePackage(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.lastore.Manager.UpdatePackage
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "UpdatePackage", Q_RETURN_ARG(QDBusObjectPath, out0), Q_ARG(QString, in0), Q_ARG(QString, in1));
    return out0;
}

QDBusObjectPath ManagerAdaptor::UpdateSource()
{
    // handle method call com.deepin.lastore.Manager.UpdateSource
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "UpdateSource", Q_RETURN_ARG(QDBusObjectPath, out0));
    return out0;
}

