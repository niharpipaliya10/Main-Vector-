// desigend function for finding largest & second largest in ele given array.
#include <stdio.h>
void find_l_sl(int *, int, int *, int *);
void main()
{
    int a[5] = {60, 40, 50, 10, 30}, ele,l,sl;
    ele = sizeof(a) / sizeof(a[0]);
    find_l_sl(a, ele, &l, &sl);
    printf("l=%d,sl=%d", l, sl);
}
void find_l_sl(int a[], int ele, int *p, int *q)
{
    int i;
    if (a[0] > a[1])
    {
        *p = a[0];
        *q = a[1];
        i = 2;
    }
    else if (a[1] > a[0])
    {
        *p = a[1];
        *q = a[0];
        i = 2;
    }
    else
    {
        *p = 0;
        *q = 0;
        i = 0;
    }
    for (; i < ele; i++)
    {
        if (a[i] > *p)
        {
            *q = *p;
            *p = a[i];
        }
        else if (a[i] >= *q && a[i] != *p)
        {
             *q = a[i];
        }
    }
}