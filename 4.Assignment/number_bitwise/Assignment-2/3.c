/*
WAP in C to find product of odd digit using for loop.
*/

#include <stdio.h>
void main()
{
    int num, r, mul = 1;
    printf("Enter a number :\n");
    scanf("%d", &num);

    for (; num; num = num / 10)
    {
        r = num % 10;
        if (r % 2 != 0)
        {
            mul = mul * r;
        }
    }
    printf("product of odd dogit is :%d", mul);
}