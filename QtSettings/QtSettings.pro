#-------------------------------------------------
#
# Project created by QtCreator 2016-01-14T17:33:39
#
#-------------------------------------------------

QT       += core gui

QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtSettings
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    SettingsDialog.cpp \
    SettingsPage.cpp \
    SettingBase.cpp

HEADERS  += MainWindow.h \
    SettingsDialog.h \
    SettingsPage.h \
    SettingBase.h

FORMS    += MainWindow.ui \
    SettingsDialog.ui
