/*26.Print 1st odd digit from start.
 i/p1: 64512 o/p1: 5
 i/p2: 41725 o/p2: 1*/
#include <stdio.h>
void main()
{
    int num, r1, r2, rev = 0, c = 0;
    printf("Enter a number is:\n");
    scanf("%d", &num);
l1:
    r1 = num % 10;
    rev = rev * 10 + r1;
    num = num / 10;
    if (num != 0)
        goto l1;
    // printf("reverse number is :%d", rev);

l2:
    r2 = rev % 10;
    if (r2 % 2 != 0)
    {
        printf("printed  1st odd digit is: %d", r2);
        c++;
    }
    rev = rev / 10;
    if (rev != 0 && c < 1)
        goto l2;
}