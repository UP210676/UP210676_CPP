#include <iostream>
#include <cmath>
using namespace std;

double funEcuacion1(double x)
{ 
    double y;            
    return (pow(x,2)-8*x+15);
}

int main()
{
    double x1=4;
    double x2=7;
    double xm;
    double Es=.001; 
    double Er=abs(x2-x1); 
    double r=funEcuacion1(0);
    
    int i=1;
    while(Er > Es )
    {
        xm=(x1+x2)/2;
        if(funEcuacion1(x1)* funEcuacion1(xm)<0)
        {
            x2=xm;
        }
        else
        { x1=xm; }
        Er=abs(x2-x1);
        i++;
    }
    cout<<"i= "<< i <<"raiz= "<<xm<<endl;
    cout<<r<<endl;
    return 0;
}