/*
24. WAP in C to print 1st 5 armstrong num from 5.
*/

#include <stdio.h>
void main()
{
    int num, mul = 1, i, r, d = 0, temp, sum, c;
    for (num = 5; d <= 5; num++)
    {
        temp = num;
        sum = 0;
        c = 0;
        for (; temp; temp = temp / 10, c++)
            ;
        temp = num;
        for (; temp; temp = temp / 10)
        {
            r = temp % 10;

            for (i = 1, mul = 1; i <= c; i++)
            {
                mul = mul * r;
            }
            sum = sum + mul;
        }

        if (sum == num)
        {
            d++;
            printf("%d ", sum);
        }
    }
}