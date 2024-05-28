SOURCES = main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/tutorials/widgets/toplevel
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS toplevel.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/tutorials/widgets/toplevel
INSTALLS += target sources

symbian: include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
maemo5: include($$QT_SOURCE_TREE/examples/maemo5pkgrules.pri)

symbian: warning(This example might not fully work on Symbian platform)
maemo5: warning(This example might not fully work on Maemo platform)
simulator: warning(This example might not fully work on Simulator platform)
