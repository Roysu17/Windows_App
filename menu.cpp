#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}
