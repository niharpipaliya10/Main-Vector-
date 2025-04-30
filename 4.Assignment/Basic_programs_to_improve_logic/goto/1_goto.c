/*1.Sumof digit using goto.
i/p1: 123 o/p1: 6
i/p2: 246 o/p2:12*/
#include <stdio.h>
void main()
{

    int num, r, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    sum = sum + r;
    num = num / 10;
    if (num != 0)
        goto l1;
    printf("sum of digit is :%d", sum);
}
