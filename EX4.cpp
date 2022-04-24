#include <iostream>

using namespace std;

void mol(float *a, float *b);

void (*pfunc[])(float *a, float *b) = {mol};

int main()
{

    float num1, num2;
    cout << "Digite o valor de ma e mb para calcularmos:" << endl;
    cin >> num1 >> num2;

    (*pfunc[0])(&num1, &num2);

    return 0;
}

void mol(float *a, float *b)
{
    cout << " ma x mb / ma + mb"
         << " = " << (*a * *b) / (*a + *b) << endl;
}
