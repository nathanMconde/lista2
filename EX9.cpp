// Resposta: O trecho a seguir armazena o valor que *x aponta em *y, que na função main digitada é 3.

#include <iostream>

using namespace std;

void swp1(int *x, int *y);

void (*pfunc[])(int *x, int *y) = {swp1};

int main()
{
    int a = 3;
    int b = 4;

    (*pfunc[0])(&a, &b);

    return 0;
}

void swp1(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << *y;
}
