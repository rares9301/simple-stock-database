#include <iostream>
#include <cstring>
using namespace std;
#include "dependencies/product_read.c++"
#include "dependencies/product_list.c++"
#include "dependencies/manufacturer_products.c++"
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
        
    }
    return 0;
}