
void sort()
{
    for (int i = 1; i <n; i++)
    for ( int j=i+1; j<=n; j++)
    {
        if (strcmp(v[i].product_type, v[j].product_type) > 0)
        {
            products aux;
            strcpy(aux.manufacturer, v[i].manufacturer);
            strcpy(v[i].manufacturer, v[j].manufacturer);
            strcpy( v[j].manufacturer, aux.manufacturer);

            strcpy(aux.name, v[i].name);
            strcpy(v[i].name, v[j].name);
            strcpy( v[j].name, aux.name);

            strcpy(aux.product_type, v[i].product_type);
            strcpy(v[i].product_type, v[j].product_type);
            strcpy( v[j].product_type, aux.product_type);

            aux.manufacture_date= v[i].manufacture_date;
            v[i].manufacture_date= v[j].manufacture_date;
            v[j].manufacture_date= aux.manufacture_date;

            aux.price= v[i].price;
            v[i].price= v[j].price;
             v[j].price= aux.price;

            aux.quantity= v[i].quantity;
            v[i].quantity= v[j].quantity;
             v[j].quantity= aux.quantity;
        }
    }
cout<< "Sortat cu succes! Apasa 2 pentru a vedea lista "<<endl;
}