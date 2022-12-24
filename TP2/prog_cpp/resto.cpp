 #include "resto.h"
 #include "menu.h"

void client::info_gerant()
{
    cout<<"Votre ID : \n";
    cin>>id;
    if(id=="burak123")
    {
        cout<<"Id correct\n";
        cout<<"Votre mot de passe : ";
        cin>>mdp;
        if(mdp=="okokok12")
        {
        cout<<"MDP correct\n";
        }
        else
        {
        cout<<"Mauvais MDP";
        }
    }
    else
    {
        cout<<"Mauvais ID";
    }
}

client::client(char nom,char prenom,int pay)
{
    
}

client::client()
{

}

menu::menu()
{

}

void client::identification(int x)
{
cout<<"Vous êtes client (1) ou le gérant(2)"<<endl;
cin>>x;
    if(x==1)
    {
        info_client();
    }
    else
    {
        info_gerant();
    }
}

void client::info_client()
{
// Ouverture du fichier resto.txt
    resto.open("resto.txt",ios::out);
// Si erreur d'ouverture
    if(resto.bad())
    {
        cout<<"return 0"; // on quitte
    }
// Demande et stockage des informations dans le fichier .txt
    cout<<"Entrez votre prenom : "<<endl;
    cin>>prenom;
    resto<<prenom<<" ";
    cout<<"Entrez votre nom : "<<endl;
    cin>>nom;
    resto<<nom;
    cout<<"Votre mode de paiement (1: espece, 2: CB) : "<<endl;
    cin>>pay;
        while(pay != 1 && pay != 2)
        {
            if (pay !=1 && pay != 2)
            {
                cout<<"! Erreur ! Saissisez 1 pour payer en espece et 2 pour la CB."<<endl;
                cout<<"Votre mode de paiement (1: espece, 2: CB) : "<<endl;
                cin>>pay;
            }
        }
    if (pay==1)
    {
        resto<<", espece\n";
    }
    else
    {
        resto<<", CB\n";
    }
// Message de bienvenue avec les informations du client
    cout<<"\n\2\2\2 Bienvenue au Resto Della BANGA "<<prenom<<" "<<nom<<" \1\1\1\n"<<endl;
// Fermeture du fichier
    resto.close();
}

void client::menu()
{
    cout<<"~~~~ MENU ~~~~"<<endl;

    cout<<endl<<"Entree :"<<endl;
    cout<<"|     1. Carpaccio de boeuf fraichement tranche 8,5e"<<endl;
    cout<<"|     2. Bruschetta saumon ( 2 pièces) 5,5e"<<endl;
    cout<<"|     3. Bouchee à la reine 8,5e"<<endl;

    cout<<endl<<"Plat :"<<endl;
    cout<<"|     1. Escalope Florentina 15e\n     Escalope, Aubergine, sauce napolitaine, Mozarella Al forno"<<endl;
    cout<<"|     2. Pâtes Pesto Aux choix : Tagliatelles, Penne ou Spaghetti 10e\n     Basilic, copeaux de Parmesan, pignons de pin"<<endl;

    cout<<endl<<"Dessert :"<<endl;
    cout<<"|     1. Tiramisu 5e"<<endl;
    cout<<"|     2. Moelleux au chocolat 5e"<<endl;
    cout<<"|     3. Cafe gourmand 5e"<<endl;
    cout<<"|     4. Boissons Cafe 1,9e"<<endl;
    cout<<"|     5. Bouteille d’eau 4,9e"<<endl;
    cout<<"|     6. Demi-bouteille d’eau 3e"<<endl;
    
    cout<<endl<<"~~~~ FIN DU MENU ~~~~"<<endl;
}

