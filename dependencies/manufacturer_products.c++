void manufacturer_products()
{ cout<< "Introduce producator: ";
char query_manufacturer[100];
cin.get();
cin.get(query_manufacturer, 100);
    for ( int i=1; i<=n; i++)
     if (!strcmp(query_manufacturer, v[i].manufacturer))
        cout <<"Produs "<<i<<": "<<v[i].name<<endl;
     
}
