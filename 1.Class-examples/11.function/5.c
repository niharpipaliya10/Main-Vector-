// designed a function to print the ele of given int array.
#include <stdio.h>
void print(int *, int);
void main()
{
    int a[5] = {10, 20, 30, 40, 50}, ele;
    ele = sizeof(a) / sizeof(a[0]);
    print(a, ele);
}
void print(int *p, int ele)
{
    int i;
    for (i = 0; i < ele; i++)
    {
        printf(" %d", *(p + i));
    }
    return;
}