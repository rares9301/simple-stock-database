void del()
{
    int position;
    cout << "Introduce producator: ";
    char query_manufacturer[100];
    cin.get();
    cin.get(query_manufacturer, 100);
    cout << "Introduce tip produs: ";
    char query_product_type[100];
    cin.get();
    cin.get(query_product_type, 100);
    cout << "Ce element doriti sa stergeti? ( introuceti pozitie) "<<endl;
     for (int i = 1; i <= n; i++) 
     if (!stricmp(query_manufacturer, v[i].manufacturer) && !stricmp(query_product_type, v[i].product_type))
                cout<< i << ". " << v[i].name <<endl;
    cin >> position;
    for (int i = position; i <= n - 1; i++)
    {
        strcpy(v[i].name, v[i + 1].name);
        strcpy(v[i].manufacturer, v[i + 1].manufacturer);
        strcpy(v[i].product_type, v[i + 1].product_type);
        v[i].manufacture_date = v[i + 1].manufacture_date;
        v[i].price = v[i + 1].price;
        v[i].quantity = v[i + 1].quantity;
    }
    n--;
    cout<<"Sters cu succes!"<<endl;
}