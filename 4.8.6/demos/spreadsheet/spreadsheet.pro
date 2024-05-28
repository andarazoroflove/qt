######################################################################
# Automatically generated by qmake (2.01a) Thu Mar 5 14:39:33 2009
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += .

CONFIG += qt warn_on
#unix:contains(QT_CONFIG, dbus):QT += dbus

# Input
HEADERS += printview.h spreadsheet.h spreadsheetdelegate.h spreadsheetitem.h
SOURCES += main.cpp \
           printview.cpp \
           spreadsheet.cpp \
           spreadsheetdelegate.cpp \
           spreadsheetitem.cpp
RESOURCES += spreadsheet.qrc


build_all:!build_pass {
    CONFIG -= build_all
    CONFIG += release
}

# install
target.path = $$[QT_INSTALL_DEMOS]/spreadsheet
sources.files = $$SOURCES $$RESOURCES *.pro images $$HEADERS
sources.path = $$[QT_INSTALL_DEMOS]/spreadsheet
INSTALLS += target sources

symbian: include($$QT_SOURCE_TREE/demos/symbianpkgrules.pri)
