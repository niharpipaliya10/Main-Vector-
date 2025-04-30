/*28.Sum of 1st and 2nd last
 digit of given any int num.
 i/p1: 93321 o/p1:11
 i/p2: 277637 o/p2:5*/
#include <stdio.h>
void main()
{
    int num, r1, r2, r3, rev = 0, sum;
    printf("Enter a number is:\n");
    scanf("%d", &num);
    r1 = num % 10;
    num = num / 10;
    r1 = num % 10;
    printf("r1=%d\n", r1);
l1:
    r2 = num % 10;
    rev = rev * 10 + r2;
    num = num / 10;
    if (num != 0)
        goto l1;
    // printf("reverse number is :%d", rev);
    r2 = rev % 10;
    printf("r2=%d\n", r2);
    printf("sum of 1st and 2nd last digit is:%d", r1 + r2);
}