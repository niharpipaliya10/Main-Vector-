// wap to search prime number element from given integer array print as output.
#include <stdio.h>
void main()
{
    int a[5], ele, i,j;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter elements of array:\n");

    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 2; j < a[i]; j++)
    {
        if (a[i] % 2 == 0)
        {
            break;
        }
    }
    if (a[i] == j)
    {
        printf("%d", a[i]);
    }
}