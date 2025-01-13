/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-qt-dbus-factory/xml/com.deepin.daemon.InputDevice.Keyboard.xml -a ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.InputDevice.KeyboardAdaptor -i ./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.InputDevice.Keyboard.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_INPUTDEVICE_KEYBOARDADAPTOR_H
#define COM_DEEPIN_DAEMON_INPUTDEVICE_KEYBOARDADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-qt-dbus-factory/toolGenerate/qdbusxml2cpp/com.deepin.daemon.InputDevice.Keyboard.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.InputDevice.Keyboard
 */
class KeyboardAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.InputDevice.Keyboard")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.InputDevice.Keyboard\">\n"
"    <method name=\"AddLayoutOption\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"AddUserLayout\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"ClearLayoutOption\"/>\n"
"    <method name=\"DeleteLayoutOption\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"DeleteUserLayout\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"GetLayoutDesc\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"LayoutList\">\n"
"      <arg direction=\"out\" type=\"a{ss}\"/>\n"
"      <annotation value=\"KeyboardLayoutList\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"Reset\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"RepeatEnabled\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"CapslockToggle\"/>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"CursorBlink\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"RepeatInterval\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"RepeatDelay\"/>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"LayoutScope\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"CurrentLayout\"/>\n"
"    <property access=\"read\" type=\"as\" name=\"UserLayoutList\"/>\n"
"    <property access=\"read\" type=\"as\" name=\"UserOptionList\"/>\n"
"  </interface>\n"
        "")
public:
    KeyboardAdaptor(QObject *parent);
    virtual ~KeyboardAdaptor();

public: // PROPERTIES
    Q_PROPERTY(bool CapslockToggle READ capslockToggle WRITE setCapslockToggle)
    bool capslockToggle() const;
    void setCapslockToggle(bool value);

    Q_PROPERTY(QString CurrentLayout READ currentLayout WRITE setCurrentLayout)
    QString currentLayout() const;
    void setCurrentLayout(const QString &value);

    Q_PROPERTY(int CursorBlink READ cursorBlink WRITE setCursorBlink)
    int cursorBlink() const;
    void setCursorBlink(int value);

    Q_PROPERTY(int LayoutScope READ layoutScope WRITE setLayoutScope)
    int layoutScope() const;
    void setLayoutScope(int value);

    Q_PROPERTY(uint RepeatDelay READ repeatDelay WRITE setRepeatDelay)
    uint repeatDelay() const;
    void setRepeatDelay(uint value);

    Q_PROPERTY(bool RepeatEnabled READ repeatEnabled WRITE setRepeatEnabled)
    bool repeatEnabled() const;
    void setRepeatEnabled(bool value);

    Q_PROPERTY(uint RepeatInterval READ repeatInterval WRITE setRepeatInterval)
    uint repeatInterval() const;
    void setRepeatInterval(uint value);

    Q_PROPERTY(QStringList UserLayoutList READ userLayoutList)
    QStringList userLayoutList() const;

    Q_PROPERTY(QStringList UserOptionList READ userOptionList)
    QStringList userOptionList() const;

public Q_SLOTS: // METHODS
    void AddLayoutOption(const QString &in0);
    void AddUserLayout(const QString &in0);
    void ClearLayoutOption();
    void DeleteLayoutOption(const QString &in0);
    void DeleteUserLayout(const QString &in0);
    QString GetLayoutDesc(const QString &in0);
    KeyboardLayoutList LayoutList();
    void Reset();
Q_SIGNALS: // SIGNALS
};

#endif
