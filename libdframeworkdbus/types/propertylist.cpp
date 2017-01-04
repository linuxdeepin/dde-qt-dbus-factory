/**
 * Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#include "propertylist.h"

#include <QtDBus>

Property::Property()
{

}

QDBusArgument &operator<<(QDBusArgument &arg, const Property &value)
{
    arg.beginStructure();
    arg << value.key << value.value;
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, Property &value)
{
    arg.beginStructure();
    arg >> value.key >> value.value;
    arg.endStructure();

    return arg;
}

void registerPropertyListMetaType()
{
    qRegisterMetaType<Property>();
    qDBusRegisterMetaType<Property>();

    qRegisterMetaType<PropertyList>();
    qDBusRegisterMetaType<PropertyList>();
}
