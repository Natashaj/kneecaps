QT -= core \
    gui
TARGET = common
TEMPLATE = lib
LIBS += -lsqlite3
SOURCES += database.cc
HEADERS += database.hpp \
    global.hpp
