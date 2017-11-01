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

#include "wacomdevicelist.h"

bool WacomDevice::operator ==(const WacomDevice &device)
{
    return this->deviceType == device.deviceType && this->interface == device.interface;
}

QDBusArgument &operator<<(QDBusArgument &argument, const WacomDevice &device)
{
    argument.beginStructure();
    argument << device.interface << device.deviceType;
    argument.endStructure();
    return argument;
}

const QDBusArgument &operator>>(const QDBusArgument &argument, WacomDevice &device)
{
    argument.beginStructure();
    argument >> device.interface >> device.deviceType;
    argument.endStructure();
    return argument;
}

void registerWacomDeviceListMetaType()
{
    qRegisterMetaType<WacomDevice>("WacomDevice");
    qDBusRegisterMetaType<WacomDevice>();

    qRegisterMetaType<WacomDeviceList>("WacomDeviceList");
    qDBusRegisterMetaType<WacomDeviceList>();
}
