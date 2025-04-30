/*Count even digit b/w 1 to 7
 i/p1: 963 o/p1: 1
 i/p2: 2686 o/2p: 3*/
#include <stdio.h>
void main()
{
    int num, c = 0, r;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    if (r % 2 == 0 && r >= 1 && r <= 7)
        c++;
    num = num / 10;
    if (num != 0)
        goto l1;

    printf("sum of even digit in b/w 1 to 7  is :%d", c);
}