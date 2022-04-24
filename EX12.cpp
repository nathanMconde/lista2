#include <iostream>

using namespace std;

int main()
{
    int arr1[25], i, n;
    int *p;
    p = arr1;
    printf("\n\n Pointer : Store and retrieve elements from an array :\n");
    printf("------------------------------------------------------------\n");
    printf(" Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf(" Input %d number of elements in the array :\n", n);

    for (i = 0; i < n; i++)
    {
        printf(" element - %d : ", i);
        scanf("%d", p + i);
    }

    printf(" The elements you entered are : \n");
    for (i = 0; i < n; i++)
    {
        printf(" element - %d : %d \n", i, (*p + i));
    }
    return 0;
}
