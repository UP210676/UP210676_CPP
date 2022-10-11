/* Unidad 2: Decimal a binario.
 * Axel Gutierrez Rodriguez
 * 10/2022
 * Descripción: Crear un progrma que sea capaz de transformar un numero decimal a binario.
 */

#include <stdio.h>
#include <cstring>
#include  <cmath>


int main(int argc, char const *argv[])
{
    
    int dec=0,tam,i;
    char bin[100];
       printf("Introduzca el valor en Binario: ");
       scanf("%s", &bin);
       tam = strlen(bin);
       for(i=0;i<tam;i++)
          dec=(bin[i]-48)*pow(2,(tam-1)-i)+dec;
          printf("El numero %s en deciaml es: %d\n", bin,dec);

    return 0;
}
