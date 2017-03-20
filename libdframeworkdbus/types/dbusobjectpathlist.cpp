#include "dbusobjectpathlist.h"

void registerDBusObjectPathListMetaType()
{
    qRegisterMetaType<DBusObjectPathList>("DBusObjectPathList");
    qDBusRegisterMetaType<DBusObjectPathList>();
}
