/* Unidad 2: Rendimiento.
 * Axel Gutierrez Rodriguez
 * 10/2022
 * Descripción: Pareido a problemas pasados utilizando ifs y els if, pero esta vez aprenderemos a utilizar las
 * varibales de tipo flotante.
 */


#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <float.h>
using namespace std;

int main(int argc, char const *argv[])
{   



    float r, f, x = 2400;
    printf("¿Cual es tu rendimiento?");
    scanf ("%f",&r);
    
        if (r >= 0.6f){
            f = r * x;
            printf("Nivel: Meritorio. Recibira: %f",f);  }
        else if (r == 0.0f){
            f = r * x;
            printf("Nivel: Inaceptable. Recibira: %f",f);}
        else if (r == 0.4f){
            f = r * x;
            printf("Nivel: Aceptable. Recibira: %f",f);  }
        else printf("Dato incorrecto");
        
    return 0;
}
