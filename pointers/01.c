#include <stdio.h>

int main()
{
    int a[] = {0,1,2,3,4};
    int i;
    int* p = a;
    for (i = 0; i < 5; i++)
    {
        printf("the address %d\n", a+i);
        printf("the value in that address %d\n", a[i]);
        printf("using the pointer p %d\n\n", p + i);
    }

}