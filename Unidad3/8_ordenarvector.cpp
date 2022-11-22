//Función para ordenar acendentemente un vector
#include <iostream>
#include <iostream>
using namespace std;

void ordenar(int vec[], int n)
{
  int i, j, aux;
  for (i = 0; i < n - 1; i++)
    for (j = i + 1; j < n; j++)
      if (vec[i] > vec[j])
      {
        aux = vec[i];
        vec[i] = vec[j];
        vec[j] = aux;
      }
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
  int i;
  ordenar(vec, n);
  for (i = 0; i < n; i++)
    cout << vec[i] << " ";
  cout << endl;
}

// La función ordenar usa dos bucles for anidados, 
// uno para recorrer el vector desde el principio al 
// final y otro para recorrerlo desde el elemento siguiente 
// al elemento que se está considerando en el bucle exterior 
// hasta el final. Si el elemento vec[i] es mayor que el 
// elemento vec[j], se intercambian los valores de los 
// elementos vec[i] y vec[j].