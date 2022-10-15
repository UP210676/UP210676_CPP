//x² - 8x + 15 = 0

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    double a = 1, b = -8, c = 15, x1, x2, discriminante;
    discriminante = pow(b,2) - 4 * a * c;
    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (discriminante == 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        cout << "x1 = x2 = " << x1 << endl;
    } else {
        cout << "No hay soluciones reales" << endl;
    }
    return 0;
}

