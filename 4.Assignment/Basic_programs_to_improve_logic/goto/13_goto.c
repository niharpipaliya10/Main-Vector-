/* 13.Sum of last 3 odd digit.
 i/p1: 96312 o/p1: 13
 i/p2: 57235 o/p2: 15*/
#include <stdio.h>
void main()
{
    int num, sum = 0, c = 0, r;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    if (r % 2 != 0)
    {
        sum = sum + r;
        c++;
    }
    num = num / 10;
    if (num != 0 && c < 3)
        goto l1;
    printf("sum of last 3 odd digit is :%d", sum);
}