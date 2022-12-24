#include <iostream>
#include <cmath>
using namespace std;

class point
{
    private:
    float x=0,y=0; // pas sûr

    public:
    point(float,float);
    float getx();
    float gety();
    void affiche();
};

class polaire : public point // La classe polaire hérite des atributs de la classe point
{
    private:
    float rho,theta;

    public:
    polaire();
    void rho_point();
    void theta_point();
};