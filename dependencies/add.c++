void add()
{
    n++;
    cout << "ADAUGARE PRODUS " << n << endl;
    cout << "nume: ";
    cin.get();
    cin.get(v[n].name, 100);
    cout << "producator: ";
    cin.get();
    cin.get(v[n].manufacturer, 100);
    cout << "tip produs: ";
    cin.get();
    cin.get(v[n].product_type, 100);
    cout << "data fabricatiei: ";
    cin >> v[n].manufacture_date;
    cout << "pret: ";
    cin >> v[n].price;
    cout << "cantitate: ";
    cin >> v[n].quantity;
    cout << "Produs adaugat cu succes!" << endl;
}