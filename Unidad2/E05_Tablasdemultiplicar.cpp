/* Unidad 2: Todas las tabla de multiplicar.
 * Axel Gutierrez Rodriguez
 * 10/2022
 * Descripción: Utilizando un for anidado, se puede crear un programa ue imprima todas las tablas de mulktiplicar en orden
 */

#include<stdio.h>
#include<iostream>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%i x %i = %i \n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
