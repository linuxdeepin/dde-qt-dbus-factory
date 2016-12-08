/**
 * Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#ifndef WINDOWLIST_H
#define WINDOWLIST_H

#include <QObject>

typedef QList<quint32> WindowList;
Q_DECLARE_METATYPE(WindowList)

void registerWindowListMetaType();

#endif // WINDOWLIST_H
