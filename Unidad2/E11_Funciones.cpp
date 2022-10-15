#include <iostream>
using namespace std;

 int doble (int a) {
    int r;
    r = a*2;
    return r;
 }

 int sumatoria (int n){
   int x = 0;
      do {
        x = x + n;
        n = n + 1;
    } while (n <= 10);
   return x;
 }

    int main(int argc, char const *argv[])
    {

        int a = 5, r = doble (5);
        int x = sumatoria (10);
        cout << x << endl;
        
        return 0;
        
    }