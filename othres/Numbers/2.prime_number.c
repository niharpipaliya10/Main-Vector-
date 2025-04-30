/*given number is prime or not*/
#include <stdio.h>
void main()
{
    int num, i;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }
    if (num == i)
    {
        printf("number is prime .");
    }
    else
    {
        printf("number is not prime.");
    }
}