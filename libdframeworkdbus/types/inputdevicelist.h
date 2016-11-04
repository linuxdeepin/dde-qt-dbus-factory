#ifndef INPUTDEVICELIST_H
#define INPUTDEVICELIST_H

#include <QtCore/QObject>
#include <QtCore/QList>
#include <QtCore/QString>
#include <QtDBus/QtDBus>

struct InputDevice {
    QString interface;
    QString deviceType;

    bool operator ==(const InputDevice& device);
};

typedef QList<InputDevice> InputDeviceList;

Q_DECLARE_METATYPE(InputDevice)
Q_DECLARE_METATYPE(InputDeviceList)

QDBusArgument &operator<<(QDBusArgument &argument, const InputDevice &device);
const QDBusArgument &operator>>(const QDBusArgument &argument, InputDevice &device);


#endif // INPUTDEVICELIST_H
