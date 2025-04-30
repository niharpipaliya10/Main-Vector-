/*
WAP in C to print and count prime no b/w 2 to 17.
*/

#include <stdio.h>
void main()
{
    int num, c, i, d = 0;

    for (num = 2; num <= 17; num++)
    {
        for (i = 1, c = 0; i <= num; i++)
        {
            if (num % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            d++;
            printf("%d ", num);
        }
    }
    printf("\ncount of prime number : %d ", d);
}