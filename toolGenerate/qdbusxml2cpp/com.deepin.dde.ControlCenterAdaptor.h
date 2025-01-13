/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.dde.ControlCenter.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.dde.ControlCenterAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.dde.ControlCenter.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DDE_CONTROLCENTERADAPTOR_H
#define COM_DEEPIN_DDE_CONTROLCENTERADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.dde.ControlCenter.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.dde.ControlCenter
 */
class ControlCenterAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.dde.ControlCenter")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.dde.ControlCenter\">\n"
"    <property access=\"read\" type=\"b\" name=\"ShowInRight\"/>\n"
"    <property access=\"read\" type=\"(iiii)\" name=\"Rect\">\n"
"      <annotation value=\"ControlCenterRect\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <signal name=\"rectChanged\">\n"
"      <annotation value=\"ControlCenterRect\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
"    </signal>\n"
"    <signal name=\"destRectChanged\">\n"
"      <annotation value=\"ControlCenterRect\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
"    </signal>\n"
"    <method name=\"Hide\"/>\n"
"    <method name=\"HideImmediately\"/>\n"
"    <method name=\"Show\"/>\n"
"    <method name=\"ShowImmediately\"/>\n"
"    <method name=\"ShowHome\"/>\n"
"    <method name=\"ShowModule\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"module\"/>\n"
"    </method>\n"
"    <method name=\"ShowPage\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"module\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"page\"/>\n"
"    </method>\n"
"    <method name=\"SetAutoHide\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"autoHide\"/>\n"
"    </method>\n"
"    <method name=\"Toggle\"/>\n"
"    <method name=\"ToggleInLeft\"/>\n"
"    <method name=\"isNetworkCanShowPassword\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"isModuleAvailable\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"m\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    ControlCenterAdaptor(QObject *parent);
    virtual ~ControlCenterAdaptor();

public: // PROPERTIES
    Q_PROPERTY(ControlCenterRect Rect READ rect)
    ControlCenterRect rect() const;

    Q_PROPERTY(bool ShowInRight READ showInRight)
    bool showInRight() const;

public Q_SLOTS: // METHODS
    void Hide();
    void HideImmediately();
    void SetAutoHide(bool autoHide);
    void Show();
    void ShowHome();
    void ShowImmediately();
    void ShowModule(const QString &module);
    void ShowPage(const QString &module, const QString &page);
    void Toggle();
    void ToggleInLeft();
    bool isModuleAvailable(const QString &m);
    bool isNetworkCanShowPassword();
Q_SIGNALS: // SIGNALS
    void destRectChanged();
    void rectChanged();
};

#endif
