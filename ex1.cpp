#include <iostream>

using namespace std;

void vetor(double v[9]); // Utilizarei passagem de parâmetros por referência como proposto no enunciado.

void (*pfunc[])(double *v) = {vetor}; //daqui adiante esse tipo de linha será o meu matriz/ponteiro/funcao.

int main()
{
    double val[9] = {1, 5, 17.3, -23.714, 12.947, 0.0005, -2.974, 3951, 44899};
    (*pfunc[0])(val);
    double soma = val[0] + val[1] + val[2] + val[3] + val[4] + val[5] + val[6] + val[7] + val[8] + val[9]; /*realizei a soma na main
                                                                                                            para mostrar que o numero
                                                                                                           foi armazenado.*/
    cout << "A soma dos numeros armazenados eh: " << soma;

    return 0;
}

void vetor(double v[9])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Numero " << i << " vale " << v[i] << endl;
    }
}
