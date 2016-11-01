#ifndef SCREENRECT_H
#define SCREENRECT_H

#include <QRect>
#include <QDBusArgument>
#include <QDebug>

struct ScreenRect
{
public:
    ScreenRect();
    operator QRect() const;

    friend QDebug operator<<(QDebug debug, const ScreenRect &rect);
    friend const QDBusArgument &operator>>(const QDBusArgument &arg, ScreenRect &rect);
    friend QDBusArgument &operator<<(QDBusArgument &arg, const ScreenRect &rect);

private:
    qint16 x;
    qint16 y;
    quint16 w;
    quint16 h;
};


Q_DECLARE_METATYPE(ScreenRect)

#endif // SCREENRECT_H
