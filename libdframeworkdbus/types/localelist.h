#ifndef LOCALELIST_H
#define LOCALELIST_H

#include <QtCore/QObject>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QDBusArgument>

struct LocaleInfo {
    QString id;
    QString name;

    bool operator ==(const LocaleInfo& info);
};

typedef QList<LocaleInfo> LocaleList;

Q_DECLARE_METATYPE(LocaleInfo)
Q_DECLARE_METATYPE(LocaleList)

QDBusArgument &operator<<(QDBusArgument &arg, const LocaleInfo &info);
const QDBusArgument &operator>>(const QDBusArgument &arg, LocaleInfo &info);

QDataStream &operator<<(QDataStream &ds, const LocaleInfo &info);
const QDataStream &operator>>(QDataStream &ds, LocaleInfo &info);

#endif // LOCALELIST_H
