#include <iostream>

int main(int argc, char const *argv[])
{
    int r;
    printf ("Ingresa tu renta anual: ");
    scanf ("%d",&r);


            if (r<=10000)
                printf ("1era edad");
            else 
                if (r>=10000 && r<=20000)
                    printf ("2da edad");
                else
                    if (r>=20000 && r<=35000)
                        printf ("3ra edad");    
                    else 
                        if (r>=20000 && r<=35000)
                        

    return 0;
}
