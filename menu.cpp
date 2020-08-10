#include "menu.h"
#include "ui_menu.h"
#include "QPushButton"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    QPushButton *pushButton = new QPushButton();
}

Menu::~Menu()
{
    delete ui;
}




void Menu::on_pushButton_clicked()
{

}
