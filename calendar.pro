QT += qml quick sql
QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = calendar

include(src/src.pri)
include(../shared/shared.pri)

OTHER_FILES += qml/main.qml

RESOURCES += resources.qrc

target.path = $$C:\Users\Roysu\Documents\Coding\calendar
INSTALLS += target
