/* Unidad 2: Menu de pizzeria.
 * Axel Gutierrez Rodriguez
 * 10/2022
 * Descripción: Crear un menu de pizzeria que te permita escoger los ingredientes e imprimir en 
 * pantalla los ingredientes seleccionados.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    char pizza, ingre;
    printf("Bienvenido a la pizzeria Bella Napoli, ¿que desea ordenar? \n ¿Desea una pizza vegetariana? Nota: Todas llevan queso y tomate\nIngrese 's' para SI y 'n' para No:  ");

    scanf("%c", &pizza);

    switch (pizza)
    
    {
    case 's':
        printf("Seleccione el ingrediente extra mediante su respectiba inicial\n Dispnible: (p)Pimiento y (t)Tofu: ");
        scanf("%s", &ingre);

            switch (ingre)
            {
            case 'p': 
                printf("Pizza vegetariana con pimiento, salsa de tomate y queso");
                break;
            case 't': 
                printf("Pizza vegetariana con tofu, salsa de tomate y queso");
                break;
            default: printf("Opcion invalida");
                break;
            }
            break;
    case 'n':
        printf("Seleccione el ingrediente extra mediante su respectiba inicial\n Dispnible: (j)Jamón, (p)Pepperoni y (s)Salmon: ");
        scanf("%s", &ingre);
        switch (ingre)
        {
        case 'j': 
            printf("Pizza con jamón, salsa de tomate y queso");
            break;
        case 'p': 
            printf("Pizza con pepperoni, salsa de tomate y queso");
            break;
        case 's': 
            printf("Pizza con Salmon, salsa de tomate y queso");
            break;
        default: printf("Opcion invalida");
            break;
        }
        
        default:
        break;
    }

    return 0;
}



