/*
WAP in C to print and count strong no b/w 1 to 222.
*/
#include <stdio.h>
void main()
{
    int num, mul, i, r, temp, sum;

    for (num = 1; num <= 222; num++)
    {
        temp = num;
        sum = 0;
        mul = 1;
        for (; temp; temp = temp / 10)
        {
            r = temp % 10;
            // printf("%d", r);

            for (i = 1, mul = 1; i <= r; i++)
            {
                mul = mul * i;
            }
            sum = sum + mul;
        }
        if (sum == num)
        {
            printf("%d ", num);
        }
    }
}