#ifndef REFLECTLIST_H
#define REFLECTLIST_H

#include <QDBusMetaType>
#include <QList>

typedef QList<quint16> ReflectList;

void registerReflectListMetaType();

#endif // REFLECTLIST_H
