/*
armstrong number.
*/
#include <stdio.h>
void main()
{
    int i, num, c, sum, mul, temp, r;

    for (num = 1; num <= 500000; num++)
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
            printf(" %d", num);
        }
    }
}