/*
0
0 1
0 1 1
0 1 1 2
0 1 1 2 3
*/

#include <stdio.h>
void main()
{
    int i, j, a, b = 0, s, k, c, n;
    printf("Enter a row number :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {

            if (j == 0)
            {
                a = 0;
                printf(" %d", a);
            }
            else if (j == 1)
            {
                b = 1;
                printf(" %d", b);
            }
            else
            {
                s = a + b;
                printf(" %d", s);
                a = b;
                b = s;
            }
            // if (j > 1)
            // {
            //     printf(" %d", j + a);
            // }
            // else
            // {
            //     printf(" %d", j);
            // }
            // b = 1;
            // a = 0, b = 1;

            // printf("*");
            // printf("%d %d", a, b);
            // for (k = 2; k < 10; k++)
            // {
            //     s = a + b;
            //     printf("%d", s);
            //     a = b;
            //     b = s;
            // }
        }
        printf("\n");
    }
}