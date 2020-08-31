#include "login_window.h"
#include "ui_login_window.h"

Login_window::Login_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login_window)
{
    ui->setupUi(this);
}

Login_window::~Login_window()
{
    delete ui;
}

void Login_window::on_SignIn_clicked()
{
    // User confirmation -> server interaction -> open Menu

    // if(recv(CONFIRMATION){
    //      QWidget *menu = new QWidget;
    //      menu->show();
    //      hide();

    hide();

}
