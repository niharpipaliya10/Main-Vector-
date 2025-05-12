/*
44.WAP in C to shift all 0  to left side in same array.
    i/p:  int a[7]={11,0,0,44,0,33,0};
    o/p:  int a[7]={0,0,0,0,11,44,33};
*/
#include <stdio.h>
void main()
{
    int a[7];
    int ele, i, n, temp, j, c = 0;
    ele = sizeof(a) / sizeof(a[0]);
    n = ele;
    printf("Enter a ele of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele - c; i++)
    {
        if (a[i] != 0)
        {
            c++;
            temp = a[i];
            for (j = i; j < ele; j++)
            {
                a[j] = a[j + 1];
            }
            a[ele - 1] = temp;

            i--;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
}