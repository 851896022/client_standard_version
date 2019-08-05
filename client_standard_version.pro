#-------------------------------------------------
#
# Project created by QtCreator 2018-12-05T09:17:36
#
#-------------------------------------------------

QT       += core gui network  multimedia sql
QT +=  axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = client_standard_version
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        window.cpp \
    UI/left/alarminfo.cpp \
    UI/left/listen.cpp \
    UI/left/userinfo.cpp \
    UI/left/gpstime.cpp \
    UI/main/chmodule.cpp \
    UI/top/topbar.cpp \
    UI/main/historyaudio.cpp \
    data/APM/receiveapm.cpp \
    data/global.cpp \
    data/audio/receiveaudio.cpp \
    data/audio/player.cpp \
    data/alarm/receivealarm.cpp \
    UI/main/login.cpp \
    UI/main/setgate.cpp \
    data/yxt/qReader.cpp \
    data/yxt/qRedis.cpp \
    data/sql/mysql.cpp \
    UI/main/logquery.cpp \
    UI/main/usermanagement.cpp \
    data/audio/speak.cpp

HEADERS += \
        window.h \
    UI/left/alarminfo.h \
    UI/left/listen.h \
    UI/left/userinfo.h \
    UI/left/gpstime.h \
    UI/main/chmodule.h \
    UI/top/topbar.h \
    UI/main/historyaudio.h \
    data/APM/receiveapm.h \
    data/global.h \
    data/audio/receiveaudio.h \
    data/audio/player.h \
    data/alarm/receivealarm.h \
    UI/main/login.h \
    UI/main/setgate.h \
    data/yxt/qReader.h \
    data/yxt/qRedis.h \
    data/sql/mysql.h \
    UI/main/logquery.h \
    UI/main/usermanagement.h \
    data/audio/speak.h

FORMS += \
        window.ui \
    UI/left/alarminfo.ui \
    UI/left/listen.ui \
    UI/left/userinfo.ui \
    UI/left/gpstime.ui \
    UI/main/chmodule.ui \
    UI/top/topbar.ui \
    UI/main/historyaudio.ui \
    UI/main/login.ui \
    UI/main/setgate.ui \
    UI/main/logquery.ui \
    UI/main/usermanagement.ui

RESOURCES += \
    image.qrc\

RC_ICONS = main.ico
DESTDIR         = bin

DISTFILES += \
    UPDATA.md
CONFIG += console pro
