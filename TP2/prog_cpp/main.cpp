#include "resto.h"
#include "menu.h"

int main()
{
    int rep;
    int x;
    client cli,tab[200];
    menu meniu;
    int i=0;
    
    meniu.menu_lundi();

        cli.identification(x);

        while(rep!=(4))
        {
            cout<<"1. Nouvelle commande\n";
            cout<<"2. Modifier commande\n";
            cout<<"3. Afficher commande\n";
            cout<<"4. Afficher toute les commandes\n";
            cout<<"5. Quitter\n";
            cin>>rep;
            
            switch (rep)
            {
            case 1:
                tab[i].choisir();
                cout<<"Votre commande n"<<i<<" a été crée."<<endl;
                i++;
                break;

            case 2:             
                cout<<"Quel commande ?\n";
                cout<<"Vos commandes :\n";
                for (i=0;i<=200;i++)
                {
                    cout<<"Commande n"<<tab[i]<<endl;
                }
                cin>>i;
                tab[i].choisir();
                break;

            case 3:
                cout<<"Vos commandes :\n";
                for (i=0;i<=200;i++)
                {
                    cout<<"Commande n"<<tab[i]<<endl;
                }
                cout<<"Quel commande voulez vous consulter ?\n";
                cin>>i;
                cout<<"Commande n"<<i<<endl;
                tab[i].afficher();
                break;

            case 4:
                for(int x=0;x<i;x++)
                {
                tab[i].afficher();
                }

            case 5:
                return 0;
                break;
            
            default:
                cout<<"ERREUR !\n";
                break;
            }
        }

return 0;
}