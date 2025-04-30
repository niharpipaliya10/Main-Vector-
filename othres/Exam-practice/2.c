/*
  2 3 5 7 11
   2 3 5 7
    2 3 5
     2 3
      2
*/
#include <stdio.h>
void main()
{
    int i, j, k, num, c, p, d, n, a = 2;
    printf("Enter a row number:\n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 0, d = 0; k < n - i; k++)
        {
            for (num = 47; d <= n - i - 1; num++)
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
                    printf(" %d", num);
                    d++;
                }
            }
        }
        printf("\n");
    }
}