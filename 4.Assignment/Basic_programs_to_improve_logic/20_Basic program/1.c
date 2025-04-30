/*1. Print factorial of 5 .
 o/p: 120 (5*4*3*2*1)*/
#include <stdio.h>
void main()
{
    int num, i,mul=1;
    printf("Enter a number :\n");
    scanf("%d", &num);

    for (i = 1; i <=num; i++)
    {
        mul = mul * i;
    }
    printf("%d", mul);
}