// #include <iostream>
#include "employe.h"
// using namespace std;

int main()
{
int ide, maxheure;
double tr;
char rep;

employe empl(ide,tr,maxheure);

    while(rep != '3')
    {
    cout<<" --- MENU --- "<<endl;
    cout<<"1. Ajouter un employe"<<endl;
    // cout<<"2. Modifier les donnees d un employe"<<endl; Pas fonctionnel
    cout<<"2. Afficher les donnees de employe"<<endl;
    // cout<<"4. Afficher les donnees des employes enregistres"<<endl; Pas fonctionnel
    cout<<"3. Quitter le menu"<<endl;
    
    cout<<"Entrez un chiffre : "<<endl;
    cin>>rep;

        switch (rep)
        {
        case '1':
            empl.nouveau();
            break;
/*         case '2':
            break;
            empl.modifier(); */
        case '2':
            empl.afficher();
            break;
/*         case '4':
            Shift Alt A
            Afficher les données des employés enregistrés
            break; */
        case '3':
            cout<<"Vous avez quitter le menu."<<endl;
            break;
         
        default:
            cout<<"Erreur ! Entrez un chiffre compris entre 1 et 5."<<endl;
            break;
        }
    }

return 0;
}