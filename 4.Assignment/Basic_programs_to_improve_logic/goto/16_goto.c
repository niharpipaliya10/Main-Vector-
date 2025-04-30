/*16. Reverse number.
 i/p1: 963 o/p1:369
 i/p2: 2786 o/p2: 6872*/
#include <stdio.h>
void main()
{
    int num, r, rev = 0;
    printf("Enter a number is:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    rev = rev * 10 + r;
    num = num / 10;
    if (num != 0)
        goto l1;
    printf("reverse number is :%d", rev);
}