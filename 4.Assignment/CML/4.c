/*
WAP in C using CLA to print strong number b/
w 1 to 199 .
i/p: ./a.out 1 199
*/

#include <stdio.h>
#include <stdlib.h>
void main(int args, char **argv)
{
    int i, num, r, mul, sum, temp;
    for (num = atoi(argv[1]); num < atoi(argv[2]); num++)
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
            printf("%d \n", num);
        }
    }
}