/*
1
2     6
3     7     10
4     8     11   13
5     9     12   14    15

*/
#include <stdio.h>
void main()
{
    int i, j, a = 1, b, n;
    printf("Enter a row number:\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++, a++)
    {
        b = a;
        for (j = 0; j <= i; j++, b = b +(n-1))
        {
            printf(" %d", b);
        }
        printf("\n");
    }
}