/*
 * Copyright (C) 2017 ~ 2019 Deepin Technology Co., Ltd.
 *
 * Author:     wubowen <wubowen_cm@deepin.com>
 *
 * Maintainer: wubowen <wubowen_cm@deepin.com>
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
#ifndef DEFENDERPROCESSINFO_H
#define DEFENDERPROCESSINFO_H

#include <QObject>
#include <QList>
#include <QString>
#include <QtDBus>
#include <QDBusMetaType>

struct DefenderProcessInfo
{
    int proc;
    QString title;
    QString desktop;

    bool operator!=(const DefenderProcessInfo &procInfo);
};
QDBusArgument &operator<<(QDBusArgument &argument, const DefenderProcessInfo &procInfo);
const QDBusArgument &operator>>(const QDBusArgument &argument, DefenderProcessInfo &procInfo);

typedef QList<DefenderProcessInfo> DefenderProcessInfoList;
Q_DECLARE_METATYPE(DefenderProcessInfo)
Q_DECLARE_METATYPE(DefenderProcessInfoList)

void registerDefenderProcessInfoMetaType();

#endif // DEFENDERPROCESSINFO_H
