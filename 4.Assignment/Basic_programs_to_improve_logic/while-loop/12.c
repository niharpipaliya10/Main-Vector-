/*
12. Sum of  last 3 digit .
i/p1:    9631         o/p1:   10
i/p2:    2786         o/p2:    21
*/
#include <stdio.h>
void main()
{
    int num, r, c = 0, sum = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    while (num)
    {
        r = num % 10;
        if (c < 3)
        {
            sum = sum + r;
            c++;
        }
        num = num / 10;
    }
    printf("sum of last 3 digit :%d", sum);
}