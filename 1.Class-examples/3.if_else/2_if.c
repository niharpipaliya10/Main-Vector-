// Write a program to check if a number is positive, negative, or zero.

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("number is +ve.");
    }
    else if (num < 0)
    {
        printf("number is -ve");
    }
    else
    {
        printf("number is not +ve or not -ve is 0");
    }
}