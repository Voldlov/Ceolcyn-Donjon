#include "log.h"
#include <fstream>
using namespace std;

class Log
{
    //ATTRIBUS
    //lancement d'une sauvegrade ou sauvegarde
    string log;
    //activité actuelle
    string activite;
    //chemin
    string cheminAct;
    string cheminLog;

    //GETTER + SETTER

    //CONSTRUCTEUR
    Log::Log(int mode, int id) {
        switch (mode) {
        case 0 :
            //ajout du cheminAct
            //création du cheminLog avec id
            break;
        case 1 :
            //ajout du cheminAct
            //création du cheminLog avec id
            break;
        case 2 :
            //ajout du cheminAct
            //création du cheminLog avec id
            break;
        }
    }
    //METHODES

    void open(string chemin)
    {
        //lecture des logs
    }
    void write(string chemin)
    {
        //ecriture dans les logs
    }
    void openEvent(string chemin)
    {
        //lecture des évènements et choix aléatoire
    }
    void cut(string line)
    {
        //faire des découpes des chaîne de caractère
    }
    void cutline(string text)
    {
        //faire des découpes des chaîne de caractère
    }
};
