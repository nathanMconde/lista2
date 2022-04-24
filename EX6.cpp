#include <iostream>

using namespace std;

struct circulo
{
    float x;
    float y;
    float r;
};

void resposta(circulo *n);

void (*pfunc[])(circulo *n) = {resposta};

int main()
{
    circulo a;
    circulo *p;
    p = &a;
    a.x = 0;
    a.y = 0;
    a.r = 0;
    cout << "Digite o valor das coordenadas e o valor raio:" << endl;
    cin >> a.x >> a.y >> a.r;

    (*pfunc[0])(p);

    cout << "x2+y2" << -2 * a.x << "x" << -2 * +(a.y) << "y" << +(a.x * a.x) + (a.y * a.y) - (a.r * a.r) << "=0";
    return 0;
}

void resposta(circulo *n)
{
    n->x;
    n->y;
    n->r;
}
