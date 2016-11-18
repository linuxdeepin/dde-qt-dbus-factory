
#include "audioportlist.h"

void registerAudioPortListMetaType()
{
    qRegisterMetaType<AudioPortList>("AudioPortList");
    qDBusRegisterMetaType<AudioPortList>();
}
