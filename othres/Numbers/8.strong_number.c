/*strong number*/
#include <stdio.h>
void main()
{
    int num, mul = 1, i, r, temp, sum = 0;
    printf("enter a number:\n");
    scanf("%d", &num);

    temp = num;
    for (; num; num = num / 10)
    {
        r = num % 10;
        // printf("%d", r);

        for (i = 1, mul = 1; i <= r; i++)
        {
            mul = mul * i;
        }
        sum = sum + mul;
    }
    if (sum == temp)
    {
        printf("strong number");
    }
    else
    {
        printf("number is not strong");
    }
}