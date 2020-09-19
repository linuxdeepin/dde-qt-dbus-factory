#ifndef POLICYDETAILS_H
#define POLICYDETAILS_H

#include <QMap>
#include <QDBusMetaType>

typedef QMap<QString, QString> PolicyDetails;

void registerPolicyDetailsMetaType();

#endif // POLICYDETAILS_H
