QT += core gui
QT += sql
QT += widgets
#INCLUDEPATH +=$$quote("C:\Program Files\PostgreSQL\16\lib")
#INCLUDEPATH +=$$quote("C:\Program Files\PostgreSQL\16\bin")
INCLUDEPATH +=$$quote("C:\sqlite")
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++20
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0


SOURCES += \
    main.cpp \
    mainwindow.cpp
 #   connectiondb.cpp

HEADERS += \
    mainwindow.h
#connectiondb.h
FORMS += \
    mainwindow.ui
    RESOURCES += \
        resurse.qrc
        # Default rules for deployment.
        qnx: target.path = /tmp/$${TARGET}/bin
        else: unix:!android: target.path = /opt/$${TARGET}/bin
        !isEmpty(target.path): INSTALLS += target
