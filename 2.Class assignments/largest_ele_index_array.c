// print largest element index .
// wap to find largest ele from given int array.(without moidifing)

#include <stdio.h>
void main()
{
    int a[5], i, L, ele, index;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter elements of array:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    L = a[0];
    c = 0;
    for (i = 1; i < ele; i++)
    {
        if (a[i] > a[0])
        {
            L = a[i];
            index = i;
        }
    }
    printf("%d", index);
    printf(" largest ele of array is :%d", L);
}