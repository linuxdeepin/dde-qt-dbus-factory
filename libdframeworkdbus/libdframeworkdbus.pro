TEMPLATE = lib
TARGET = dframeworkdbus
VERSION = 1.0
CONFIG += c++11 create_pc create_prl no_install_prl

include(qtdbusextended/qtdbusextended.pri)

HEADERS += \
    types/zoneinfo.h \
    types/audioport.h \
    types/audioportlist.h \
    types/batterypercentageinfo.h \
    types/batterypresentinfo.h \
    types/batterystateinfo.h \
    types/brightnessmap.h \
    types/screenrect.h \
    types/inputdevicelist.h \
    types/keyboardlayoutlist.h \
    types/localelist.h \
    types/arealist.h \
    types/qvariantlist.h

SOURCES += \ 
    types/zoneinfo.cpp \
    types/screenrect.cpp \
    types/inputdevicelist.cpp \
    types/localelist.cpp

system(python2 $$PWD/generate_code.py)
include(generated/generated.pri)

isEmpty(LIB_INSTALL_DIR) {
    target.path = /usr/lib
} else {
    target.path = $$LIB_INSTALL_DIR
}

includes.files =
includes.path = /usr/include/libdframeworkdbus-$$VERSION

type_headers.files =
type_headers.path = $$includes.path/types

for(header, HEADERS) {
    TMP = $${dirname(header)}
    DIRNAME = $${basename(TMP)}

    equals(DIRNAME, types) {
        eval(type_headers.files += $$header)
    } else {
        eval(includes.files += $$header)
    }
}

QMAKE_PKGCONFIG_NAME = libdframeworkdbus
QMAKE_PKGCONFIG_VERSION = $$VERSION
QMAKE_PKGCONFIG_DESCRIPTION = libdframeworkdbus
QMAKE_PKGCONFIG_INCDIR = $$includes.path
QMAKE_PKGCONFIG_LIBDIR = $$target.path
QMAKE_PKGCONFIG_DESTDIR = pkgconfig

INSTALLS += includes type_headers target
