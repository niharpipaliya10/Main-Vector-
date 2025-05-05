/*
1. WAP in C to print array using int pointer.
   i/p:  int a[5]={11,22,33,44,55}, *p=a;
   o/p:     11  22   33  44  55
*/
#include <stdio.h>
void main()
{
    int a[5], i, ele;
    int *p;
    p = a;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter a elemenmt of array:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele; i++)
    {
        printf(" %d", *p++);
    }
}