#ifndef NETWORKAVAILABLEKEYS_H
#define NETWORKAVAILABLEKEYS_H

#include <QList>
#include <QVariant>
#include <QDBusMetaType>

typedef QMap<QString, QStringList> NetworkAvailableKeys;

void registerNetworkAvailableKeysMetaType();

#endif // NETWORKAVAILABLEKEYS_H
