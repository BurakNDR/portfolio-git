#include <iostream>
using namespace std;

class rectangle
{
    private:
    int longueur;
    int largeur;
    public:
    void init_valeurs(int,int);
    int surface();
    int perimetre();
};

void rectangle::init_valeurs(int x, int y)
{
    longueur=x;
    largeur=y;
}

int rectangle::surface()
{
    return longueur*largeur;
}

int main()
{
    rectangle rect;
    rect.init_valeurs(3,4);
    cout << "Surface : " << rect.surface();

return 0;
}