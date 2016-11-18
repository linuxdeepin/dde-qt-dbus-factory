#ifndef BATTERYSTATEINFO_H
#define BATTERYSTATEINFO_H

#include <QMap>
#include <QDBusMetaType>

typedef QMap<QString, quint32> BatteryStateInfo;

void registerBatteryStateInfoMetaType();

#endif // BATTERYSTATEINFO_H
