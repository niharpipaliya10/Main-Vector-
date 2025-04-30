/*7.Count odd  digit in num.
 i/p1: 123 o/p1: 2
 i/p2: 2076 o/p2: 1*/
#include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Ente a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    if (r % 2 != 0)
        c++;
    num = num / 10;
    if (num != 0)
        goto l1;
    printf("count odd number is : %d", c);
}