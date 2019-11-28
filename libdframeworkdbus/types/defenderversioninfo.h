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
#ifndef DEFENDERVERSIONINFO_H
#define DEFENDERVERSIONINFO_H

#include <QtCore/QString>
#include <QtDBus/QtDBus>
#include <QDBusMetaType>

struct DefenderVersionInfo
{
    QString version;
    QString description;
    quint64 time;

    bool operator!=(const DefenderVersionInfo &versionInfo);
};

Q_DECLARE_METATYPE(DefenderVersionInfo)

QDBusArgument &operator<<(QDBusArgument &argument, const DefenderVersionInfo &versionInfo);
const QDBusArgument &operator>>(const QDBusArgument &argument, DefenderVersionInfo &versionInfo);

void registerDefenderVersionInfoMetaType();

#endif // DEFENDERVERSIONINFO_H
