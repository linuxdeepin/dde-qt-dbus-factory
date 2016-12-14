#ifndef NETWORKCONNECTIONDATA_H
#define NETWORKCONNECTIONDATA_H

#include <QList>
#include <QVariant>
#include <QDBusMetaType>

typedef QMap<QString, QMap<QString, QVariant>> NetworkConnectionData;

void registerNetworkConnectionDataMetaType();

#endif // NETWORKCONNECTIONDATA_H
