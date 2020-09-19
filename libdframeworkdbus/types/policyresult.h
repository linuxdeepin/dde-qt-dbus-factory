/*
 * Copyright (C) 2016 ~ 2017 Deepin Technology Co., Ltd.
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
#ifndef POLICYRESULT_H
#define POLICYRESULT_H

#include <QDBusMetaType>
#include <QString>
#include <QDBusArgument>
#include <QDebug>

class PolicyResult
{
public:
    bool isAuthorized;
    bool isChallenge;
    QMap<QString, QString> stringList;

    inline bool getAuthorized() const { return isAuthorized; }
    inline bool getChallenge() const { return isChallenge; }

    friend QDebug operator<<(QDebug argument, const PolicyResult &result) {
        argument << result.isAuthorized << result.isChallenge << result.stringList;

        return argument;
    }

    friend QDBusArgument &operator<<(QDBusArgument &argument, const PolicyResult &result) {
        argument.beginStructure();
        argument << result.isAuthorized << result.isChallenge << result.stringList;
        argument.endStructure();

        return argument;
    }

    friend const QDBusArgument &operator>>(const QDBusArgument &argument, PolicyResult &result) {
        argument.beginStructure();
        argument >> result.isAuthorized >> result.isChallenge >> result.stringList;
        argument.endStructure();

        return argument;
    }

    bool operator==(const PolicyResult result) const {
        return result.isAuthorized == isAuthorized && result.isChallenge == isChallenge && result.stringList == stringList;
    }

    bool operator!=(const PolicyResult result) const {
        return result.isAuthorized != isAuthorized || result.isChallenge != isChallenge || result.stringList != stringList;
    }
};

Q_DECLARE_METATYPE(PolicyResult)

void registerPolicyResultMetaType();

#endif // POLICYRESULT_H
