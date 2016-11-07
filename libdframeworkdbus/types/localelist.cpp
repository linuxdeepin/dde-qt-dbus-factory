#include "localelist.h"

QDBusArgument &operator<<(QDBusArgument &arg, const LocaleInfo &info)
{
    arg.beginStructure();
    arg << info.id << info.name;
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, LocaleInfo &info)
{
    arg.beginStructure();
    arg >> info.id >> info.name;
    arg.endStructure();

    return arg;
}

QDataStream &operator<<(QDataStream &ds, const LocaleInfo &info)
{
    return ds << info.id << info.name;
}

const QDataStream &operator>>(QDataStream &ds, LocaleInfo &info)
{
    return ds >> info.id >> info.name;
}

bool LocaleInfo::operator ==(const LocaleInfo &info)
{
    return id==info.id && name==info.name;
}
