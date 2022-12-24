#include <iostream>
using namespace std;

class rectangle
{
    private:
    int longueur;
    int largeur;

    public:
    rectangle(int longueur, int largeur);
    int surface();
    int perimetre();
};