#ifndef SEARCH_H
#define SEARCH_H

#include <QMap>
#include <QDBusMetaType>

typedef QMap<QString, double> SearchMap;

void registerSearchMapMetaType();

#endif // SEARCH_H
