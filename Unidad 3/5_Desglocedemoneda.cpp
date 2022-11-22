//función que calcula el cambio de una cantidad de dinero en monedas de 1, 2, 5, 10, 20, 50, 100, 200, 500 y 1000

#include <iostream>

using namespace std;
void cambio(int);

int main()
{
    int dinero;
    cout << "Introduzca la cantidad de dinero a desglosar: ";
    cin >> dinero;
    cambio(dinero);
    return 0;
}

void cambio(int dinero)
{
    int monedas[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int i = 0;
    while (dinero > 0)
    {
        if (dinero >= monedas[i])
        {
            cout << monedas[i] << " ";
            dinero = dinero - monedas[i];
        }
        else
        {
            i++;
        }
    }
}