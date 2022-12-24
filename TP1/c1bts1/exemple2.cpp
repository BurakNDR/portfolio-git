#include <iostream>
using namespace std;

main()
{
    char op ;
    int n1, n2 ;

    cout << "Opération souhaitée (+ ou *) ? " ;
    cin >> op ;
    cout << "Donnez 2 nombres entiers : " ;
    cin >> n1 >> n2 ;

    if (op == '+')
    {
        cout << "Leurs somme est : " << n1+n2 << "\n" ;
    }
    else
    {
        cout << "Leur produit est : " << n1*n2 << "\n" ;
    }
}