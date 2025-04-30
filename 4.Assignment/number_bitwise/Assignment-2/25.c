/*
25. WAP in C to print alternative armstrong number
b/w 4 to 444 using  while loop.
*/

#include <stdio.h>
void main()
{
    int num, mul = 1, i, r, temp, sum, c, d = 0;
    num = 4;
    while (num <= 666)
    {
        temp = num;
        sum = 0;
        c = 0;
        while (temp)
        {
            temp = temp / 10;
            c++;
        }

        temp = num;
        while (temp)
        {
            r = temp % 10;
            temp = temp / 10;
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
            d++;

            if (d % 2 != 0)
            {
                printf("%d ", sum);
            }
        }
        num++;
    }
}