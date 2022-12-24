#include <iostream>
using namespace std;

    // Déclaration de la classe point
class point
{
    // membres
    float x;
    float y;
public:
    // constructeur
    point(float,float);
    // fonctions membres
    void deplace(float,float);
    void afficher();
};
point::point(float abs,float ord)
{
    x=abs;
    y=ord;
}
void point::deplace(float dx,float dy)
{
    x=x+dx;
    y=y+dy;
}
void point::afficher()
{
    cout << "Coordonnées cartésiennes : "<<x<<" "<<y<<"\n";
}
int main()
{
    point p(1,2); // constructeur
    p.afficher();
    p.deplace(2,3);
    p.afficher();
return 0;
}
