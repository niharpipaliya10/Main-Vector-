/* 5.Sum of digit inb/w3to8.
 i/p1: 123 o/p1: 3
 i/p2: 276 o/p2: 13*/
#include <stdio.h>
void main()
{
    int num, r, sum = 0;
    printf("Enter a number :\n ");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        if (r >= 3 && r <= 8)
        {
            sum = sum + r;
        }
    }
    printf("sum of digit in b/w 3 and 8 is:%d", sum);
}