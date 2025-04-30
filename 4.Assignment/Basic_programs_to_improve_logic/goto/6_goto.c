/*6.Count digitin num.
 i/p1: 123 o/p1: 3
 i/p2: 2076 o/p2: 4*/
#include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    c++;
    num = num / 10;
    if (num != 0)
        goto l1;
    printf("count of digit is: %d", c);
}