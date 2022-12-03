void lowest()
{
    char bosh[100];
    char lg[100];
    char samsung[100];
    char beko[100];
    int beko_min = 1000000000;
    int samsung_min = 1000000000;
    int lg_min = 1000000000;
    int bosh_min = 1000000000;
    cout << "Functia este inca in faza de dezvoltare, fiind posibila interogarea doar pentru furnizorii LG, Samsung, Beko si Bosh" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (!stricmp(v[i].manufacturer, "beko") && v[i].price < beko_min)
        {
            beko_min = v[i].price;
            strcpy(beko, v[i].name);
        }
        if (!stricmp(v[i].manufacturer, "samsung") && v[i].price < samsung_min)
        {
            samsung_min = v[i].price;
            strcpy(samsung, v[i].name);
        }
        if (!stricmp(v[i].manufacturer, "bosh") && v[i].price < bosh_min)
        {
            bosh_min = v[i].price;
            strcpy(bosh, v[i].name);
        }
        if (!stricmp(v[i].manufacturer, "lg") && v[i].price < lg_min)
        {
            lg_min = v[i].price;
            strcpy(lg, v[i].name);
        }
    }

    if (beko_min != 1000000000)
        cout << "Beko: " << beko << " " << beko_min << endl;
    if (lg_min != 1000000000)
        cout << "LG: " << lg << " " << lg_min << endl;
    if (samsung_min != 1000000000)
        cout << "Samsung: " << samsung << " " << samsung_min << endl;
    if (bosh_min != 1000000000)
        cout << "Bosh: " << bosh << " " << bosh_min << endl;
}
