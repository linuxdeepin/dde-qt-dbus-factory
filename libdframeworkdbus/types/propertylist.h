/**
 * Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#ifndef PROPERTYLIST_H
#define PROPERTYLIST_H

#include <QObject>
#include <QDBusArgument>

class Property
{
public:
    explicit Property();

    QString key;
    QString value;

    friend QDBusArgument &operator<<(QDBusArgument &arg, const Property &value);
    friend const QDBusArgument &operator>>(const QDBusArgument &arg, Property &value);
};

typedef QList<Property> PropertyList;

Q_DECLARE_METATYPE(Property)
Q_DECLARE_METATYPE(PropertyList)

void registerPropertyListMetaType();

#endif // PROPERTYLIST_H
