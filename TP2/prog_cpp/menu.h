#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

class menu
{
    private:
        time_t saat = time(0);
        struct tm *tarih_bilgisi = localtime(&saat);
        char mSaat[50];
        int n_commande;
        string line;

        ifstream menudujour;

    public:
        menu();
        string menu_lundi();
        string menu_mardi();
        string menu_mercredi();
        string menu_jeudi();
        string menu_vendredi();
        string samedi();
        string menudj();
        string date_commande();
        void ticket_commande();
        // ecrie_fichier

}; // Pourquoi un ; ici ?