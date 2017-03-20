#ifndef DBUSOBJECTPATHLIST_H
#define DBUSOBJECTPATHLIST_H

#include <QDBusObjectPath>
#include <QDBusMetaType>
#include <QList>

typedef QList<QDBusObjectPath> DBusObjectPathList;

void registerDBusObjectPathListMetaType();

#endif // DBUSOBJECTPATHLIST_H
