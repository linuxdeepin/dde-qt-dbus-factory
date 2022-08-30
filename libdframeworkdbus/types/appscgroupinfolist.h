// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef APPSCGROUPINFOLIST_H
#define APPSCGROUPINFOLIST_H

#include <QList>
#include <QMap>
#include <QDBusMetaType>

typedef QMap<quint32, QString> AppsCGroupInfo;
Q_DECLARE_METATYPE(AppsCGroupInfo)
typedef QList<AppsCGroupInfo> AppsCGroupInfoList;
Q_DECLARE_METATYPE(AppsCGroupInfoList)

void registerAppsCGroupInfoMetaType();
void registerAppsCGroupInfoListMetaType();

#endif // APPSCGROUPINFOLIST_H
