#include <iostream>

using namespace std;

void maximoMinimo(int *v, int *N, int *maximo, int *minimo);

void (*pfunc[])(int *v, int *N, int *maximo, int *minimo) = {maximoMinimo};

int main()
{
    int n;
    cout << "Digite o tamanho desejado do vetor:" << endl;
    cin >> n;

    int vetor[n];
    int max;
    int min;

    (*pfunc[0])(vetor, &n, &max, &min); // não definirei valores, então serão o da memória quando compilar.
    return 0;
}

void maximoMinimo(int *v, int *N, int *maximo, int *minimo)
{
    *maximo = 0;
    *minimo = 0;
    for (int i = 0; i < *N; i++)
    {
        if (v[i] > *maximo)
            *maximo = v[i];
    }

    for (int i = 0; i < *N; i++)
    {
        if (v[i] < *maximo)
            *minimo = v[i];
    }

    cout << "O maior valor eh: " << *maximo;
    cout << "O menor valor eh: " << *minimo;
}
