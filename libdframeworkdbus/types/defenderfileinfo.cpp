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
#include "defenderfileinfo.h"

bool DefenderFileInfo::operator!=(const DefenderFileInfo &versionInfo)
{
    return versionInfo.type != type || versionInfo.description != description;
}

QDBusArgument &operator<<(QDBusArgument &argument, const DefenderFileInfo &versionInfo)
{
    argument.beginStructure();
    argument << versionInfo.type << versionInfo.description;
    argument.endStructure();
    return argument;
}

const QDBusArgument &operator>>(const QDBusArgument &argument, DefenderFileInfo &versionInfo)
{
    argument.beginStructure();
    argument >> versionInfo.type >> versionInfo.description;
    argument.endStructure();
    return argument;
}

void registerDefenderFileInfoMetaType()
{
    qRegisterMetaType<DefenderFileInfo>("DefenderFileInfo");
    qDBusRegisterMetaType<DefenderFileInfo>();
}
