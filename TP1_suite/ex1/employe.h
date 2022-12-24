#include <iostream> // Input Output
using namespace std; /* Explication longue donc :
                        OCR/Appr. à prog. en c++/Écrivez votre premier programme */

class employe
{
    private:
    int id; // Pour l'identifiant
    double taux_r; // Pour taux de rémunération
    int max_h; // Pour le maximum d'heure

    public:
    employe(int, double, int); // Constructeur
    // ~employe();
    void menu();
    void nouveau(); // Créer un nouveau employé
    int modifier(); // Pour modifier les données de l'employé
    void afficher(); // Pour afficher les données de l'empl.
};