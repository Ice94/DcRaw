#-------------------------------------------------
#
# Project created by QtCreator 2016-01-09T10:34:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projekt2
TEMPLATE = app
DEFINES += NODEPS Q_COMPILER_INITIALIZER_LISTS

SOURCES += main.cpp\
        mainwindow.cpp \
    rawconverter.cpp \
    fileutil.cpp \
    conversionparameters.cpp

HEADERS  += mainwindow.h \
    rawconverter.h \
    dcraw.h \
    fileutil.h \
    conversionparameters.h

FORMS    += mainwindow.ui
QMAKE_CXXFLAGS += -std=c++11






