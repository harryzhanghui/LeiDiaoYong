#-------------------------------------------------
#
# Project created by QtCreator 2017-06-27T22:55:31
#
#-------------------------------------------------

QT       += widgets

TARGET = GongXiangClass
TEMPLATE = lib

DEFINES += GONGXIANGCLASS_LIBRARY

SOURCES += GongXiangClass.cpp

HEADERS += GongXiangClass.h\
        gongxiangclass_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
