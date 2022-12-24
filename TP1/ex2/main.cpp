#include <iostream>
#include "forme.h"
using namespace std;

int main()
{
float largeur, hauteur;
char type;

    cout<<"Tappez 'T' pour un triangle et 'R' pour un rectangle"<<endl;
    cin>>type;

    cout<<"Donner la largeur puis la hauteur : "<<endl;
    cin>>largeur>>hauteur;

forme air(largeur, hauteur);

cout<<"L'aire : "<<air.aire(type)<<endl;

return 0;
}