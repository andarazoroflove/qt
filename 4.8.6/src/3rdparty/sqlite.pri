CONFIG(release, debug|release):DEFINES *= NDEBUG
DEFINES += SQLITE_OMIT_LOAD_EXTENSION SQLITE_OMIT_COMPLETE
blackberry: DEFINES += SQLITE_ENABLE_FTS3 SQLITE_ENABLE_FTS3_PARENTHESIS SQLITE_ENABLE_RTREE
wince*: DEFINES += HAVE_LOCALTIME_S=0
INCLUDEPATH +=  $$PWD/sqlite
SOURCES +=      $$PWD/sqlite/sqlite3.c
