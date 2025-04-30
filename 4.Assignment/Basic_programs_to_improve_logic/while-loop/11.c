/*
11. Sum of  even  digit .
i/p1:    963         o/p1:   6
i/p2:    2786       o/p2:  16
*/
#include <stdio.h>
void main()
{
    int num, r, sum = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    while (num)
    {
        r = num % 10;
        if (r % 2 == 0)
        {
            sum = sum + r;
        }
        num = num / 10;
    }
    printf("sum even digit is :%d", sum);
}