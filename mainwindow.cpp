#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
//#include <QDesktopWidget>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::centerAndResize() {
    // get the dimension available on this screen
    QSize availableSize = qApp->desktop()->availableGeometry().size();
    int width = availableSize.width();
    int height = availableSize.height();
    qDebug() << "Available dimensions " << width << "x" << height;
    width *= 0.9; // 90% of the screen size
    height *= 0.9; // 90% of the screen size
    qDebug() << "Computed dimensions " << width << "x" << height;
    QSize newSize( width, height );

    setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            newSize,
            qApp->desktop()->availableGeometry()
        )
    );
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SignIn_clicked()
{
    // User confirmation -> server interaction -> open Menu

    // if(recv(CONFIRMATION){
    //      QWidget *menu = new QWidget;
    //      menu->show();
    //      hide();
    QWidget *menu = new QWidget;
    menu->show();
    hide();

}
