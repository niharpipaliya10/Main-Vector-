/*Sumof odd digit using goto.
 i/p1: 123 o/p1: 4
 i/p2: 246 o/p2: 0*/
#include <stdio.h>
void main()
{
    int num, sum = 0, r;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    if (r % 2 != 0)
        sum = sum + r;
    num = num / 10;
    if (num != 0)
        goto l1;
    printf("sum of odd digit is : %d", sum);
}