#include <iostream> // Obligatoire
#include <cmath>
using namespace std; /* Parfois, certaines fonctionnalités ont le même nom.
Imaginez une commande qui s'appellerait "AfficherMessage" pour iostream mais aussi pour une autre bibliothèque comme Qt !
Si vous chargez les deux bibliothèques en même temps et que vous appelez "AfficherMessage", l'ordinateur ne saura pas s'il doit afficher un message en console avec iostream ou dans une fenêtre avec Qt !
Pour éviter ce genre de problèmes, on a créé des namespaces (OpenClassrooms), comme un fichier raccourci et elle est obligatoire */

main()
{
    int i ;
    float x ;
    float racx ;
    const int NFOIS = 2 ; // le const fait que la valeur ne peut pas être modifier

    cout << "Bonjour\n" ; // cout en C++ est équivaut à printf en C
    cout << "Je vais vous calculer " << NFOIS << " racine carées\n" ;

    for (i = 0 ; i < NFOIS ; i++)
    {
        cout << "Donnez un nombre : " ;
        cin >> x ; // cin en C++ c'est comme scanf en C

        if (x < 0.0)
        {
            cout << "Le nombre " << x << " ne possède pas de racine carée\n" ;
        }
        else
        {
            racx = sqrt (x) ;
            cout << "Le nombre " << x << " a pour racine carée : " << racx << "\n" ;
        }
    }
cout << "Fin du programme" ;
}