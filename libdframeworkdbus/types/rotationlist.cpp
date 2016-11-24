#include "rotationlist.h"

void registerRotationListMetaType()
{
    qRegisterMetaType<RotationList>("RotationList");
    qDBusRegisterMetaType<RotationList>();
}
