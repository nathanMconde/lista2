#include <iostream>

using namespace std;

void soma(int *vetor);

void (*pfunc[])(int *vetor) = {soma};

int main()
{
    int v[5] = {1, 2, 3, 4, 5};

    (*pfunc[0])(v);

    return 0;
}

void soma(int *vetor)
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
        soma = soma + vetor[i];
    cout << "A soma dos valores desse array eh: " << soma;
}