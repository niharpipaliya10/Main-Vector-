/* 8.Count even digit more than 4.
 i/p1: 123 o/p1: 0
 i/p2: 2076 o/p2: 1*/
#include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    if (num % 2 == 0 && r > 4)
        c++;
    num = num / 10;
    if (num != 0)
        goto l1;
    printf("count of even digit more than 4 is:%d", c);
}