#include <iostream>
#include <fstream>
#include "employee.h"

using namespace std;

main()
{
    
    int choix;
    int z = 0, i = 0;
    Employe emp(0,0,0);
    Employe EMP[200];
    int ii =0;
    int v =0;
    ofstream flux;
    
    // Boucle pour recommencer le menu en cas de choix incorrect et pour quitter si demandé
    do
    {
//////////////////////MENU DES CHOIX//////////////////////
    cout << "~~MENU~~\n";
    cout << "1/ Ajouter un employe\n";
    cout << "2/ Modifier les donnes d'un employe\n";
    cout << "3/ Afficher les donnes d'un employe\n";
    cout << "4/ Afficher les donnes de tout employe enregistres\n";
    cout << "5/ Sauvegarder les donnees dans un fichier texte\n";
    cout << "6/ Quitter\n";
    cin >> choix;
    switch(choix)
    {
//////////////////////AJOUTER UN EMPLOYE//////////////////////
        case 1:
        EMP[z].Saisie();
        z++;
        break;
//////////////////////MODIFIER UN EMPLOYE//////////////////////
        case 2:
        int b;
        cout << "Entrez le numero de l'employer a modifier (Tableau )\n";
        cin >> b;
        if(b > z)
        {
            cout <<"Cet employe n'existe pas\n\n";
        }else 
        {
            EMP[b].Modifier();
        }
        break;
//////////////////////AFFICHER UN EMPLOYE//////////////////////
        case 3: 
        int a;
        cout << "Entrez le numero de l'employer (A partir de 0) : \n";
        cin >> a;
        if(a > z)
        {
            cout << "\n\nCet employe n'existe pas\n\n";
        }else
        {
            EMP[a].Afficher();
        } 
        z++;
        break;
//////////////////////AFFICHER TOUT LES EMPLOYE//////////////////////
        case 4:
        do
        {
            EMP[ii].Afficher();
            ii++;

        }while(ii != z);

        break; 
//////////////////////SAUVEGARDER TOUT LES EMPLOYE//////////////////////
        case 5:
        if(flux)
        {
            do
            {
                EMP[v].Sauvegarder();
                v++;
            }while(v != z);

        }else
        {
            cout << "Impossible de cree ou d'ouvrir le fichier, verifier vos droits\n";
        }

        break;
//////////////////////MESSAGE DE FIN DU PROGRAMME//////////////////////
        case 6:
        cout << "\n~~Fin du programme~~\n";
        return 0;
        break;
//////////////////////MESSAGE EN CAS DE CHOIX INCORRECT//////////////////////
        default:
        cout << "\nChoix incorrect, veuillez re-essayer\n";
        break;
    }

    } while (choix != 6);
//////////////////////FIN DU PROGRAMME//////////////////////
    return 0;
}
