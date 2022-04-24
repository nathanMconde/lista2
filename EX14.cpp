#include <iostream>

using namespace std;

int main()
{
    char text[] = {'1', '2', '0'}; // retirei"\"" dos chars pois na impressão estava dando uma figura não visível.
    char *str;
    int count = 0;

    str = text;

    for (int i = 0; i < 3; i++)
    {
        cout << text[i] << endl;
    }

    while (*(str++) != '0')
        count++;
    printf("Length of '%s' = %d", text, count);

    return 0;
}