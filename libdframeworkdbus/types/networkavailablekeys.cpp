#include "networkavailablekeys.h"

void registerNetworkAvailableKeysMetaType()
{
    qRegisterMetaType<NetworkAvailableKeys>("NetworkAvailableKeys");
    qDBusRegisterMetaType<NetworkAvailableKeys>();
}

