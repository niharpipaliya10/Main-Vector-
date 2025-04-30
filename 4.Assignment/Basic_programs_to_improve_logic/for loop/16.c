/*16. Reverse number.
 i/p1: 963 o/p1:369
 i/p2: 2786 o/p2: 6872*/
#include <stdio.h>
void main()
{
    int num, rev = 0, r;
    printf("enter a number is:\n ");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        rev = rev * 10 + r;
    }
    printf("reverse number is :%d", rev);
}