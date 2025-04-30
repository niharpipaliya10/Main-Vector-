/*
8. WAP in C to check given number is perfect
number or not using  while loop .
*/
#include <stdio.h>
void main()
{

    int num, i, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("number is perfect.");
    }
    else
    {
        printf("number is not perfect.");
    }
}