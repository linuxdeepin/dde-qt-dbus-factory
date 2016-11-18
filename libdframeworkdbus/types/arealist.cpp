
#include "arealist.h"

void registerAreaListMetaType()
{
    qRegisterMetaType<AreaList>("AreaList");
    qDBusRegisterMetaType<AreaList>();
}
