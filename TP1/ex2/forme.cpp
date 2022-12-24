#include <iostream>
#include "forme.h"
using namespace std;

forme::forme(float x, float y)
{
    largeur=x;
    hauteur=y;
}

float forme::aire(char type)
{
if(type=='R')
{
    return largeur*hauteur;
}
else if(type=='T')
{
    return largeur*hauteur/2;
}
return 0;
}
