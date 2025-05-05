// wap to copy ine array element to another array.
#include <stdio.h>
void main()
{

    int a[5], ele, i, d[5];
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter a element of array:\n ");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }

    printf("\n");
    for (i = 0; i < ele; i++)
    {
        d[i] = a[i];
    }

    for (i = 0; i < ele; i++)
    {
        printf(" %d", d[i]);
    }
}