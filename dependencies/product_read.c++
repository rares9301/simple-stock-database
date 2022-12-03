#include "products.c++"
int n;
products v[100];
void product_read()
{
    cout << "introduceti numarul de produse: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout<< "PRODUS "<<i<<endl;
        cout<< "nume: ";
        cin.get();
        cin.get(v[i].name,100);
        cout << "producator: ";
        cin.get();
        cin.get(v[i].manufacturer,100);
        cout << "tip produs: ";
        cin.get();
        cin.get(v[i].product_type,100);
        cout << "data fabricatiei: ";
        cin >> v[i].manufacture_date;
        cout << "pret: ";
        cin >> v[i].price;
        cout << "cantitate: ";
        cin >> v[i].quantity;

    }
}