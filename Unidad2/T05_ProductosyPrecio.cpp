/* Unidad 2: Precio de productos.
 * Axel Gutierrez Rodriguez
 * 10/2022
 * Descripción: Pedir productos y precios de los mismos para imprimir la factura final.
 */



#include <iostream>
#include <iomanip>
    using namespace std;
int main(int argc, char const *argv[])
{

    int x = 1, prod = 1, cant; 
    float prec, total;

    do
    {
        prec = 0;
        cant = 0;
        printf ("Ingresa la cantidad de los productos tipo %d:",prod);
        scanf ("%d",&cant);
        printf ("¿Cuanto cuesta este tipo de producto?");
        scanf("%f",&prec);
        prec = prec * cant;
        total = prec + total;
        prod ++ ;
        printf ("Para ingresar otro producto ingresa '1'. Ingresa '0' para salir:");
        scanf("%i",&x);

    } while (x==1);
    
    std :: cout << "Factura total: " << setprecision(2) << total << endl;

    return 0;
}
