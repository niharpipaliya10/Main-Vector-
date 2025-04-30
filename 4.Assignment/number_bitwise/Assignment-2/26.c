
/*
WAP in C to print and count perfect no b/w 2 to 502.
*/

#include <stdio.h>
void main()
{
    int sum, num, i, c = 0;
    for (num = 2; num <= 502; num++)
    {
        sum = 0;

        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        if (num == sum)
        {
            c++;
            printf("%d ", num);
        }
    }
    printf("\ncount of perfect number : %d", c);
}