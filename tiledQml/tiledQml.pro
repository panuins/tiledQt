QT += gui quick

TEMPLATE = lib
DEFINES += TILEDQML_LIBRARY

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    TiledImageProvider.cpp

HEADERS += \
    include/TiledImageProvider.h \
    include/TiledQml_global.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

DESTDIR=$$OUT_PWD/../lib
DLLDESTDIR=$$OUT_PWD/../bin

INCLUDEPATH+=$$PWD/../libTiled
DEPENDPATH += $$PWD/../libTiled
win32 {
PRE_TARGETDEPS+=$$OUT_PWD/../lib/libtiled.a
}
unix {
PRE_TARGETDEPS+=$$OUT_PWD/../lib/libtiled.so
}
LIBS+= -L$$OUT_PWD/../lib/ -ltiled
