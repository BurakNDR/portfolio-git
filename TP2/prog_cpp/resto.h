#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class client
{
private:
    std::string id;
    std::string mdp;

    char nom[50];
    char prenom[50];
    char gerant[20];
    int  pay,ent,pla,des,pate;
    ofstream resto; // On crée le fichier resto

public:
    client(char,char,int);
    client();

    string info_gerant(std::string,std::string);

    void identification(int);
    void info_gerant();
    void info_client();
    void menu(); // Menu du resto
    void choisir(); // Choisir ce qu'il veut manger
    void modifier(); // Modifier ce qu'il a choisi
    void afficher();
    void supprimer(); // Supprimer ce qu'il a choisi
    void consulter(); // Consulte ce qu'il a choisi et confirme la commande
};