/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.defender.datainterface.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.defender.datainterfaceAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.defender.datainterface.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.defender.datainterfaceAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DatainterfaceAdaptor
 */

DatainterfaceAdaptor::DatainterfaceAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DatainterfaceAdaptor::~DatainterfaceAdaptor()
{
    // destructor
}

QStringList DatainterfaceAdaptor::scanningUsbPaths() const
{
    // get the value of property ScanningUsbPaths
    return qvariant_cast< QStringList >(parent()->property("ScanningUsbPaths"));
}

DefenderProcessList DatainterfaceAdaptor::allProcPidList() const
{
    // get the value of property allProcPidList
    return qvariant_cast< DefenderProcessList >(parent()->property("allProcPidList"));
}

DefenderProcessInfo DatainterfaceAdaptor::processInfo() const
{
    // get the value of property processInfo
    return qvariant_cast< DefenderProcessInfo >(parent()->property("processInfo"));
}

void DatainterfaceAdaptor::DeleteSpecifiedFiles(const QStringList &path)
{
    // handle method call com.deepin.defender.datainterface.DeleteSpecifiedFiles
    QMetaObject::invokeMethod(parent(), "DeleteSpecifiedFiles", Q_ARG(QStringList, path));
}

void DatainterfaceAdaptor::ExitApp()
{
    // handle method call com.deepin.defender.datainterface.ExitApp
    QMetaObject::invokeMethod(parent(), "ExitApp");
}

DefenderProcInfoList DatainterfaceAdaptor::GetAllProcInfos()
{
    // handle method call com.deepin.defender.datainterface.GetAllProcInfos
    DefenderProcInfoList procInfos;
    QMetaObject::invokeMethod(parent(), "GetAllProcInfos", Q_RETURN_ARG(DefenderProcInfoList, procInfos));
    return procInfos;
}

QString DatainterfaceAdaptor::GetAppTrashInfoList()
{
    // handle method call com.deepin.defender.datainterface.GetAppTrashInfoList
    QString cleanerPath;
    QMetaObject::invokeMethod(parent(), "GetAppTrashInfoList", Q_RETURN_ARG(QString, cleanerPath));
    return cleanerPath;
}

QString DatainterfaceAdaptor::GetBrowserCookiesInfoList()
{
    // handle method call com.deepin.defender.datainterface.GetBrowserCookiesInfoList
    QString cleanerPath;
    QMetaObject::invokeMethod(parent(), "GetBrowserCookiesInfoList", Q_RETURN_ARG(QString, cleanerPath));
    return cleanerPath;
}

QStringList DatainterfaceAdaptor::GetCacheInfoList()
{
    // handle method call com.deepin.defender.datainterface.GetCacheInfoList
    QStringList cleanerPath;
    QMetaObject::invokeMethod(parent(), "GetCacheInfoList", Q_RETURN_ARG(QStringList, cleanerPath));
    return cleanerPath;
}

int DatainterfaceAdaptor::GetCurrentEngine()
{
    // handle method call com.deepin.defender.datainterface.GetCurrentEngine
    int engineType;
    QMetaObject::invokeMethod(parent(), "GetCurrentEngine", Q_RETURN_ARG(int, engineType));
    return engineType;
}

QStringList DatainterfaceAdaptor::GetHistoryInfoList()
{
    // handle method call com.deepin.defender.datainterface.GetHistoryInfoList
    QStringList cleanerPath;
    QMetaObject::invokeMethod(parent(), "GetHistoryInfoList", Q_RETURN_ARG(QStringList, cleanerPath));
    return cleanerPath;
}

QStringList DatainterfaceAdaptor::GetLogInfoList()
{
    // handle method call com.deepin.defender.datainterface.GetLogInfoList
    QStringList cleanerPath;
    QMetaObject::invokeMethod(parent(), "GetLogInfoList", Q_RETURN_ARG(QStringList, cleanerPath));
    return cleanerPath;
}

QString DatainterfaceAdaptor::GetPwdChangeError()
{
    // handle method call com.deepin.defender.datainterface.GetPwdChangeError
    QString info;
    QMetaObject::invokeMethod(parent(), "GetPwdChangeError", Q_RETURN_ARG(QString, info));
    return info;
}

