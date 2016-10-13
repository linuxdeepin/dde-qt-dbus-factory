TARGET = qdbusxml2cpp-fix

TEMPLATE = app
QT += core dbus-private

SOURCES += qdbusxml2cpp.cpp

target.path = /usr/bin/
INSTALLS += target
