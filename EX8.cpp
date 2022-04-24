#include <iostream>

using namespace std;

void cometa(int *ano);

void (*pfunc[])(int *ano) = {cometa};

int main()
{
  int vetor[11];

  cout << "Estes serao os anos em que o cometa ira passar novamente apos 1986:" << endl;
 (*pfunc[0])(vetor);

  return 0;
}

void cometa(int *ano)
{
  ano[0] = 1986;
  for (int i = 1; i <= 10; i++)
  {
    ano[i] = ano[i - 1] + 76;
  }
  for (int i = 1; i <= 10; i++)
  {
    cout << ano[i] << endl;
  }
}