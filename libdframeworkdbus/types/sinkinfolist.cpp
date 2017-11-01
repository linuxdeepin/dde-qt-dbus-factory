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

#include "sinkinfolist.h"

#include <QDebug>
#include <QJsonObject>

void registerSinkInfoListMetaType()
{
    registerSinkInfoMetaType();

    qRegisterMetaType<SinkInfoList>("SinkInfoList");
    qDBusRegisterMetaType<SinkInfoList>();
}

void registerSinkInfoMetaType()
{
    qRegisterMetaType<SinkInfo>("SinkInfo");
    qDBusRegisterMetaType<SinkInfo>();
}

QDBusArgument &operator<<(QDBusArgument &arg, const SinkInfo &info)
{
    arg.beginStructure();
    arg << info.m_name << info.m_p2pMac << info.m_interface << info.m_connected << info.m_sinkPath << info.m_linkPath;
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, SinkInfo &info)
{
    arg.beginStructure();
    arg >> info.m_name >> info.m_p2pMac >> info.m_interface >> info.m_connected >> info.m_sinkPath >> info.m_linkPath;
    arg.endStructure();

    return arg;
}

QDebug operator<<(QDebug arg, const SinkInfo &info)
{
    arg << "name = " << info.m_name << endl;
    arg << "p2pMac = " << info.m_p2pMac << endl;
    arg << "interface = " << info.m_interface << endl;
    arg << "connected = " << info.m_connected << endl;
    arg << "peerPath = " << info.m_sinkPath.path() << endl;
    arg << "linkPath = " << info.m_linkPath.path() << endl;

    return arg;
}

SinkInfo SinkInfo::fromJson(const QJsonObject &infoObject)
{
    SinkInfo info;

    info.m_name = infoObject.value("Name").toString();
    info.m_p2pMac = infoObject.value("P2PMac").toString();
    info.m_interface = infoObject.value("Interface").toString();
    info.m_connected = infoObject.value("Connected").toBool();
    info.m_sinkPath = QDBusObjectPath(infoObject.value("Path").toString());
    info.m_linkPath = QDBusObjectPath(infoObject.value("LinkPath").toString());

    return std::move(info);
}

bool SinkInfo::operator==(const SinkInfo &what)
{
    return what.m_sinkPath == m_sinkPath;
}
