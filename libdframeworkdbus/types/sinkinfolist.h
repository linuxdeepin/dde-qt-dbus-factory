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

#ifndef PEERINFOLIST_H
#define PEERINFOLIST_H

#include <QtCore/QObject>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QDBusArgument>
#include <QDBusMetaType>

class SinkInfo {

public:
    friend QDebug operator<<(QDebug arg, const SinkInfo &info);
    friend QDBusArgument &operator<<(QDBusArgument &arg, const SinkInfo &info);
    friend const QDBusArgument &operator>>(const QDBusArgument &arg, SinkInfo &info);

    static SinkInfo fromJson(const QJsonObject &infoObject);

    bool operator==(const SinkInfo &what);

public:
    QString m_name;
    QString m_p2pMac;
    QString m_interface;
    bool m_connected;
    QDBusObjectPath m_sinkPath;
    QDBusObjectPath m_linkPath;
};

typedef QList<SinkInfo> SinkInfoList;

Q_DECLARE_METATYPE(SinkInfo)
Q_DECLARE_METATYPE(SinkInfoList)

void registerSinkInfoMetaType();
void registerSinkInfoListMetaType();

#endif // PEERINFOLIST_H
