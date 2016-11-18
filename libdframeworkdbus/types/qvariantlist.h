#ifndef QVARIANTLIST_H
#define QVARIANTLIST_H

#include <QList>
#include <QVariant>
#include <QDBusMetaType>

typedef QList<QVariant> QVariantList;

void registerQVariantListMetaType();

#endif // QVARIANTLIST_H
