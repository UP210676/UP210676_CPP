#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int opcion;
    float num1, num2, resultado;
    string sino;



do
{

    cout << "Menu de operaciones" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;


        switch (opcion)
    {
    case 1:
        cout << "La suma es: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "La resta es: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "La multiplicacion es: " << num1 * num2 << endl;
        break;
    case 4:
        if (num2 != 0){
         cout << "La division es: " << num1 / num2 << endl;}
        else{
            cout << "No se puede dividir entre 0" << endl;}
        break;
    case 5: 
        cout << "Ha salido del programa" << endl;
        break;
    default:
        cout << "Opcion incorecta" << endl;
        break;
    }

    cout << "Re iniciar? [si] [no]" << endl;
    cin >> sino; 

} while (sino == "si");


return 0;

}
