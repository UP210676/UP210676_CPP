// ejemplo de función recursiva
#include <iostream>
using namespace std;

int suma(int vec[], int n)
{
    if (n == 1) //caso 1
        return vec[0];
    else
        return vec[n - 1] + suma(vec, n - 1); // caso recursivo
}

int main()
{
    int n;
    cout << "ingresa el tamaño del vector: ";
    cin >> n;
    int vec[n];
    for (int i = 0; i < n; i++)
    {
        cout << "ingresa el valor " << i + 1 << ": ";
        cin >> vec[i];
    }
    cout << "La suma de los elementos del vector es " << suma(vec, n) << endl;
}

// La función recursiva suma tiene dos casos: el caso 1 
// y el caso recursivo. El caso 1 es la condición n == 1, 
// que indica que la suma de los elementos de un vector 
// con un solo elemento es él mismo.