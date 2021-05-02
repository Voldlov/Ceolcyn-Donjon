#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //le bouton "fuir" permet de sortir du jeu
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    //aller au menu
    ui -> stackedWidget -> setCurrentIndex(1);
}




MainWindow::~MainWindow()
{

}


void MainWindow::on_pushButton_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(1);
}
