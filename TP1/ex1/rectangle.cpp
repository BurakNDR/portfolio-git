#include <iostream>
#include "rectangle.h"
using namespace std;

rectangle::rectangle(int x,int y)
{
    longueur=x;
    largeur=y;
}

int rectangle::surface()
{
    return longueur*largeur;
}

int rectangle::perimetre()
{
    return (longueur+largeur)*2;
}