/* 5.Sum of digit in b/w 3to8.
 i/p1: 123 o/p1: 3
 i/p2: 276 o/p2: 13*/
#include <stdio.h>
void main()
{
    int num, r, sum = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    if (r >= 3 &&r <= 8)
        sum = sum + r;
    num = num / 10;
    if (num != 0)
        goto l1;
    printf("sum of digit in b/w 3 and 8 :%d", sum);
}