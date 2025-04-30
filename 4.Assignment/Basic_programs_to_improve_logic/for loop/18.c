/* 18. Reverse last 2 digit.
 i/p1: 963 o/p1: 36
 i/p2: 27851 o/p2:15*/

#include <stdio.h>
void main()
{
    int num, c = 0, rev = 0, r;
    printf("Enter a number is:\n ");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        c++;
        if (c <= 2)
        {
            rev = rev * 10 + r;
        }
    }
    printf("Reverse last 2 digit is : %d", rev);
}