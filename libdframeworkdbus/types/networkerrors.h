#ifndef NETWORKERRORS_H
#define NETWORKERRORS_H

#include <QList>
#include <QVariant>
#include <QDBusMetaType>

typedef QMap<QString, QMap<QString, QString>> NetworkErrors;

void registerNetworkErrorsMetaType();

#endif // NETWORKERRORS_H
