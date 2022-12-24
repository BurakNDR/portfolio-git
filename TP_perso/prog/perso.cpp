#include "perso.h"

perso::perso() : nom_du_perso("Test"), pt_de_vie(100)
{
    // nom_du_perso = "Test",
    // pt_de_vie = 100;
}

perso::perso(string nom_du_perso, int pt_de_vie)
{

}
void perso::recevoir_degats(int degat)
{
    pt_de_vie -= degat;
    // 100 - degat;
    cout<<nom_du_perso<<" a perdu : "<<degat<<" HP\n";
    cout<<"Point de vie restant : "<<pt_de_vie<<endl;
}

void perso::patate(perso &cible)
{
    cible.recevoir_degats(20);
}