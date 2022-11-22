//calcular si el año es biciesto
#include <iostream>
using namespace std;

bool biciesto(int a){
    if(a%4==0 && a%100!=0 || a%400==0)
        return true;
    else
        return false;
}

int main(){
    int anio;
    cout << "Ingrese un año: ";
    cin >> anio;

    if(biciesto(anio))
        cout << anio << " es biciesto" << endl;
    else
        cout << anio << " no es biciesto" << endl;

    return 0;
}