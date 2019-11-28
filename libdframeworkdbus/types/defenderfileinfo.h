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
#ifndef DEFENDERFILEINFO_H
#define DEFENDERFILEINFO_H

#include <QtCore/QString>
#include <QtDBus/QtDBus>
#include <QDBusMetaType>

struct DefenderFileInfo
{
    int type;
    QString description;

    bool operator!=(const DefenderFileInfo &versionInfo);
};

Q_DECLARE_METATYPE(DefenderFileInfo)

QDBusArgument &operator<<(QDBusArgument &argument, const DefenderFileInfo &versionInfo);
const QDBusArgument &operator>>(const QDBusArgument &argument, DefenderFileInfo &versionInfo);

void registerDefenderFileInfoMetaType();

#endif // DEFENDERFILEINFO_H
