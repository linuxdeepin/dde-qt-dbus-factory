/**
 * Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#ifndef AUDIOPORT_H
#define AUDIOPORT_H

#include <QDBusMetaType>
#include <QString>
#include <QDBusArgument>
#include <QDebug>

class AudioPort
{
public:
    QString name;
    QString description;
    uchar availability; // 0 for Unknown, 1 for Not Available, 2 for Available.

    friend QDebug operator<<(QDebug argument, const AudioPort &port) {
        argument << port.description;

        return argument;
    }

    friend QDBusArgument &operator<<(QDBusArgument &argument, const AudioPort &port) {
        argument.beginStructure();
        argument << port.name << port.description << port.availability;
        argument.endStructure();

        return argument;
    }

    friend const QDBusArgument &operator>>(const QDBusArgument &argument, AudioPort &port) {
        argument.beginStructure();
        argument >> port.name >> port.description >> port.availability;
        argument.endStructure();

        return argument;
    }

    bool operator==(const AudioPort what) const {
        return what.name == name;
    }

    bool operator!=(const AudioPort what) const {
        return what.name != name;
    }
};

Q_DECLARE_METATYPE(AudioPort)

void registerAudioPortMetaType();

#endif // AUDIOPORT_H
