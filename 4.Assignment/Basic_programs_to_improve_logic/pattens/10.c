/*
10.
                         1
                         3   1
                         5   3   1
*/
#include <stdio.h>
void main()
{
    int i, j, a, n;
    printf("Enter a row number:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = 2 * i - 1;
        for (j = 0; j < i; j++)
        {

            printf("%d", a - 2 * j);
        }
        printf("\n");
    }
}
