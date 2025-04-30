/*
7. WAP in C to check given number is prime
number or not using goto.
*/
#include <stdio.h>
void main()
{
    int num, i, c = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("number is prime. \n");
    }
    else
    {
        printf("number is not prime.");
    }
}
