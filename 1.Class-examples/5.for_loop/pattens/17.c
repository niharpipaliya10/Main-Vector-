/*
wap to print prime digits of given number.
*/
#include <stdio.h>
void main()
{
    int num, i, r;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        for (i = 2; i < r; i++)
        {
            if (r % i == 0)
            {
                break;
            }
        }
        if (r == i)
        {
            printf("%d", r);
        }
    }
    printf("\n");
}