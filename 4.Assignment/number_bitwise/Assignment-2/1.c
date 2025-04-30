/*
1.WAP in C to find sum of digits using goto .
*/
#include <stdio.h>
void main()
{
    int num, sum = 0, r;
    printf("Enter a number :\n ");
    scanf("%d", &num);
l:
    r = num % 10;
    sum = sum + r;
    num = num / 10;
    if (num)
    {
        goto l;
    }
    printf("sum of digits is :%d", sum);
}