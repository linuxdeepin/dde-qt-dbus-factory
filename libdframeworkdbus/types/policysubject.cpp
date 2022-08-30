// SPDX-FileCopyrightText: 2011 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include <QDBusMetaType>

#include "policysubject.h"

void registerPolicySubjectMetaType()
{
    qRegisterMetaType<PolicySubject>("PolicySubject");
    qDBusRegisterMetaType<PolicySubject>();
}
