#ifndef CALENDAR_H
#define CALENDAR_H

#include <QWidget>
#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QPushButton>
#include <QWindow>
#include <QDesktopWidget>
#include <QApplication>
#include <QSize>
#include <QDesktopWidget>
#include <QDebug>
#include <QStyle>
#include <QScreen>

namespace Ui {
class Calendar;
}

class Calendar : public QWidget
{
    Q_OBJECT

public:
    explicit Calendar(QWidget *parent = nullptr);
    ~Calendar();
     void centerAndResize();

private:
    Ui::Calendar *ui;
};

#endif // CALENDAR_H
