#include <stdio.h>

void main()
{
    int num, mul = 1, i, r, temp, sum, c;
    
    for (num = 6; num <= 666; num++)
    {
        temp = num;
        c = 0;
        sum = 0;

        // Count digits
        for (; temp; temp = temp / 10)
            c++;

        temp = num;

        // Calculate sum of digits raised to power c
        for (; temp; temp = temp / 10)
        {
            r = temp % 10;
            mul = 1;
            for (i = 1; i <= c; i++)
            {
                mul = mul * r;
            }
            sum = sum + mul;
        }

        if (sum == num)
        {
            printf("%d\n", sum);  // \n for each result in new line
        }
    }
}
