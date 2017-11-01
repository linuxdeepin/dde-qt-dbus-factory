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

#include "linkinfolist.h"

#include <QDebug>
#include <QJsonObject>

void registerLinkInfoListMetaType()
{
    registerLinkInfoMetaType();

    qRegisterMetaType<LinkInfoList>("LinkInfoList");
    qDBusRegisterMetaType<LinkInfoList>();
}

void registerLinkInfoMetaType()
{
    qRegisterMetaType<LinkInfo>("LinkInfo");
    qDBusRegisterMetaType<LinkInfo>();
}

QDBusArgument &operator<<(QDBusArgument &arg, const LinkInfo &info)
{
    arg.beginStructure();
    arg << info.m_name << info.m_friendlyName << info.m_macAddr << info.m_managed << info.m_p2pScanning << info.m_dbusPath;
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, LinkInfo &info)
{
    arg.beginStructure();
    arg >> info.m_name >> info.m_friendlyName >> info.m_macAddr >> info.m_managed >> info.m_p2pScanning >> info.m_dbusPath;
    arg.endStructure();

    return arg;
}

QDebug operator<<(QDebug arg, const LinkInfo &info)
{
    arg << "name = " << info.m_name << endl;
    arg << "friendlyName = " << info.m_friendlyName << endl;
    arg << "macAddr = " << info.m_macAddr << endl;
    arg << "managed = " << info.m_managed << endl;
    arg << "scanning = " << info.m_p2pScanning << endl;
    arg << "path = " << info.m_dbusPath.path() << endl;

    return arg;
}

LinkInfo LinkInfo::fromJson(const QJsonObject &infoObject)
{
    LinkInfo info;

    info.m_name = infoObject.value("Name").toString();
    info.m_friendlyName = infoObject.value("FriendlyName").toString();
    info.m_macAddr = infoObject.value("MacAddress").toString();
    info.m_managed = infoObject.value("Managed").toBool();
    info.m_p2pScanning = infoObject.value("P2PScanning").toBool();
    info.m_dbusPath = QDBusObjectPath(infoObject.value("Path").toString());

    return std::move(info);
}

bool LinkInfo::operator==(const LinkInfo &what)
{
    return what.m_dbusPath == m_dbusPath;
}
