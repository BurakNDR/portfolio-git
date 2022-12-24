#ifndef POINT1_H
#define POINT1_H
#include <iostream>
using namespace std;
// fichier POINT1.H
// déclaration de la classe de point
class point
{

    float x, y; // coordonnées (cartésiennes) du point
    public:
        point(float,float); // constructeur
        void deplace(float,float); // déplacement
        void affiche(); // affichage
};
#endif