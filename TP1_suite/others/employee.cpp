#include <iostream>
#include "employee.h"

using namespace std;

Employe::Employe (int a = 0,int b = 0,int c= 0)    
{
    ID = a;
    Taux_r = b;
    Max_H = c;
}

void Employe::Saisie()
{
    cout << "Entrez l'ID de l'employe : \n";
    cin >> ID;
    cout << "Entrez le taux de remuneration : \n";
    cin >> Taux_r;
    cout << "Entrez le nombre d'heure maximum :\n";
    cin >> Max_H;
}

void Employe::Modifier()
{
    cout << "Entrez le nouvelle ID de l'employe : \n";
    cin >> ID;
    cout << "Entrez le nouveau taux de remuneration : \n";
    cin >> Taux_r;
    cout << "Entrez le nouveau nombre d'heure maximum :\n";
    cin >> Max_H;
};
void Employe::Afficher()
{
    cout << "\nID : " << ID << endl;
    cout << "Taux de remuneration :" << Taux_r << endl;
    cout << "Nombre d'heure max :" << Max_H << "\n\n";
};


void Employe::Sauvegarder()
{
    fluux.open("Employe.txt",ios::app);
    fluux << "ID : " << ID << " ,";
    fluux << "Taux_R : " << Taux_r << " ,";
    fluux << "Max_H : " << Max_H << " " << endl;
};
