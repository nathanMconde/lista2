#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    char nome[15];
    char *p;
    int tamanho;

    cout << "Digite um nome: ";
    cin >> nome;
    tamanho = strlen(nome);

    p = &nome[tamanho];

    cout << nome << "\n";
    while (tamanho >= 0)
    {
        cout << *p;
        p--;
        tamanho--;
    }
    return 0;
}
