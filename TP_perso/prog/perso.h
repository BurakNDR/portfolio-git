#include <iostream>
#include <string>
using namespace std;

class perso
{
    private:
    std::string nom_du_perso;
    int pt_de_vie;

    public:
    perso(); // par défaut vie = 150, nom = « test »
    perso(string,int); // constructeur avec nom et vie passer en argument
    void recevoir_degats(int degat); // permet d'affecter un montant de dégâts reçu par le perso
    void patate(perso &cible); // permet d'envoyer une patate infligeant 20pts de dégâts 
};
