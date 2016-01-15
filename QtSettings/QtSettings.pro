#-------------------------------------------------
#
# Project created by QtCreator 2016-01-14T17:33:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtSettings
TEMPLATE = app


SOURCES += main.cpp\
    SettingsDialog.cpp \
    SettingsPage.cpp

HEADERS  += \
    SettingsDialog.h \
    SettingsPage.h \
    SettingBase.h

FORMS    += \
    SettingsDialog.ui