void client::choisir()
{
//////////////////   Entrée   //////////////////
    cout<<"\n1/4 Entree : "<<endl;
    cout<<"1. Carpaccio de boeuf fraichement tranche 8,5e"<<endl;
    cout<<"2. Bruschetta saumon ( 2 pièces) 5,5e"<<endl;
    cout<<"3. Bouchee à la reine 8,5e"<<endl;
    cout<<"4. Aucun\n"<<endl;
    
    cout<<"Choisissez le numero de l'entree "<<prenom<<endl;
    cin>>ent;
    
    switch (ent)
    {
        case 1:
            cout<<"Vous avez choisi : Carpaccio de boeuf fraichement tranche"<<endl;
            break;

        case 2:
            cout<<"Vous avez choisi : Bruschetta saumon ( 2 pièces)"<<endl;
            break;

        case 3:
            cout<<"Vous avez choisi : Bouchee à la reine"<<endl;
            break;

        case 4:
            cout<<"Vous ne désirez pas d'entrée"<<endl;
            break;
            
        default:
            cout<<"ERREUR !\n"<<endl;
            break;
    }
    
//////////////////   Plat   //////////////////
    cout<<"\n2/4 Plat : "<<endl;
    cout<<"1. Escalope Florentina 15e\n     Escalope, Aubergine, sauce napolitaine, Mozarella Al forno"<<endl;
    cout<<"2. Pâtes Pesto Aux choix : Tagliatelles.Penne ou Spaghetti 10e\n     Basilic, copeaux de Parmesan, pignons de pin"<<endl;
    cout<<"3. Aucun\n"<<endl;

    cout<<"Choisissez le numero de du plat"<<endl;
    cin>>pla;
    
    switch (pla)
    {
        case 1:
            cout<<"Vous avez choisi : Escalope Florentina"<<endl;
            break;

        case 2:
            cout<<"Vous avez choisi : Pâtes Pesto"<<endl; // Pas fait le bail des tagliatelle etc
            cout<<"Tagliatelles (1), Penne (2) ou Spaghetti (3)?\n";
            cin>>pate;
            break;
            
        case 3:
            cout<<"Vous ne désirez pas de plat"<<endl;
            break;
            
        default:
            cout<<"ERREUR !\n"<<endl;
            break;
    }

//////////////////   Dessert   //////////////////
    cout<<"\n3/4 Dessert : "<<endl;
    cout<<"1. Tiramisu 5e"<<endl;
    cout<<"2. Moelleux au chocolat 5e"<<endl;
    cout<<"3. Cafe gourmand 5e"<<endl;
    cout<<"4. Boissons Cafe 1,9e"<<endl;
    cout<<"5. Bouteille d’eau 4,9e"<<endl;
    cout<<"6. Demi-bouteille d’eau 3e"<<endl;
    cout<<"7. Aucun\n"<<endl;
    
    cout<<"Choisissez le numero du dessert "<<endl;
    cin>>des;


        switch (des)
        {
            case 1:
                cout<<"Vous avez choisi : Tiramisu"<<endl;
                break;

            case 2:
                cout<<"Vous avez choisi : Moelleux au chocolat"<<endl;
                break;

            case 3:
                cout<<"Vous avez choisi : Cafe gourmand"<<endl;
                break;

            case 4:
                cout<<"Vous avez choisi : Boissons Cafe"<<endl;
                break;

            case 5:
                cout<<"Vous avez choisi : Bouteille d’eau"<<endl;
                break;

            case 6:
                cout<<"Vous avez choisi : Demi-bouteille d’eau"<<endl;
                break;
            
            case 7:
                cout<<"Vous ne désirez pas de dessert"<<endl;
                break;

            default:
                cout<<"ERREUR !\n"<<endl;
                break;
        }
    
    resto.open("resto.txt",ios::out);
        // Si erreur d'ouverture
        if(resto.bad())
        {
            cout<<"return 0"; // on quitte
        }

    resto<<"Entree: "<<ent<<", Plat: "<<pla<<", Dessert: "<<des<<endl<<endl;
}

std::string menu::date_commande()
{
    time_t tarih = time(0);
    char * ctime (const time_t * time);
    cout << ctime(&tarih);
}

string menu::menu_lundi()
{
/*     if(menudujour.is_open())
    {
    while(getline(menudujour,line))
        {
        cout  << line << '\n';
        }
    menudujour.close();
    }

    else
    {
        cout << "Unable to open file";
    }

return 0; */
}

string menu::menudj()
{
    /* Si heure inférieur à 14h afficher menumatin sinon afficher menusoir   */
    if (saat<14)
    {
        switch (saat)
        {
            // case "LM":
        
                break;
    
            default:

                break;
        }
    }
    

}

void menu::ticket_commande()
{
    cout<<"- - - Resto Della Banga - - -\n";
    strftime(mSaat,sizeof(mSaat),"%d-%m-%Y %H:%M:%S",tarih_bilgisi);
    cout<<mSaat<<endl;
    cout<<"Commande "<<n_commande<<endl;
    // à faire: détail de la commande et les prix
    // à faire: La total
}

void client::afficher()
{
    cout<<"Entrée : ";
    switch (ent)
    {
        case 1:
            cout<<"Carpaccio de boeuf fraichement tranche"<<endl;
            break;

        case 2:
            cout<<"Bruschetta saumon ( 2 pièces)"<<endl;
            break;

        case 3:
            cout<<"Bouchee à la reine"<<endl;
            break;

        case 4:
            cout<<"Vous ne désirez pas d'entrée"<<endl;
            break;
            
        default:
            cout<<"ERREUR !\n"<<endl;
            break;
    }

    cout<<"Plat : ";
    switch (pla)
    {
        case 1:
            cout<<"Escalope Florentina"<<endl;
            break;

        case 2:
            cout<<"Pâtes Pesto";
                switch (pate)
                {
                case 1:
                    cout<<" au Tagliatelles"<<endl;
                    break;

                case 2:
                    cout<<"au Penne"<<endl;
                    break;
                
                case 3:
                    cout<<"au Spaghetti"<<endl;
                    break;
                
                default:
                    cout<<"ERREUR"<<endl;
                    break;
                }
            break;
            
        case 3:
            cout<<"Vous ne désirez pas de plat"<<endl;
            break;
            
        default:
            cout<<"ERREUR !\n"<<endl;
            break;
    };

    cout<<"Dessert : ";
        switch (des)
        {
            case 1:
                cout<<"Tiramisu"<<endl;
                break;

            case 2:
                cout<<"Moelleux au chocolat"<<endl;
                break;

            case 3:
                cout<<"Cafe gourmand"<<endl;
                break;

            case 4:
                cout<<"Boissons Cafe"<<endl;
                break;

            case 5:
                cout<<"Bouteille d’eau"<<endl;
                break;

            case 6:
                cout<<"Vous avez choisi : Demi-bouteille d’eau"<<endl;
                break;
            
            case 7:
                cout<<"Vous ne désirez pas de dessert"<<endl;
                break;
                
            default:
                cout<<"ERREUR !\n"<<endl;
                break;
        }
}