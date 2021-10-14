#ifndef LASTOREUPDATEPACKAGESINFO_H
#define LASTOREUPDATEPACKAGESINFO_H

#include <QMap>
#include <QDBusMetaType>

typedef QMap<QString, QStringList> LastoreUpdatePackagesInfo;

void registerLastoreUpdatePackagesInfoMetaType();


#endif // LASTOREUPDATEPACKAGESINFO_H