bool DatainterfaceAdaptor::GetPwdLimitPolicyEnable()
{
    // handle method call com.deepin.defender.datainterface.GetPwdLimitPolicyEnable
    bool enable;
    QMetaObject::invokeMethod(parent(), "GetPwdLimitPolicyEnable", Q_RETURN_ARG(bool, enable));
    return enable;
}

QStringList DatainterfaceAdaptor::GetTrashInfoList()
{
    // handle method call com.deepin.defender.datainterface.GetTrashInfoList
    QStringList cleanerPath;
    QMetaObject::invokeMethod(parent(), "GetTrashInfoList", Q_RETURN_ARG(QStringList, cleanerPath));
    return cleanerPath;
}

void DatainterfaceAdaptor::IsolateUsbVirus(const QString &usbMountPath)
{
    // handle method call com.deepin.defender.datainterface.IsolateUsbVirus
    QMetaObject::invokeMethod(parent(), "IsolateUsbVirus", Q_ARG(QString, usbMountPath));
}

void DatainterfaceAdaptor::JumpToAppStore(int nType)
{
    // handle method call com.deepin.defender.datainterface.JumpToAppStore
    QMetaObject::invokeMethod(parent(), "JumpToAppStore", Q_ARG(int, nType));
}

void DatainterfaceAdaptor::NotifyDontGetFlowData()
{
    // handle method call com.deepin.defender.datainterface.NotifyDontGetFlowData
    QMetaObject::invokeMethod(parent(), "NotifyDontGetFlowData");
}

void DatainterfaceAdaptor::RequestCleanSelectTrash()
{
    // handle method call com.deepin.defender.datainterface.RequestCleanSelectTrash
    QMetaObject::invokeMethod(parent(), "RequestCleanSelectTrash");
}

void DatainterfaceAdaptor::RequestStartTrashScan()
{
    // handle method call com.deepin.defender.datainterface.RequestStartTrashScan
    QMetaObject::invokeMethod(parent(), "RequestStartTrashScan");
}

void DatainterfaceAdaptor::RequestStopUsbScannig(const QString &path)
{
    // handle method call com.deepin.defender.datainterface.RequestStopUsbScannig
    QMetaObject::invokeMethod(parent(), "RequestStopUsbScannig", Q_ARG(QString, path));
}

void DatainterfaceAdaptor::SetPwdLimitPolicyEnable(bool enable)
{
    // handle method call com.deepin.defender.datainterface.SetPwdLimitPolicyEnable
    QMetaObject::invokeMethod(parent(), "SetPwdLimitPolicyEnable", Q_ARG(bool, enable));
}

void DatainterfaceAdaptor::SetPwdLimitedLevel(int level)
{
    // handle method call com.deepin.defender.datainterface.SetPwdLimitedLevel
    QMetaObject::invokeMethod(parent(), "SetPwdLimitedLevel", Q_ARG(int, level));
}

void DatainterfaceAdaptor::StartApp()
{
    // handle method call com.deepin.defender.datainterface.StartApp
    QMetaObject::invokeMethod(parent(), "StartApp");
}

bool DatainterfaceAdaptor::exeAutostart(int nStatus, const QString &sPath)
{
    // handle method call com.deepin.defender.datainterface.exeAutostart
    bool value;
    QMetaObject::invokeMethod(parent(), "exeAutostart", Q_RETURN_ARG(bool, value), Q_ARG(int, nStatus), Q_ARG(QString, sPath));
    return value;
}

QString DatainterfaceAdaptor::getAppsInfoDisable()
{
    // handle method call com.deepin.defender.datainterface.getAppsInfoDisable
    QString value;
    QMetaObject::invokeMethod(parent(), "getAppsInfoDisable", Q_RETURN_ARG(QString, value));
    return value;
}

QString DatainterfaceAdaptor::getAppsInfoEnable()
{
    // handle method call com.deepin.defender.datainterface.getAppsInfoEnable
    QString value;
    QMetaObject::invokeMethod(parent(), "getAppsInfoEnable", Q_RETURN_ARG(QString, value));
    return value;
}

