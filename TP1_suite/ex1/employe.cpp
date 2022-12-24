// #include <iostream>
#include "employe.h" // Pour mettre en lien les 2 fichiers
// using namespace std;

employe::employe(int id, double taux_r, int max_h)
{
    // id=ide;
    // taux_r=tr;
    // max_h=maxheure;
}

/* int employe::ajouter()
{
    employe emp,objetlocal;
    cin>>id;
    emp.id=id;

    return emp;
} */

void employe::nouveau()
{
    cout<<"ID : "<<endl;
    cin>>id;
    cout<<"Taux de remuneration : "<<endl;
    cin>>taux_r;
    cout<<"Maximum d'heure : "<<endl;
    cin>>max_h;
}

int employe::modifier()
{
    // id=ide;
    // taux_r=tr;
    // max_h=maxheure;
}

void employe::afficher() // Testé
{
    cout<<"ID : "<<id<<endl<<"Taux de remuneration : "<<taux_r<<endl<<"Maximum d'heures : "<<max_h<<endl;
}

/* void employe::menu()
{

    char rep;
    employe empl(id,taux_r,max_h);
    while(rep != '5')
    {
// cout<<"Entrez un chiffre : "<<endl;
// cin>>rep;
    cout<<" --- MENU --- "<<endl;
    cout<<"1. Ajouter un employe"<<endl;
    cout<<"2. Modifier les donnees d un employe"<<endl;
    cout<<"3. Afficher les donnees d un employe"<<endl;
    cout<<"4. Afficher les donnees des employes enregistres"<<endl;
    cout<<"5. Quitter le menu"<<endl;
    cin>>rep;

        switch (rep)
        {
        case '1':
            empl.nouveau();
            break;
        case '2':
            break;
            // empl.modifier();
        case '3':
            empl.afficher();
            break;
        case '4':
            // Shift Alt A
            // Afficher les données des employés enregistrés
            break;
        case '5':
            cout<<"Vous avez quitter le menu."<<endl;
            break;
         
        default:
            cout<<"Erreur ! Entrez un chiffre compris entre 1 et 5."<<endl;
            break;
        }
    }
} */