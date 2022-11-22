//funcion para convertir numeros arabigos a romanos

#include <iostream>
#include <string>
using namespace std;

string arabigosaromanos(int numero)
{
    string romano;
    int i=0;
    int arabigo[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string romanos[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    while(numero>0)
    {
        if(numero-arabigo[i]>=0)
        {
            romano+=romanos[i];
            numero-=arabigo[i];
        }
        else
            i++;
    }
    return romano;
}

int main()
{
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    cout<<arabigosaromanos(numero)<<endl;
}
