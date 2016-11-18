#ifndef BRIGHTNESSMAP_H
#define BRIGHTNESSMAP_H

#include <QMap>
#include <QDBusMetaType>

typedef QMap<QString, double> BrightnessMap;

void registerBrightnessMapMetaType();

#endif // BRIGHTNESSMAP_H
