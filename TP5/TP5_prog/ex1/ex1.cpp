#include "point.h"

point::point(float longueur, float largeur)
{
    x=longueur;
    y=largeur;
}

float point::getx()
{
cout << "Entrez la valeur de x :" << endl;
cin >> x;
}

float point::gety()
{
cout << "Entrez la valeur de x :" << endl;
cin >> y;
}

void point::affiche()
{
    cout <<"x : " << x << endl << "y : " << y << endl;
}

polaire::polaire() : point(), getx(), gety()
{

}

void polaire::rho_point()
{
    rho = sqrt(pow(x, 2)+pow(y, 2));
}

void polaire::theta_point()
{

}