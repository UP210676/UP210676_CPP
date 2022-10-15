#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int factorial = 1,n = 1;
    do {
        factorial = factorial * n;
        n = n + 1;
    } while (n <= 5);
    cout << "El factorial es: " << factorial << endl;
    return 0;
}
