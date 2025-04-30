/*12.Sum of last 3 digit.
 i/p1: 9631 o/p1: 10
 i/p2: 2786 o/p2: 21*/
#include <stdio.h>
void main()
{
    int num, r, sum = 0, c = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    sum = sum + r;
    c++;
    num = num / 10;
    if (num != 0 && c < 3)
        goto l1;
    printf("sum of last 3 digit number is:%d", sum);
}