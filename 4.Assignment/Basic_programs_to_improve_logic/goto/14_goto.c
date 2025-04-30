/* 14.Print last 3 digit from last.
 i/p1: 96412 o/p1:214
 i/p2: 56725 o/p2:527*/
#include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Enter an number :\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    printf("%d", r);
    num = num / 10;
    c++;
    if (num != 0 && c < 3)
        goto l1;
}