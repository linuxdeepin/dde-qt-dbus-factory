#include "networkerrors.h"

void registerNetworkErrorsMetaType()
{
    qRegisterMetaType<NetworkErrors>("NetworkErrors");
    qDBusRegisterMetaType<NetworkErrors>();
}
