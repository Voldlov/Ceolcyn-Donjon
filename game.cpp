#include "game.h"

//game::game()
class Game
{
    //-ATTRIBUTS-
    private :
        int avis_peuple;
        int avis_militaire;
        int avis_noble;
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
    Game::Game(int level, int id_joueur)
    {
        //Une erreure est marquée, recherche de solution "extra qualification on member 'Game'.
        int valeurDepart;
        switch(level)
        {
        //création des statistiques de départ
            case 0 :
                valeurDepart = 60;
                //Donjon de cristal, les statisitques de début sont hautes car c'est la partie la plus simple et correspond au context du lieu.
                break;
            case 1 :
                valeurDepart = 40;
                //Donjon rouge, les statisitiques de début sont moyenne car c'est la partie moyenne et correspond au context du lieu.
                break;
            case 2 :
                valeurDepart = 60;
                //Donjon blanc, les statistiques sont faibles car c'est une partie difficile et qui correspond au context du lieu.
                break;
        }
        //A l'origine, ce qui suis était en trois fois dans les case. Pour un gains de place et donc de temps d'execution, même minime, j'ai fait le choix de réduire en une seule fois, ceci en créatn la variable valeurDepart.
        avis_peuple = valeurDepart;
        avis_militaire = valeurDepart;
        avis_noble = valeurDepart;
        finance = valeurDepart;
        materiel = valeurDepart;
        ressource_alimentaire = valeurDepart;
        ressource_armee = valeurDepart;
        ressource_materiaux = valeurDepart;
        richesse = valeurDepart;
        jour = 1;
        heure = 0;
        //Création du log
        Log log(level, id_joueur);
        //prendre l'id du joueur pour sauvegarde.
        this->id_joueur = id_joueur;
    }

    //-METHODES-
    void ModifEtat (int choix, bool ope, int modif)
    {
        //choix de la valeur à changer
        //appeler ModifInt pour agir
        switch (choix) {
        case 0 :
            avis_peuple = ModifInt(ope, modif, avis_peuple);
            break;
        case 1 :
            avis_militaire = ModifInt(ope, modif, avis_militaire);
            break;
        case 2 :
            avis_noble = ModifInt(ope, modif, avis_noble);
            break;
        case 3 :
            finance = ModifInt(ope, modif, finance);
            break;
        case 4 :
            materiel = ModifInt(ope, modif, materiel);
            break;
        case 5 :
            ressource_alimentaire = ModifInt(ope, modif, ressource_alimentaire);
            break;
        case 6 :
            ressource_armee = ModifInt(ope, modif, ressource_armee);
            break;
        case 7 :
            ressource_materiaux = ModifInt(ope, modif, ressource_materiaux);
            break;
        case 8 :
            richesse = ModifInt(ope, modif, richesse);
            break;

        }
        verifEnd();
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
    void verifEnd()
    {
        if(jour > 200) {
            endGame(0);
        }
        if(avis_peuple < 10) {
            endGame(1);
        }
        if(avis_militaire < 10) {
            endGame(2);
        }
        if(avis_noble < 10) {
            endGame(3);
        }
        if(finance < 10) {
            endGame(4);
        }
        if(materiel < 10) {
            endGame(5);
        }
        if(ressource_alimentaire < 10) {
            endGame(6);
        }
        if(ressource_armee < 10) {
            endGame(7);
        }
        if(ressource_materiaux < 10) {
            endGame(8);
        }
        if(richesse < 10) {
            endGame(9);
        }

    }
    void endGame(int end)
    {
        //différentes fins
        switch (end) {
        case 0 :
            //victoire, vous mourrez vieux
            break;
        case 1 :
            //le peuple se révolte
            break;
        case 2 :
            //l'armée se révolte
            break;
        case 3 :
            //la noblesse se révolte
            break;
        case 4 :
            //pauvreté
            //fin aléatoire et diverse
            break;
        case 5 :
            //famine
            break;
        case 6 :
            //faiblesse, invasion, guerre, banditisme
            break;
        case 7 :
            //nobles trop riches, sont plus influent que vous
            break;
        case 8 :

            break;
        case 9 :

            break;
        case 10 :

            break;
        case 11 :

            break;
        }
    }
};
