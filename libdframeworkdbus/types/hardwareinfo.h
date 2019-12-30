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

#ifndef HARDWAREINFO_H
#define HARDWAREINFO_H

#include <QDBusMetaType>
#include <QDebug>

class DMIInfo
{
public:
    DMIInfo();

    friend QDebug operator<<(QDebug debug, const DMIInfo &info);
    friend const QDBusArgument &operator>>(const QDBusArgument &arg, DMIInfo &info);
    friend QDBusArgument &operator<<(QDBusArgument &arg, const DMIInfo &info);

public:
    QString biosVendor{""};
    QString biosVersion{""};
    QString biosDate{""};
    QString boardName{""};
    QString boardSerial{""};
    QString boardVendor{""};
    QString boardVersion{""};
    QString productName{""};
    QString productFamily{""};
    QString producctSerial{""};
    QString productUUID{""};
    QString productVersion{""};
};

Q_DECLARE_METATYPE(DMIInfo)

void registerDMIInfoMetaType();

class HardwareInfo
{
public:
    HardwareInfo();

    friend QDebug operator<<(QDebug debug, const HardwareInfo &info);
    friend const QDBusArgument &operator>>(const QDBusArgument &arg, HardwareInfo &info);
    friend QDBusArgument &operator<<(QDBusArgument &arg, const HardwareInfo &info);

public:
    QString id{""};
    QString hostName{""};
    QString username{""};
    QString os{""};
    QString cpu{""};
    bool laptop{false};
    qint64 memory{0};
    qint64 diskTotal{0};
    QString networkCards{""};
    QString diskList{""};
    DMIInfo dmi;
};

Q_DECLARE_METATYPE(HardwareInfo)

void registerHardwareInfoMetaType();


#endif // HARDWAREINFO_H
