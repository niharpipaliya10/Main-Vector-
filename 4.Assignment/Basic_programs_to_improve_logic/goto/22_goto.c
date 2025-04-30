/*22.Sum of 1st 3 odd digit.
 i/p1: 93321 o/p1:15
 i/p2: 277637 o/p2:17*/
#include <stdio.h>
void main()
{
    int num, rev = 0, r, r1, sum = 0, c = 0;
    printf("Enter a number :\n ");
    scanf("%d", &num);
l1:
    r = num % 10;
    rev = rev * 10 + r;
    num = num / 10;
    if (num != 0)
        goto l1;
    // printf("reverce number is: %d\n", rev);
l2:
    r1 = rev % 10;
    if (r1 % 2 != 0)
    {
        sum = sum + r1;
        c++;
    }
    rev = rev / 10;
    if (rev != 0 && c < 3)
        goto l2;
    printf("sum of 1st 3 odd digit sum is :%d", sum);
}