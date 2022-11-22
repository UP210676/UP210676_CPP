//calculadora de RFC de una persona
// Autor: Juan Pablo Velazco Velasquez
// Fecha: 13/09/2017
// Version: 0.1
// Compilador: GNU GCC 6.3.0

#include <iostream>
using namespace std;

int main() {
    char nombre[30], apellidoP[30], apellidoM[30], dia[2], mes[2], anio[4], rfc[13];
    int i, j, k;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido paterno: ";
    cin >> apellidoP;
    cout << "Ingrese su apellido materno: ";
    cin >> apellidoM;
    cout << "Ingrese su dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese su mes de nacimiento: ";
    cin >> mes;
    cout << "Ingrese su anio de nacimiento: ";
    cin >> anio;
    //primer caracter del apellido paterno
    rfc[0] = apellidoP[0];
    //primera vocal del apellido paterno
    for (i = 1; i < 30; i++) {
        if (apellidoP[i] == 'A' || apellidoP[i] == 'E' || apellidoP[i] == 'I' || apellidoP[i] == 'O' || apellidoP[i] == 'U') {
            rfc[1] = apellidoP[i];
            break;
        }
    }
    //primer caracter del apellido materno
    rfc[2] = apellidoM[0];
    //primer caracter del nombre
    rfc[3] = nombre[0];
    //dos ultimos digitos del anio de nacimiento
    rfc[4] = anio[2];
    rfc[5] = anio[3];
    //dos digitos del mes de nacimiento
    rfc[6] = mes[0];
    rfc[7] = mes[1];
    //dos digitos del dia de nacimiento
    rfc[8] = dia[0];
    rfc[9] = dia[1];
    //homoclave
    rfc[10] = 'X';
    rfc[11] = 'X';
    rfc[12] = 'X';
    cout << "Su RFC es: "<<rfc;

return 0;
}