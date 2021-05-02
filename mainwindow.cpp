#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_pushButton_clicked()
{
    delete ui;
}

//impossible de créer la suite de l'interface à cause de problème avec UI_mainwindow.

//bouton "entrer" affiche le menu

//bouton des donjon utilise le constructeur de game et change l'interface pour celle de l'intro puis du jeu

//le bouton "crédits" affiche les crédits

//le bouton information explique comment fonctionne le jeu et un contexte supplémentaire

//la barre de chargent de l'intro affiche l'avancement de l'introduction

//les barres de chargement en haut à gauche affiche l'avancement du jeu en %

//le titre de la new change suivant le new (contenue dans le document d'Event)

//le texte de la new change suivant le new (contenue dans le document d'Event)

//le bouton accepter appelle la méthode de game suivant des conditions.

//le refuser accepter appelle la méthode de game suivant des conditions.
