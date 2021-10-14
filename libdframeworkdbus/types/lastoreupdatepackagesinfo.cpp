#include "lastoreupdatepackagesinfo.h"

void registerLastoreUpdatePackagesInfoMetaType()
{
    qRegisterMetaType<LastoreUpdatePackagesInfo>("LastoreUpdatePackagesInfo");
    qDBusRegisterMetaType<LastoreUpdatePackagesInfo>();
}
