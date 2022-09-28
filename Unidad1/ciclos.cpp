#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 10, suma = 0, sumpar = 0, sumim = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("Contador: %d \n", i);
        suma += i;

        if (i % 2 == 0)
            sumpar = sumpar + i;

        if (i % 2 != 0)
            sumim = sumim + i;
    }

    printf("La sumatoria de %d numeros es: %d \n", n, suma);
    printf("La sumatoria de numeros pares es: %d \n", sumpar);
    printf("La sumatoria de numeros impares es: %d \n", sumim);
    return 0;
}
