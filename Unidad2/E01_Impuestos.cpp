/* Unidad 2: Descuento de renta anual.
 * Axel Gutierrez Rodriguez
 * 10/10/2022
 * Descripción: Calcular el impuesto de renta anual de una persona, dependiendo de su renta anual utilizando if.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    int r, f;
    printf ("Ingresa tu renta anual: ");
    scanf ("%d",&r);


            if (r<=10000){
                printf ("Descuento de 5 porciento");
                f = r * 0.05;}
            else if (r>=10000 && r<=20000){
                    printf ("Descuento de 15 porciento");
                    f = r * 0.15;}
                else if (r>=20000 && r<=35000){
                        printf ("Descuento de 20 porciento"); 
                        f = r * 0.20;}   
                    else if (r>=35000 && r<=60000){
                            printf ("Descuento de 30 porciento");
                            f = r * 0.30;} 
                        else if (r>=60000){
                              printf ("Descuento de 45 porciento");
                              f = r * 0.45;} 

            printf("\n");            
            printf ("Tu renta con descuento es: %i",r-f);

        
    return 0;
}
