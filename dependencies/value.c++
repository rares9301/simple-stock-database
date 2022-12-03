int value()
{
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += v[i].price * v[i].quantity;
    return s;
}