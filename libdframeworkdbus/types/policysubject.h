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
#ifndef POLICYSUBJECT_H
#define POLICYSUBJECT_H

#include <QDBusMetaType>
#include <QString>
#include <QDBusArgument>
#include <QDebug>

class PolicySubject
{
public:
    QString name;
    QMap<QString, QVariant> sub;

    friend QDebug operator<<(QDebug argument, const PolicySubject &subject) {
        argument << subject.name;

        return argument;
    }

    friend QDBusArgument &operator<<(QDBusArgument &argument, const PolicySubject &subject) {
        argument.beginStructure();
        argument << subject.name << subject.sub;
        argument.endStructure();

        return argument;
    }

    friend const QDBusArgument &operator>>(const QDBusArgument &argument, PolicySubject &subject) {
        argument.beginStructure();
        argument >> subject.name >> subject.sub;
        argument.endStructure();

        return argument;
    }

    bool operator==(const PolicySubject subject) const {
        return subject.name == name;
    }

    bool operator!=(const PolicySubject subject) const {
        return subject.name != name;
    }
};

Q_DECLARE_METATYPE(PolicySubject)

void registerPolicySubjectMetaType();

#endif // POLICYSUBJECT_H
