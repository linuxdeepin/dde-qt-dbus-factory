/*
 * Copyright (C) 2011 ~ 2017 Deepin Technology Co., Ltd.
 *
 * Author:     sbw <sbw@sbw.so>
 *             kirigaya <kirigaya@mkacg.com>
 *             Hualet <mr.asianwang@gmail.com>
 *
 * Maintainer: sbw <sbw@sbw.so>
 *             kirigaya <kirigaya@mkacg.com>
 *             Hualet <mr.asianwang@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef INPUTDEVICELIST_H
#define INPUTDEVICELIST_H

#include <QtCore/QObject>
#include <QtCore/QList>
#include <QtCore/QString>
#include <QtDBus/QtDBus>
#include <QDBusMetaType>

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

void registerInputDeviceListMetaType();

#endif // INPUTDEVICELIST_H
