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

#ifndef DEFENDERPROCINFO_H
#define DEFENDERPROCINFO_H

#include <QtCore/QString>
#include <QtDBus/QtDBus>
#include <QDBusMetaType>
#include <QtCore/QList>

struct DefenderProcInfo {
    int nPid;
    QString sExecPath;          // 执行路径
    bool isbSysApp;             // 是否是系统应用
    QString sProcName;          //  进程名
    // 启动器应用信息
    QString sDesktopPath;       // 桌面文件路径
    QString sPkgName;           // 包名
    QString sAppName;           // 应用名
    QString sThemeIcon;         // 图标路径
    QString sID;                // 启动器中对应应用id
    qint64 nCategoryID;         // 启动器中分类id
    qint64 nTimeInstalled;      // 安装时间
    // 流量信息
    QString sTimeyMdh;          // 流量信息时间
    double dDownloadSpeed;      // 下载速度
    double dUploadSpeed;        // 上传速度
    double dDownloads;          // 下载量
    double dUploads;            // 上传量

    // 联网管控信息
    QString sStatus;            // 状态 询问/允许/禁止
    QString sDefaultStatus;     // 默认状态

    // 其他参数
    QString sOtherParam;
    bool operator!=(const DefenderProcInfo &procInfo);
    // 初始化
    DefenderProcInfo() {
        nPid = 0;
        isbSysApp = false;
        nCategoryID = 0;
        nTimeInstalled = 0;
        dDownloadSpeed = 0.0;
        dUploadSpeed = 0.0;
        dDownloads = 0.0;
        dUploads = 0.0;
    }
};

Q_DECLARE_METATYPE(DefenderProcInfo);

QDBusArgument &operator<<(QDBusArgument &argument, const DefenderProcInfo &procInfo);
const QDBusArgument &operator>>(const QDBusArgument &argument, DefenderProcInfo &procInfo);

void registerDefenderProcInfoMetaType();
#endif
