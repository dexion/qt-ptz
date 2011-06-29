#-------------------------------------------------
#
# Project created by QtCreator 2011-06-29T20:07:34
#
#-------------------------------------------------

QT       += core gui

TARGET = PTZ
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    enumerator.cpp

HEADERS  += mainwindow.h \
    enumerator.h

FORMS    += mainwindow.ui

QT -= gui
OBJECTS_DIR = obj
MOC_DIR = moc
INCLUDEPATH += ../../src/qserialdeviceenumerator

CONFIG(debug, debug|release) {
    QMAKE_LIBDIR += ../../src/build/debug
    LIBS += -lqserialdeviced
    DESTDIR = debug
    TARGET = enumeratord
} else {
    QMAKE_LIBDIR += ../../src/build/release
    LIBS += -lqserialdevice
    DESTDIR = release
    TARGET = enumerator
}

win32 {
    LIBS += -lsetupapi -luuid -ladvapi32
}
unix:!macx {
    LIBS += -ludev
}
