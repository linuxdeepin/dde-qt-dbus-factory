#include "windowinfomap.h"

#include <QDBusMetaType>

void registerWindowInfoMapMetaType()
{
    registerWindowInfoMetaType();

    qRegisterMetaType<WindowInfoMap>("WindowInfoMap");
    qDBusRegisterMetaType<WindowInfoMap>();
}

void registerWindowInfoMetaType()
{
    qRegisterMetaType<WindowInfo>("WindowInfo");
    qDBusRegisterMetaType<WindowInfo>();
}

QDebug operator<<(QDebug argument, const WindowInfo &info)
{
    argument << '(' << info.m_windowTitle << ',' << info.m_actived << ')';

    return argument;
}

QDBusArgument &operator<<(QDBusArgument &argument, const WindowInfo &info)
{
    argument.beginStructure();
    argument << info.m_windowTitle << info.m_actived;
    argument.endStructure();

    return argument;
}

const QDBusArgument &operator>>(const QDBusArgument &argument, WindowInfo &info)
{
    argument.beginStructure();
    argument >> info.m_windowTitle >> info.m_actived;
    argument.endStructure();

    return argument;
}

bool WindowInfo::operator==(const WindowInfo &rhs) const
{
    return m_windowTitle == rhs.m_windowTitle;
}
