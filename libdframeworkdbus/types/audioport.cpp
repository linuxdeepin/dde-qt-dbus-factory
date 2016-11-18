
#include <QDBusMetaType>

#include "audioport.h"

void registerAudioPortMetaType()
{
    qRegisterMetaType<AudioPort>("AudioPort");
    qDBusRegisterMetaType<AudioPort>();
}
