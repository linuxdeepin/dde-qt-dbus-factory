#include "defenderprocinfolist.h"

void registerDefenderProcInfoListMetaType()
{
    qRegisterMetaType<DefenderProcInfoList>("DefenderProcInfoList");
    qDBusRegisterMetaType<DefenderProcInfoList>();
}
