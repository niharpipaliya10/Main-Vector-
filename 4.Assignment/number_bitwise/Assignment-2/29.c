/*
29. WAP in C to print 1st 2 perfect num from 3
*/

#include <stdio.h>
void main()
{
    int num, sum, d = 0, i, temp;
    for (num = 3; d < 2; num++)
    {
        temp = num;
        sum = 0;
        for (i = 1; i < temp; i++)
        {
            if (temp % i == 0)
            {
                sum = sum + i;
            }
        }
        if (num == sum)
        {
            d++;
            printf("%d ", num);
        }
    }
}