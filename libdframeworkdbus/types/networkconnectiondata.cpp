// SPDX-FileCopyrightText: 2011 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include "networkconnectiondata.h"

void registerNetworkConnectionDataMetaType()
{
    qRegisterMetaType<NetworkConnectionData>("NetworkConnectionData");
    qDBusRegisterMetaType<NetworkConnectionData>();
}
