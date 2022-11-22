//coseno con una serie de taylor
#include <iostream>
#include <cmath>

using namespace std;

#include <stdio.h>
#include <math.h>

long long factorial(int);
double coseno(float, int);

int main() {
    printf("Cos(2.3) = %f\n", coseno(2.3f, 15));
   
}

double coseno(float x, int n) {
    double r = 1;

    for (int i = 1; i <= n; ++i)
        r += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);

    return r;
}

long long factorial(int x) {
    long long r = 1;

    for (int i = 2; i <= x; ++i)
        r *= i;
    return r;
}