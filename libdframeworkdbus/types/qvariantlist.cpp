
#include "qvariantlist.h"

void registerQVariantListMetaType()
{
    qRegisterMetaType<QVariantList>("QVariantList");
    qDBusRegisterMetaType<QVariantList>();
}
