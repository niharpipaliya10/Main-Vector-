// wap to arrange array elements assending or decending order using bublle short.
#include <stdio.h>
void main()
{

    int a[5], ele, i, j, t;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter an element of array :\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    for (i = 0; i < ele; i++)
    {
        for (j = 1; j < ele - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {

                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    for (i = 0; i < ele; i++)
    {
        printf("%d", a[i]);
    }
}