// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include "intstring.h"

bool IntString::operator!=(const IntString &intString) {
    return intString.state != state || intString.description != description;
}

QDBusArgument &operator<<(QDBusArgument &argument, const IntString &intString){
    argument.beginStructure();
    argument << intString.state << intString.description;
    argument.endStructure();
    return argument;
}


const QDBusArgument &operator>>(const QDBusArgument &argument, IntString &intString) {
    argument.beginStructure();
    argument >> intString.state >> intString.description;
    argument.endStructure();
    return argument;
}

void registerIntStringMetaType() {
    qRegisterMetaType<IntString>("IntString");
    qDBusRegisterMetaType<IntString>();
}
