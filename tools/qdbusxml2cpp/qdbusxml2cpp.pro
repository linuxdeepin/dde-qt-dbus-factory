TARGET = qdbusxml2cpp-fix

TEMPLATE = app
QT += core dbus-private

SOURCES += qdbusxml2cpp.cpp

DESTDIR = $$PWD/../../bin/

CONFIG += c++11
