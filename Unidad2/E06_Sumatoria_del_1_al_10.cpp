//programa para sumar los numeros del 1 al 10

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0,n = 0;
     do {
        suma = suma + n;
        n = n + 1;
    } while (n <= 10);
    cout << "La suma es: " << suma << endl;
    return 0;
}