bool DatainterfaceAdaptor::getFireWallSwitchStatus()
{
    // handle method call com.deepin.defender.datainterface.getFireWallSwitchStatus
    bool value;
    QMetaObject::invokeMethod(parent(), "getFireWallSwitchStatus", Q_RETURN_ARG(bool, value));
    return value;
}

void DatainterfaceAdaptor::getNetAppsInfo()
{
    // handle method call com.deepin.defender.datainterface.getNetAppsInfo
    QMetaObject::invokeMethod(parent(), "getNetAppsInfo");
}

int DatainterfaceAdaptor::getNetControlDefaultStatus()
{
    // handle method call com.deepin.defender.datainterface.getNetControlDefaultStatus
    int value;
    QMetaObject::invokeMethod(parent(), "getNetControlDefaultStatus", Q_RETURN_ARG(int, value));
    return value;
}

QString DatainterfaceAdaptor::getProcessEnvironmentVariable(int pid, const QString &environmentname)
{
    // handle method call com.deepin.defender.datainterface.getProcessEnvironmentVariable
    QString out0;
    QMetaObject::invokeMethod(parent(), "getProcessEnvironmentVariable", Q_RETURN_ARG(QString, out0), Q_ARG(int, pid), Q_ARG(QString, environmentname));
    return out0;
}

void DatainterfaceAdaptor::getRemAppsInfo()
{
    // handle method call com.deepin.defender.datainterface.getRemAppsInfo
    QMetaObject::invokeMethod(parent(), "getRemAppsInfo");
}

int DatainterfaceAdaptor::getRemControlDefaultStatus()
{
    // handle method call com.deepin.defender.datainterface.getRemControlDefaultStatus
    int value;
    QMetaObject::invokeMethod(parent(), "getRemControlDefaultStatus", Q_RETURN_ARG(int, value));
    return value;
}

bool DatainterfaceAdaptor::getRemRegisterStatus()
{
    // handle method call com.deepin.defender.datainterface.getRemRegisterStatus
    bool bStatus;
    QMetaObject::invokeMethod(parent(), "getRemRegisterStatus", Q_RETURN_ARG(bool, bStatus));
    return bStatus;
}

int DatainterfaceAdaptor::getSelectThreatsCount()
{
    // handle method call com.deepin.defender.datainterface.getSelectThreatsCount
    int count;
    QMetaObject::invokeMethod(parent(), "getSelectThreatsCount", Q_RETURN_ARG(int, count));
    return count;
}

bool DatainterfaceAdaptor::isAutostart(const QString &sPath)
{
    // handle method call com.deepin.defender.datainterface.isAutostart
    bool value;
    QMetaObject::invokeMethod(parent(), "isAutostart", Q_RETURN_ARG(bool, value), Q_ARG(QString, sPath));
    return value;
}

bool DatainterfaceAdaptor::notifyAppendThreatDataByPath(const QString &sfilePath)
{
    // handle method call com.deepin.defender.datainterface.notifyAppendThreatDataByPath
    bool flag;
    QMetaObject::invokeMethod(parent(), "notifyAppendThreatDataByPath", Q_RETURN_ARG(bool, flag), Q_ARG(QString, sfilePath));
    return flag;
}

bool DatainterfaceAdaptor::notifyDeleteThreatDataByPath(const QString &sfilePath)
{
    // handle method call com.deepin.defender.datainterface.notifyDeleteThreatDataByPath
    bool flag;
    QMetaObject::invokeMethod(parent(), "notifyDeleteThreatDataByPath", Q_RETURN_ARG(bool, flag), Q_ARG(QString, sfilePath));
    return flag;
}

void DatainterfaceAdaptor::notifyGetAppLastMonthFlowData(const QString &appname)
{
    // handle method call com.deepin.defender.datainterface.notifyGetAppLastMonthFlowData
    QMetaObject::invokeMethod(parent(), "notifyGetAppLastMonthFlowData", Q_ARG(QString, appname));
}

