#ifndef LOGIN_WINDOW_H
#define LOGIN_WINDOW_H

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
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui {class Login_window;}
QT_END_NAMESPACE

class Login_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login_window(QWidget *parent = nullptr);
    ~Login_window();

private slots:
    void on_SignIn_clicked();

private:
    Ui::Login_window *ui;
};

#endif // LOGIN_WINDOW_H
