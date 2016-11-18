#ifndef BATTERYPERCENTAGEINFO_H
#define BATTERYPERCENTAGEINFO_H

#include <QMap>
#include <QDBusMetaType>

typedef QMap<QString, double> BatteryPercentageInfo;

void registerBatteryPercentageInfoMetaType();

#endif // BATTERYPERCENTAGEINFO_H
