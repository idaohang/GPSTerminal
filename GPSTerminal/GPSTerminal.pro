#-------------------------------------------------
#
# Project created by QtCreator 2013-04-10T13:53:54
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GPSTerminal
TEMPLATE = app


SOURCES += main.cpp\
        cgpsterminal.cpp

HEADERS  += cgpsterminal.h

FORMS    += cgpsterminal.ui

RESOURCES += \
    GPSTerminal.qrc

RC_FILE = resource/app_icon.rc
