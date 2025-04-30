/*18. Reverse last 2 digit.
 i/p1: 963 o/p1: 36
 i/p2: 27851 o/p2:15*/
#include <stdio.h>
void main()
{
    int num, rev = 0, r, r1, c = 0;
    printf("Enter a number :\n ");
    scanf("%d", &num);
 
l2:
    r = num % 10;
    printf("%d", r);
    c++;
    num = num / 10;
    if (num != 0 && c < 2)
        goto l2;

}