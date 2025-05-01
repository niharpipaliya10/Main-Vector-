// wap to print second largest element of given int array (without modifing).
#include <stdio.h>
void main()
{

    int a[5], ele, i, t, L, SL;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter a element of array:\n");
    for (i = 0, i < ele, i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele; i++)
    {
        printf("%d", a[i]);
    }

    if (a[0] > a[1])
    {
        L = a[0];
        SL = a[1];
        i = 2;
    }
    else if (a[1] > a[0])
    {
        L = a[1];
        SL = a[0];
        i = 2;
    }
    else
    {
        L = 0;
        SL = 0;
        i = 0;
    }
    for (; i < ele; i++)
    {
        if (a[i] > L)
        {
            SL = L;
            L = a[i];
        }
        else if (a[i] = SL && a[i] != L)
        {
            SL = a[i];
        }
    }
    printf("L=%d ,SL =%d",L,SL);
}