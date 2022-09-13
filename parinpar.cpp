#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Par o Impar" << endl;"\n";
    cout << "Ingrese un numero: " << endl;
    int numero;
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "El numero es par" << endl;
    }
    else
    {
        cout << "El numero es impar" << endl;
    }
    return 0;
}
