
#include "batterypercentageinfo.h"

void registerBatteryPercentageInfoMetaType()
{
    qRegisterMetaType<BatteryPercentageInfo>("BatteryPercentageInfo");
    qDBusRegisterMetaType<BatteryPercentageInfo>();
}
