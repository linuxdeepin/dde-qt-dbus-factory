#include "networkconnectiondata.h"

void registerNetworkConnectionDataMetaType()
{
    qRegisterMetaType<NetworkConnectionData>("NetworkConnectionData");
    qDBusRegisterMetaType<NetworkConnectionData>();
}
