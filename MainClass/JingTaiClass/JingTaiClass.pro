#-------------------------------------------------
#
# Project created by QtCreator 2017-06-27T23:01:02
#
#-------------------------------------------------

QT       -= gui

TARGET = JingTaiClass
TEMPLATE = lib  #定义生成的为库文件（如果是app则为可执行程序）
CONFIG += staticlib #定义导出库的类型为静态链接库

SOURCES += JingTaiClass.cpp

HEADERS += JingTaiClass.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS +=
