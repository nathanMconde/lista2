#include <iostream>

using namespace std;

void func(float *x);

void (*pfunc[])(float *x) = {func};

int main()
{

    float num;
    cout << "Digite o valor de x:" << endl;
    cin >> num;

    (*pfunc[0])(&num);
    return 0;
}

void func(float *x)
{
    cout << "x - 1"
         << " = " << *x - 1 << endl;
    cout << "x + 1"
         << " = " << *x + 1 << endl;
    cout << "x * x + x - 2"
         << " = " << *x * *x + *x - 2 << endl;
}
