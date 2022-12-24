#include "perso.h"

class guerrier : public perso
//Signifie : créer une classe guerrier qui hérite de la classe perso
{
    private:
        int rage;
        int force;

    public:
        guerrier();
        guerrier(int,int);
        void enrage();
        void attaque_eclair(perso &cible);
        void patate(perso &cible);
};