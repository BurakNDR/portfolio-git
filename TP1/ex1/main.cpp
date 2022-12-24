#include <iostream>
#include "rectangle.h"
using namespace std;


int main()
{
int largeur, longueur;

    cout<<"Donner la longueur et la largeur du rectangle : "<<endl;
    cin>>longueur>>largeur;

rectangle rect(longueur, largeur);
    
    cout<<"La surface : "<<rect.surface()<<endl;
    cout<<"Le périmètre : "<<rect.perimetre()<<endl;


return 0;
}

