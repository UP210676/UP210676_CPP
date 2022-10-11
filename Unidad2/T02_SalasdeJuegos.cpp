/* Unidad 2: Abecedaro.
 * Axel Gutierrez Rodriguez
 * 10/2022
 * Descripción: Programa que calcula el costo de una sala de juegos dependiendo la edad con la 
 * utilización de switch case con rango.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    printf ("¿Que edad tienes? ");
    int edad;
    scanf ("%d", &edad);
    switch (edad)
    {
    case 0 ... 4:
        printf ("Entrada gratis"); 
        break;

    case 5 ... 18:
        printf ("Entrada $5");
        break;
    case 19 ... 119:
        printf ("Entrada $10");
        break;
    default: printf ("Edad invalida");
        break;
    }
    printf ("\n"); 
    return 0;
}
