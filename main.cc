#include <iostream>
#include <cstring>
using namespace std;
#include "dependencies/product_read.c++"
#include "dependencies/product_list.c++"
#include "dependencies/manufacturer_products.c++"
#include "dependencies/sort.c++"
#include "dependencies/del.c++"
bool nofail;
int x;
int main()
{
    nofail = true;
    while (nofail)
    {   cout << " " << endl;
        cout << "Lista Operatiuni:" << endl;
        cout << "1. Citire produse" << endl;
        cout << "2. Lista produse" << endl;
        cout << "3. Lista produse ale unui furnizor" << endl;
        cout << "4. Ordonare produse alfabetic dupa tip + descrescator pret"<<endl;
        cout << "5. Sterge produs "<<endl;
        //cout << "6. Adaugare produs in coada"
        //cout << "7. Cel mai ieftin produs"<<endl;
        //cout << "8. Valoare totala stoc"<<endl;
        //cout << "9. Membrii echipei"<<endl;
        cout << "0. Iesire" << endl;
        cout << " " << endl;
        cout << "Operatiune: ";
        cin >> x;
        if (!x)
            nofail = false;
        if (x == 1)
            product_read();
        if (x == 2)
            product_list();
        if (x == 3)
            manufacturer_products();
        if (x == 4)
           sort();
        if( x==5)
            del();

        
    }
    return 0;
}