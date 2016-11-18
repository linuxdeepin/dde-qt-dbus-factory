
#include "batterypresentinfo.h"

void registerBatteryPresentInfoMetaType()
{
    qRegisterMetaType<BatteryPresentInfo>("BatteryPresentInfo");
    qDBusRegisterMetaType<BatteryPresentInfo>();
}
