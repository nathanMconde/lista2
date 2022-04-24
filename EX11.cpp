#include <iostream>
#include <math.h>

using namespace std;

void funcao(float *x);

void (*pfunc[])(float *x) = {funcao};

int main()
{
    float n = 3.2;

    (*pfunc[0])(&n);

    return 0;
}

void funcao(float *x)
{
    float pi = 3.14;
    float euler = 2.71;
    float r;
    cout << (*x * *x / 3.0) + (*x * *x * *x) / 2.0 - (*x / 10.0) << endl;
    cout << (1.0 / (5.0 * *x * *x)) - (10.0 / *x) << endl;
    cout << ((*x - 2.0) * (*x - 2.0)) * (2.0 * *x - 3.0) << endl;
    cout << *x / 2.0 * sqrt(3.2) << endl;
    r = -5.0 * *x;
    cout << pow(euler, r)<<endl;
    r = -*x;
    cout << -12.0 + (3.0 / 7.0) * pow(euler, r) * -1.0<<endl;
    cout << 1.0 / 3.0 * sin(3.0 * *x) <<endl;
    cout << 3.0 * sin(((pi * 5.0) / 3.0) * (*x + (pi / 10.0)))<<endl;
    cout << log(*x + 1.0)<<endl;
    cout << log(log(*x))<<endl;
}