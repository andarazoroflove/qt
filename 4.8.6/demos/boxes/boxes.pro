######################################################################
# Automatically generated by qmake (2.01a) ma 3. nov 17:33:30 2008
######################################################################

TEMPLATE = app
TARGET =
DEPENDPATH += .
INCLUDEPATH += .

# Input
HEADERS += 3rdparty/fbm.h \
           glbuffers.h \
           glextensions.h \
           gltrianglemesh.h \
           qtbox.h \
           roundedbox.h \
           scene.h \
           trackball.h
SOURCES += 3rdparty/fbm.c \
           glbuffers.cpp \
           glextensions.cpp \
           main.cpp \
           qtbox.cpp \
           roundedbox.cpp \
           scene.cpp \
           trackball.cpp

RESOURCES += boxes.qrc

QT += opengl

# install
target.path = $$[QT_INSTALL_DEMOS]/boxes
sources.files = $$SOURCES $$HEADERS $$RESOURCES *.pro *.html *.jpg *.png *.fsh *.vsh *.par
sources.files -= 3rdparty/fbm.h 3rdparty/fbm.c
sources.files += 3rdparty
sources.path = $$[QT_INSTALL_DEMOS]/boxes
INSTALLS += target sources

wince*: {
    DEPLOYMENT_PLUGIN += qjpeg
}

win32-msvc* {
    QMAKE_CXXFLAGS -= -Zm200
    QMAKE_CFLAGS -= -Zm200
    QMAKE_CXXFLAGS += -Zm500
    QMAKE_CFLAGS += -Zm500
}
