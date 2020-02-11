/*
 * Copyright (C) 2019 ~ 2019 Deepin Technology Co., Ltd.
 *
 * Author:     luokai <luokai_cm@deepin.com>
 *
 * Maintainer: luokai <luokai_cm@deepin.com>
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
#ifndef DEFENDERAPPFLOW_H
#define DEFENDERAPPFLOW_H

#include <QtCore/QString>
#include <QtDBus/QtDBus>
#include <QDBusMetaType>
#include <QtCore/QList>

struct DefenderAppFlow {
    int id = 0;
    QString name;
    QString sname;
    QString timeymdh;
    double downloaded = 0;
    double uploaded = 0;
    double apptotal = 0;//单个APP总流量

    bool operator!=(const DefenderAppFlow &appFlow);
};

Q_DECLARE_METATYPE(DefenderAppFlow);
//DefenderAppFlowList注册
typedef QList<DefenderAppFlow> DefenderAppFlowList;
Q_DECLARE_METATYPE(DefenderAppFlowList);

QDBusArgument &operator<<(QDBusArgument &argument, const DefenderAppFlow &appFlow);
const QDBusArgument &operator>>(const QDBusArgument &argument, DefenderAppFlow &appFlow);

void registerDefenderAppFlowMetaType();

#endif

