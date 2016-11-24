#include "resolutionlist.h"

void registerResolutionListMetaType()
{
    registerResolutionMetaType();

    qRegisterMetaType<ResolutionList>("ResolutionList");
    qDBusRegisterMetaType<ResolutionList>();
}
