/* Unidad 2: ciclos while.
 * Axel Gutierrez Rodriguez
 * 10/2022
 * Descripción: Parecido al ejercicio anterior, pero con un ciclo que permite pedir al usuario si desea
 * repetir la operación.
 */


#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char op;

    do
    {
            int t, i=1, r;
    printf("¿Qué tabla de multiplicar quieres hacer?");
    scanf ("%i",&t);

        printf("\n While \n");                   //While

    while (i < 11)
    {
        r = t * i;
        printf("%i por %i = %i \n",t,i,r);
        r = 0;
         i++;
    }

    printf("\n While al revez \n");

    i = 10;                                            //While al revez
    while (i>0)
    {
        r = t * i;
        printf("%i por %i = %i \n",t,i,r);
        r = 0;
         i--;
    }
    

        printf("\n For \n");                     //For

    for (int i=1; i <= 10; i++)
    {

        r = i * t;
        printf("%i por %i = %i \n",t,i,r);
        r = 0;

    }

            printf("\n For al revez \n");                     //For al revez

    for (int i=10; i > 0; i--)
    {

        r = i * t;
        printf("%i por %i = %i \n",t,i,r);
        r = 0;

    }

    

            printf("\n Do While \n");            //Do While

        i = 1;                                        
    do                                          
    {
        r = t * i;
        printf("%i por %i = %i \n",t,i,r);
        r = 0;
         i++;

    } while (i < 11);

printf("\n Do While al revez \n");                       //Do While al revez
            

        i = 10;                                        
    do                                          
    {
        r = t * i;
        printf("%i por %i = %i \n",t,i,r);
        r = 0;
         i--;

    } while (i > 0);
    
    
    printf("¿Deseas introducir otro numero? \n S: Si \n N: No \n ");
    scanf ("%s", &op);

    } while (op == 's');
    

    return 0;
}
