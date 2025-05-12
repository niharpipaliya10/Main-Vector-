/*
49.WAP in C to store prime index ele in another array.
       i/p:  int a[8]={11,22,33,44,55,66,77,88};
      o/p:  int b[8]={33,44,66,88};
*/
#include <stdio.h>
void main()
{
    int a[8], b[8];
    int i, j, ele, c, k, d = 0;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter a array ele:\n");
    for (i = 0, k = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele; i++)
    {
        for (j = 1, c = 0; j <= i; j++)
        {
            if (i % j == 0)
                c++;
        }
        if (c == 2)
        {
            b[k] = a[i];
            k++;
            d++;
        }
    }
    for (i = 0; i < d; i++)
    {
        printf(" %d", b[i]);
    }
}