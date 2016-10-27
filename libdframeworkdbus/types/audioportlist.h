/**
 * Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#ifndef AUDIOPORTLIST_H
#define AUDIOPORTLIST_H

#include <QList>
#include "audioport.h"

typedef QList<AudioPort> AudioPortList;

Q_DECLARE_METATYPE(AudioPortList)

#endif // AUDIOPORTLIST_H
