/* Unidad 1: Tipos de datos
 * Axel Gutierrez Rodriguez
 * 15/09/2022
 * Descripción: Tipos de datos en c++
 */

//manejo de entradas y salidas
#include <iostream>
//printf y sanf
#include <stdio.h>


//para usar el espacio de nombres std
using namespace std;

//funcion principal

int main(int argc, char const *argv[])
{
    int entero = 10;
    float flotante = 10.5;
    double doble = 10.3453455;
    char caracter = 'a';
    
    cout << "este programa muestra los tipos de datos en c++" << endl;
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del entero es : " << sizeof(entero) << " bytes" << endl;
    cout << "El numero flotante es: " << flotante << endl;
    cout << "El tamaño del flotante es : " << sizeof(flotante) << " bytes" << endl;
    cout << "El numero doble es: " << doble << endl;
    cout << "El tamaño del doble es : " << sizeof(flotante) << " bytes" << endl;
    cout << "El numero caracter es: " << caracter << endl;
    cout << "El tamaño del caracter es : " << sizeof(caracter) << " bytes" << endl;
    return 0;
}