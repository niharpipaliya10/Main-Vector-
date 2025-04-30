// Write a program to check whether a number is even or odd.
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}