/* Unidad 2: Mayor y menor temperatura.
 * Axel Gutierrez Rodriguez
 * 10/2022
 * Descripción: Pedir al usuario una cantidad de temperaturas y al ingresrlas deyterminar
 * cuel es mayor y menor en un rango.
 */

#include <iostream>
#include <iomanip>
    using namespace std;
int main(int argc, char const *argv[])
{
     
    float temp, suma(0.0f), promedio(0.0f), mayor(0.0f), menor(1.0f);


    for (int i = 0; i < 6; i++)
    {

        printf ("Ingrese la temperatura: ");
        scanf ("%f", &temp);
        suma = temp + suma;
        if (temp > mayor)
        {
            mayor = temp;
        }
        if (temp < menor)
        {
            menor = temp;
        }

    }
    std :: cout << std :: fixed;
    std :: cout << "Promedio: " << setprecision(2) << suma / 6 << endl;
    std ::cout << "Mayor: " << setprecision (2) << mayor << endl;
    std :: cout << "Menor: " << setprecision (2) << menor << endl;
    return 0;

}
