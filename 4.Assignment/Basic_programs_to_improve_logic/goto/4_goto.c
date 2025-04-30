/*4.Sumof digitlessthan7.
 i/p1: 123 o/p1: 6
 i/p2: 276 o/p2: 8
 */
#include <stdio.h>
void main()
{
    int num, r, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    if (r < 7)
        sum = sum + r;
    num = num / 10;
    if (num != 0)
        goto l1;
    printf("sum of digit less 7 is : %d", sum);
}