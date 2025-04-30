/*
14. Print last 3 digit from last .
i/p1:    96412      o/p1: 2 1 4
i/p2:    56725      o/p2: 5 2 7
*/

#include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    printf("Print last 3 digit from last:\n");
    while (num)
    {
        r = num % 10;
        if (c < 3)
        {
            c++;
            printf("%d ", r);
        }

        num = num / 10;
    }
}