/*
8.WAP in C to delete 0th bit  of all array elements.
         i/p:  int a[5]={12,10,35,63,512};
        o/p:  int a[5]={ 6, 5,17,31,256}
*/
#include <stdio.h>
void main()
{
    int a[5], i, t;
    printf("Enter a ele of array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        t = a[i] >> 1;
        printf(" %d", t);
    }
}