/*
39.wap in c to right rotate array 3 time in same array.
i/p: a[7]={11,21,31,41,51,61,71};
o/p: a[7]={51,61,71,11,21,31,41};
*/
#include <stdio.h>
void main()
{
    int a[7];
    int i, j, ele, temp, n;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enhter element of array:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", a + i);
    }
    printf("Enter how manmny time roted:\n");
    scanf("%d", &n);
    for (j = 0; j < n; j++)
    {
        temp = a[ele - 1];
        for (i = ele - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }

    // a[0]=temp;
    for (j = 0; j < ele; j++)
    {
        printf(" %d", a[j]);
    }
}