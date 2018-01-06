#-------------------------------------------------
#
# Project created by QtCreator 2017-10-16T19:07:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SolitarioProjectED1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    carta.cpp \
    button.cpp \
    showdate.cpp

HEADERS  += mainwindow.h \
    carta.h \
    button.h \
    showdate.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS+= -std=gnu++14

RESOURCES += \
    resources.qrc
