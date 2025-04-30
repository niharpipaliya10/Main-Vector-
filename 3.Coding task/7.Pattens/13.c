/*
                 0
               * 1
             * * 2
           * * * 3
         * * * * 4
*/
#include <stdio.h>
void main()
{
    int i, j, k, n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("  ");
        }
        for (k = 0; k <= i; k++)
        {
            if (k == i)
                printf(" %d", i);
            else
                printf(" *");
        }
        printf("\n");
    }
}