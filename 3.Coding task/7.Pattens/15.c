/*
         5
       * 5
     3 * 5
   2 3 * 5
 1 2 3 * 5
*/
#include <stdio.h>
void main()
{
    int i, j, k, a, n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 0, a = n; i < n; i++, a = a - j - 1)
    {
        for (k = 0; k < n - i; k++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++, a++)
        {
            if (a == (n - 1))
            {
                printf(" *");
            }
            else
            {

                printf(" %d", a);
            }
        }
        printf("\n");
    }
}