void DatainterfaceAdaptor::notifyGetAppThisMonthFlowData(const QString &appname)
{
    // handle method call com.deepin.defender.datainterface.notifyGetAppThisMonthFlowData
    QMetaObject::invokeMethod(parent(), "notifyGetAppThisMonthFlowData", Q_ARG(QString, appname));
}

void DatainterfaceAdaptor::notifyGetAppTodayFlowData(const QString &appname)
{
    // handle method call com.deepin.defender.datainterface.notifyGetAppTodayFlowData
    QMetaObject::invokeMethod(parent(), "notifyGetAppTodayFlowData", Q_ARG(QString, appname));
}

void DatainterfaceAdaptor::notifyGetAppYesterdayFlowData(const QString &appname)
{
    // handle method call com.deepin.defender.datainterface.notifyGetAppYesterdayFlowData
    QMetaObject::invokeMethod(parent(), "notifyGetAppYesterdayFlowData", Q_ARG(QString, appname));
}

void DatainterfaceAdaptor::notifyGetLastMonthFlowData()
{
    // handle method call com.deepin.defender.datainterface.notifyGetLastMonthFlowData
    QMetaObject::invokeMethod(parent(), "notifyGetLastMonthFlowData");
}

void DatainterfaceAdaptor::notifyGetThisMonthFlowData()
{
    // handle method call com.deepin.defender.datainterface.notifyGetThisMonthFlowData
    QMetaObject::invokeMethod(parent(), "notifyGetThisMonthFlowData");
}

void DatainterfaceAdaptor::notifyGetTodayFlowData()
{
    // handle method call com.deepin.defender.datainterface.notifyGetTodayFlowData
    QMetaObject::invokeMethod(parent(), "notifyGetTodayFlowData");
}

void DatainterfaceAdaptor::notifyGetYesterdayFlowData()
{
    // handle method call com.deepin.defender.datainterface.notifyGetYesterdayFlowData
    QMetaObject::invokeMethod(parent(), "notifyGetYesterdayFlowData");
}

QString DatainterfaceAdaptor::notifySelectThreatCount()
{
    // handle method call com.deepin.defender.datainterface.notifySelectThreatCount
    QString spath;
    QMetaObject::invokeMethod(parent(), "notifySelectThreatCount", Q_RETURN_ARG(QString, spath));
    return spath;
}

bool DatainterfaceAdaptor::notifySelectThreatDataByPath(const QString &sfilePath)
{
    // handle method call com.deepin.defender.datainterface.notifySelectThreatDataByPath
    bool flag;
    QMetaObject::invokeMethod(parent(), "notifySelectThreatDataByPath", Q_RETURN_ARG(bool, flag), Q_ARG(QString, sfilePath));
    return flag;
}

void DatainterfaceAdaptor::preInitialize()
{
    // handle method call com.deepin.defender.datainterface.preInitialize
    QMetaObject::invokeMethod(parent(), "preInitialize");
}

void DatainterfaceAdaptor::setFireWallSwitchStatus(bool isbFireWall)
{
    // handle method call com.deepin.defender.datainterface.setFireWallSwitchStatus
    QMetaObject::invokeMethod(parent(), "setFireWallSwitchStatus", Q_ARG(bool, isbFireWall));
}

void DatainterfaceAdaptor::setNetAppStatusChange(const QString &sDkgName, int nStatus)
{
    // handle method call com.deepin.defender.datainterface.setNetAppStatusChange
    QMetaObject::invokeMethod(parent(), "setNetAppStatusChange", Q_ARG(QString, sDkgName), Q_ARG(int, nStatus));
}

void DatainterfaceAdaptor::setNetControlDefaultStatus(int nDefault)
{
    // handle method call com.deepin.defender.datainterface.setNetControlDefaultStatus
    QMetaObject::invokeMethod(parent(), "setNetControlDefaultStatus", Q_ARG(int, nDefault));
}

void DatainterfaceAdaptor::setNetControlSwitchStatus(bool isbFireWall)
{
    // handle method call com.deepin.defender.datainterface.setNetControlSwitchStatus
    QMetaObject::invokeMethod(parent(), "setNetControlSwitchStatus", Q_ARG(bool, isbFireWall));
}

