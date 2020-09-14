#-------------------------------------------------
#
# Project created by QtCreator 2018-12-07T18:47:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CarInfo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    secondwindow.cpp \
    addnew.cpp

HEADERS  += mainwindow.h \
    secondwindow.h \
    cars.h \
    addnew.h

FORMS    += mainwindow.ui \
    secondwindow.ui \
    addnew.ui

RESOURCES += \
    photos.qrc

DISTFILES +=
