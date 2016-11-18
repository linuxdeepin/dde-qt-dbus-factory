#ifndef KEYBOARDLAYOUTLIST_H
#define KEYBOARDLAYOUTLIST_H

#include <QMap>
#include <QString>
#include <QObject>
#include <QDBusMetaType>

typedef QMap<QString, QString> KeyboardLayoutList;

void registerKeyboardLayoutListMetaType();

#endif // KEYBOARDLAYOUTLIST_H
