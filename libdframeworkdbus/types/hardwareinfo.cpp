/*
 * Copyright (C) 2011 ~ 2019 Deepin Technology Co., Ltd.
 *
 * Author:     lq <longqi_cm@deepin.com>
 *
 * Maintainer: lq <longqi_cm@deepin.com>
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

#include "hardwareinfo.h"


DMIInfo::DMIInfo()
{
}

void registerDMIInfoMetaType()
{
    qRegisterMetaType<DMIInfo>("DMIInfo");
    qDBusRegisterMetaType<DMIInfo>();
}

QDebug operator<<(QDebug debug, const DMIInfo &info)
{
    debug << QString("DMIInfo(") << info.biosVendor << ", " << info.biosVersion << ", "
          << info.biosDate << ", " << info.boardName << ", " << info.boardSerial << ", "
          << info.boardVendor << ", " << info.boardVersion << ", "
          << info.productName << ", " << info.productFamily << ", "
          << info.producctSerial << ", " << info.productUUID << ", "
          << info.productVersion << ")";

    return debug;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, DMIInfo &info)
{
    arg.beginStructure();
    arg >> info.biosVendor >> info.biosVersion >> info.biosDate
            >> info.boardName >> info.boardSerial >> info.boardVendor >> info.boardVersion
            >> info.productName >> info.productFamily
            >> info.producctSerial >> info.productUUID >> info.productVersion;
    arg.endStructure();

    return arg;
}

QDBusArgument &operator<<(QDBusArgument &arg, const DMIInfo &info)
{
    arg.beginStructure();
    arg << info.biosVendor << info.biosVersion << info.biosDate
            << info.boardName << info.boardSerial << info.boardVendor << info.boardVersion
            << info.productName << info.productFamily
            << info.producctSerial << info.productUUID << info.productVersion;
    arg.endStructure();

    return arg;
}

HardwareInfo::HardwareInfo()
{

}

QDebug operator<<(QDebug debug, const HardwareInfo &info)
{
    debug << "HardwareInfo(" <<info.id << ", " << info.hostName  << ", "
          << info.username  << ", " << info.os  << ", " << info.cpu << ", "
          << info.laptop  << ", " << info.memory  << ", " << info.diskTotal
          << ", " << info.networkCards << ", " << info.diskList  << ", " << info.dmi << ')';

    return debug;
}

QDBusArgument &operator<<(QDBusArgument &arg, const HardwareInfo &info)
{
    arg.beginStructure();
    arg << info.id << info.hostName << info.username << info.os << info.cpu
            << info.laptop << info.memory << info.diskTotal << info.networkCards
            << info.diskList << info.dmi;
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, HardwareInfo &info)
{
    arg.beginStructure();
    arg >> info.id >> info.hostName >> info.username >> info.os >> info.cpu
            >> info.laptop >> info.memory >> info.diskTotal >> info.networkCards
            >> info.diskList >> info.dmi;
    arg.endStructure();

    return arg;
}


void registerHardwareInfoMetaType()
{
    qRegisterMetaType<HardwareInfo>("HardwareInfo");
    qDBusRegisterMetaType<HardwareInfo>();
}
