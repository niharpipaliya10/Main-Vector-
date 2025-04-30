/*
23. WAP in C to print and count armstrong no b/w 6
to 666 using for loop inside while loop.
*/
#include <stdio.h>
void main()
{
    int num, mul = 1, i, r, temp, sum, c;
    for (num = 6; num <= 666; num++)
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
            i = 1;
            mul = 1;
            while (i <= c)
            {
                mul = mul * r;
                i++;
            }
            sum = sum + mul;
        }

        if (sum == num)
        {
            printf("%d ", sum);
        }
    }
}