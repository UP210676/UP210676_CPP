#include <stdio.h>
int main(int argc, char const *argv[])
{
    int edad=0; 

    printf ("Ingresa una edad: ");
    scanf ("%d",&edad);

        if (edad <= 0 || edad >=150)
            printf ("Valor de edad No permitido (0-150)");
            if (edad<=30)
                printf ("1era edad");
            else 
                if (edad>=31 && edad<=60)
                    printf ("2da edad");
                else
                    if (edad>=61 && edad<=90)
                        printf ("3ra edad");    
                    else printf ("Horas extra");
    return 0;
}  