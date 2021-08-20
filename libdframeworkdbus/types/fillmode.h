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

#ifndef FILLMODE_H
#define FILLMODE_H

#include <QDBusMetaType>

class FillMode
{
public:
    friend QDBusArgument &operator<<(QDBusArgument &arg, const FillMode &value);
    friend const QDBusArgument &operator>>(const QDBusArgument &arg, FillMode &value);

    explicit FillMode();

    bool operator!=(const FillMode &other) const;
    bool operator==(const FillMode &other) const;

    int width() const { return m_width; }
    int height() const { return m_height; }
    QString fillMode() const { return m_fillMode; }

    void setWidth(const int w) { m_width = w; }
    void setHeight(const int h) { m_height = h; }
    void setFillMode(const QString mode) { m_fillMode = mode; }

private:
    int m_width;
    int m_height;
    QString m_fillMode;
};


Q_DECLARE_METATYPE(FillMode)

void registerFillModeMetaType();

#endif // FILLMODE_H
