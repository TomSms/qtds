TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    array.cpp \
    arraystack.cpp \
    dualarraydeque.cpp

HEADERS += \
    array.h \
    utils.h \
    arraystack.h \
    dualarraydeque.h
