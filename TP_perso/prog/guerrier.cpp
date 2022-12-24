#include "guerrier.h"
njubbub
guerrier::guerrier() : rage(100*1.5), force(50), rage(0)
{

}

guerrier::guerrier(int force, int rage) :force(force), rage(rage)
{

}

void guerrier::enrage()
{
    rage += 50;
}

int guerrier::attaque_eclair(perso &cible)
{
    int patate=20;
    if (rage > 0)
    {
        int degat = 1.8 * force * patate;
        rage -= 25;
        return degat; 
    }
    // retourne 0 si la condition if (rage > 0) est fausse
    return 0;
}

void guerrier::patate()
{
    rage += 5;
}