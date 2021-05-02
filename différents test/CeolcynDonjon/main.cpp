#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    //initialisation de la fenêtre
    //QWidget *fenetre = new QWidget;
    //choix du nom de la fenêtre
    //fenetre->setWindowTitle("Ceolcyn - Donjon");

    //
    /*QGridLayout *disposition = new QGridLayout;

    //création d'un label pour afficher le titre
    QLabel *label_titre = new QLabel("Ceolcyn - Donjon");

    //initialisation des deux boutons et de leur texte
    QPushButton *bouton_entrer = new QPushButton("Entrer dans le donjon");
    QPushButton *bouton_partir = new QPushButton("Partir");

    disposition->addWidget(label_titre);
    disposition->addWidget(bouton_entrer);
    disposition->addWidget(bouton_partir);
    //initialisation du layout
    //remplacer V pour H pour changer de layout
    //QVBoxLayout *vdisposition = new QVBoxLayout;

    //mettre les boutons dans le layout
    //vdisposition->addWidget(bouton_entrer);
    //vdisposition->addWidget(bouton_partir);

    //afficher le tout
    fenetre->setLayout(disposition);
    fenetre->show();

    //
    //QLineEdit .nom = new QLineEdit("text");*/
}

