#-------------------------------------------------
#
# Project created by QtCreator 2017-06-27T22:56:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainPro
TEMPLATE = app

#INCLUDEPATH += ./JingTaiClass
##-L$$PWD/StaticLibrary -lStaticLibrary
#LIBS += $$PWD/StaticLibrary/StaticLibrary.lib

#引入静态库
LIBS    += C:\QTtest\LeiDiaoYong\build-MainClass-Desktop_Qt_5_5_1_MinGW_32bit-Debug\JingTaiClass\debug\libJingTaiClass.a
INCLUDEPATH += C:\QTtest\LeiDiaoYong\MainClass\JingTaiClass

#引入动态库
LIBS    += C:\QTtest\LeiDiaoYong\build-MainClass-Desktop_Qt_5_5_1_MinGW_32bit-Debug\GongXiangClass\debug\GongXiangClass.dll  #这是编译期的链接库路径
INCLUDEPATH += C:\QTtest\LeiDiaoYong\MainClass\GongXiangClass

HEADERS += StaticLibrary/staticlibrary.h


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui
