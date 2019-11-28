/*
 * Copyright (C) 2019 ~ 2019 Deepin Technology Co., Ltd.
 *
 * Author:     wubw <wubowen_cm@deepin.com>
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
#include "defenderversioninfo.h"

bool DefenderVersionInfo::operator!=(const DefenderVersionInfo &versionInfo)
{
    return versionInfo.time != time || versionInfo.description != description || versionInfo.version != version;
}

QDBusArgument &operator<<(QDBusArgument &argument, const DefenderVersionInfo &versionInfo)
{
    argument.beginStructure();
    argument << versionInfo.version << versionInfo.description << versionInfo.time;
    argument.endStructure();
    return argument;
}

const QDBusArgument &operator>>(const QDBusArgument &argument, DefenderVersionInfo &versionInfo)
{
    argument.beginStructure();
    argument >> versionInfo.version >> versionInfo.description >> versionInfo.time;
    argument.endStructure();
    return argument;
}

void registerDefenderVersionInfoMetaType() {
    qRegisterMetaType<DefenderVersionInfo>("DefenderVersionInfo");
    qDBusRegisterMetaType<DefenderVersionInfo>();
}
