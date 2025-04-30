/* 1.Sumof digit.
 i/p1: 123 o/p1: 6
 i/p2: 246 o/p2:12*/
#include <stdio.h>
void main()
{
    int num, r, sum = 0;
    printf("Enter a number is :\n");
    scanf("%d", &num);
    for (1; num; num = num / 10)
    {
        r = num % 10;
        sum = sum + r;
    }
    printf("sum of digit is : %d", sum);
}