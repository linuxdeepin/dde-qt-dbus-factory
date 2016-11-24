#include "searchmap.h"

void registerSearchMapMetaType()
{
    qRegisterMetaType<SearchMap>("SearchMap");
    qDBusRegisterMetaType<SearchMap>();
}
