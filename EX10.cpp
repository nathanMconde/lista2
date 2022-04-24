#include <iostream>
#include <math.h>

using namespace std;

float resultado(float x);

float (*pfunc[])(float x) = {resultado};

int main()
{
    float matriz[6][5];

    for (int i = 0; i < 30; i++)
    {
        matriz[i / 5][i % 5] = (*pfunc[0])(-3 + (0.2 * i));
    }

    FILE *fp;

    fp = fopen("file.txt", "w+");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            fprintf(fp, "%f ", matriz[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 0;
}

float resultado(float x)
{
    float pi = 3.14;
    return x = exp(-x * x / 2.0) / sqrt(2.0 * pi);
}
