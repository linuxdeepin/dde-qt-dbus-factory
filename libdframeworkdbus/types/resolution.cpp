#include "resolution.h"

#include <QDebug>

void registerResolutionMetaType()
{
    qRegisterMetaType<Resolution>("Resolution");
    qDBusRegisterMetaType<Resolution>();
}

Resolution::Resolution()
{

}

bool Resolution::operator!=(const Resolution &other)
{
    return m_id != other.m_id;
}

QDBusArgument &operator<<(QDBusArgument &arg, const Resolution &value)
{
    arg.beginStructure();
    arg << quint32(value.id()) << quint16(value.width()) << quint16(value.height()) << value.rate();
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, Resolution &value)
{
    quint32 id;
    quint16 w, h;
    double rate;

    arg.beginStructure();
    arg >> id >> w >> h >> rate;
    arg.endStructure();

    value.setId(id);
    value.setWidth(w);
    value.setHeight(h);
    value.setRate(rate);

    return arg;
}
