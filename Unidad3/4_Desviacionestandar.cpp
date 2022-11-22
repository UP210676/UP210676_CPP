//Formula de desviación estándar
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
float x[5],suma=0,media,desvest;
cout<<"Programa para el calculo de la desviacion estandar"<<endl;
cout<<"Ingresa los 5 numeros de la poblacion"<<endl;
for(int i=0;i<5;i++)
{
cin>>x[i];
suma=suma+x[i];
}
media=suma/5;
cout<<"La media es "<<media<<endl;
suma=0;
for(int i=0;i<5;i++)
{
suma=suma+pow(x[i]-media,2);
}
desvest=sqrt(suma/5);
cout<<"La desviacion estandar es "<<desvest<<endl;
return 0;
}