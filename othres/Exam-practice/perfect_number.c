/*
perfect number
*/
#include <stdio.h>
void main()
{
    int num, i, sum = 0;
    for (num = 1; num <= 10000; num++)
    {
        sum = 0;
        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == num)
        {
            printf(" %d", num);
        }
    }
}