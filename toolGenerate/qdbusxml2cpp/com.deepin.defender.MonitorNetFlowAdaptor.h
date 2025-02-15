/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.defender.MonitorNetFlow.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.defender.MonitorNetFlowAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.defender.MonitorNetFlow.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DEFENDER_MONITORNETFLOWADAPTOR_H
#define COM_DEEPIN_DEFENDER_MONITORNETFLOWADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.defender.MonitorNetFlow.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.defender.MonitorNetFlow
 */
class MonitorNetFlowAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.defender.MonitorNetFlow")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.defender.MonitorNetFlow\">\n"
"    <method name=\"StartApp\"/>\n"
"    <method name=\"ExitApp\"/>\n"
"    <method name=\"getProExePath\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"sId\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"value\"/>\n"
"    </method>\n"
"    <method name=\"EnableNetFlowMonitor\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"enable\"/>\n"
"    </method>\n"
"    <signal name=\"NotifyDetailData\">\n"
"      <arg type=\"s\" name=\"name\"/>\n"
"      <arg type=\"d\" name=\"recv\"/>\n"
"      <arg type=\"d\" name=\"send\"/>\n"
"      <arg type=\"i\" name=\"pid\"/>\n"
"      <arg type=\"s\" name=\"device\"/>\n"
"      <arg type=\"s\" name=\"type\"/>\n"
"    </signal>\n"
"    <signal name=\"NotifyGlobalData\">\n"
"      <arg type=\"d\" name=\"recv\"/>\n"
"      <arg type=\"d\" name=\"send\"/>\n"
"    </signal>\n"
"    <signal name=\"NotifyHeartbeat\"/>\n"
"    <signal name=\"SendPocNetFlowInfos\">\n"
"      <arg direction=\"out\" type=\"(a(isbssssssllsddddsss))\"/>\n"
"      <annotation value=\"DefenderProcInfoList\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
"    </signal>\n"
"    <method name=\"GetPocNetFlowInfos\">\n"
"      <arg direction=\"out\" type=\"a(isbssssssllsddddsss)\" name=\"procInfos\"/>\n"
"      <annotation value=\"DefenderProcInfoList\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"SetRightScanVisable\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"flag\"/>\n"
"    </method>\n"
"    <method name=\"setRemRegisterStatus\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"bStatus\"/>\n"
"    </method>\n"
"    <method name=\"getRemRegisterStatus\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"bStatus\"/>\n"
"    </method>\n"
"    <signal name=\"SSHStatusChanged\">\n"
"      <arg type=\"b\" name=\"status\"/>\n"
"    </signal>\n"
"    <method name=\"MergeDevSavingInfoToStr\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"sName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sStatus\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sSerial\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sVendorID\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sProductID\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sParentSize\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sSize\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"str\"/>\n"
"    </method>\n"
"    <method name=\"WriteConnectionRecord\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"sName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sDatetime\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sStatus\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sSerial\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sVendorID\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sProductID\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sParentSize\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sSize\"/>\n"
"    </method>\n"
"    <method name=\"ClearUsbConnectionLog\"/>\n"
"    <method name=\"WriteConnectionWhiteLst\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"sName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sDatetime\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sStatus\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sSerial\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sVendorID\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sProductID\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sParentSize\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sSize\"/>\n"
"    </method>\n"
"    <method name=\"RemoveFromWhiteLst\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"sName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sSerial\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sVendorID\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sProductID\"/>\n"
"    </method>\n"
"    <method name=\"ChangeIsbSaveRecord\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"change\"/>\n"
"    </method>\n"
"    <method name=\"SelectLimitationModel\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"sModel\"/>\n"
"    </method>\n"
"    <method name=\"GetRecordSaveSwitch\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"isbSave\"/>\n"
"    </method>\n"
"    <method name=\"GetLimitModel\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"sModel\"/>\n"
"    </method>\n"
"    <method name=\"GetUsbConnectionRecords\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"sRecords\"/>\n"
"    </method>\n"
"    <method name=\"GetWhiteList\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"list\"/>\n"
"    </method>\n"
"    <signal name=\"SendUsbConnectionInfo\">\n"
"      <arg type=\"s\" name=\"sUsbInfos\"/>\n"
"    </signal>\n"
"    <signal name=\"requestShowBlockAllSysNotify\"/>\n"
"    <signal name=\"requestShowOnlyWhiteListSysNotify\"/>\n"
"    <method name=\"GetDiskDevicePathList\">\n"
"      <arg direction=\"out\" type=\"as\" name=\"pathList\"/>\n"
"      <annotation value=\"QStringList\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
"    </method>\n"
"    <method name=\"CleanSelectFile\">\n"
"      <arg direction=\"in\" type=\"as\" name=\"pathList\"/>\n"
"      <annotation value=\"QStringList\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
"    </method>\n"
"    <method name=\"CleanJournal\"/>\n"
"    <method name=\"AddSecurityLog\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"nType\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sInfo\"/>\n"
"    </method>\n"
"    <method name=\"DeleteSecurityLog\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"nLastDate\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"nType\"/>\n"
"      <arg direction=\"out\" type=\"b\" name=\"isbDelete\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    MonitorNetFlowAdaptor(QObject *parent);
    virtual ~MonitorNetFlowAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void AddSecurityLog(int nType, const QString &sInfo);
    void ChangeIsbSaveRecord(bool change);
    void CleanJournal();
    void CleanSelectFile(const QStringList &pathList);
    void ClearUsbConnectionLog();
    bool DeleteSecurityLog(int nLastDate, int nType);
    void EnableNetFlowMonitor(bool enable);
    void ExitApp();
    QStringList GetDiskDevicePathList();
    QString GetLimitModel();
    DefenderProcInfoList GetPocNetFlowInfos();
    bool GetRecordSaveSwitch();
    QString GetUsbConnectionRecords();
    QString GetWhiteList();
    QString MergeDevSavingInfoToStr(const QString &sName, const QString &sStatus, const QString &sSerial, const QString &sVendorID, const QString &sProductID, const QString &sParentSize, const QString &sSize);
    void RemoveFromWhiteLst(const QString &sName, const QString &sSerial, const QString &sVendorID, const QString &sProductID);
    void SelectLimitationModel(const QString &sModel);
    void SetRightScanVisable(bool flag);
    void StartApp();
    void WriteConnectionRecord(const QString &sName, const QString &sDatetime, const QString &sStatus, const QString &sSerial, const QString &sVendorID, const QString &sProductID, const QString &sParentSize, const QString &sSize);
    void WriteConnectionWhiteLst(const QString &sName, const QString &sDatetime, const QString &sStatus, const QString &sSerial, const QString &sVendorID, const QString &sProductID, const QString &sParentSize, const QString &sSize);
    QString getProExePath(const QString &sId);
    bool getRemRegisterStatus();
    void setRemRegisterStatus(bool bStatus);
Q_SIGNALS: // SIGNALS
    void NotifyDetailData(const QString &name, double recv, double send, int pid, const QString &device, const QString &type);
    void NotifyGlobalData(double recv, double send);
    void NotifyHeartbeat();
    void SSHStatusChanged(bool status);
    void SendPocNetFlowInfos(DefenderProcInfoList in0);
    void SendUsbConnectionInfo(const QString &sUsbInfos);
    void requestShowBlockAllSysNotify();
    void requestShowOnlyWhiteListSysNotify();
};

#endif
