/*armstrong number*/
#include <stdio.h>
void main()
{
    int num, mul = 1, i, r, temp, sum = 0, c = 0;
    printf("enter a number:\n");
    scanf("%d", &num);

    temp = num;
    for (; temp; temp = temp / 10, c++)
        ;
    temp = num;
    for (; num; num = num / 10)
    {
        r = num % 10;

        for (i = 1, mul = 1; i <= c; i++)
        {
            mul = mul * r;
        }
        sum = sum + mul;
    }

    if (sum == temp)
    {
        printf("armstrong number");
    }
    else
    {
        printf("number is not armstrong");
    }
}