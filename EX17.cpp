#include <iostream>
#include <string.h>

using namespace std;

void trocar(int *a, int *aux);

void (*pfunc[])(int *a, int *aux) = {trocar};

int main()
{
int v1[5] = {10,20,30,40,50};
int v2[5] = {1,2,3,4,5};
cout<<"Primeiro array = ";
for(int i=0; i <5; i++){
    cout<<v1[i]<<" ";
}
cout<<"\n";
cout<<"Segundo array = ";
for(int i=0; i <5; i++){
    cout<<v2[i]<<" ";
}

cout<<"\n";

(*pfunc[0])(&v1[2],&v2[2]);

cout<<"O valor 3 substituiu o 30 = ";
for(int i=0; i <5; i++){
    cout<<v1[i]<<" ";
}
cout<<"\n";
cout<<"O valor 30 subtituiu o 3 = ";
for(int i=0; i <5; i++){
    cout<<v2[i]<<" ";
}

return 0;
}

void trocar(int *a, int *aux){
int temp;
temp = *a;
*a = *aux;
*aux = temp;
}