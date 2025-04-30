/*
2
2 *
2 * 5
2 * 5 7
2 * 5 7 11
*/

#include <stdio.h>
void main()
{
    int i, j, k, c, num, d = 0, p, n;
    printf("Enter a row number:\n");
    scanf(" %d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0, d = 0; j <= i; j++)
        {
            for (num = 2; d < i; num++)
            {
                for (p = 1, c = 0; p <= num; p++)
                {
                    if (num % p == 0)
                    {
                        c++;
                    }
                }
                if (c == 2)
                {
                    if (num == 3)
                    {
                        printf(" *");
                    }
                    else
                    {
                        printf(" %d", num);
                    }
                    d++;
                }
            }
        }
        printf("\n");
    }
}