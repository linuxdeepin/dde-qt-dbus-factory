
#include "batterystateinfo.h"

void registerBatteryStateInfoMetaType()
{
    qRegisterMetaType<BatteryStateInfo>("BatteryStateInfo");
    qDBusRegisterMetaType<BatteryStateInfo>();
}
