#include "menu.h"
#include "ui_menu.h"
#include "calendar.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{


}

void Menu::on_Menu_customContextMenuRequested(const QPoint &pos)
{

}
