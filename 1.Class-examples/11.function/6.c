// designed a function for shorting a array elements.
#include <stdio.h>
void shor(int [], int);
void print(int *, int);
void main()
{
    int a[5] = {50, 30, 10, 40, 20}, ele;
    ele = sizeof(a) / sizeof(a[0]);
    print(a, ele);
    shor(a, ele);
    print(a, ele);
}
void shor(int a[], int ele)
{
    int i, j, t;
    for (i = 0; i < ele - 1; i++)
    {
        for (j = 0; j < ele - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    }
}
void print(int *p, int ele)
{
    int i;
    for (i = 0; i < ele; i++)
    {
        printf(" %d", p[i]);
    }
    printf("\n");
}