/*9.Count odd digit more than 3
 andlessthan8.
 i/p1: 963 o/p1: 1
 i/p2: 2086 o/p2: 0*/
#include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    if (r % 2 != 0 && r > 3)
        c++;
    num = num / 10;
    if (num != 0)
        goto l1;
    printf("sum of odd digit more than 3 is :%d", c);
}