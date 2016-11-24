#include "reflectlist.h"

void registerReflectListMetaType()
{
    qRegisterMetaType<ReflectList>("ReflectList");
    qDBusRegisterMetaType<ReflectList>();
}
