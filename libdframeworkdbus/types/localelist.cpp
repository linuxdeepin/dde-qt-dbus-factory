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

#include "localelist.h"

QDBusArgument &operator<<(QDBusArgument &arg, const LocaleInfo &info)
{
    arg.beginStructure();
    arg << info.id << info.name;
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, LocaleInfo &info)
{
    arg.beginStructure();
    arg >> info.id >> info.name;
    arg.endStructure();

    return arg;
}

QDataStream &operator<<(QDataStream &ds, const LocaleInfo &info)
{
    return ds << info.id << info.name;
}

const QDataStream &operator>>(QDataStream &ds, LocaleInfo &info)
{
    return ds >> info.id >> info.name;
}

bool LocaleInfo::operator ==(const LocaleInfo &info)
{
    return id==info.id && name==info.name;
}

void registerLocaleListMetaType()
{
    qRegisterMetaType<LocaleInfo>("LocaleInfo");
    qDBusRegisterMetaType<LocaleInfo>();

    qRegisterMetaType<LocaleList>("LocaleList");
    qDBusRegisterMetaType<LocaleList>();
}
