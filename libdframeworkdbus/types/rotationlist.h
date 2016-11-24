#ifndef ROTATIONLIST_H
#define ROTATIONLIST_H

#include <QDBusMetaType>
#include <QList>

typedef QList<quint16> RotationList;

void registerRotationListMetaType();

#endif // ROTATIONLIST_H
