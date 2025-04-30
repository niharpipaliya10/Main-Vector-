/*
WAP in C to print sum of all strong no b/w 2 to 199.
*/

#include <stdio.h>
void main()
{
    int num, mul, i, r, temp, sum, a = 0;

    for (num = 2; num <= 199; num++)
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
            // printf("%d ", num);
            a = a + num;
        }
    }
    printf("sum of strong number : %d", a);
}