#include <iostream>

using namespace std;

int main()
{
    int m[6]={1, 2, 3, 4, 5, 2112},
        *ptr = m;

    for(int aux=0 ; aux<6 ; aux++){
        ptr++;
    }

    int n;

    cout<<"Escolha um elemento da matriz:"<<endl;
    cin>>n;
    cout<<"O elemento "<<n<<" armazena o valor:"<<m[n];

    return 0;
}



