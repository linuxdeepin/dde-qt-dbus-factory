/*
 * Copyright (C) 2011 ~ 2017 Deepin Technology Co., Ltd.
 *
 * Author:     shaotianlu <shaotianlu@uniontech.com>
 *
 * Maintainer: shaotianlu <shaotianlu@uniontech.com>
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

#include "fillmode.h"

#include <QDebug>

void registerFillModeMetaType()
{
    qRegisterMetaType<FillMode>("FillMode");
    qDBusRegisterMetaType<FillMode>();
}

FillMode::FillMode()
{

}

bool FillMode::operator!=(const FillMode &other) const
{
    return ((m_width != other.width()) || (m_height != other.height()) || (m_fillMode != other.fillMode()));
}

bool FillMode::operator==(const FillMode &other) const
{
    return !(other != *this);
}

QDBusArgument &operator<<(QDBusArgument &arg, const FillMode &value)
{
    arg.beginStructure();
    arg << quint16(value.width()) << quint16(value.height()) << value.fillMode();
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, FillMode &value)
{
    quint16 w, h;
    QString mode;

    arg.beginStructure();
    arg >> w >> h >> mode;
    arg.endStructure();

    value.setWidth(w);
    value.setHeight(h);
    value.setFillMode(mode);

    return arg;
}
