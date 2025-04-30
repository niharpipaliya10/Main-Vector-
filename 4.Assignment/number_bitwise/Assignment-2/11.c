/*
11. WAP in C to check given number is strong
number or not using  while loop
*/
#include <stdio.h>
void main()
{
    int num, temp, sum = 0, mul, i, r;
    printf("Enter a number :");
    scanf("%d", &num);
    temp = num;

    for (; num; num = num / 10)
    {
        r = num % 10;
        for (i = 1, mul = 1; i <= r; i++)
        {
            mul = mul * i;
        }
        sum = sum + mul;
    }
    if (temp == sum)
    {
        printf("number is a strong number.");
    }
    else
    {
        printf("number is a not  strong number.");
    }
}