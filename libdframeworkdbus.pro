TEMPLATE = lib
TARGET = dframeworkdbus
VERSION = 1.0
CONFIG += c++11 create_pc create_prl no_install_prl

HEADERS += src/dbus_notifications.h

SOURCES += src/dbus_notifications.cpp


isEmpty(LIB_INSTALL_DIR) {
    target.path = /usr/lib
} else {
    target.path = $$LIB_INSTALL_DIR
}

includes.files += $$HEADERS
includes.path = /usr/include/libdframeworkdbus-$$VERSION

QMAKE_PKGCONFIG_NAME = libdframeworkdbus
QMAKE_PKGCONFIG_VERSION = $$VERSION
QMAKE_PKGCONFIG_DESCRIPTION = libdframeworkdbus
QMAKE_PKGCONFIG_INCDIR = $$includes.path
QMAKE_PKGCONFIG_LIBDIR = $$target.path
QMAKE_PKGCONFIG_DESTDIR = pkgconfig

INSTALLS += includes target
