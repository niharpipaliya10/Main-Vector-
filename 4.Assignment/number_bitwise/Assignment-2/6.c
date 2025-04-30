/*
WAP in C to print factorial of num using while loop.
*/

#include <stdio.h>
void main()
{
    int num, mul = 1, i = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);

    while (i <= num)
    {

        mul = mul * i;
        i++;
    }
    printf("%d", mul);
}