#include <iostream>
using namespace std;

class forme
{
    private:
    float largeur;
    float hauteur;

    public:
    forme(float largeur, float hauteur);
    float aire(char type);
};