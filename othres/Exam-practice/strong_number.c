/*
strong number..
*/

#include <stdio.h>
void main()
{
    int num, sum, mul, i, r, temp;
    for (num = 1; num <= 500; num++)
    {
        temp = num;
        for (sum = 0; temp; temp = temp / 10)
        {
            r = temp % 10;
            for (i = 1, mul = 1; i <= r; i++)
            {
                mul = mul * i;
            }
            sum = sum + mul;
        }
        if (sum == num)
        {
            printf(" %d", num);
        }
    }
}