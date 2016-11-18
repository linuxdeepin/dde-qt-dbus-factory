#ifndef BATTERYPRESENTINFO_H
#define BATTERYPRESENTINFO_H

#include <QMap>
#include <QDBusMetaType>

typedef QMap<QString, bool> BatteryPresentInfo;

void registerBatteryPresentInfoMetaType();

#endif // BATTERYPRESENTINFO_H
