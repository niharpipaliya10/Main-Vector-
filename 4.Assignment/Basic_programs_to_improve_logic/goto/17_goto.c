/*7. Reverse odd digit in num.
 i/p1: 963 o/p1:39
 i/p2: 27851 o/p2:157*/
#include <stdio.h>
void main()
{
    int num, rev = 0, r, r1;
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
        printf("%d", r1);
    rev = rev / 10;
    if (rev != 0)
        goto l2;
}