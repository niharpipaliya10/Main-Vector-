/*
18. WAP in C to print 1st 5 prime num from 5
*/
#include <stdio.h>
void main()
{
    int num, c, i,d=0;

    for (num = 5; d < 5; num++)
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
}