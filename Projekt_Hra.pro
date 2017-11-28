TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Budova.cpp \
    Firma.cpp \
    Kolo.cpp \
    Mesto.cpp \
    Svet.cpp \
    VyrobnaBudova.cpp \
    KombinovanaBudova.cpp \
    ObytnaBudova.cpp

HEADERS += \
    Budova.h \
    Firma.h \
    Kolo.h \
    Mesto.h \
    Svet.h \
    VyrobnaBudova.h \
    KombinovanaBudova.h \
    ObytnaBudova.h
