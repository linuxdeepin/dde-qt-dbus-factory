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

#ifndef LOCALELIST_H
#define LOCALELIST_H

#include <QtCore/QObject>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QDBusArgument>
#include <QDBusMetaType>

struct LocaleInfo {
    QString id;
    QString name;

    bool operator ==(const LocaleInfo& info);
};

typedef QList<LocaleInfo> LocaleList;

Q_DECLARE_METATYPE(LocaleInfo)
Q_DECLARE_METATYPE(LocaleList)

QDBusArgument &operator<<(QDBusArgument &arg, const LocaleInfo &info);
const QDBusArgument &operator>>(const QDBusArgument &arg, LocaleInfo &info);

QDataStream &operator<<(QDataStream &ds, const LocaleInfo &info);
const QDataStream &operator>>(QDataStream &ds, LocaleInfo &info);

void registerLocaleListMetaType();

#endif // LOCALELIST_H
