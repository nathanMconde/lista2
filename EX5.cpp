#include <iostream>

using namespace std;

void pastel(int *x, float *n);

void (*pfunc[])(int *x, float *n) = {pastel};

int main()
{
    int num;
    float ingr[4];
    cout << "Quantas pessoas irao comer pastel de maca?" << endl;
    cin >> num;

    (*pfunc[0])(&num, ingr);

    return 0;
}

void pastel(int *x, float *n)
{
    n[0] = *x * 168.75; // dividi o valor dos ingredientes por 4, chegando nesses valores.
    n[1] = *x * 18.75;
    n[2] = *x * 37.5;
    n[3] = *x * 25;
    n[4] = *x * 37.5;

    cout << "Quantidade de ingredientes necessarios:" << endl;

    cout << n[0] << "g"
         << " de maca" << endl;
    cout << n[1] << "g"
         << " de manteiga" << endl;
    cout << n[2] << "g"
         << " de acucar" << endl;
    cout << n[3] << "g"
         << " de migalhas de pao" << endl;
    cout << n[4] << "ml"
         << " de creme de leite";
}
