#ifndef MENU_H
#define MENU_H

#include <QDockWidget>

namespace Ui {
class Menu;
}

class Menu : public QDockWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
