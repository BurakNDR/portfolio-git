#include <iostream>
#include <fstream>

using namespace std;

class Employe
{
    private:
    int ID;
    double Taux_r;
    int Max_H;
    ofstream fluux;

    public:
    Employe(){};
    Employe(int,int,int);
    void Saisie();
    void Modifier();
    void Afficher();
    void Sauvegarder();
};

