#-------------------------------------------------
#
# Project created by QtCreator 2011-01-10T12:51:05
#
#-------------------------------------------------

QT       += core gui

TARGET = guiapp
TEMPLATE = app

unix:include(../../src/unix/ttylocker.pri)
include(../../src/qserialdeviceenumerator/qserialdeviceenumerator.pri)
include(../../src/qserialdevice/qserialdevice.pri)

SOURCES += main.cpp\
    mainwidget.cpp \
    infowidget.cpp \
    optionswidget.cpp \
    tracewidget.cpp \
    pelcopwidget.cpp
HEADERS += mainwidget.h \
    infowidget.h \
    optionswidget.h \
    tracewidget.h \
    pelcopwidget.h
FORMS += mainwidget.ui \
    infowidget.ui \
    optionswidget.ui \
    tracewidget.ui \
    pelcopwidget.ui

win32 {
    LIBS += -lsetupapi -luuid -ladvapi32
}
unix:!macx {
    LIBS += -ludev
}