void DatainterfaceAdaptor::setNetRequestReply(const QString &sPkgName, const QString &sId, int nType)
{
    // handle method call com.deepin.defender.datainterface.setNetRequestReply
    QMetaObject::invokeMethod(parent(), "setNetRequestReply", Q_ARG(QString, sPkgName), Q_ARG(QString, sId), Q_ARG(int, nType));
}

void DatainterfaceAdaptor::setRemAppStatusChange(const QString &sDkgName, int nStatus)
{
    // handle method call com.deepin.defender.datainterface.setRemAppStatusChange
    QMetaObject::invokeMethod(parent(), "setRemAppStatusChange", Q_ARG(QString, sDkgName), Q_ARG(int, nStatus));
}

void DatainterfaceAdaptor::setRemControlDefaultStatus(int nDefault)
{
    // handle method call com.deepin.defender.datainterface.setRemControlDefaultStatus
    QMetaObject::invokeMethod(parent(), "setRemControlDefaultStatus", Q_ARG(int, nDefault));
}

void DatainterfaceAdaptor::setRemControlSwitchStatus(bool isbFireWall)
{
    // handle method call com.deepin.defender.datainterface.setRemControlSwitchStatus
    QMetaObject::invokeMethod(parent(), "setRemControlSwitchStatus", Q_ARG(bool, isbFireWall));
}

void DatainterfaceAdaptor::setRemRegisterStatus(bool bStatus)
{
    // handle method call com.deepin.defender.datainterface.setRemRegisterStatus
    QMetaObject::invokeMethod(parent(), "setRemRegisterStatus", Q_ARG(bool, bStatus));
}

void DatainterfaceAdaptor::setRemRequestReply(const QString &sPkgName, const QString &sId, int nType)
{
    // handle method call com.deepin.defender.datainterface.setRemRequestReply
    QMetaObject::invokeMethod(parent(), "setRemRequestReply", Q_ARG(QString, sPkgName), Q_ARG(QString, sId), Q_ARG(int, nType));
}

void DatainterfaceAdaptor::showEnginChangeNotity()
{
    // handle method call com.deepin.defender.datainterface.showEnginChangeNotity
    QMetaObject::invokeMethod(parent(), "showEnginChangeNotity");
}

void DatainterfaceAdaptor::showNetControlAskDialog(const QString &sDkgName, const QString &sAppName, const QString &sId)
{
    // handle method call com.deepin.defender.datainterface.showNetControlAskDialog
    QMetaObject::invokeMethod(parent(), "showNetControlAskDialog", Q_ARG(QString, sDkgName), Q_ARG(QString, sAppName), Q_ARG(QString, sId));
}

void DatainterfaceAdaptor::showNetControlDialog(const QString &sDkgName, const QString &sAppName)
{
    // handle method call com.deepin.defender.datainterface.showNetControlDialog
    QMetaObject::invokeMethod(parent(), "showNetControlDialog", Q_ARG(QString, sDkgName), Q_ARG(QString, sAppName));
}

void DatainterfaceAdaptor::showRemControlAskDialog(const QString &sDkgName, const QString &sAppName, const QString &sId)
{
    // handle method call com.deepin.defender.datainterface.showRemControlAskDialog
    QMetaObject::invokeMethod(parent(), "showRemControlAskDialog", Q_ARG(QString, sDkgName), Q_ARG(QString, sAppName), Q_ARG(QString, sId));
}

void DatainterfaceAdaptor::showRemControlDialog(const QString &sDkgName, const QString &sAppName)
{
    // handle method call com.deepin.defender.datainterface.showRemControlDialog
    QMetaObject::invokeMethod(parent(), "showRemControlDialog", Q_ARG(QString, sDkgName), Q_ARG(QString, sAppName));
}

bool DatainterfaceAdaptor::startLauncherManage()
{
    // handle method call com.deepin.defender.datainterface.startLauncherManage
    bool value;
    QMetaObject::invokeMethod(parent(), "startLauncherManage", Q_RETURN_ARG(bool, value));
    return value;
}

