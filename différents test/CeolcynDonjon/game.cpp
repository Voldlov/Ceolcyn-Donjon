#include "game.h"
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>

//game::game()
class Game
{
    //-ATTRIBUTS-
    private :
        int avis_peuple;
        int avis_noble;
        int avis_militaire;
        int finance;
        int materiel;
        int ressource_alimentaire;
        int ressource_armee;
        int ressource_materiaux;
        int richesse;
        //ajouter le lien pour l'image à afficher
        int jour;
        int heure;
        int id_joueur;



    //-GET et SET-

    //-CONSTRUCTEUR-

    //-METHODES-
    void ModifEtat ()
    {
        //-A FAIRE-
        //choix de la valeur à changer
        //appeler ModifInt pour agir
    }
    int ModifInt (bool ope, int modif, int origin)
    {
        //-FINI-
        //reçois le type d'opération + ou -
        //reçois le nombre a ajouter ou retirer
        //reçois le nombre d'origine
        if (ope)
        {
            //ajoute
            origin += modif;
        }
        else
        {
            //retir
            origin -= modif;
        }
        //retourne le résultat
        return origin;
    }
    void sauvegarde ()
    {
        //-A FAIRE-
        //sauvegarde dans un fichier local
        //à l'avenir dans une base de donnée
    }
};
